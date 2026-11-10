/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5c748; name: FUN_00d5c748
 */


void FUN_00d5c748(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  
  lVar4 = FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8 + (long)param_2 * 0x28);
  if (0 < *(int *)((long)param_1 + (long)param_2 * 0x60 + 0x644) *
          (int)param_1[(long)param_2 * 0xc + 200]) {
    uVar7 = (ulong)(uint)(*(int *)(*(long *)(lVar4 + 0x8b0) + 0x10) *
                         (int)param_1[(long)param_2 * 0xc + 200]);
    iVar8 = 0;
    do {
      if (*(uint *)(param_1[(long)param_2 * 0xc + 199] + 0xb0) <= uVar7) {
        return;
      }
      if (*(int *)(*(long *)(*(long *)(param_1[(long)param_2 * 0xc + 199] + 0xa8) + uVar7 * 0x10) +
                  8) != 1) {
        lVar5 = FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8 + (long)param_2 * 0x28);
        lVar4 = **(long **)(lVar5 + 0x838);
        lVar5 = (*(long **)(lVar5 + 0x838))[1];
        if ((lVar4 != lVar5) &&
           (*(char *)(lVar4 + 0x20) != '\0' || *(int *)(lVar4 + 0x24) != (int)uVar7)) {
          lVar2 = lVar4 + 0x30;
          do {
            lVar6 = lVar2;
            lVar4 = lVar5;
            if (lVar5 == lVar6) break;
            lVar2 = lVar6 + 0x30;
          } while ((*(char *)(lVar6 + 0x20) != '\0') ||
                  (lVar4 = lVar6, *(int *)(lVar6 + 0x24) != (int)uVar7));
        }
        if ((lVar4 != 0) && ((lVar5 != lVar4 && (iVar1 = *(int *)(lVar4 + 0x28), iVar1 != -1)))) {
          uVar3 = (**(code **)(*param_1 + 0x170))(param_1,param_2,uVar7 & 0xffffffff);
          FUN_00d543c4(param_1,param_2,iVar1,uVar3 & 1);
        }
      }
      iVar8 = iVar8 + 1;
      uVar7 = uVar7 + 1;
    } while (iVar8 < *(int *)((long)param_1 + (long)param_2 * 0x60 + 0x644) *
                     (int)param_1[(long)param_2 * 0xc + 200]);
  }
  return;
}


