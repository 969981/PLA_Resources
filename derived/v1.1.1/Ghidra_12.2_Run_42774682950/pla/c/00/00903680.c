/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00903680; name: FUN_00903680
 */


void FUN_00903680(long *param_1,string *param_2,string *param_3)

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
  string *psVar12;
  long lVar13;
  string *psVar14;
  long lVar15;
  ulong uVar16;
  ulong unaff_x28;
  undefined1 auStack_68 [8];
  
  if (param_2 != param_3) {
    lVar6 = tpidr_el0;
    plVar1 = param_1 + 2;
    do {
      uVar8 = *(ulong *)(param_2 + 8);
      psVar3 = *(string **)(param_2 + 0x10);
      if (((byte)*param_2 & 1) == 0) {
        psVar3 = param_2 + 1;
        uVar8 = (ulong)((byte)*param_2 >> 1);
      }
      uVar8 = FUN_008e8ed4(auStack_68,psVar3,uVar8);
      uVar16 = param_1[1];
      if (uVar16 != 0) {
        uVar9 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
        uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
        uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar9 < 2) {
          unaff_x28 = uVar16 - 1 & uVar8;
        }
        else {
          unaff_x28 = uVar8;
          if (uVar16 <= uVar8) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar8 / uVar16;
            }
            unaff_x28 = uVar8 - uVar5 * uVar16;
          }
        }
        plVar11 = *(long **)(*param_1 + unaff_x28 * 8);
        if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
          psVar3 = param_2 + 1;
          __n = (ulong)((byte)*param_2 >> 1);
          if (((byte)*param_2 & 1) != 0) {
            psVar3 = *(string **)(param_2 + 0x10);
            __n = *(size_t *)(param_2 + 8);
          }
          if (uVar9 < 2) {
            if (__n == 0) {
              do {
                if (plVar11[1] != uVar8 && (plVar11[1] & uVar16 - 1) != unaff_x28) break;
                uVar9 = (ulong)(*(byte *)(plVar11 + 2) >> 1);
                if ((*(byte *)(plVar11 + 2) & 1) != 0) {
                  uVar9 = plVar11[3];
                }
                if (uVar9 == 0) goto LAB_0090394c;
                plVar11 = (long *)*plVar11;
              } while (plVar11 != (long *)0x0);
            }
            else {
              do {
                if (plVar11[1] != uVar8 && (plVar11[1] & uVar16 - 1) != unaff_x28) break;
                bVar4 = *(byte *)(plVar11 + 2);
                uVar9 = (ulong)(bVar4 >> 1);
                sVar2 = uVar9;
                if ((bVar4 & 1) != 0) {
                  sVar2 = plVar11[3];
                }
                if (sVar2 == __n) {
                  if ((bVar4 & 1) == 0) {
                    psVar12 = (string *)((long)plVar11 + 0x11);
                    psVar14 = psVar3;
                    while (*psVar12 == *psVar14) {
                      uVar9 = uVar9 - 1;
                      psVar12 = psVar12 + 1;
                      psVar14 = psVar14 + 1;
                      if (uVar9 == 0) goto LAB_0090394c;
                    }
                  }
                  else {
                    iVar7 = memcmp((void *)plVar11[4],psVar3,__n);
                    if (iVar7 == 0) goto LAB_0090394c;
                  }
                }
                plVar11 = (long *)*plVar11;
              } while (plVar11 != (long *)0x0);
            }
          }
          else if (__n == 0) {
            do {
              uVar9 = plVar11[1];
              if (uVar9 != uVar8) {
                if (uVar16 <= uVar9) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar9 / uVar16;
                  }
                  uVar9 = uVar9 - uVar5 * uVar16;
                }
                if (uVar9 != unaff_x28) break;
              }
              uVar9 = (ulong)(*(byte *)(plVar11 + 2) >> 1);
              if ((*(byte *)(plVar11 + 2) & 1) != 0) {
                uVar9 = plVar11[3];
              }
              if (uVar9 == 0) goto LAB_0090394c;
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
          else {
            do {
              uVar9 = plVar11[1];
              if (uVar9 != uVar8) {
                if (uVar16 <= uVar9) {
                  uVar5 = 0;
                  if (uVar16 != 0) {
                    uVar5 = uVar9 / uVar16;
                  }
                  uVar9 = uVar9 - uVar5 * uVar16;
                }
                if (uVar9 != unaff_x28) break;
              }
              bVar4 = *(byte *)(plVar11 + 2);
              uVar9 = (ulong)(bVar4 >> 1);
              sVar2 = uVar9;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar11[3];
              }
              if (sVar2 == __n) {
                if ((bVar4 & 1) == 0) {
                  psVar12 = (string *)((long)plVar11 + 0x11);
                  psVar14 = psVar3;
                  while (*psVar12 == *psVar14) {
                    uVar9 = uVar9 - 1;
                    psVar12 = psVar12 + 1;
                    psVar14 = psVar14 + 1;
                    if (uVar9 == 0) goto LAB_0090394c;
                  }
                }
                else {
                  iVar7 = memcmp((void *)plVar11[4],psVar3,__n);
                  if (iVar7 == 0) goto LAB_0090394c;
                }
              }
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
        }
      }
      plVar11 = DAT_043f1798;
      plVar10 = *(long **)(lVar6 + 0x20);
      if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
        *(long **)(lVar6 + 0x20) = DAT_043f1798;
        plVar10 = plVar11;
      }
      plVar11 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x40,8);
      std::string::string((string *)(plVar11 + 2),param_2);
      lVar13 = *(long *)(param_2 + 0x18);
      lVar15 = *(long *)(param_2 + 0x28);
      plVar11[6] = *(long *)(param_2 + 0x20);
      plVar11[7] = lVar15;
      plVar11[5] = lVar13;
      *plVar11 = 0;
      plVar11[1] = uVar8;
      if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(param_1[3] + 1))) {
        uVar16 = (ulong)(uVar16 < 3 || (uVar16 & uVar16 - 1) != 0) | uVar16 << 1;
        uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar9 <= uVar16) {
          uVar9 = uVar16;
        }
        FUN_008e9ae4(param_1,uVar9);
        uVar16 = param_1[1];
        if ((uVar16 & uVar16 - 1) == 0) {
          unaff_x28 = uVar16 - 1 & uVar8;
        }
        else if (uVar8 < uVar16) {
          unaff_x28 = uVar8;
        }
        else {
          uVar9 = 0;
          if (uVar16 != 0) {
            uVar9 = uVar8 / uVar16;
          }
          unaff_x28 = uVar8 - uVar9 * uVar16;
        }
      }
      lVar13 = *param_1;
      plVar10 = *(long **)(lVar13 + unaff_x28 * 8);
      if (plVar10 == (long *)0x0) {
        *plVar11 = *plVar1;
        *plVar1 = (long)plVar11;
        *(long **)(lVar13 + unaff_x28 * 8) = plVar1;
        if (*plVar11 != 0) {
          uVar8 = *(ulong *)(*plVar11 + 8);
          if ((uVar16 & uVar16 - 1) == 0) {
            uVar8 = uVar8 & uVar16 - 1;
          }
          else if (uVar16 <= uVar8) {
            uVar9 = 0;
            if (uVar16 != 0) {
              uVar9 = uVar8 / uVar16;
            }
            uVar8 = uVar8 - uVar9 * uVar16;
          }
          plVar10 = (long *)(*param_1 + uVar8 * 8);
          goto LAB_0090393c;
        }
      }
      else {
        *plVar11 = *plVar10;
LAB_0090393c:
        *plVar10 = (long)plVar11;
      }
      param_1[3] = param_1[3] + 1;
LAB_0090394c:
      param_2 = param_2 + 0x30;
    } while (param_2 != param_3);
  }
  return;
}


