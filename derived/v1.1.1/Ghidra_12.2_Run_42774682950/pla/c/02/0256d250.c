/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0256d250; name: FUN_0256d250
 */


undefined1 * FUN_0256d250(long param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  long lVar16;
  uint uVar17;
  byte bVar18;
  
  uVar9 = *(ulong *)(param_1 + 0x2a8);
  if (((uVar9 != 0) && ((long *)**(long **)(param_1 + 0x2a0) != (long *)0x0)) &&
     (plVar6 = *(long **)**(long **)(param_1 + 0x2a0), plVar6 != (long *)0x0)) {
    uVar11 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    if ((uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 < 2) {
      do {
        if (plVar6[1] == 0) {
          if ((int)plVar6[2] == 0) {
LAB_0256d2d0:
            lVar16 = *(long *)(param_1 + 0x488);
            puVar15 = &DAT_cbf29ce484222645;
            lVar7 = *(long *)(lVar16 + 0x1f8);
            lVar10 = *(long *)(lVar7 + 0x2d0);
            if (*(long *)(lVar7 + 0x2d8) != lVar10) {
              iVar2 = *(int *)(lVar7 + 0x2c8);
              iVar12 = (int)(((float)iVar2 / (float)*(undefined8 *)(lVar7 + 0x290)) *
                            ((float)*param_2 - (float)*(undefined8 *)(lVar7 + 0x270)));
              iVar4 = *(int *)(lVar7 + 0x2cc) + -1;
              iVar14 = (int)(((float)*(int *)(lVar7 + 0x2cc) / (float)*(undefined8 *)(lVar7 + 0x298)
                             ) * ((float)param_2[1] - (float)*(undefined8 *)(lVar7 + 0x278)));
              iVar13 = iVar4;
              if (iVar14 <= iVar4) {
                iVar13 = iVar14;
              }
              if (iVar14 < 0) {
                iVar13 = 0;
              }
              iVar14 = iVar2 + -1;
              if (iVar12 <= iVar2 + -1) {
                iVar14 = iVar12;
              }
              if (iVar12 < 0) {
                iVar14 = 0;
              }
              uVar9 = 0;
              uVar17 = 0;
              bVar18 = 0;
              do {
                plVar6 = *(long **)(*(long *)(lVar10 + (uVar9 & 0xff) * 0x20) + 0x18);
                if (plVar6 != (long *)0x0) {
                  (**(code **)(*plVar6 + 0x18))(plVar6);
                  lVar7 = *(long *)(lVar16 + 0x1f8);
                  lVar10 = *(long *)(lVar7 + 0x2d0);
                }
                bVar3 = *(byte *)(*(long *)(*(long *)(lVar10 + (uVar9 & 0xffffffff) * 0x20) + 0x20)
                                 + (long)(iVar14 + (iVar4 - iVar13) * iVar2));
                uVar1 = (uint)uVar9;
                if (bVar3 <= bVar18) {
                  uVar1 = uVar17;
                  bVar3 = bVar18;
                }
                if (plVar6 != (long *)0x0) {
                  (**(code **)(*plVar6 + 0x20))(plVar6);
                  lVar7 = *(long *)(lVar16 + 0x1f8);
                }
                uVar9 = uVar9 + 1;
                lVar10 = *(long *)(lVar7 + 0x2d0);
                uVar17 = uVar1;
                bVar18 = bVar3;
              } while (uVar9 < (ulong)(*(long *)(lVar7 + 0x2d8) - lVar10 >> 5));
              if (bVar3 != 0) {
                puVar8 = *(undefined8 **)(lVar10 + (ulong)(uVar1 & 0xff) * 0x20);
                puVar15 = (undefined1 *)*puVar8;
                plVar6 = (long *)puVar8[3];
                if (plVar6 != (long *)0x0) {
                  (**(code **)(*plVar6 + 0x18))(plVar6);
                  (**(code **)(*plVar6 + 0x20))(plVar6);
                }
              }
            }
            return puVar15;
          }
        }
        else if ((plVar6[1] & uVar9 - 1) != 0) break;
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
    else {
      do {
        uVar11 = plVar6[1];
        if (uVar11 == 0) {
          if ((int)plVar6[2] == 0) goto LAB_0256d2d0;
        }
        else {
          if (uVar11 < uVar9) break;
          uVar5 = 0;
          if (uVar9 != 0) {
            uVar5 = uVar11 / uVar9;
          }
          if (uVar11 != uVar5 * uVar9) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02573610();
}


