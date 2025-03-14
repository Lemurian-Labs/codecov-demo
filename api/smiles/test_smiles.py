from .smiles import Smiles

def test_smile():
    assert Smiles().smile() == ":)"

def test_frown():
     assert Smiles().frown() == ":("
