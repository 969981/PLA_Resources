/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00204e08; name: FUN_00204e08
 */


bool FUN_00204e08(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = nnResultGetModule(param_1);
  iVar3 = nnResultGetModule(param_2);
  if (iVar2 == iVar3) {
    iVar2 = nnResultGetDescription(param_1);
    iVar3 = nnResultGetDescription(param_2);
    bVar1 = iVar2 == iVar3;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


