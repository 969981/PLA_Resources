/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01349b74; name: FUN_01349b74
 */


undefined8 FUN_01349b74(long param_1,ulong param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  int iVar3;
  undefined1 local_24 [4];
  
  local_24[0] = 0;
  iVar3 = *(int *)(param_1 + 0x5b4);
  puVar1 = (undefined4 *)(param_1 + 0x980);
  if ((param_2 & 1) == 0) {
    if (iVar3 == 2) {
      uVar2 = FUN_01349acc(param_1,*(undefined4 *)(param_1 + 0x5b8),puVar1,local_24);
      *(undefined1 *)(*(long *)(param_1 + 0x950) + 0x59) = local_24[0];
      *(int *)(param_1 + 0x5b8) = *(int *)(param_1 + 0x5b8) + 1;
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      iVar3 = 0;
      *(undefined4 *)(param_1 + 0x5b4) = 0;
    }
    if (iVar3 == 1) {
      FUN_01349acc(param_1,*(undefined4 *)(param_1 + 0x5b8),puVar1,local_24);
      *(undefined1 *)(*(long *)(param_1 + 0x950) + 0x59) = local_24[0];
      *(int *)(param_1 + 0x5b8) = *(int *)(param_1 + 0x5b8) + 1;
      *(undefined4 *)(param_1 + 0x5b4) = 2;
      return 0;
    }
  }
  else {
    while (iVar3 == 2) {
      uVar2 = FUN_01349acc(param_1,*(undefined4 *)(param_1 + 0x5b8),puVar1,local_24);
      *(undefined1 *)(*(long *)(param_1 + 0x950) + 0x59) = local_24[0];
      *(int *)(param_1 + 0x5b8) = *(int *)(param_1 + 0x5b8) + 1;
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x5b4) = 0;
      iVar3 = 0;
    }
    if (iVar3 == 1) {
      return 0;
    }
  }
  *puVar1 = 0x3f800000;
  return 1;
}


