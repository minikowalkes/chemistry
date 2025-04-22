# A basic metric converter.
# This is the "KHDBdcm" acronymn for right now.
# eventually, these conversion factors will be included in __init__
'''TO DO:
  1) add more conversions to imperial_to_metric (namely volumes)
  2) create a class "Metricify" or "Metricifier"
  3) suggested creation of a dimensional analysis machine? << possibly recreated/recycled methods bc i hate inheritance
  4) fail all my classes
'''
def conversion_factors():
  '''This procedure serves as a place to store local variables'''
  # don't think i'll go higher than peta_unit = 1 X 10^15
  '''This thing was intended for chemistry, not chemical engineering.
  we will not likely need to deal with quantities larger than kilograms,
  so that's my reasoning for not including ALL metric prefixes.'''
  # tera_unit = 1 X 10^12
  # giga_unit = 1 X 10^9
  # mega_unit = 1 X 10^6
  kilo_unit = float(1000.0)
  hecto_unit = float(100.0)
  deca_unit = float(10.0)
  base_unit = float(1.0)
  deci_unit = float(0.1)
  centi_unit = float(0.01)
  milli_unit = float(0.001)
  micro_unit = float(0.000001)
  nano_unit = float(0.000000001)
  pico_unit = float(0.000000000001)
  femto_unit = float(0.000000000000001)
  '''Won't go any smaller than femto, I don't think.'''
  pass

def imperial_to_metric()->float:
  '''multiply by these quantities to convert'''
  '''Alternatively, could turn this into a dimensional analysis machine.'''
  cm_to_in = float(0.3937)
  in_to_cm = float(2.54)
  lbs_to_g = float(454.0)
  g_to_lbs = float(0.002205)
  pass

# that's all for now. 
# -- Cameron (minikowalkes) 4/22/25
  
