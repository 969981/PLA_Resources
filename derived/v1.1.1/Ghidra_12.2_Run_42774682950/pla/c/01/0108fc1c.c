/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108fc1c; name: FUN_0108fc1c
 */


undefined8 FUN_0108fc1c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_02c628d4();
  if (uVar1 < 0xff) {
    if (uVar1 < 100) {
      iVar2 = FUN_02c4fc60(param_2,0x3d);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = 0x48;
    }
    else if (uVar1 < 0xa0) {
      iVar2 = FUN_02c4fc60(param_2,0x3e);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = 0x49;
    }
    else {
      iVar2 = FUN_02c4fc60(param_2,0x3f);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = 0x4a;
    }
    iVar2 = FUN_02c4fc60(param_2,uVar3);
    if (0 < iVar2) {
      return 1;
    }
  }
  return 0;
}


