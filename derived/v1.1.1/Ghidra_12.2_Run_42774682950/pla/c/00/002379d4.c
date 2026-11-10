/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002379d4; name: FUN_002379d4
 */


void FUN_002379d4(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x30);
  lVar2 = param_1 + 0x28;
  if (lVar2 != lVar3) {
    lVar4 = lVar3;
    do {
      iVar1 = strcmp(*(char **)(lVar4 + 0x10),"In");
      if (iVar1 == 0) {
        if (lVar4 != 0) goto LAB_00237a34;
        break;
      }
      lVar4 = *(long *)(lVar4 + 8);
    } while (lVar2 != lVar4);
  }
  goto LAB_00237a54;
  while (lVar3 = *(long *)(lVar3 + 8), lVar2 != lVar3) {
LAB_00237a34:
    iVar1 = strcmp(*(char **)(lVar3 + 0x10),"In");
    if (iVar1 == 0) goto LAB_00237a54;
  }
  lVar3 = 0;
LAB_00237a54:
  *(long *)(param_1 + 0x20) = lVar3;
  FUN_0025a1b8(param_1,lVar3);
  *(undefined2 *)(param_1 + 0x10d) = 0;
  lVar2 = FUN_0025981c(param_1 + 0x48);
  if ((lVar2 != 0) && (*(char *)(param_1 + 0x10f) == '\0')) {
    (**(code **)PTR_DAT_04372bb0)(lVar2,*(undefined8 *)PTR_DAT_04372bb8);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}


