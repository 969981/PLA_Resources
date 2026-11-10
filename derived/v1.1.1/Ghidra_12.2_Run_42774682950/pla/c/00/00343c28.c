/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00343c28; name: FUN_00343c28
 */


void FUN_00343c28(long *param_1,byte *param_2)

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
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong unaff_x25;
  undefined2 uVar12;
  undefined8 uVar13;
  long *local_68 [3];
  
  uVar11 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar11 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 00343c60 to 00343c67 has its CatchHandler @ 00344044 */
  uVar6 = FUN_008e8ed4(local_68,pbVar2,uVar11);
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar13 = CONCAT17(POPCOUNT((char)(uVar11 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar11 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar11 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar11 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar11 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar11 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar11 
                                                  >> 8)),POPCOUNT((char)uVar11))))))));
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar7 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x25 = uVar11 - 1 & uVar6;
      plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
    }
    else {
      unaff_x25 = uVar6;
      if (uVar11 <= uVar6) {
        uVar4 = 0;
        if (uVar11 != 0) {
          uVar4 = uVar6 / uVar11;
        }
        unaff_x25 = uVar6 - uVar4 * uVar11;
      }
      plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
    }
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      pbVar2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
      if ((*param_2 & 1) != 0) {
        pbVar2 = *(byte **)(param_2 + 0x10);
        __n = *(size_t *)(param_2 + 8);
      }
      if (uVar7 < 2) {
        if (__n == 0) {
          do {
            if (plVar8[1] != uVar6 && (plVar8[1] & uVar11 - 1) != unaff_x25) break;
            uVar7 = (ulong)(*(byte *)(plVar8 + 2) >> 1);
            if ((*(byte *)(plVar8 + 2) & 1) != 0) {
              uVar7 = plVar8[3];
            }
            if (uVar7 == 0) {
              return;
            }
            plVar8 = (long *)*plVar8;
          } while (plVar8 != (long *)0x0);
        }
        else {
          do {
            if (plVar8[1] != uVar6 && (plVar8[1] & uVar11 - 1) != unaff_x25) break;
            bVar3 = *(byte *)(plVar8 + 2);
            uVar7 = (ulong)(bVar3 >> 1);
            sVar1 = uVar7;
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar8[3];
            }
            if (sVar1 == __n) {
              if ((bVar3 & 1) == 0) {
                pbVar9 = (byte *)((long)plVar8 + 0x11);
                pbVar10 = pbVar2;
                while (*pbVar9 == *pbVar10) {
                  uVar7 = uVar7 - 1;
                  pbVar9 = pbVar9 + 1;
                  pbVar10 = pbVar10 + 1;
                  if (uVar7 == 0) {
                    return;
                  }
                }
              }
              else {
                iVar5 = memcmp((void *)plVar8[4],pbVar2,__n);
                if (iVar5 == 0) {
                  return;
                }
              }
            }
            plVar8 = (long *)*plVar8;
          } while (plVar8 != (long *)0x0);
        }
      }
      else if (__n == 0) {
        do {
          uVar7 = plVar8[1];
          if (uVar7 != uVar6) {
            if (uVar11 <= uVar7) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar7 / uVar11;
              }
              uVar7 = uVar7 - uVar4 * uVar11;
            }
            if (uVar7 != unaff_x25) break;
          }
          uVar7 = (ulong)(*(byte *)(plVar8 + 2) >> 1);
          if ((*(byte *)(plVar8 + 2) & 1) != 0) {
            uVar7 = plVar8[3];
          }
          if (uVar7 == 0) {
            return;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar8[1];
          if (uVar7 != uVar6) {
            if (uVar11 <= uVar7) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar7 / uVar11;
              }
              uVar7 = uVar7 - uVar4 * uVar11;
            }
            if (uVar7 != unaff_x25) break;
          }
          bVar3 = *(byte *)(plVar8 + 2);
          uVar7 = (ulong)(bVar3 >> 1);
          sVar1 = uVar7;
          if ((bVar3 & 1) != 0) {
            sVar1 = plVar8[3];
          }
          if (sVar1 == __n) {
            if ((bVar3 & 1) == 0) {
              pbVar9 = (byte *)((long)plVar8 + 0x11);
              pbVar10 = pbVar2;
              while (*pbVar9 == *pbVar10) {
                uVar7 = uVar7 - 1;
                pbVar9 = pbVar9 + 1;
                pbVar10 = pbVar10 + 1;
                if (uVar7 == 0) {
                  return;
                }
              }
            }
            else {
              iVar5 = memcmp((void *)plVar8[4],pbVar2,__n);
              if (iVar5 == 0) {
                return;
              }
            }
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  FUN_0036b070(local_68,param_1,uVar6,param_2);
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar11) {
      uVar7 = uVar11;
    }
                    /* try { // try from 00343dc8 to 00343dcf has its CatchHandler @ 00343ffc */
    FUN_00366e2c(param_1,uVar7);
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x25 = uVar11 - 1 & uVar6;
      plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
    }
    else if (uVar6 < uVar11) {
      plVar8 = *(long **)(*param_1 + uVar6 * 8);
      unaff_x25 = uVar6;
    }
    else {
      uVar7 = 0;
      if (uVar11 != 0) {
        uVar7 = uVar6 / uVar11;
      }
      unaff_x25 = uVar6 - uVar7 * uVar11;
      plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
    }
  }
  else {
    plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
  }
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *local_68[0] = *plVar8;
    *plVar8 = (long)local_68[0];
    *(long **)(*param_1 + unaff_x25 * 8) = plVar8;
    if (*local_68[0] != 0) {
      uVar6 = *(ulong *)(*local_68[0] + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar6 = uVar6 & uVar11 - 1;
      }
      else if (uVar11 <= uVar6) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar6 / uVar11;
        }
        uVar6 = uVar6 - uVar7 * uVar11;
      }
      *(long **)(*param_1 + uVar6 * 8) = local_68[0];
    }
  }
  else {
    *local_68[0] = *plVar8;
    *plVar8 = (long)local_68[0];
  }
  param_1[3] = param_1[3] + 1;
  return;
}


