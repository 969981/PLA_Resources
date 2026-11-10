/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033fe70; name: FUN_0033fe70
 */


undefined4 FUN_0033fe70(long *param_1,long param_2,byte *param_3,long param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  byte *__s2;
  ulong uVar6;
  long *plVar7;
  byte bVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong unaff_x27;
  undefined2 uVar11;
  undefined8 uVar12;
  
  __s2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    __s2 = param_3 + 1;
  }
  uVar4 = param_2 * 0x1000193;
  bVar8 = *__s2;
  if (bVar8 == 0) {
    uVar10 = param_1[1];
  }
  else {
    uVar6 = 0;
    pbVar9 = __s2;
    do {
      pbVar9 = pbVar9 + 1;
      uVar6 = uVar6 * 5 + (ulong)bVar8;
      bVar8 = *pbVar9;
    } while (bVar8 != 0);
    uVar10 = param_1[1];
    uVar4 = uVar6 ^ uVar4;
  }
  if (uVar10 != 0) {
    uVar12 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar10 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar10 
                                                  >> 8)),POPCOUNT((char)uVar10))))))));
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x27 = uVar10 - 1 & uVar4;
      plVar7 = *(long **)(*param_1 + unaff_x27 * 8);
    }
    else {
      unaff_x27 = uVar4;
      if (uVar10 <= uVar4) {
        uVar3 = 0;
        if (uVar10 != 0) {
          uVar3 = uVar4 / uVar10;
        }
        unaff_x27 = uVar4 - uVar3 * uVar10;
      }
      plVar7 = *(long **)(*param_1 + unaff_x27 * 8);
    }
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar7[1] != uVar4 && (plVar7[1] & uVar10 - 1) != unaff_x27) break;
          if ((plVar7[2] == param_2) && (iVar2 = strcmp((char *)plVar7[3],(char *)__s2), iVar2 == 0)
             ) {
            return 0;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar7[1];
          if (uVar6 != uVar4) {
            if (uVar10 <= uVar6) {
              uVar3 = 0;
              if (uVar10 != 0) {
                uVar3 = uVar6 / uVar10;
              }
              uVar6 = uVar6 - uVar3 * uVar10;
            }
            if (uVar6 != unaff_x27) break;
          }
          if ((plVar7[2] == param_2) && (iVar2 = strcmp((char *)plVar7[3],(char *)__s2), iVar2 == 0)
             ) {
            return 0;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  plVar7 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  plVar7[2] = param_2;
  plVar7[3] = (long)__s2;
  plVar7[4] = param_4;
  plVar7[5] = param_5;
  *plVar7 = 0;
  plVar7[1] = uVar4;
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
      uVar10 = param_1[1];
      bVar1 = uVar10 < 3;
      if (1 < uVar10) goto LAB_003400b8;
LAB_003400b0:
      FUN_003681f8(param_1,uVar6);
    }
    else {
      if ((uVar6 & uVar6 - 1) != 0) {
                    /* try { // try from 00340090 to 00340123 has its CatchHandler @ 00340210 */
        uVar6 = std::__next_prime(uVar6);
      }
      uVar10 = param_1[1];
      bVar1 = uVar10 <= uVar6;
      if (uVar10 < uVar6) goto LAB_003400b0;
LAB_003400b8:
      if (!bVar1) {
        uVar3 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        if ((uVar10 < 3) ||
           (uVar12 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                              CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                                       CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                                CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                         CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                                  CONCAT12(POPCOUNT((char)(uVar10 >>
                                                                                          0x10)),
                                                                           CONCAT11(POPCOUNT((char)(
                                                  uVar10 >> 8)),POPCOUNT((char)uVar10)))))))),
           uVar11 = NEON_uaddlv(uVar12,1), 1 < (uint)CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11))
           ) {
          uVar3 = std::__next_prime(uVar3);
          if (uVar3 <= uVar6) {
            uVar3 = uVar6;
          }
        }
        else {
          if (1 < uVar3) {
            uVar3 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar3 - 1) & 0x3f);
          }
          if (uVar3 <= uVar6) {
            uVar3 = uVar6;
          }
        }
        uVar6 = uVar3;
        if (uVar6 < uVar10) goto LAB_003400b0;
      }
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar4 = uVar10 - 1 & uVar4;
      plVar5 = *(long **)(*param_1 + uVar4 * 8);
      goto joined_r0x003401cc;
    }
    if (uVar10 <= uVar4) {
      uVar6 = 0;
      if (uVar10 != 0) {
        uVar6 = uVar4 / uVar10;
      }
      uVar4 = uVar4 - uVar6 * uVar10;
      plVar5 = *(long **)(*param_1 + uVar4 * 8);
      goto joined_r0x003401cc;
    }
    plVar5 = *(long **)(*param_1 + uVar4 * 8);
    if (plVar5 != (long *)0x0) goto LAB_00340034;
LAB_00340178:
    plVar5 = param_1 + 2;
    *plVar7 = *plVar5;
    *plVar5 = (long)plVar7;
    *(long **)(*param_1 + uVar4 * 8) = plVar5;
    if (*plVar7 == 0) goto LAB_003401e4;
    uVar4 = *(ulong *)(*plVar7 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar4 = uVar4 & uVar10 - 1;
    }
    else if (uVar10 <= uVar4) {
      uVar6 = 0;
      if (uVar10 != 0) {
        uVar6 = uVar4 / uVar10;
      }
      uVar4 = uVar4 - uVar6 * uVar10;
    }
    plVar5 = (long *)(*param_1 + uVar4 * 8);
  }
  else {
    plVar5 = *(long **)(*param_1 + unaff_x27 * 8);
    uVar4 = unaff_x27;
joined_r0x003401cc:
    if (plVar5 == (long *)0x0) goto LAB_00340178;
LAB_00340034:
    *plVar7 = *plVar5;
  }
  *plVar5 = (long)plVar7;
LAB_003401e4:
  param_1[3] = param_1[3] + 1;
  return 1;
}


