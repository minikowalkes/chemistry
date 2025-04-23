def dimensional_analysis(a: float,b: str,c:str)->tuple[a: float,b: str]:
  given_quantity = a
  given_units = b
  desired_units = c
  '''depending on whatever is inputted, we pull conversion factors from elsewhere'''
  da = given_quantity * (conversion_factor)
  answer = [da,desired_units]
  return answer
  pass

# insane decomposition ramblings below
''' for right now, this will be a standalone file until we integrate this
    function into what currently is metric_v0.1.py. Eventually, I will have
    a file converter_vX.X.py that achieves all of these various mathematical
    operations in a single class Converter. Converter, as I'm half-baking the 
    idea, will do a bunch of things.
    1) creates a temporary "story problem.txt" file
    2) harnessing the power of REGULAR EXPRESSIONS, it will parse the file for 
    very specific things. Here's what i'm thinking for right now:
        == Searches for chemical symbols by using some baloney pattern matching like
        "if theres any capital letter separated by a space before and after, with the 
        exception of the letter I, it will store that as the chemical symbol"
        "if theres any capital letter followed by a lowercase letter and separated by
        a space before and after, and NOT following a period (to avoid things like questions
        asking "Something something. Is the blah blah blah?" so "Is" is not mistakenly 
        logic-errored into being stored as a chemical symbol.
        == Searches for ANY number, and stores it somewhere.
        "if theres any string before or after the number, store it as well."
        >>> might need a ridiculously long if-elif to sort out important information.
     3) after parsing the file for important information, decide the best mathematical 
     course of action upon that data. 
     4) delete the temporary "story problem.txt" file.
     5) A+ on all your chem 1 and 2 exams.
'''
