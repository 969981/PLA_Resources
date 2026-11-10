/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a1ec8; name: FUN_011a1ec8
 */


undefined8 FUN_011a1ec8(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x16c8);
  if (iVar1 == 4) {
    uVar2 = FUN_011a1c7c(param_1);
    if ((uVar2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x16c8) = 0;
      return 1;
    }
  }
  else {
    if (iVar1 == 3) {
      uVar2 = FUN_011a1908(param_1);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      FUN_011a17dc(param_1);
      uVar3 = 1;
    }
    else {
      if (iVar1 != 2) {
        return 0;
      }
      uVar2 = FUN_011a1908(param_1);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      FUN_011a17dc(param_1);
      uVar3 = 0xffffffff;
    }
    FUN_011a1b54(param_1,uVar3);
    *(undefined4 *)(param_1 + 0x16c8) = 4;
  }
  return 0;
}


