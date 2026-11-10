/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fc3b4; name: FUN_001fc3b4
 */


bool FUN_001fc3b4(undefined1 param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_001e34fc(param_1);
  if ((iVar2 == 0) && (iVar2 = FUN_001e33f4(param_1), iVar2 == 0)) {
    iVar2 = FUN_001e3484(param_1);
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


