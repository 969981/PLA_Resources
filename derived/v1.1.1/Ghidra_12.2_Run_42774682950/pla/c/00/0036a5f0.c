/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0036a5f0; name: FUN_0036a5f0
 */


undefined4 FUN_0036a5f0(long *param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  long *plVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *__s2;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  long *plVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  __s2 = (byte *)*param_2;
  bVar3 = *__s2;
  if (bVar3 == 0) {
    uVar8 = 0;
    uVar7 = param_1[1];
  }
  else {
    uVar8 = 0;
    pbVar5 = __s2;
    do {
      pbVar5 = pbVar5 + 1;
      uVar8 = uVar8 * 5 + (ulong)bVar3;
      bVar3 = *pbVar5;
    } while (bVar3 != 0);
    uVar7 = param_1[1];
  }
  if (uVar7 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar7 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar7 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar7 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar7 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar7 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar7 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar7 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar7))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar6 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x24 = uVar7 - 1 & uVar8;
      plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar1 = 0;
        if (uVar7 != 0) {
          uVar1 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar1 * uVar7;
      }
      plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    if (plVar9 != (long *)0x0) {
      if (uVar6 < 2) {
        while ((plVar9 = (long *)*plVar9, plVar9 != (long *)0x0 &&
               (plVar9[1] == uVar8 || (plVar9[1] & uVar7 - 1) == unaff_x24))) {
          iVar2 = strcmp((char *)plVar9[2],(char *)__s2);
          if (iVar2 == 0) {
            return 0;
          }
        }
      }
      else {
        while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
          uVar6 = plVar9[1];
          if (uVar6 != uVar8) {
            if (uVar7 <= uVar6) {
              uVar1 = 0;
              if (uVar7 != 0) {
                uVar1 = uVar6 / uVar7;
              }
              uVar6 = uVar6 - uVar1 * uVar7;
            }
            if (uVar6 != unaff_x24) break;
          }
          iVar2 = strcmp((char *)plVar9[2],(char *)__s2);
          if (iVar2 == 0) {
            return 0;
          }
        }
      }
    }
  }
  plVar9 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x28);
  lVar13 = param_2[1];
  lVar12 = *param_2;
  plVar9[4] = param_2[2];
  *plVar9 = 0;
  plVar9[1] = uVar8;
  plVar9[3] = lVar13;
  plVar9[2] = lVar12;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar7 = (ulong)(uVar7 < 3 || (uVar7 & uVar7 - 1) != 0) | uVar7 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
                    /* try { // try from 0036a7a0 to 0036a7a7 has its CatchHandler @ 0036a878 */
    FUN_00367518(param_1,uVar6);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar8 = uVar7 - 1 & uVar8;
      plVar4 = *(long **)(*param_1 + uVar8 * 8);
      goto joined_r0x0036a838;
    }
    if (uVar7 <= uVar8) {
      uVar6 = 0;
      if (uVar7 != 0) {
        uVar6 = uVar8 / uVar7;
      }
      uVar8 = uVar8 - uVar6 * uVar7;
      plVar4 = *(long **)(*param_1 + uVar8 * 8);
      goto joined_r0x0036a838;
    }
    plVar4 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar4 == (long *)0x0) goto LAB_0036a7e4;
LAB_0036a768:
    *plVar9 = *plVar4;
  }
  else {
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    uVar8 = unaff_x24;
joined_r0x0036a838:
    if (plVar4 != (long *)0x0) goto LAB_0036a768;
LAB_0036a7e4:
    plVar4 = param_1 + 2;
    *plVar9 = *plVar4;
    *plVar4 = (long)plVar9;
    *(long **)(*param_1 + uVar8 * 8) = plVar4;
    if (*plVar9 == 0) goto LAB_0036a850;
    uVar8 = *(ulong *)(*plVar9 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar8 = uVar8 & uVar7 - 1;
    }
    else if (uVar7 <= uVar8) {
      uVar6 = 0;
      if (uVar7 != 0) {
        uVar6 = uVar8 / uVar7;
      }
      uVar8 = uVar8 - uVar6 * uVar7;
    }
    plVar4 = (long *)(*param_1 + uVar8 * 8);
  }
  *plVar4 = (long)plVar9;
LAB_0036a850:
  param_1[3] = param_1[3] + 1;
  return 1;
}


