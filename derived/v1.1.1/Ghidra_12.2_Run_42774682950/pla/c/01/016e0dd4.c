/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016e0dd4; name: FUN_016e0dd4
 */


void FUN_016e0dd4(long *param_1,string *param_2,long param_3)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  size_t __n;
  int iVar7;
  ulong uVar8;
  string *psVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  string *psVar14;
  long lVar15;
  string *psVar16;
  ulong uVar17;
  ulong unaff_x28;
  undefined1 auStack_68 [8];
  
  if (param_3 != 0) {
    psVar9 = param_2 + param_3 * 0x30;
    plVar1 = param_1 + 2;
    lVar6 = tpidr_el0;
    do {
      uVar8 = *(ulong *)(param_2 + 8);
      psVar3 = *(string **)(param_2 + 0x10);
      if (((byte)*param_2 & 1) == 0) {
        psVar3 = param_2 + 1;
        uVar8 = (ulong)((byte)*param_2 >> 1);
      }
      uVar8 = FUN_008e8ed4(auStack_68,psVar3,uVar8);
      uVar17 = param_1[1];
      if (uVar17 != 0) {
        uVar10 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
        uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
        uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar10 < 2) {
          unaff_x28 = uVar17 - 1 & uVar8;
        }
        else {
          unaff_x28 = uVar8;
          if (uVar17 <= uVar8) {
            uVar5 = 0;
            if (uVar17 != 0) {
              uVar5 = uVar8 / uVar17;
            }
            unaff_x28 = uVar8 - uVar5 * uVar17;
          }
        }
        plVar12 = *(long **)(*param_1 + unaff_x28 * 8);
        if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
          psVar3 = param_2 + 1;
          __n = (ulong)((byte)*param_2 >> 1);
          if (((byte)*param_2 & 1) != 0) {
            psVar3 = *(string **)(param_2 + 0x10);
            __n = *(size_t *)(param_2 + 8);
          }
          if (uVar10 < 2) {
            if (__n == 0) {
              do {
                if (plVar12[1] != uVar8 && (plVar12[1] & uVar17 - 1) != unaff_x28) break;
                uVar10 = (ulong)(*(byte *)(plVar12 + 2) >> 1);
                if ((*(byte *)(plVar12 + 2) & 1) != 0) {
                  uVar10 = plVar12[3];
                }
                if (uVar10 == 0) goto LAB_016e1058;
                plVar12 = (long *)*plVar12;
              } while (plVar12 != (long *)0x0);
            }
            else {
              do {
                if (plVar12[1] != uVar8 && (plVar12[1] & uVar17 - 1) != unaff_x28) break;
                bVar4 = *(byte *)(plVar12 + 2);
                uVar10 = (ulong)(bVar4 >> 1);
                sVar2 = uVar10;
                if ((bVar4 & 1) != 0) {
                  sVar2 = plVar12[3];
                }
                if (sVar2 == __n) {
                  if ((bVar4 & 1) == 0) {
                    psVar14 = (string *)((long)plVar12 + 0x11);
                    psVar16 = psVar3;
                    while (*psVar14 == *psVar16) {
                      uVar10 = uVar10 - 1;
                      psVar14 = psVar14 + 1;
                      psVar16 = psVar16 + 1;
                      if (uVar10 == 0) goto LAB_016e1058;
                    }
                  }
                  else {
                    iVar7 = memcmp((void *)plVar12[4],psVar3,__n);
                    if (iVar7 == 0) goto LAB_016e1058;
                  }
                }
                plVar12 = (long *)*plVar12;
              } while (plVar12 != (long *)0x0);
            }
          }
          else if (__n == 0) {
            do {
              uVar10 = plVar12[1];
              if (uVar10 != uVar8) {
                if (uVar17 <= uVar10) {
                  uVar5 = 0;
                  if (uVar17 != 0) {
                    uVar5 = uVar10 / uVar17;
                  }
                  uVar10 = uVar10 - uVar5 * uVar17;
                }
                if (uVar10 != unaff_x28) break;
              }
              uVar10 = (ulong)(*(byte *)(plVar12 + 2) >> 1);
              if ((*(byte *)(plVar12 + 2) & 1) != 0) {
                uVar10 = plVar12[3];
              }
              if (uVar10 == 0) goto LAB_016e1058;
              plVar12 = (long *)*plVar12;
            } while (plVar12 != (long *)0x0);
          }
          else {
            do {
              uVar10 = plVar12[1];
              if (uVar10 != uVar8) {
                if (uVar17 <= uVar10) {
                  uVar5 = 0;
                  if (uVar17 != 0) {
                    uVar5 = uVar10 / uVar17;
                  }
                  uVar10 = uVar10 - uVar5 * uVar17;
                }
                if (uVar10 != unaff_x28) break;
              }
              bVar4 = *(byte *)(plVar12 + 2);
              uVar10 = (ulong)(bVar4 >> 1);
              sVar2 = uVar10;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar12[3];
              }
              if (sVar2 == __n) {
                if ((bVar4 & 1) == 0) {
                  psVar14 = (string *)((long)plVar12 + 0x11);
                  psVar16 = psVar3;
                  while (*psVar14 == *psVar16) {
                    uVar10 = uVar10 - 1;
                    psVar14 = psVar14 + 1;
                    psVar16 = psVar16 + 1;
                    if (uVar10 == 0) goto LAB_016e1058;
                  }
                }
                else {
                  iVar7 = memcmp((void *)plVar12[4],psVar3,__n);
                  if (iVar7 == 0) goto LAB_016e1058;
                }
              }
              plVar12 = (long *)*plVar12;
            } while (plVar12 != (long *)0x0);
          }
        }
      }
      plVar12 = DAT_043f1798;
      plVar11 = *(long **)(lVar6 + 0x20);
      if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
        *(long **)(lVar6 + 0x20) = DAT_043f1798;
        plVar11 = plVar12;
      }
      plVar12 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x40,8);
      std::string::string((string *)(plVar12 + 2),param_2);
      lVar13 = *(long *)(param_2 + 0x18);
      lVar15 = *(long *)(param_2 + 0x28);
      plVar12[6] = *(long *)(param_2 + 0x20);
      plVar12[7] = lVar15;
      plVar12[5] = lVar13;
      *plVar12 = 0;
      plVar12[1] = uVar8;
      if ((uVar17 == 0) || (*(float *)(param_1 + 4) * (float)uVar17 < (float)(param_1[3] + 1))) {
        uVar17 = (ulong)(uVar17 < 3 || (uVar17 & uVar17 - 1) != 0) | uVar17 << 1;
        uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar10 <= uVar17) {
          uVar10 = uVar17;
        }
        FUN_008e9ae4(param_1,uVar10);
        uVar17 = param_1[1];
        if ((uVar17 & uVar17 - 1) == 0) {
          unaff_x28 = uVar17 - 1 & uVar8;
        }
        else if (uVar8 < uVar17) {
          unaff_x28 = uVar8;
        }
        else {
          uVar10 = 0;
          if (uVar17 != 0) {
            uVar10 = uVar8 / uVar17;
          }
          unaff_x28 = uVar8 - uVar10 * uVar17;
        }
      }
      lVar13 = *param_1;
      plVar11 = *(long **)(lVar13 + unaff_x28 * 8);
      if (plVar11 == (long *)0x0) {
        *plVar12 = *plVar1;
        *plVar1 = (long)plVar12;
        *(long **)(lVar13 + unaff_x28 * 8) = plVar1;
        if (*plVar12 != 0) {
          uVar8 = *(ulong *)(*plVar12 + 8);
          if ((uVar17 & uVar17 - 1) == 0) {
            uVar8 = uVar8 & uVar17 - 1;
          }
          else if (uVar17 <= uVar8) {
            uVar10 = 0;
            if (uVar17 != 0) {
              uVar10 = uVar8 / uVar17;
            }
            uVar8 = uVar8 - uVar10 * uVar17;
          }
          plVar11 = (long *)(*param_1 + uVar8 * 8);
          goto LAB_016e1048;
        }
      }
      else {
        *plVar12 = *plVar11;
LAB_016e1048:
        *plVar11 = (long)plVar12;
      }
      param_1[3] = param_1[3] + 1;
LAB_016e1058:
      param_2 = param_2 + 0x30;
    } while (param_2 != psVar9);
  }
  return;
}


