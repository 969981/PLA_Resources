/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00341a64; name: FUN_00341a64
 */


long * FUN_00341a64(long *param_1,byte *param_2)

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
  long *plVar10;
  ulong uVar11;
  ulong unaff_x26;
  undefined2 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_58 [8];
  
  uVar11 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar11 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 00341a9c to 00341aa3 has its CatchHandler @ 00341e74 */
  uVar6 = FUN_008e8ed4(auStack_58,pbVar2,uVar11);
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
      unaff_x26 = uVar11 - 1 & uVar6;
      puVar9 = *(undefined8 **)(*param_1 + unaff_x26 * 8);
    }
    else {
      unaff_x26 = uVar6;
      if (uVar11 <= uVar6) {
        uVar4 = 0;
        if (uVar11 != 0) {
          uVar4 = uVar6 / uVar11;
        }
        unaff_x26 = uVar6 - uVar4 * uVar11;
      }
      puVar9 = *(undefined8 **)(*param_1 + unaff_x26 * 8);
    }
    if ((puVar9 != (undefined8 *)0x0) && (plVar10 = (long *)*puVar9, plVar10 != (long *)0x0)) {
      pbVar2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
      if ((*param_2 & 1) != 0) {
        pbVar2 = *(byte **)(param_2 + 0x10);
        __n = *(size_t *)(param_2 + 8);
      }
      if (uVar7 < 2) {
        if (__n == 0) {
          do {
            if (plVar10[1] != uVar6 && (plVar10[1] & uVar11 - 1) != unaff_x26) break;
            uVar7 = (ulong)(*(byte *)(plVar10 + 2) >> 1);
            if ((*(byte *)(plVar10 + 2) & 1) != 0) {
              uVar7 = plVar10[3];
            }
            if (uVar7 == 0) goto LAB_00341da4;
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            if (plVar10[1] != uVar6 && (plVar10[1] & uVar11 - 1) != unaff_x26) break;
            bVar3 = *(byte *)(plVar10 + 2);
            sVar1 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar10[3];
            }
            if (sVar1 == __n) {
              if ((bVar3 & 1) == 0) {
                uVar7 = 0;
                while (*(byte *)((long)plVar10 + uVar7 + 0x11) == pbVar2[uVar7]) {
                  uVar7 = uVar7 + 1;
                  if (bVar3 >> 1 == uVar7) goto LAB_00341da4;
                }
              }
              else {
                iVar5 = memcmp((void *)plVar10[4],pbVar2,__n);
                if (iVar5 == 0) goto LAB_00341da4;
              }
            }
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
      else if (__n == 0) {
        do {
          uVar7 = plVar10[1];
          if (uVar7 != uVar6) {
            if (uVar11 <= uVar7) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar7 / uVar11;
              }
              uVar7 = uVar7 - uVar4 * uVar11;
            }
            if (uVar7 != unaff_x26) break;
          }
          uVar7 = (ulong)(*(byte *)(plVar10 + 2) >> 1);
          if ((*(byte *)(plVar10 + 2) & 1) != 0) {
            uVar7 = plVar10[3];
          }
          if (uVar7 == 0) goto LAB_00341da4;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar10[1];
          if (uVar7 != uVar6) {
            if (uVar11 <= uVar7) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar7 / uVar11;
              }
              uVar7 = uVar7 - uVar4 * uVar11;
            }
            if (uVar7 != unaff_x26) break;
          }
          bVar3 = *(byte *)(plVar10 + 2);
          sVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            sVar1 = plVar10[3];
          }
          if (sVar1 == __n) {
            if ((bVar3 & 1) == 0) {
              uVar7 = 0;
              while (*(byte *)((long)plVar10 + uVar7 + 0x11) == pbVar2[uVar7]) {
                uVar7 = uVar7 + 1;
                if (bVar3 >> 1 == uVar7) goto LAB_00341da4;
              }
            }
            else {
              iVar5 = memcmp((void *)plVar10[4],pbVar2,__n);
              if (iVar5 == 0) goto LAB_00341da4;
            }
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  plVar10 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  lVar15 = *(long *)(param_2 + 8);
  lVar14 = *(long *)param_2;
  plVar10[4] = *(long *)(param_2 + 0x10);
  plVar10[3] = lVar15;
  plVar10[2] = lVar14;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  plVar10[5] = 0;
  *plVar10 = 0;
  plVar10[1] = uVar6;
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar11) {
      uVar7 = uVar11;
    }
                    /* try { // try from 00341c1c to 00341c23 has its CatchHandler @ 00341e3c */
    FUN_00368c98(param_1,uVar7);
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x26 = uVar11 - 1 & uVar6;
      plVar8 = *(long **)(*param_1 + unaff_x26 * 8);
      goto joined_r0x00341c48;
    }
    if (uVar6 < uVar11) {
      plVar8 = *(long **)(*param_1 + uVar6 * 8);
      unaff_x26 = uVar6;
      goto joined_r0x00341c48;
    }
    uVar7 = 0;
    if (uVar11 != 0) {
      uVar7 = uVar6 / uVar11;
    }
    unaff_x26 = uVar6 - uVar7 * uVar11;
    plVar8 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar8 != (long *)0x0) goto LAB_00341be0;
LAB_00341c60:
    plVar8 = param_1 + 2;
    *plVar10 = *plVar8;
    *plVar8 = (long)plVar10;
    *(long **)(*param_1 + unaff_x26 * 8) = plVar8;
    if (*plVar10 == 0) goto LAB_00341d98;
    uVar6 = *(ulong *)(*plVar10 + 8);
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
    plVar8 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    plVar8 = *(long **)(*param_1 + unaff_x26 * 8);
joined_r0x00341c48:
    if (plVar8 == (long *)0x0) goto LAB_00341c60;
LAB_00341be0:
    *plVar10 = *plVar8;
  }
  *plVar8 = (long)plVar10;
LAB_00341d98:
  param_1[3] = param_1[3] + 1;
LAB_00341da4:
  return plVar10 + 5;
}


