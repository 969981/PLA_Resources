/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5751c; name: FUN_00d5751c
 */


void FUN_00d5751c(long param_1,int param_2,byte param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  
  lVar8 = param_1 + (long)param_2 * 0x60;
  if (*(int *)(lVar8 + 0x640) != 0) {
    lVar10 = param_1 + (long)param_2 * 0x60;
    if (*(int *)(lVar10 + 0x644) != 0) {
      piVar1 = (int *)(lVar8 + 0x640);
      lVar8 = param_1 + (long)param_2 * 0x60;
      piVar2 = (int *)(lVar10 + 0x644);
      uVar13 = *(ulong *)(*(long *)(lVar8 + 0x638) + 0xb0);
      iVar3 = 0;
      if (param_2 != 2) {
        iVar3 = param_2;
      }
      lVar10 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar3 * 0x28);
      iVar12 = *piVar1;
      uVar4 = iVar12 * *(int *)(*(long *)(lVar10 + 0x8b0) + 0x10);
      if (uVar4 < (uint)uVar13 && 0 < *piVar2 * iVar12) {
        uVar11 = (ulong)uVar4;
        iVar12 = 0;
        do {
          if (*(int *)(*(long *)(*(long *)(*(long *)(lVar8 + 0x638) + 0xa8) + uVar11 * 0x10) + 8) ==
              1) {
            lVar6 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar3 * 0x28);
            lVar10 = **(long **)(lVar6 + 0x838);
            lVar6 = (*(long **)(lVar6 + 0x838))[1];
            if ((lVar10 != lVar6) &&
               (*(char *)(lVar10 + 0x20) != '\0' || *(int *)(lVar10 + 0x24) != (int)uVar11)) {
              lVar5 = lVar10 + 0x30;
              do {
                lVar9 = lVar5;
                lVar10 = lVar6;
                if (lVar6 == lVar9) break;
                lVar5 = lVar9 + 0x30;
              } while ((*(char *)(lVar9 + 0x20) != '\0') ||
                      (lVar10 = lVar9, *(int *)(lVar9 + 0x24) != (int)uVar11));
            }
            if (((lVar10 != 0) &&
                (((lVar6 != lVar10 && (*(int *)(lVar10 + 0x28) != -1)) &&
                 (plVar7 = (long *)FUN_00d57364(param_1,param_2), plVar7 != (long *)0x0)))) &&
               (*(byte *)((long)plVar7 + 0xa2) != (param_3 & 1))) {
              *(byte *)((long)plVar7 + 0xa2) = param_3 & 1;
              (**(code **)(*plVar7 + 0x98))();
            }
          }
          uVar11 = uVar11 + 1;
        } while ((uVar11 < (uVar13 & 0xffffffff)) &&
                (iVar12 = iVar12 + 1, iVar12 < *piVar2 * *piVar1));
      }
    }
  }
  return;
}


