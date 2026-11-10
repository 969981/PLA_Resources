/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d4f240; name: FUN_00d4f240
 */


void FUN_00d4f240(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  iVar5 = param_2;
  if (param_2 == 2) {
    iVar5 = 0;
  }
  lVar7 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar5 * 0x28);
  lVar7 = *(long *)(lVar7 + 0x8b0);
  iVar2 = *(int *)(lVar7 + 0x10);
  iVar3 = *(int *)(lVar7 + 0x14);
  piVar1 = (int *)(lVar7 + 0x20);
  if (*(int *)(lVar7 + 0x28) != 0) {
    piVar1 = (int *)(lVar7 + 0x24);
  }
  iVar4 = *piVar1;
  lVar8 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar5 * 0x28);
  lVar7 = **(long **)(lVar8 + 0x838);
  lVar8 = (*(long **)(lVar8 + 0x838))[1];
  if ((lVar7 != lVar8) &&
     (iVar3 = iVar3 + iVar4 * iVar2,
     *(char *)(lVar7 + 0x20) != '\0' || *(int *)(lVar7 + 0x24) != iVar3)) {
    lVar6 = lVar7 + 0x30;
    do {
      lVar7 = lVar6;
      if (lVar8 == lVar7) {
        lVar7 = lVar8;
        goto LAB_00d4f30c;
      }
      lVar6 = lVar7 + 0x30;
    } while ((*(char *)(lVar7 + 0x20) != '\0') || (*(int *)(lVar7 + 0x24) != iVar3));
  }
LAB_00d4f30c:
  if (((lVar7 != 0 && lVar8 != lVar7) && (*(int *)(lVar7 + 0x28) != -1)) &&
     (lVar7 = FUN_00d57364(param_1,param_2), lVar7 != 0)) {
    *(undefined1 *)(lVar7 + 0x2ab) = 1;
  }
  return;
}


