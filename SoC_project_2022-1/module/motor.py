from migen import *
from migen.genlib.cdc import MultiReg
from litex.soc.interconnect.csr import *
from litex.soc.interconnect.csr_eventmanager import *

# Modulo Principal
class MOTOR(Module,AutoCSR):
    def __init__(self,motorout):
        self.clk = ClockSignal()
        self.next = CSRStorage(4)
        self.motorout = motorout

        self.specials +=Instance("MOTOR",
            i_clk = self.clk,
            i_next = self.next.storage,
            o_motorout = self.motorout,
        )
