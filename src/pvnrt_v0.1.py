# PV = nRT
# Version 0.1
''' TO DO:
1) decide between JSON or nested dictionaries
2) finish both story_problem and sort_data
3) eventually reorganize into class Ideal_Gas_Law(?)
'''
# Uncomment as necessary.
"""
R_Latm = float(0.0821)
R_Latm_units = str("L * atm / mol * K")
R_J = float(8.314)
R_J_units = str("J / mol * K")
#R_Latm_units_alt_spelling = str("(L)(atm) / (mol)(K)")
#R_J_units_alt_spelling = str("(J) / (mol)(K)")

'''Eventual user inputted and/or unknown'''
P = float()
V = float()
n = float()
T = float()

def sort_data():
    '''data into the function, unsort dictionaries of elements,
    separate the chemical/element/molecule into a string var,
    separate the quantity into a float variable, separate the
    unit into a string var. Likely multi-return.'''
    pass

def story_problem(a: str)->list:
    ''' Takes in a story problem as a string, outputs the string
    to a file, parses the outputted file for important information
    (elements, cmpds, quantities, units), then returns a nested list of
    those things. Alternatively, could just take in the data and write
    to a JSON file.'''
    pass
"""

def unknown_P_std()->float:
    P = ((n * R_Latm * T) / V)
    return P

def unknown_P_J()->float:
    P = ((n * R_J * T) / V)
    return P

def unknown_V_std()->float:
    V = ((n * R_Latm * T) / P)
    return V

def unknown_V_J()->float:
    V = ((n * R_J * T) / P)
    return V

def unknown_n_std()->float:
    n = ((P * V) / (R_Latm * T))
    return n

def unknown_n_J()->float:
    n = ((P * V) / (R_J * T))
    return n

def unknown_T_std()->float:
    T = ((P * V) / (n * R_Latm))
    return T

def unknown_T_J():->float:
    T = ((P * V) / (n * R_J))
    return T
