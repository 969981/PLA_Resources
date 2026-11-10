/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033e07c; name: FUN_0033e07c
 */


void FUN_0033e07c(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
                    /* try { // try from 0033e0a8 to 0033e137 has its CatchHandler @ 0033e744 */
  uVar1 = std::__next_prime(3);
  uVar4 = param_1[1];
  if (uVar4 < uVar1) {
LAB_0033e14c:
    FUN_003681f8(param_1,uVar1);
  }
  else if (uVar1 < uVar4) {
    uVar3 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar4 < 3) ||
       (uVar6 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                         CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                             CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)
                                                                              ),
                                                                      CONCAT11(POPCOUNT((char)(uVar4
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar4
                                                                                        )))))))),
       uVar5 = NEON_uaddlv(uVar6,1), 1 < (uint)CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar5))) {
      uVar3 = std::__next_prime(uVar3);
      if (uVar3 <= uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      if (1 < uVar3) {
        uVar3 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar3 - 1) & 0x3f);
      }
      if (uVar3 <= uVar1) {
        uVar3 = uVar1;
      }
    }
    uVar1 = uVar3;
    if (uVar1 < uVar4) goto LAB_0033e14c;
  }
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  param_1[8] = 0;
  param_1[7] = 0;
                    /* try { // try from 0033e168 to 0033e1fb has its CatchHandler @ 0033e718 */
  uVar1 = std::__next_prime(3);
  uVar4 = param_1[6];
  if (uVar4 < uVar1) {
LAB_0033e188:
    FUN_003684ac(param_1 + 5,uVar1);
  }
  else if (uVar1 < uVar4) {
    uVar3 = (ulong)((float)(ulong)param_1[8] / *(float *)(param_1 + 9));
    if ((uVar4 < 3) ||
       (uVar6 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                         CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                             CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)
                                                                              ),
                                                                      CONCAT11(POPCOUNT((char)(uVar4
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar4
                                                                                        )))))))),
       uVar5 = NEON_uaddlv(uVar6,1), 1 < (uint)CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar5))) {
      uVar3 = std::__next_prime(uVar3);
      if (uVar3 <= uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      if (1 < uVar3) {
        uVar3 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar3 - 1) & 0x3f);
      }
      if (uVar3 <= uVar1) {
        uVar3 = uVar1;
      }
    }
    uVar1 = uVar3;
    if (uVar1 < uVar4) goto LAB_0033e188;
  }
  puVar2 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 4) = 0x3f800000;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  param_1[10] = puVar2;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
                    /* try { // try from 0033e254 to 0033e2e7 has its CatchHandler @ 0033e6ec */
  uVar1 = std::__next_prime(3);
  uVar4 = param_1[0xd];
  if (uVar4 < uVar1) {
LAB_0033e274:
    FUN_003684ac(param_1 + 0xc,uVar1);
  }
  else if (uVar1 < uVar4) {
    uVar3 = (ulong)((float)(ulong)param_1[0xf] / *(float *)(param_1 + 0x10));
    if ((uVar4 < 3) ||
       (uVar6 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                         CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                             CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)
                                                                              ),
                                                                      CONCAT11(POPCOUNT((char)(uVar4
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar4
                                                                                        )))))))),
       uVar5 = NEON_uaddlv(uVar6,1), 1 < (uint)CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar5))) {
      uVar3 = std::__next_prime(uVar3);
      if (uVar3 <= uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      if (1 < uVar3) {
        uVar3 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar3 - 1) & 0x3f);
      }
      if (uVar3 <= uVar1) {
        uVar3 = uVar1;
      }
    }
    uVar1 = uVar3;
    if (uVar1 < uVar4) goto LAB_0033e274;
  }
  puVar2 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 4) = 0x3f800000;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  param_1[0x11] = puVar2;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
                    /* try { // try from 0033e33c to 0033e3cf has its CatchHandler @ 0033e6c0 */
  uVar1 = std::__next_prime(3);
  uVar4 = param_1[0x14];
  if (uVar4 < uVar1) {
LAB_0033e35c:
    FUN_00368760(param_1 + 0x13,uVar1);
  }
  else if (uVar1 < uVar4) {
    uVar3 = (ulong)((float)(ulong)param_1[0x16] / *(float *)(param_1 + 0x17));
    if ((uVar4 < 3) ||
       (uVar6 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                         CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                             CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)
                                                                              ),
                                                                      CONCAT11(POPCOUNT((char)(uVar4
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar4
                                                                                        )))))))),
       uVar5 = NEON_uaddlv(uVar6,1), 1 < (uint)CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar5))) {
      uVar3 = std::__next_prime(uVar3);
      if (uVar3 <= uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      if (1 < uVar3) {
        uVar3 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar3 - 1) & 0x3f);
      }
      if (uVar3 <= uVar1) {
        uVar3 = uVar1;
      }
    }
    uVar1 = uVar3;
    if (uVar1 < uVar4) goto LAB_0033e35c;
  }
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
                    /* try { // try from 0033e400 to 0033e493 has its CatchHandler @ 0033e694 */
  uVar1 = std::__next_prime(3);
  uVar4 = param_1[0x19];
  if (uVar4 < uVar1) {
LAB_0033e420:
    FUN_003689fc(param_1 + 0x18,uVar1);
  }
  else if (uVar1 < uVar4) {
    uVar3 = (ulong)((float)(ulong)param_1[0x1b] / *(float *)(param_1 + 0x1c));
    if ((uVar4 < 3) ||
       (uVar6 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                         CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                             CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)
                                                                              ),
                                                                      CONCAT11(POPCOUNT((char)(uVar4
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar4
                                                                                        )))))))),
       uVar5 = NEON_uaddlv(uVar6,1), 1 < (uint)CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar5))) {
      uVar3 = std::__next_prime(uVar3);
LAB_0033e494:
      if (uVar3 <= uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      if (uVar3 < 2) goto LAB_0033e494;
      uVar3 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar3 - 1) & 0x3f);
      if (uVar3 <= uVar1) {
        uVar3 = uVar1;
      }
    }
    uVar1 = uVar3;
    if (uVar1 < uVar4) goto LAB_0033e420;
  }
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
                    /* try { // try from 0033e4c4 to 0033e557 has its CatchHandler @ 0033e668 */
  uVar1 = std::__next_prime(3);
  uVar4 = param_1[0x1e];
  if (uVar4 < uVar1) {
LAB_0033e4e4:
    FUN_003689fc(param_1 + 0x1d,uVar1);
  }
  else if (uVar1 < uVar4) {
    uVar3 = (ulong)((float)(ulong)param_1[0x20] / *(float *)(param_1 + 0x21));
    if ((uVar4 < 3) ||
       (uVar6 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                         CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                             CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)
                                                                              ),
                                                                      CONCAT11(POPCOUNT((char)(uVar4
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar4
                                                                                        )))))))),
       uVar5 = NEON_uaddlv(uVar6,1), 1 < (uint)CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar5))) {
      uVar3 = std::__next_prime(uVar3);
LAB_0033e558:
      if (uVar3 <= uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      if (uVar3 < 2) goto LAB_0033e558;
      uVar3 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar3 - 1) & 0x3f);
      if (uVar3 <= uVar1) {
        uVar3 = uVar1;
      }
    }
    uVar1 = uVar3;
    if (uVar1 < uVar4) goto LAB_0033e4e4;
  }
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
                    /* try { // try from 0033e588 to 0033e633 has its CatchHandler @ 0033e770 */
  uVar1 = std::__next_prime(3);
  uVar4 = param_1[0x24];
  if (uVar4 < uVar1) {
    FUN_00368d8c(param_1 + 0x23,uVar1);
    goto LAB_0033e634;
  }
  if (uVar4 <= uVar1) goto LAB_0033e634;
  uVar3 = (ulong)((float)(ulong)param_1[0x26] / *(float *)(param_1 + 0x27));
  if ((uVar4 < 3) ||
     (uVar6 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                       CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                                CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                         CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                  CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                           CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                    CONCAT11(POPCOUNT((char)(uVar4 
                                                  >> 8)),POPCOUNT((char)uVar4)))))))),
     uVar5 = NEON_uaddlv(uVar6,1), 1 < (uint)CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar5))) {
    uVar3 = std::__next_prime(uVar3);
LAB_0033e61c:
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    if (uVar3 < 2) goto LAB_0033e61c;
    uVar3 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar3 - 1) & 0x3f);
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
  }
  if (uVar3 < uVar4) {
    FUN_00368d8c(param_1 + 0x23);
  }
LAB_0033e634:
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 0x28) = 1;
  *(undefined1 *)((long)param_1 + 0x142) = 0;
  return;
}


