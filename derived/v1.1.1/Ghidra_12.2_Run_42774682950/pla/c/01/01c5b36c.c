/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c5b36c; name: FUN_01c5b36c
 */


void FUN_01c5b36c(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x29c);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x4a4) != '\0') {
      return;
    }
LAB_01c5b394:
    *(undefined1 *)(param_1 + 0x4a4) = 1;
    return;
  }
  iVar2 = *(int *)(param_1 + 0x298);
  if (iVar2 == iVar1) {
    *(undefined4 *)(param_1 + 0x29c) = 0;
    goto LAB_01c5b394;
  }
  if (iVar1 == 3) {
    if (iVar2 != 2) {
      if (iVar2 == 1) {
        FUN_01c60590(param_1,1,1);
        goto LAB_01c5b3d8;
      }
LAB_01c5b42c:
      *(undefined4 *)(param_1 + 0x29c) = 0;
      goto LAB_01c5b3d8;
    }
LAB_01c5b41c:
    FUN_01c5ff38(param_1,1);
  }
  else {
    if (iVar1 == 2) {
      if (iVar2 != 3) {
        if (iVar2 != 1) goto LAB_01c5b42c;
        goto LAB_01c5b41c;
      }
    }
    else if (iVar1 != 1) goto LAB_01c5b3d8;
    FUN_01c61750(param_1,1);
  }
LAB_01c5b3d8:
  FUN_01c5cfa4(param_1);
  return;
}


