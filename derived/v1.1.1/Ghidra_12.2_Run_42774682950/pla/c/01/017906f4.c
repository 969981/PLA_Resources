/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017906f4; name: FUN_017906f4
 */


void FUN_017906f4(long *param_1,byte *param_2,long *param_3,long *param_4)

{
  size_t sVar1;
  byte *pbVar2;
  byte bVar3;
  ulong uVar4;
  size_t __n;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  void *pvVar14;
  ulong uVar15;
  ulong unaff_x26;
  undefined1 auStack_58 [8];
  
  uVar6 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar6 = (ulong)(*param_2 >> 1);
  }
  uVar6 = FUN_008e8ed4(auStack_58,pbVar2,uVar6);
  uVar15 = param_1[1];
  if (uVar15 != 0) {
    uVar7 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      unaff_x26 = uVar15 - 1 & uVar6;
    }
    else {
      unaff_x26 = uVar6;
      if (uVar15 <= uVar6) {
        uVar4 = 0;
        if (uVar15 != 0) {
          uVar4 = uVar6 / uVar15;
        }
        unaff_x26 = uVar6 - uVar4 * uVar15;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x26 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      pbVar2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
      if ((*param_2 & 1) != 0) {
        pbVar2 = *(byte **)(param_2 + 0x10);
        __n = *(size_t *)(param_2 + 8);
      }
      if (uVar7 < 2) {
        do {
          if (plVar9[1] != uVar6 && (plVar9[1] & uVar15 - 1) != unaff_x26) break;
          bVar3 = *(byte *)(plVar9 + 2);
          uVar7 = (ulong)(bVar3 >> 1);
          sVar1 = uVar7;
          if ((bVar3 & 1) != 0) {
            sVar1 = plVar9[3];
          }
          if (sVar1 == __n) {
            pvVar14 = (void *)plVar9[4];
            if ((bVar3 & 1) == 0) {
              pvVar14 = (void *)((long)plVar9 + 0x11);
            }
            if ((bVar3 & 1) == 0) {
              if (__n == 0) {
                return;
              }
              pbVar12 = (byte *)((long)plVar9 + 0x11);
              pbVar13 = pbVar2;
              while (*pbVar12 == *pbVar13) {
                uVar7 = uVar7 - 1;
                pbVar12 = pbVar12 + 1;
                pbVar13 = pbVar13 + 1;
                if (uVar7 == 0) {
                  return;
                }
              }
            }
            else {
              if (__n == 0) {
                return;
              }
              iVar5 = memcmp(pvVar14,pbVar2,__n);
              if (iVar5 == 0) {
                return;
              }
            }
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar9[1];
          if (uVar7 != uVar6) {
            if (uVar15 <= uVar7) {
              uVar4 = 0;
              if (uVar15 != 0) {
                uVar4 = uVar7 / uVar15;
              }
              uVar7 = uVar7 - uVar4 * uVar15;
            }
            if (uVar7 != unaff_x26) break;
          }
          bVar3 = *(byte *)(plVar9 + 2);
          uVar7 = (ulong)(bVar3 >> 1);
          sVar1 = uVar7;
          if ((bVar3 & 1) != 0) {
            sVar1 = plVar9[3];
          }
          if (sVar1 == __n) {
            pvVar14 = (void *)plVar9[4];
            if ((bVar3 & 1) == 0) {
              pvVar14 = (void *)((long)plVar9 + 0x11);
            }
            if ((bVar3 & 1) == 0) {
              if (__n == 0) {
                return;
              }
              pbVar12 = (byte *)((long)plVar9 + 0x11);
              pbVar13 = pbVar2;
              while (*pbVar12 == *pbVar13) {
                uVar7 = uVar7 - 1;
                pbVar12 = pbVar12 + 1;
                pbVar13 = pbVar13 + 1;
                if (uVar7 == 0) {
                  return;
                }
              }
            }
            else {
              if (__n == 0) {
                return;
              }
              iVar5 = memcmp(pvVar14,pbVar2,__n);
              if (iVar5 == 0) {
                return;
              }
            }
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  plVar9 = DAT_043f1798;
  lVar11 = tpidr_el0;
  plVar8 = *(long **)(lVar11 + 0x20);
  if (*(long **)(lVar11 + 0x20) == (long *)0x0) {
    *(long **)(lVar11 + 0x20) = DAT_043f1798;
    plVar8 = plVar9;
  }
  plVar9 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x40,8);
  lVar11 = param_3[1];
  lVar10 = param_3[2];
  plVar9[2] = *param_3;
  plVar9[3] = lVar11;
  plVar9[4] = lVar10;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  lVar11 = param_4[1];
  lVar10 = *param_4;
  plVar9[7] = param_4[2];
  plVar9[5] = lVar10;
  plVar9[6] = lVar11;
  *plVar9 = 0;
  plVar9[1] = uVar6;
  if ((uVar15 == 0) || (*(float *)(param_1 + 4) * (float)uVar15 < (float)(param_1[3] + 1))) {
    uVar15 = (ulong)(uVar15 < 3 || (uVar15 & uVar15 - 1) != 0) | uVar15 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar15) {
      uVar7 = uVar15;
    }
    FUN_008e9ae4(param_1,uVar7);
    uVar15 = param_1[1];
    if ((uVar15 & uVar15 - 1) == 0) {
      unaff_x26 = uVar15 - 1 & uVar6;
    }
    else if (uVar6 < uVar15) {
      unaff_x26 = uVar6;
    }
    else {
      uVar7 = 0;
      if (uVar15 != 0) {
        uVar7 = uVar6 / uVar15;
      }
      unaff_x26 = uVar6 - uVar7 * uVar15;
    }
  }
  lVar11 = *param_1;
  plVar8 = *(long **)(lVar11 + unaff_x26 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar9 = *plVar8;
    *plVar8 = (long)plVar9;
    *(long **)(lVar11 + unaff_x26 * 8) = plVar8;
    if (*plVar9 == 0) goto LAB_017908e0;
    uVar6 = *(ulong *)(*plVar9 + 8);
    if ((uVar15 & uVar15 - 1) == 0) {
      uVar6 = uVar6 & uVar15 - 1;
    }
    else if (uVar15 <= uVar6) {
      uVar7 = 0;
      if (uVar15 != 0) {
        uVar7 = uVar6 / uVar15;
      }
      uVar6 = uVar6 - uVar7 * uVar15;
    }
    plVar8 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar9 = *plVar8;
  }
  *plVar8 = (long)plVar9;
LAB_017908e0:
  param_1[3] = param_1[3] + 1;
  return;
}


