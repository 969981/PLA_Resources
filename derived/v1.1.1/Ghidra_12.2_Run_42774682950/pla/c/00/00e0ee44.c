/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e0ee44; name: FUN_00e0ee44
 */


void FUN_00e0ee44(long *param_1,byte *param_2,long *param_3,long *param_4)

{
  size_t sVar1;
  byte *pbVar2;
  byte bVar3;
  ulong uVar4;
  size_t __n;
  byte *pbVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  size_t sVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong unaff_x26;
  undefined1 auStack_58 [8];
  
  uVar7 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar7 = (ulong)(*param_2 >> 1);
  }
  uVar7 = FUN_008e8ed4(auStack_58,pbVar2,uVar7);
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar8 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
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
    plVar10 = *(long **)(*param_1 + unaff_x26 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      pbVar2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
      if ((*param_2 & 1) != 0) {
        pbVar2 = *(byte **)(param_2 + 0x10);
        __n = *(size_t *)(param_2 + 8);
      }
      if (uVar8 < 2) {
        do {
          if (plVar10[1] != uVar7 && (plVar10[1] & uVar16 - 1) != unaff_x26) break;
          bVar3 = *(byte *)(plVar10 + 2);
          sVar13 = (size_t)(bVar3 >> 1);
          sVar1 = sVar13;
          if ((bVar3 & 1) != 0) {
            sVar1 = plVar10[3];
          }
          if (sVar1 == __n) {
            pbVar14 = (byte *)((long)plVar10 + 0x11);
            pbVar15 = pbVar14;
            if ((bVar3 & 1) != 0) {
              pbVar15 = (byte *)plVar10[4];
            }
            pbVar5 = pbVar2;
            sVar1 = __n;
            if ((bVar3 & 1) == 0) {
              while( true ) {
                if (sVar1 == 0) {
                  return;
                }
                if (*pbVar14 != *pbVar5) break;
                sVar13 = sVar13 - 1;
                pbVar14 = pbVar14 + 1;
                pbVar5 = pbVar5 + 1;
                sVar1 = sVar13;
              }
            }
            else {
              if (__n == 0) {
                return;
              }
              iVar6 = memcmp(pbVar15,pbVar2,__n);
              if (iVar6 == 0) {
                return;
              }
            }
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar10[1];
          if (uVar8 != uVar7) {
            if (uVar16 <= uVar8) {
              uVar4 = 0;
              if (uVar16 != 0) {
                uVar4 = uVar8 / uVar16;
              }
              uVar8 = uVar8 - uVar4 * uVar16;
            }
            if (uVar8 != unaff_x26) break;
          }
          bVar3 = *(byte *)(plVar10 + 2);
          uVar8 = (ulong)(bVar3 >> 1);
          sVar1 = uVar8;
          if ((bVar3 & 1) != 0) {
            sVar1 = plVar10[3];
          }
          if (sVar1 == __n) {
            pbVar14 = (byte *)((long)plVar10 + 0x11);
            pbVar15 = pbVar14;
            if ((bVar3 & 1) != 0) {
              pbVar15 = (byte *)plVar10[4];
            }
            if ((bVar3 & 1) == 0) {
              if (__n == 0) {
                return;
              }
              pbVar15 = pbVar2;
              while (*pbVar14 == *pbVar15) {
                uVar8 = uVar8 - 1;
                pbVar14 = pbVar14 + 1;
                pbVar15 = pbVar15 + 1;
                if (uVar8 == 0) {
                  return;
                }
              }
            }
            else {
              if (__n == 0) {
                return;
              }
              iVar6 = memcmp(pbVar15,pbVar2,__n);
              if (iVar6 == 0) {
                return;
              }
            }
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  plVar10 = DAT_043f1798;
  lVar12 = tpidr_el0;
  plVar9 = *(long **)(lVar12 + 0x20);
  if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
    *(long **)(lVar12 + 0x20) = DAT_043f1798;
    plVar9 = plVar10;
  }
  plVar10 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x40,8);
  lVar12 = param_3[1];
  lVar11 = param_3[2];
  plVar10[2] = *param_3;
  plVar10[3] = lVar12;
  plVar10[4] = lVar11;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  lVar12 = param_4[1];
  lVar11 = *param_4;
  plVar10[7] = param_4[2];
  plVar10[5] = lVar11;
  plVar10[6] = lVar12;
  *plVar10 = 0;
  plVar10[1] = uVar7;
  if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(param_1[3] + 1))) {
    uVar16 = (ulong)(uVar16 < 3 || (uVar16 & uVar16 - 1) != 0) | uVar16 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar8 <= uVar16) {
      uVar8 = uVar16;
    }
    FUN_008e9ae4(param_1,uVar8);
    uVar16 = param_1[1];
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x26 = uVar16 - 1 & uVar7;
    }
    else if (uVar7 < uVar16) {
      unaff_x26 = uVar7;
    }
    else {
      uVar8 = 0;
      if (uVar16 != 0) {
        uVar8 = uVar7 / uVar16;
      }
      unaff_x26 = uVar7 - uVar8 * uVar16;
    }
  }
  lVar12 = *param_1;
  plVar9 = *(long **)(lVar12 + unaff_x26 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar10 = *plVar9;
    *plVar9 = (long)plVar10;
    *(long **)(lVar12 + unaff_x26 * 8) = plVar9;
    if (*plVar10 == 0) goto LAB_00e0efe8;
    uVar7 = *(ulong *)(*plVar10 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar7 = uVar7 & uVar16 - 1;
    }
    else if (uVar16 <= uVar7) {
      uVar8 = 0;
      if (uVar16 != 0) {
        uVar8 = uVar7 / uVar16;
      }
      uVar7 = uVar7 - uVar8 * uVar16;
    }
    plVar9 = (long *)(*param_1 + uVar7 * 8);
  }
  else {
    *plVar10 = *plVar9;
  }
  *plVar9 = (long)plVar10;
LAB_00e0efe8:
  param_1[3] = param_1[3] + 1;
  return;
}


