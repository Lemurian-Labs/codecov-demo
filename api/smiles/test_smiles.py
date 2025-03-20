from .smiles import Smiles

def test_smile():
    assert Smiles().smile() == ":)"

def test_frown():
     assert Smiles().frown() == ":("

# def test_wink():
#      assert Smiles().wink() == ":P"     
