/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00380984; name: FUN_00380984
 */


void FUN_00380984(long *param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
    uVar11 = param_1[1];
    bVar2 = uVar11 < 3;
    if (1 < uVar11) goto LAB_003809e4;
  }
  else {
    if ((param_2 & param_2 - 1) != 0) {
      param_2 = std::__next_prime(param_2);
    }
    uVar11 = param_1[1];
    bVar2 = uVar11 <= param_2;
    if (param_2 <= uVar11) {
LAB_003809e4:
      if (bVar2) {
        return;
      }
      uVar3 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar11 < 3) ||
         (uVar13 = CONCAT17(POPCOUNT((char)(uVar11 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(uVar11 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(uVar11 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(uVar11 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(uVar11 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(uVar11 >>
                                                                                        0x10)),
                                                                         CONCAT11(POPCOUNT((char)(
                                                  uVar11 >> 8)),POPCOUNT((char)uVar11)))))))),
         uVar12 = NEON_uaddlv(uVar13,1), 1 < (uint)CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12)))
      {
        uVar3 = std::__next_prime(uVar3);
        if (uVar3 <= param_2) {
          uVar3 = param_2;
        }
      }
      else {
        if (1 < uVar3) {
          uVar3 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar3 - 1) & 0x3f);
        }
        if (uVar3 <= param_2) {
          uVar3 = param_2;
        }
      }
      param_2 = uVar3;
      if (uVar11 <= param_2) {
        return;
      }
    }
  }
  if (param_2 == 0) {
    lVar4 = *param_1;
    *param_1 = 0;
    if (lVar4 != 0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    param_1[1] = 0;
    return;
  }
  lVar4 = FUN_002e2e80(PTR_FUN_04373078,param_2 << 3);
  lVar5 = *param_1;
  *param_1 = lVar4;
  if (lVar5 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  uVar3 = param_2 - 1;
  uVar11 = param_2 & 3;
  param_1[1] = param_2;
  if (uVar3 < 3) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    do {
      lVar5 = lVar4 * 8;
      lVar4 = lVar4 + 4;
      *(undefined8 *)(*param_1 + lVar5) = 0;
      *(undefined8 *)(*param_1 + lVar5 + 8) = 0;
      *(undefined8 *)(*param_1 + lVar5 + 0x10) = 0;
      *(undefined8 *)(*param_1 + lVar5 + 0x18) = 0;
    } while (param_2 - uVar11 != lVar4);
  }
  if (uVar11 != 0) {
    lVar4 = lVar4 << 3;
    do {
      *(undefined8 *)(*param_1 + lVar4) = 0;
      uVar11 = uVar11 - 1;
      lVar4 = lVar4 + 8;
    } while (uVar11 != 0);
  }
  plVar7 = param_1 + 2;
  plVar6 = (long *)*plVar7;
  if (plVar6 == (long *)0x0) {
    return;
  }
  uVar13 = CONCAT17(POPCOUNT((char)(param_2 >> 0x38)),
                    CONCAT16(POPCOUNT((char)(param_2 >> 0x30)),
                             CONCAT15(POPCOUNT((char)(param_2 >> 0x28)),
                                      CONCAT14(POPCOUNT((char)(param_2 >> 0x20)),
                                               CONCAT13(POPCOUNT((char)(param_2 >> 0x18)),
                                                        CONCAT12(POPCOUNT((char)(param_2 >> 0x10)),
                                                                 CONCAT11(POPCOUNT((char)(param_2 >>
                                                                                         8)),
                                                                          POPCOUNT((char)param_2))))
                                              ))));
  uVar12 = NEON_uaddlv(uVar13,1);
  uVar8 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
  uVar11 = plVar6[1];
  if (uVar8 < 2) {
    uVar11 = uVar11 & uVar3;
  }
  else if (param_2 <= uVar11) {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = uVar11 / param_2;
    }
    uVar11 = uVar11 - uVar1 * param_2;
    *(long **)(*param_1 + uVar11 * 8) = plVar7;
    plVar7 = (long *)*plVar6;
    goto joined_r0x00380bb8;
  }
  *(long **)(*param_1 + uVar11 * 8) = plVar7;
  plVar7 = (long *)*plVar6;
joined_r0x00380bb8:
  if (plVar7 != (long *)0x0) {
    if (uVar8 < 2) {
      do {
        while (uVar8 = plVar7[1] & uVar3, uVar8 != uVar11) {
          plVar10 = plVar7;
          if (*(long *)(*param_1 + uVar8 * 8) != 0) {
            do {
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
              if (plVar10 == (long *)0x0) break;
            } while (plVar7[2] == plVar10[2]);
            *plVar6 = (long)plVar10;
            *plVar9 = **(long **)(*param_1 + uVar8 * 8);
            **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
            plVar10 = (long *)*plVar6;
            plVar7 = plVar6;
            goto joined_r0x00380cd4;
          }
          *(long **)(*param_1 + uVar8 * 8) = plVar6;
          plVar10 = (long *)*plVar7;
          plVar6 = plVar7;
          uVar11 = uVar8;
          plVar7 = plVar10;
          if (plVar10 == (long *)0x0) {
            return;
          }
        }
        plVar10 = (long *)*plVar7;
joined_r0x00380cd4:
        plVar6 = plVar7;
        plVar7 = plVar10;
      } while (plVar10 != (long *)0x0);
    }
    else {
      do {
        while( true ) {
          uVar3 = plVar7[1];
          if (param_2 <= uVar3) {
            uVar8 = 0;
            if (param_2 != 0) {
              uVar8 = uVar3 / param_2;
            }
            uVar3 = uVar3 - uVar8 * param_2;
          }
          if (uVar3 == uVar11) break;
          plVar10 = plVar7;
          if (*(long *)(*param_1 + uVar3 * 8) == 0) {
            *(long **)(*param_1 + uVar3 * 8) = plVar6;
            plVar10 = (long *)*plVar7;
            uVar11 = uVar3;
            plVar6 = plVar7;
          }
          else {
            do {
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
              if (plVar10 == (long *)0x0) break;
            } while (plVar7[2] == plVar10[2]);
            *plVar6 = (long)plVar10;
            *plVar9 = **(long **)(*param_1 + uVar3 * 8);
            **(undefined8 **)(*param_1 + uVar3 * 8) = plVar7;
            plVar10 = (long *)*plVar6;
          }
          plVar7 = plVar10;
          if (plVar10 == (long *)0x0) {
            return;
          }
        }
        plVar10 = (long *)*plVar7;
        plVar6 = plVar7;
        plVar7 = plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  return;
}


