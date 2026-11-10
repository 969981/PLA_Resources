/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033f990; name: FUN_0033f990
 */


undefined4 FUN_0033f990(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  byte *__s2;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  byte bVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  ulong unaff_x26;
  undefined2 uVar13;
  undefined8 uVar14;
  
  lVar1 = *param_2;
  __s2 = (byte *)param_2[1];
  uVar5 = lVar1 * 0x1000193;
  lVar12 = *param_3;
  bVar9 = *__s2;
  if (bVar9 == 0) {
    uVar11 = param_1[1];
  }
  else {
    uVar7 = 0;
    pbVar10 = __s2;
    do {
      pbVar10 = pbVar10 + 1;
      uVar7 = uVar7 * 5 + (ulong)bVar9;
      bVar9 = *pbVar10;
    } while (bVar9 != 0);
    uVar11 = param_1[1];
    uVar5 = uVar7 ^ uVar5;
  }
  if (uVar11 != 0) {
    uVar14 = CONCAT17(POPCOUNT((char)(uVar11 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar11 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar11 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar11 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar11 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar11 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar11 
                                                  >> 8)),POPCOUNT((char)uVar11))))))));
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar7 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x26 = uVar11 - 1 & uVar5;
      plVar8 = *(long **)(*param_1 + unaff_x26 * 8);
    }
    else {
      unaff_x26 = uVar5;
      if (uVar11 <= uVar5) {
        uVar4 = 0;
        if (uVar11 != 0) {
          uVar4 = uVar5 / uVar11;
        }
        unaff_x26 = uVar5 - uVar4 * uVar11;
      }
      plVar8 = *(long **)(*param_1 + unaff_x26 * 8);
    }
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar8[1] != uVar5 && (plVar8[1] & uVar11 - 1) != unaff_x26) break;
          if ((plVar8[2] == lVar1) && (iVar3 = strcmp((char *)plVar8[3],(char *)__s2), iVar3 == 0))
          {
            return 0;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar8[1];
          if (uVar7 != uVar5) {
            if (uVar11 <= uVar7) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar7 / uVar11;
              }
              uVar7 = uVar7 - uVar4 * uVar11;
            }
            if (uVar7 != unaff_x26) break;
          }
          if ((plVar8[2] == lVar1) && (iVar3 = strcmp((char *)plVar8[3],(char *)__s2), iVar3 == 0))
          {
            return 0;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  plVar8 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x28);
  plVar8[2] = lVar1;
  plVar8[3] = (long)__s2;
  plVar8[4] = lVar12;
  *plVar8 = 0;
  plVar8[1] = uVar5;
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar11) {
      uVar7 = uVar11;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
      uVar11 = param_1[1];
      bVar2 = uVar11 < 3;
      if (1 < uVar11) goto LAB_0033fbc0;
LAB_0033fbb8:
      FUN_003684ac(param_1,uVar7);
    }
    else {
      if ((uVar7 & uVar7 - 1) != 0) {
                    /* try { // try from 0033fb98 to 0033fc2b has its CatchHandler @ 0033fd14 */
        uVar7 = std::__next_prime(uVar7);
      }
      uVar11 = param_1[1];
      bVar2 = uVar11 <= uVar7;
      if (uVar11 < uVar7) goto LAB_0033fbb8;
LAB_0033fbc0:
      if (!bVar2) {
        uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        if ((uVar11 < 3) ||
           (uVar14 = CONCAT17(POPCOUNT((char)(uVar11 >> 0x38)),
                              CONCAT16(POPCOUNT((char)(uVar11 >> 0x30)),
                                       CONCAT15(POPCOUNT((char)(uVar11 >> 0x28)),
                                                CONCAT14(POPCOUNT((char)(uVar11 >> 0x20)),
                                                         CONCAT13(POPCOUNT((char)(uVar11 >> 0x18)),
                                                                  CONCAT12(POPCOUNT((char)(uVar11 >>
                                                                                          0x10)),
                                                                           CONCAT11(POPCOUNT((char)(
                                                  uVar11 >> 8)),POPCOUNT((char)uVar11)))))))),
           uVar13 = NEON_uaddlv(uVar14,1), 1 < (uint)CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13))
           ) {
          uVar4 = std::__next_prime(uVar4);
          if (uVar4 <= uVar7) {
            uVar4 = uVar7;
          }
        }
        else {
          if (1 < uVar4) {
            uVar4 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar4 - 1) & 0x3f);
          }
          if (uVar4 <= uVar7) {
            uVar4 = uVar7;
          }
        }
        uVar7 = uVar4;
        if (uVar7 < uVar11) goto LAB_0033fbb8;
      }
    }
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar5 = uVar11 - 1 & uVar5;
      plVar6 = *(long **)(*param_1 + uVar5 * 8);
      goto joined_r0x0033fcd4;
    }
    if (uVar11 <= uVar5) {
      uVar7 = 0;
      if (uVar11 != 0) {
        uVar7 = uVar5 / uVar11;
      }
      uVar5 = uVar5 - uVar7 * uVar11;
      plVar6 = *(long **)(*param_1 + uVar5 * 8);
      goto joined_r0x0033fcd4;
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) goto LAB_0033fb3c;
LAB_0033fc80:
    plVar6 = param_1 + 2;
    *plVar8 = *plVar6;
    *plVar6 = (long)plVar8;
    *(long **)(*param_1 + uVar5 * 8) = plVar6;
    if (*plVar8 == 0) goto LAB_0033fcec;
    uVar5 = *(ulong *)(*plVar8 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar5 = uVar5 & uVar11 - 1;
    }
    else if (uVar11 <= uVar5) {
      uVar7 = 0;
      if (uVar11 != 0) {
        uVar7 = uVar5 / uVar11;
      }
      uVar5 = uVar5 - uVar7 * uVar11;
    }
    plVar6 = (long *)(*param_1 + uVar5 * 8);
  }
  else {
    plVar6 = *(long **)(*param_1 + unaff_x26 * 8);
    uVar5 = unaff_x26;
joined_r0x0033fcd4:
    if (plVar6 == (long *)0x0) goto LAB_0033fc80;
LAB_0033fb3c:
    *plVar8 = *plVar6;
  }
  *plVar6 = (long)plVar8;
LAB_0033fcec:
  param_1[3] = param_1[3] + 1;
  return 1;
}


