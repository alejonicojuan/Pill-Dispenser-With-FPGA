`timescale 1ns / 1ps

module MOTOR(
    output reg [3:0]motorout,
    input wire clk,
    input wire [3:0]next
    );
    
    reg clkpwm=1'b0;    
    reg [17:0] counter = 18'b0;
    reg [10:0]busy=11'b0;
    reg [3:0]state=4'b0001;
    always @(posedge clk)begin
        counter <= counter + 18'b1;
        if(counter>=200000)begin
            counter <= 18'b0;
            clkpwm=!clkpwm;
        end
    end
    
    always @(posedge clkpwm)begin
        
        if((next == 1) && (busy == 0))begin
                  
            case (state)
                4'b1000:begin
                    busy = 11'b01000000000; // "4"
                    state = 4'b0001; 
                end 
                4'b0100:begin
                    busy <= 11'b10000000000; // "3" 
                    state = 4'b0001; 
                end 
                4'b0010:begin 
                    busy <= 11'b11000000000; // "2" 
                    state = 4'b0001; 
                end 
            endcase            
            
        end
        
        else if((next == 2) && (busy == 0))begin          
            
            case (state)
                4'b0001:begin
                    busy <= 11'b01000000000; // "1" 
                    state = 4'b0010; 
                end
                4'b1000:begin
                    busy <= 11'b10000000000; // "4"
                    state = 4'b0010; 
                end 
                4'b0100:begin
                    busy <= 11'b11000000000; // "3"
                    state = 4'b0010; 
                end
                
            endcase            
            
        end
        
        else if((next == 4) && (busy == 0))begin          
            
            case (state)
                4'b0010:begin 
                    busy <= 11'b01000000000; // "2"
                    state = 4'b0100; 
                end
                4'b0001:begin 
                    busy <= 11'b10000000000; // "1"
                    state = 4'b0100; 
                end
                4'b1000:begin 
                    busy <= 11'b11000000000; // "4"
                    state = 4'b0100; 
                end 
            endcase            
            
        end
        
        else if((next == 8) && (busy == 0))begin          
            
            case (state)
                4'b0100:begin 
                    busy <= 11'b01000000000; // "3"
                    state = 4'b1000; 
                end 
                4'b0010:begin 
                    busy <= 11'b10000000000; // "2" 
                    state = 4'b1000; 
                end
                4'b0001:begin 
                    busy <= 11'b11000000000; // "1" 
                    state = 4'b1000; 
                end
            endcase       
            
        end
        
        if (busy != 0)begin
        
            case (motorout)
                4'b0000: motorout = 4'b1000; // "0"  
                4'b1000: motorout = 4'b0100; // "1" 
                4'b0100: motorout = 4'b0010; // "2" 
                4'b0010: motorout = 4'b0001; // "3" 
                4'b0001: motorout = 4'b1000; // "4" 
            default:
                motorout = 4'b0000;
            endcase
            
            busy <= busy-1'b1;
            
        end
    end
    
endmodule
