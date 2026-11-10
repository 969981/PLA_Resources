/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01349de4; name: FUN_01349de4
 */


bool FUN_01349de4(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  undefined1 local_24 [4];
  
  local_24[0] = 0xff;
  iVar4 = *(int *)(param_1 + 0x5b4);
  lVar1 = param_1 + 0x980;
  if ((param_2 & 1) == 0) {
    if (iVar4 == 2) {
      uVar3 = FUN_01349acc(param_1,*(undefined4 *)(param_1 + 0x5b8),lVar1,local_24);
      *(undefined1 *)(*(long *)(param_1 + 0x950) + 0x59) = local_24[0];
      *(int *)(param_1 + 0x5b8) = *(int *)(param_1 + 0x5b8) + 1;
      if ((uVar3 & 1) == 0) {
        return false;
      }
      iVar4 = 0;
      *(undefined4 *)(param_1 + 0x5b4) = 0;
    }
    if (iVar4 == 1) {
      FUN_01349acc(param_1,*(undefined4 *)(param_1 + 0x5b8),lVar1,local_24);
      bVar2 = false;
      *(undefined1 *)(*(long *)(param_1 + 0x950) + 0x59) = local_24[0];
      *(int *)(param_1 + 0x5b8) = *(int *)(param_1 + 0x5b8) + 1;
      *(undefined4 *)(param_1 + 0x5b4) = 2;
    }
    else {
      bVar2 = true;
    }
  }
  else {
    if (iVar4 == 2) {
      uVar3 = FUN_01349acc(param_1,*(undefined4 *)(param_1 + 0x5b8),lVar1,local_24);
      *(undefined1 *)(*(long *)(param_1 + 0x950) + 0x59) = local_24[0];
      *(int *)(param_1 + 0x5b8) = *(int *)(param_1 + 0x5b8) + 1;
      if ((uVar3 & 1) == 0) {
        return false;
      }
      iVar4 = 0;
      *(undefined4 *)(param_1 + 0x5b4) = 0;
    }
    bVar2 = iVar4 != 1;
  }
  return bVar2;
}


