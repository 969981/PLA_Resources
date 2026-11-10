/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016c7bfc; name: FUN_016c7bfc
 */


void FUN_016c7bfc(long *param_1,string *param_2,long param_3)

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
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  string *psVar14;
  string *psVar15;
  string *psVar16;
  ulong unaff_x26;
  ulong uVar17;
  undefined1 auStack_68 [8];
  
  if (param_3 != 0) {
    psVar16 = param_2 + param_3 * 0x30;
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
        uVar9 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
        uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
        uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar9 < 2) {
          unaff_x26 = uVar17 - 1 & uVar8;
        }
        else {
          unaff_x26 = uVar8;
          if (uVar17 <= uVar8) {
            uVar5 = 0;
            if (uVar17 != 0) {
              uVar5 = uVar8 / uVar17;
            }
            unaff_x26 = uVar8 - uVar5 * uVar17;
          }
        }
        plVar10 = *(long **)(*param_1 + unaff_x26 * 8);
        if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
          psVar3 = param_2 + 1;
          __n = (ulong)((byte)*param_2 >> 1);
          if (((byte)*param_2 & 1) != 0) {
            psVar3 = *(string **)(param_2 + 0x10);
            __n = *(size_t *)(param_2 + 8);
          }
          if (uVar9 < 2) {
            if (__n == 0) {
              do {
                if (plVar10[1] != uVar8 && (plVar10[1] & uVar17 - 1) != unaff_x26) break;
                uVar9 = (ulong)(*(byte *)(plVar10 + 2) >> 1);
                if ((*(byte *)(plVar10 + 2) & 1) != 0) {
                  uVar9 = plVar10[3];
                }
                if (uVar9 == 0) goto LAB_016c7dac;
                plVar10 = (long *)*plVar10;
              } while (plVar10 != (long *)0x0);
            }
            else {
              do {
                if (plVar10[1] != uVar8 && (plVar10[1] & uVar17 - 1) != unaff_x26) break;
                bVar4 = *(byte *)(plVar10 + 2);
                uVar9 = (ulong)(bVar4 >> 1);
                sVar2 = uVar9;
                if ((bVar4 & 1) != 0) {
                  sVar2 = plVar10[3];
                }
                if (sVar2 == __n) {
                  if ((bVar4 & 1) == 0) {
                    psVar14 = (string *)((long)plVar10 + 0x11);
                    psVar15 = psVar3;
                    while (*psVar14 == *psVar15) {
                      uVar9 = uVar9 - 1;
                      psVar14 = psVar14 + 1;
                      psVar15 = psVar15 + 1;
                      if (uVar9 == 0) goto LAB_016c7dac;
                    }
                  }
                  else {
                    iVar7 = memcmp((void *)plVar10[4],psVar3,__n);
                    if (iVar7 == 0) goto LAB_016c7dac;
                  }
                }
                plVar10 = (long *)*plVar10;
              } while (plVar10 != (long *)0x0);
            }
          }
          else if (__n == 0) {
            do {
              uVar9 = plVar10[1];
              if (uVar9 != uVar8) {
                if (uVar17 <= uVar9) {
                  uVar5 = 0;
                  if (uVar17 != 0) {
                    uVar5 = uVar9 / uVar17;
                  }
                  uVar9 = uVar9 - uVar5 * uVar17;
                }
                if (uVar9 != unaff_x26) break;
              }
              uVar9 = (ulong)(*(byte *)(plVar10 + 2) >> 1);
              if ((*(byte *)(plVar10 + 2) & 1) != 0) {
                uVar9 = plVar10[3];
              }
              if (uVar9 == 0) goto LAB_016c7dac;
              plVar10 = (long *)*plVar10;
            } while (plVar10 != (long *)0x0);
          }
          else {
            do {
              uVar9 = plVar10[1];
              if (uVar9 != uVar8) {
                if (uVar17 <= uVar9) {
                  uVar5 = 0;
                  if (uVar17 != 0) {
                    uVar5 = uVar9 / uVar17;
                  }
                  uVar9 = uVar9 - uVar5 * uVar17;
                }
                if (uVar9 != unaff_x26) break;
              }
              bVar4 = *(byte *)(plVar10 + 2);
              uVar9 = (ulong)(bVar4 >> 1);
              sVar2 = uVar9;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar10[3];
              }
              if (sVar2 == __n) {
                if ((bVar4 & 1) == 0) {
                  psVar14 = (string *)((long)plVar10 + 0x11);
                  psVar15 = psVar3;
                  while (*psVar14 == *psVar15) {
                    uVar9 = uVar9 - 1;
                    psVar14 = psVar14 + 1;
                    psVar15 = psVar15 + 1;
                    if (uVar9 == 0) goto LAB_016c7dac;
                  }
                }
                else {
                  iVar7 = memcmp((void *)plVar10[4],psVar3,__n);
                  if (iVar7 == 0) goto LAB_016c7dac;
                }
              }
              plVar10 = (long *)*plVar10;
            } while (plVar10 != (long *)0x0);
          }
        }
      }
      plVar10 = DAT_043f1798;
      plVar11 = *(long **)(lVar6 + 0x20);
      if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
        *(long **)(lVar6 + 0x20) = DAT_043f1798;
        plVar11 = plVar10;
      }
      plVar10 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x40,8);
      std::string::string((string *)(plVar10 + 2),param_2);
      lVar12 = *(long *)(param_2 + 0x18);
      lVar13 = *(long *)(param_2 + 0x28);
      plVar10[6] = *(long *)(param_2 + 0x20);
      plVar10[7] = lVar13;
      plVar10[5] = lVar12;
      *plVar10 = 0;
      plVar10[1] = uVar8;
      if ((uVar17 == 0) || (*(float *)(param_1 + 4) * (float)uVar17 < (float)(param_1[3] + 1))) {
        uVar17 = (ulong)(uVar17 < 3 || (uVar17 & uVar17 - 1) != 0) | uVar17 << 1;
        uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar9 <= uVar17) {
          uVar9 = uVar17;
        }
        FUN_008e9ae4(param_1,uVar9);
        uVar17 = param_1[1];
        if ((uVar17 & uVar17 - 1) == 0) {
          unaff_x26 = uVar17 - 1 & uVar8;
        }
        else if (uVar8 < uVar17) {
          unaff_x26 = uVar8;
        }
        else {
          uVar9 = 0;
          if (uVar17 != 0) {
            uVar9 = uVar8 / uVar17;
          }
          unaff_x26 = uVar8 - uVar9 * uVar17;
        }
      }
      lVar12 = *param_1;
      plVar11 = *(long **)(lVar12 + unaff_x26 * 8);
      if (plVar11 == (long *)0x0) {
        *plVar10 = *plVar1;
        *plVar1 = (long)plVar10;
        *(long **)(lVar12 + unaff_x26 * 8) = plVar1;
        if (*plVar10 != 0) {
          uVar8 = *(ulong *)(*plVar10 + 8);
          if ((uVar17 & uVar17 - 1) == 0) {
            uVar8 = uVar8 & uVar17 - 1;
          }
          else if (uVar17 <= uVar8) {
            uVar9 = 0;
            if (uVar17 != 0) {
              uVar9 = uVar8 / uVar17;
            }
            uVar8 = uVar8 - uVar9 * uVar17;
          }
          plVar11 = (long *)(*param_1 + uVar8 * 8);
          goto LAB_016c7d9c;
        }
      }
      else {
        *plVar10 = *plVar11;
LAB_016c7d9c:
        *plVar11 = (long)plVar10;
      }
      param_1[3] = param_1[3] + 1;
LAB_016c7dac:
      param_2 = param_2 + 0x30;
    } while (param_2 != psVar16);
  }
  return;
}


