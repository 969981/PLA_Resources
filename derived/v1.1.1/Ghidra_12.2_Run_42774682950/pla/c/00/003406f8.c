/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003406f8; name: FUN_003406f8
 */


undefined8 FUN_003406f8(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x25;
  long lVar10;
  undefined2 uVar11;
  float fVar12;
  undefined8 uVar13;
  
  lVar10 = *(long *)(param_2 + 0x50);
  iVar2 = *(int *)(param_2 + 0x44);
  plVar1 = (long *)(param_1 + 0x98);
  uVar9 = *(ulong *)(param_1 + 0xa0);
  uVar8 = (long)iVar2 * 0x1000193 ^ lVar10 * 0x100011b;
  if (uVar9 != 0) {
    uVar13 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar9 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar9 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar9))))
                                                ))));
    uVar11 = NEON_uaddlv(uVar13,1);
    uVar7 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar11) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x25 = uVar8 & uVar9 - 1;
      plVar5 = *(long **)(*plVar1 + unaff_x25 * 8);
    }
    else {
      unaff_x25 = uVar8;
      if (uVar9 <= uVar8) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar8 / uVar9;
        }
        unaff_x25 = uVar8 - uVar4 * uVar9;
      }
      plVar5 = *(long **)(*plVar1 + unaff_x25 * 8);
    }
    if (plVar5 != (long *)0x0) {
      if (uVar7 < 2) {
        do {
          plVar5 = (long *)*plVar5;
          if ((plVar5 == (long *)0x0) ||
             (plVar5[1] != uVar8 && (plVar5[1] & uVar9 - 1) != unaff_x25)) goto LAB_00340814;
        } while (plVar5[2] != lVar10 || *(int *)(plVar5 + 3) != iVar2);
      }
      else {
        do {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_00340814;
          uVar7 = plVar5[1];
          if (uVar7 != uVar8) {
            if (uVar9 <= uVar7) {
              uVar4 = 0;
              if (uVar9 != 0) {
                uVar4 = uVar7 / uVar9;
              }
              uVar7 = uVar7 - uVar4 * uVar9;
            }
            if (uVar7 != unaff_x25) goto LAB_00340814;
          }
        } while (plVar5[2] != lVar10 || (int)plVar5[3] != iVar2);
      }
      return 0;
    }
  }
LAB_00340814:
  plVar5 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x28);
  plVar5[1] = uVar8;
  plVar5[2] = lVar10;
  *(int *)(plVar5 + 3) = iVar2;
  plVar5[4] = param_2;
  *plVar5 = 0;
  fVar12 = (float)(*(long *)(param_1 + 0xb0) + 1);
  if ((uVar9 == 0) || (*(float *)(param_1 + 0xb8) * (float)uVar9 < fVar12)) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar7 = (ulong)(fVar12 / *(float *)(param_1 + 0xb8));
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
      uVar9 = *(ulong *)(param_1 + 0xa0);
      bVar3 = uVar9 < 3;
      if (1 < uVar9) goto LAB_003408b8;
LAB_00340970:
      FUN_00368760(plVar1,uVar7);
      uVar9 = *(ulong *)(param_1 + 0xa0);
      uVar4 = uVar9 - 1;
      uVar7 = uVar9 & uVar4;
    }
    else {
      if ((uVar7 & uVar7 - 1) != 0) {
                    /* try { // try from 00340950 to 00340a33 has its CatchHandler @ 00340a4c */
        uVar7 = std::__next_prime(uVar7);
      }
      uVar9 = *(ulong *)(param_1 + 0xa0);
      bVar3 = uVar9 <= uVar7;
      if (uVar9 < uVar7) goto LAB_00340970;
LAB_003408b8:
      if (!bVar3) {
        uVar4 = (ulong)((float)*(ulong *)(param_1 + 0xb0) / *(float *)(param_1 + 0xb8));
        if ((uVar9 < 3) ||
           (uVar13 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                              CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                                       CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                                CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                         CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                                  CONCAT12(POPCOUNT((char)(uVar9 >> 
                                                  0x10)),CONCAT11(POPCOUNT((char)(uVar9 >> 8)),
                                                                  POPCOUNT((char)uVar9)))))))),
           uVar11 = NEON_uaddlv(uVar13,1), 1 < (uint)CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar11))
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
        if (uVar7 < uVar9) goto LAB_00340970;
      }
      uVar9 = *(ulong *)(param_1 + 0xa0);
      uVar4 = uVar9 - 1;
      uVar7 = uVar9 & uVar4;
    }
    if (uVar7 == 0) {
      unaff_x25 = uVar4 & uVar8;
      plVar6 = *(long **)(*plVar1 + unaff_x25 * 8);
      goto joined_r0x00340940;
    }
    if (uVar8 < uVar9) {
      plVar6 = *(long **)(*plVar1 + uVar8 * 8);
      unaff_x25 = uVar8;
      goto joined_r0x00340940;
    }
    uVar7 = 0;
    if (uVar9 != 0) {
      uVar7 = uVar8 / uVar9;
    }
    unaff_x25 = uVar8 - uVar7 * uVar9;
    plVar6 = *(long **)(*plVar1 + unaff_x25 * 8);
    if (plVar6 == (long *)0x0) goto LAB_00340994;
LAB_00340868:
    *plVar5 = *plVar6;
  }
  else {
    plVar6 = *(long **)(*plVar1 + unaff_x25 * 8);
joined_r0x00340940:
    if (plVar6 != (long *)0x0) goto LAB_00340868;
LAB_00340994:
    plVar6 = (long *)(param_1 + 0xa8);
    *plVar5 = *plVar6;
    *plVar6 = (long)plVar5;
    *(long **)(*(long *)(param_1 + 0x98) + unaff_x25 * 8) = plVar6;
    if (*plVar5 == 0) goto LAB_00340a08;
    uVar8 = *(ulong *)(*plVar5 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar8 = uVar8 & uVar9 - 1;
    }
    else if (uVar9 <= uVar8) {
      uVar7 = 0;
      if (uVar9 != 0) {
        uVar7 = uVar8 / uVar9;
      }
      uVar8 = uVar8 - uVar7 * uVar9;
    }
    plVar6 = (long *)(*plVar1 + uVar8 * 8);
  }
  *plVar6 = (long)plVar5;
LAB_00340a08:
  *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
  return 1;
}


