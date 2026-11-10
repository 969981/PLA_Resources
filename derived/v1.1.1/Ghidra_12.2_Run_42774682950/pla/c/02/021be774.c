/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021be774; name: FUN_021be774
 */


void FUN_021be774(long *param_1,byte *param_2,long *param_3,long *param_4)

{
  size_t sVar1;
  byte *pbVar2;
  byte bVar3;
  ulong uVar4;
  size_t __n;
  byte *pbVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  long *plVar10;
  size_t sVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong unaff_x26;
  undefined1 auStack_68 [8];
  
  uVar7 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar7 = (ulong)(*param_2 >> 1);
  }
  uVar7 = FUN_008e8ed4(auStack_68,pbVar2,uVar7);
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar9 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      unaff_x26 = uVar16 - 1 & uVar7;
    }
    else {
      unaff_x26 = uVar7;
      if (uVar16 <= uVar7) {
        uVar4 = 0;
        if (uVar16 != 0) {
          uVar4 = uVar7 / uVar16;
        }
        unaff_x26 = uVar7 - uVar4 * uVar16;
      }
    }
    plVar12 = *(long **)(*param_1 + unaff_x26 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      pbVar2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
      if ((*param_2 & 1) != 0) {
        pbVar2 = *(byte **)(param_2 + 0x10);
        __n = *(size_t *)(param_2 + 8);
      }
      if (uVar9 < 2) {
        do {
          if (plVar12[1] != uVar7 && (plVar12[1] & uVar16 - 1) != unaff_x26) break;
          bVar3 = *(byte *)(plVar12 + 2);
          sVar11 = (size_t)(bVar3 >> 1);
          sVar1 = sVar11;
          if ((bVar3 & 1) != 0) {
            sVar1 = plVar12[3];
          }
          if (sVar1 == __n) {
            pbVar15 = (byte *)((long)plVar12 + 0x11);
            pbVar8 = pbVar15;
            if ((bVar3 & 1) != 0) {
              pbVar8 = (byte *)plVar12[4];
            }
            pbVar5 = pbVar2;
            sVar1 = __n;
            if ((bVar3 & 1) == 0) {
              while( true ) {
                if (sVar1 == 0) {
                  return;
                }
                if (*pbVar15 != *pbVar5) break;
                sVar11 = sVar11 - 1;
                pbVar15 = pbVar15 + 1;
                pbVar5 = pbVar5 + 1;
                sVar1 = sVar11;
              }
            }
            else {
              if (__n == 0) {
                return;
              }
              iVar6 = memcmp(pbVar8,pbVar2,__n);
              if (iVar6 == 0) {
                return;
              }
            }
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar12[1];
          if (uVar9 != uVar7) {
            if (uVar16 <= uVar9) {
              uVar4 = 0;
              if (uVar16 != 0) {
                uVar4 = uVar9 / uVar16;
              }
              uVar9 = uVar9 - uVar4 * uVar16;
            }
            if (uVar9 != unaff_x26) break;
          }
          bVar3 = *(byte *)(plVar12 + 2);
          uVar9 = (ulong)(bVar3 >> 1);
          sVar1 = uVar9;
          if ((bVar3 & 1) != 0) {
            sVar1 = plVar12[3];
          }
          if (sVar1 == __n) {
            pbVar15 = (byte *)((long)plVar12 + 0x11);
            pbVar8 = pbVar15;
            if ((bVar3 & 1) != 0) {
              pbVar8 = (byte *)plVar12[4];
            }
            if ((bVar3 & 1) == 0) {
              if (__n == 0) {
                return;
              }
              pbVar8 = pbVar2;
              while (*pbVar15 == *pbVar8) {
                uVar9 = uVar9 - 1;
                pbVar15 = pbVar15 + 1;
                pbVar8 = pbVar8 + 1;
                if (uVar9 == 0) {
                  return;
                }
              }
            }
            else {
              if (__n == 0) {
                return;
              }
              iVar6 = memcmp(pbVar8,pbVar2,__n);
              if (iVar6 == 0) {
                return;
              }
            }
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  plVar12 = DAT_043f1798;
  lVar14 = tpidr_el0;
  plVar10 = *(long **)(lVar14 + 0x20);
  if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
    *(long **)(lVar14 + 0x20) = DAT_043f1798;
    plVar10 = plVar12;
  }
  plVar12 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x40,8);
  lVar14 = param_3[1];
  lVar13 = param_3[2];
  plVar12[2] = *param_3;
  plVar12[3] = lVar14;
  plVar12[4] = lVar13;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  lVar14 = param_4[1];
  lVar13 = *param_4;
  plVar12[7] = param_4[2];
  plVar12[5] = lVar13;
  plVar12[6] = lVar14;
  *plVar12 = 0;
  plVar12[1] = uVar7;
  if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(param_1[3] + 1))) {
    uVar16 = (ulong)(uVar16 < 3 || (uVar16 & uVar16 - 1) != 0) | uVar16 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar16) {
      uVar9 = uVar16;
    }
    FUN_008e9ae4(param_1,uVar9);
    uVar16 = param_1[1];
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x26 = uVar16 - 1 & uVar7;
    }
    else if (uVar7 < uVar16) {
      unaff_x26 = uVar7;
    }
    else {
      uVar9 = 0;
      if (uVar16 != 0) {
        uVar9 = uVar7 / uVar16;
      }
      unaff_x26 = uVar7 - uVar9 * uVar16;
    }
  }
  lVar14 = *param_1;
  plVar10 = *(long **)(lVar14 + unaff_x26 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    *plVar12 = *plVar10;
    *plVar10 = (long)plVar12;
    *(long **)(lVar14 + unaff_x26 * 8) = plVar10;
    if (*plVar12 == 0) goto LAB_021be9e0;
    uVar7 = *(ulong *)(*plVar12 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar7 = uVar7 & uVar16 - 1;
    }
    else if (uVar16 <= uVar7) {
      uVar9 = 0;
      if (uVar16 != 0) {
        uVar9 = uVar7 / uVar16;
      }
      uVar7 = uVar7 - uVar9 * uVar16;
    }
    plVar10 = (long *)(*param_1 + uVar7 * 8);
  }
  else {
    *plVar12 = *plVar10;
  }
  *plVar10 = (long)plVar12;
LAB_021be9e0:
  param_1[3] = param_1[3] + 1;
  return;
}


