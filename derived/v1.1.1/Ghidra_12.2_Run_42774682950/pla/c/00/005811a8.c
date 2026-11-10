/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005811a8; name: FUN_005811a8
 */


/* WARNING: Type propagation algorithm not settling */

long * FUN_005811a8(long *param_1,byte *param_2)

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
  undefined8 *puVar9;
  ulong uVar10;
  ulong unaff_x24;
  long *plVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  undefined1 auStack_70 [8];
  long *local_68 [3];
  byte *pbStack_48;
  
  uVar10 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar10 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 005811e0 to 005811e7 has its CatchHandler @ 005815c8 */
  pbStack_48 = param_2;
  uVar6 = FUN_008e8ed4(local_68,pbVar2,uVar10);
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar13 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar10 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar10 
                                                  >> 8)),POPCOUNT((char)uVar10))))))));
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar7 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x24 = uVar10 - 1 & uVar6;
      puVar9 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar6;
      if (uVar10 <= uVar6) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar6 / uVar10;
        }
        unaff_x24 = uVar6 - uVar4 * uVar10;
      }
      puVar9 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    }
    if ((puVar9 != (undefined8 *)0x0) && (plVar11 = (long *)*puVar9, plVar11 != (long *)0x0)) {
      pbVar2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
      if ((*param_2 & 1) != 0) {
        pbVar2 = *(byte **)(param_2 + 0x10);
        __n = *(size_t *)(param_2 + 8);
      }
      if (uVar7 < 2) {
        if (__n == 0) {
          do {
            if (plVar11[1] != uVar6 && (plVar11[1] & uVar10 - 1) != unaff_x24) break;
            uVar7 = (ulong)(*(byte *)(plVar11 + 2) >> 1);
            if ((*(byte *)(plVar11 + 2) & 1) != 0) {
              uVar7 = plVar11[3];
            }
            if (uVar7 == 0) goto LAB_005814e8;
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
        else {
          do {
            if (plVar11[1] != uVar6 && (plVar11[1] & uVar10 - 1) != unaff_x24) break;
            bVar3 = *(byte *)(plVar11 + 2);
            sVar1 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar11[3];
            }
            if (sVar1 == __n) {
              if ((bVar3 & 1) == 0) {
                uVar7 = 0;
                while (*(byte *)((long)plVar11 + uVar7 + 0x11) == pbVar2[uVar7]) {
                  uVar7 = uVar7 + 1;
                  if (bVar3 >> 1 == uVar7) goto LAB_005814e8;
                }
              }
              else {
                iVar5 = memcmp((void *)plVar11[4],pbVar2,__n);
                if (iVar5 == 0) goto LAB_005814e8;
              }
            }
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
      }
      else if (__n == 0) {
        do {
          uVar7 = plVar11[1];
          if (uVar7 != uVar6) {
            if (uVar10 <= uVar7) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar7 / uVar10;
              }
              uVar7 = uVar7 - uVar4 * uVar10;
            }
            if (uVar7 != unaff_x24) break;
          }
          uVar7 = (ulong)(*(byte *)(plVar11 + 2) >> 1);
          if ((*(byte *)(plVar11 + 2) & 1) != 0) {
            uVar7 = plVar11[3];
          }
          if (uVar7 == 0) goto LAB_005814e8;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar11[1];
          if (uVar7 != uVar6) {
            if (uVar10 <= uVar7) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar7 / uVar10;
              }
              uVar7 = uVar7 - uVar4 * uVar10;
            }
            if (uVar7 != unaff_x24) break;
          }
          bVar3 = *(byte *)(plVar11 + 2);
          sVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            sVar1 = plVar11[3];
          }
          if (sVar1 == __n) {
            if ((bVar3 & 1) == 0) {
              uVar7 = 0;
              while (*(byte *)((long)plVar11 + uVar7 + 0x11) == pbVar2[uVar7]) {
                uVar7 = uVar7 + 1;
                if (bVar3 >> 1 == uVar7) goto LAB_005814e8;
              }
            }
            else {
              iVar5 = memcmp((void *)plVar11[4],pbVar2,__n);
              if (iVar5 == 0) goto LAB_005814e8;
            }
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  FUN_00581998(local_68,param_1,uVar6,&DAT_03a33f6b,&pbStack_48,auStack_70);
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar10) {
      uVar7 = uVar10;
    }
                    /* try { // try from 00581354 to 0058135b has its CatchHandler @ 00581580 */
    FUN_00581ab4(param_1,uVar7);
    uVar10 = param_1[1];
    plVar11 = local_68[0];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar6;
      plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    else if (uVar6 < uVar10) {
      plVar8 = *(long **)(*param_1 + uVar6 * 8);
      unaff_x24 = uVar6;
    }
    else {
      uVar7 = 0;
      if (uVar10 != 0) {
        uVar7 = uVar6 / uVar10;
      }
      unaff_x24 = uVar6 - uVar7 * uVar10;
      plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    }
  }
  else {
    plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    plVar11 = local_68[0];
  }
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar11 = *plVar8;
    *plVar8 = (long)plVar11;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar8;
    if (*plVar11 != 0) {
      uVar6 = *(ulong *)(*plVar11 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar6 = uVar6 & uVar10 - 1;
      }
      else if (uVar10 <= uVar6) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar6 / uVar10;
        }
        uVar6 = uVar6 - uVar7 * uVar10;
      }
      *(long **)(*param_1 + uVar6 * 8) = plVar11;
    }
  }
  else {
    *plVar11 = *plVar8;
    *plVar8 = (long)plVar11;
  }
  param_1[3] = param_1[3] + 1;
LAB_005814e8:
  return plVar11 + 5;
}


