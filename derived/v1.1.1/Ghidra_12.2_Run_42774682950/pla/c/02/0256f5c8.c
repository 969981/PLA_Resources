/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0256f5c8; name: FUN_0256f5c8
 */


undefined8 FUN_0256f5c8(long param_1,undefined8 *param_2,float *param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (*(int *)(param_1 + 0x68) != 1) {
    return 0;
  }
  uVar4 = *(ulong *)(param_1 + 0x2a8);
  if (((uVar4 != 0) && ((long *)**(long **)(param_1 + 0x2a0) != (long *)0x0)) &&
     (plVar3 = *(long **)**(long **)(param_1 + 0x2a0), plVar3 != (long *)0x0)) {
    uVar6 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    if ((uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 < 2) {
      do {
        if (plVar3[1] == 0) {
          if ((int)plVar3[2] == 0) {
LAB_0256f644:
            lVar5 = *(long *)(*(long *)(param_1 + 0x488) + 0x1f8);
            iVar1 = *(int *)(lVar5 + 0x2a0);
            iVar9 = (int)(((float)iVar1 / (float)*(undefined8 *)(lVar5 + 0x290)) *
                         ((float)*param_2 - (float)*(undefined8 *)(lVar5 + 0x270)));
            iVar7 = iVar1 + -1;
            if (iVar9 <= iVar1 + -1) {
              iVar7 = iVar9;
            }
            iVar8 = (int)(((float)*(int *)(lVar5 + 0x2a4) / (float)*(undefined8 *)(lVar5 + 0x298)) *
                         ((float)param_2[1] - (float)*(undefined8 *)(lVar5 + 0x278)));
            if (iVar9 < 0) {
              iVar7 = 0;
            }
            iVar9 = *(int *)(lVar5 + 0x2a4) + -1;
            if (iVar8 <= iVar9) {
              iVar9 = iVar8;
            }
            if (iVar8 < 0) {
              iVar9 = 0;
            }
            *param_3 = (float)((ulong)*(undefined8 *)(lVar5 + 0x270) >> 0x20) +
                       *(float *)(*(long *)(lVar5 + 0x2a8) + (long)(iVar7 + iVar9 * iVar1) * 4) *
                       (float)((ulong)*(undefined8 *)(lVar5 + 0x280) >> 0x20);
            return 1;
          }
        }
        else if ((plVar3[1] & uVar4 - 1) != 0) break;
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
    else {
      do {
        uVar6 = plVar3[1];
        if (uVar6 == 0) {
          if ((int)plVar3[2] == 0) goto LAB_0256f644;
        }
        else {
          if (uVar6 < uVar4) break;
          uVar2 = 0;
          if (uVar4 != 0) {
            uVar2 = uVar6 / uVar4;
          }
          if (uVar6 != uVar2 * uVar4) break;
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02573610();
}


