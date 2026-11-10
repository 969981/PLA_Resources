/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043a710; name: FUN_0043a710
 */


undefined4 FUN_0043a710(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0042e180();
  iVar1 = FUN_0042e190();
  if (((iVar1 == 0x197) && (*(int *)(param_1 + 0x48) != 0)) && (*(int *)(param_1 + 0x4c) != 0)) {
    if (*(int *)(param_1 + 0x50) == 0) {
      return 0x2aa;
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      uVar2 = 0x2ab;
      if (*(int *)(param_1 + 0x58) != 0) {
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  return 0;
}


