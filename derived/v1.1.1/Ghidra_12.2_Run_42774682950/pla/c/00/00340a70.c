/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00340a70; name: FUN_00340a70
 */


undefined8 FUN_00340a70(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x23;
  long lVar8;
  long lVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  
  lVar13 = param_2[1];
  iVar12 = (int)lVar13;
  lVar8 = *param_2;
  lVar9 = *param_3;
  uVar6 = param_1[1];
  uVar7 = (long)iVar12 * 0x1000193 ^ lVar8 * 0x100011b;
  if (uVar6 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar6 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar6 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar6 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar6 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar6 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar6 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar6 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar6))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar5 < 2) {
      unaff_x23 = uVar6 - 1 & uVar7;
      plVar3 = *(long **)(*param_1 + unaff_x23 * 8);
    }
    else {
      unaff_x23 = uVar7;
      if (uVar6 <= uVar7) {
        uVar2 = 0;
        if (uVar6 != 0) {
          uVar2 = uVar7 / uVar6;
        }
        unaff_x23 = uVar7 - uVar2 * uVar6;
      }
      plVar3 = *(long **)(*param_1 + unaff_x23 * 8);
    }
    if (plVar3 != (long *)0x0) {
      if (uVar5 < 2) {
        do {
          plVar3 = (long *)*plVar3;
          if ((plVar3 == (long *)0x0) ||
             (plVar3[1] != uVar7 && (plVar3[1] & uVar6 - 1) != unaff_x23)) goto LAB_00340b98;
        } while (plVar3[2] != lVar8 || *(int *)(plVar3 + 3) != iVar12);
      }
      else {
        do {
          plVar3 = (long *)*plVar3;
          if (plVar3 == (long *)0x0) goto LAB_00340b98;
          uVar5 = plVar3[1];
          if (uVar5 != uVar7) {
            if (uVar6 <= uVar5) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar5 / uVar6;
              }
              uVar5 = uVar5 - uVar2 * uVar6;
            }
            if (uVar5 != unaff_x23) goto LAB_00340b98;
          }
        } while (plVar3[2] != lVar8 || (int)plVar3[3] != iVar12);
      }
      return 0;
    }
  }
LAB_00340b98:
  plVar3 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x28);
  plVar3[1] = uVar7;
  plVar3[2] = lVar8;
  plVar3[4] = lVar9;
  *plVar3 = 0;
  plVar3[3] = lVar13;
  if ((uVar6 == 0) || (*(float *)(param_1 + 4) * (float)uVar6 < (float)(param_1[3] + 1))) {
    uVar6 = (ulong)(uVar6 < 3 || (uVar6 & uVar6 - 1) != 0) | uVar6 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
      uVar6 = param_1[1];
      bVar1 = uVar6 < 3;
      if (1 < uVar6) goto LAB_00340c40;
LAB_00340cf8:
      FUN_003689fc(param_1,uVar5);
      uVar6 = param_1[1];
      uVar2 = uVar6 - 1;
      uVar5 = uVar6 & uVar2;
    }
    else {
      if ((uVar5 & uVar5 - 1) != 0) {
                    /* try { // try from 00340cd8 to 00340dbb has its CatchHandler @ 00340dd4 */
        uVar5 = std::__next_prime(uVar5);
      }
      uVar6 = param_1[1];
      bVar1 = uVar6 <= uVar5;
      if (uVar6 < uVar5) goto LAB_00340cf8;
LAB_00340c40:
      if (!bVar1) {
        uVar2 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        if ((uVar6 < 3) ||
           (uVar11 = CONCAT17(POPCOUNT((char)(uVar6 >> 0x38)),
                              CONCAT16(POPCOUNT((char)(uVar6 >> 0x30)),
                                       CONCAT15(POPCOUNT((char)(uVar6 >> 0x28)),
                                                CONCAT14(POPCOUNT((char)(uVar6 >> 0x20)),
                                                         CONCAT13(POPCOUNT((char)(uVar6 >> 0x18)),
                                                                  CONCAT12(POPCOUNT((char)(uVar6 >> 
                                                  0x10)),CONCAT11(POPCOUNT((char)(uVar6 >> 8)),
                                                                  POPCOUNT((char)uVar6)))))))),
           uVar10 = NEON_uaddlv(uVar11,1), 1 < (uint)CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10))
           ) {
          uVar2 = std::__next_prime(uVar2);
          if (uVar2 <= uVar5) {
            uVar2 = uVar5;
          }
        }
        else {
          if (1 < uVar2) {
            uVar2 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar2 - 1) & 0x3f);
          }
          if (uVar2 <= uVar5) {
            uVar2 = uVar5;
          }
        }
        uVar5 = uVar2;
        if (uVar5 < uVar6) goto LAB_00340cf8;
      }
      uVar6 = param_1[1];
      uVar2 = uVar6 - 1;
      uVar5 = uVar6 & uVar2;
    }
    if (uVar5 == 0) {
      unaff_x23 = uVar2 & uVar7;
      plVar4 = *(long **)(*param_1 + unaff_x23 * 8);
      goto joined_r0x00340cc8;
    }
    if (uVar7 < uVar6) {
      plVar4 = *(long **)(*param_1 + uVar7 * 8);
      unaff_x23 = uVar7;
      goto joined_r0x00340cc8;
    }
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = uVar7 / uVar6;
    }
    unaff_x23 = uVar7 - uVar5 * uVar6;
    plVar4 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar4 == (long *)0x0) goto LAB_00340d1c;
LAB_00340bf0:
    *plVar3 = *plVar4;
  }
  else {
    plVar4 = *(long **)(*param_1 + unaff_x23 * 8);
joined_r0x00340cc8:
    if (plVar4 != (long *)0x0) goto LAB_00340bf0;
LAB_00340d1c:
    plVar4 = param_1 + 2;
    *plVar3 = *plVar4;
    *plVar4 = (long)plVar3;
    *(long **)(*param_1 + unaff_x23 * 8) = plVar4;
    if (*plVar3 == 0) goto LAB_00340d90;
    uVar7 = *(ulong *)(*plVar3 + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar7 = uVar7 & uVar6 - 1;
    }
    else if (uVar6 <= uVar7) {
      uVar5 = 0;
      if (uVar6 != 0) {
        uVar5 = uVar7 / uVar6;
      }
      uVar7 = uVar7 - uVar5 * uVar6;
    }
    plVar4 = (long *)(*param_1 + uVar7 * 8);
  }
  *plVar4 = (long)plVar3;
LAB_00340d90:
  param_1[3] = param_1[3] + 1;
  return 1;
}


