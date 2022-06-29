################################################################################
# IO constraints
################################################################################
# serial:0.tx
set_property LOC D4 [get_ports {serial_tx}]
set_property IOSTANDARD LVCMOS33 [get_ports {serial_tx}]

# serial:0.rx
set_property LOC C4 [get_ports {serial_rx}]
set_property IOSTANDARD LVCMOS33 [get_ports {serial_rx}]

# clk:0
set_property LOC E3 [get_ports {clk}]
set_property IOSTANDARD LVCMOS33 [get_ports {clk}]

# cpu_reset:0
set_property LOC C12 [get_ports {cpu_reset}]
set_property IOSTANDARD LVCMOS33 [get_ports {cpu_reset}]

# uart1:0.tx
set_property LOC H4 [get_ports {uart1_tx}]
set_property IOSTANDARD LVCMOS33 [get_ports {uart1_tx}]

# uart1:0.rx
set_property LOC H1 [get_ports {uart1_rx}]
set_property IOSTANDARD LVCMOS33 [get_ports {uart1_rx}]

# output_motor:0
set_property LOC K1 [get_ports {output_motor0}]
set_property IOSTANDARD LVCMOS33 [get_ports {output_motor0}]

# output_motor:1
set_property LOC F6 [get_ports {output_motor1}]
set_property IOSTANDARD LVCMOS33 [get_ports {output_motor1}]

# output_motor:2
set_property LOC J2 [get_ports {output_motor2}]
set_property IOSTANDARD LVCMOS33 [get_ports {output_motor2}]

# output_motor:3
set_property LOC G6 [get_ports {output_motor3}]
set_property IOSTANDARD LVCMOS33 [get_ports {output_motor3}]

################################################################################
# Design constraints
################################################################################

set_property INTERNAL_VREF 0.750 [get_iobanks 34]

################################################################################
# Clock constraints
################################################################################


################################################################################
# False path constraints
################################################################################


set_false_path -quiet -through [get_nets -hierarchical -filter {mr_ff == TRUE}]

set_false_path -quiet -to [get_pins -filter {REF_PIN_NAME == PRE} -of_objects [get_cells -hierarchical -filter {ars_ff1 == TRUE || ars_ff2 == TRUE}]]

set_max_delay 2 -quiet -from [get_pins -filter {REF_PIN_NAME == C} -of_objects [get_cells -hierarchical -filter {ars_ff1 == TRUE}]] -to [get_pins -filter {REF_PIN_NAME == D} -of_objects [get_cells -hierarchical -filter {ars_ff2 == TRUE}]]