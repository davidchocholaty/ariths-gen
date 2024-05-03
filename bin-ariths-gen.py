from ariths_gen.core.cgp_circuit import UnsignedCGPCircuit, SignedCGPCircuit
""" from ariths_gen.multi_bit_circuits.adders import (
    UnsignedPGRippleCarryAdder,
    UnsignedRippleCarryAdder,
    UnsignedConditionalSumAdder,
    UnsignedKoggeStoneAdder,
    UnsignedBrentKungAdder,
    UnsignedSklanskyAdder
) """
""" from ariths_gen.wire_components import (
    Bus
) """

from io import StringIO

#N = 7
#a = Bus(N=N, prefix="a")
#b = Bus(N=N, prefix="b")

UNSIGNED = 0
SIGNED = 1

circuits_file_paths = [("circuits/u_rca4", UNSIGNED, 4)]

# Non configurable multi-bit adders
for circuit_path, sign, inputs_width in circuits_file_paths:
    #add = c(a, b)
    #code = StringIO()
    #add.get_cgp_code_flat(code)
    #cgp_code = code.getvalue()
    f = open(circuit_path + ".cgp", "r")
    cgp_code = "\n".join([x for x in f])
    #print(cgp_code)

    if sign == SIGNED:
        cgp_circuit = SignedCGPCircuit(cgp_code, [inputs_width, inputs_width])
    else:
        # Unsigned
        cgp_circuit = UnsignedCGPCircuit(cgp_code, [inputs_width, inputs_width])
    
    o = StringIO()
    cgp_circuit.get_v_code_flat(o)
    
    # Save circuit verilog
    with open(circuit_path + ".v", "w") as file:
        file.write(o.getvalue())
    
    #print(o.getvalue())
