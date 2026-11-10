/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d0bc0; name: FUN_004d0bc0
 */


undefined8
FUN_004d0bc0(undefined8 param_1,undefined8 param_2,ulong *param_3,undefined8 *param_4,void *param_5,
            long param_6,ulong param_7,void *param_8,ulong param_9,char param_10)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  size_t __n_00;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  byte bVar21;
  size_t __n_01;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong __n_02;
  ulong uVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  code *local_328;
  uint local_310 [8];
  undefined8 auStack_2f0 [12];
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined5 uStack_250;
  undefined3 local_24b;
  undefined5 uStack_248;
  undefined1 auStack_243 [115];
  ulong local_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong local_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong local_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong local_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  byte abStack_150 [24];
  undefined1 auStack_138 [216];
  
  if (0xfffff < param_7) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: data_plus_mac_plus_padding_size < 1024 * 1024",
                 "external/openssl/ssl/s3_cbc.c",0xa9);
  }
  FUN_0041cd10();
  iVar7 = FUN_0041ccb0();
  switch((ulong *)(ulong)(iVar7 - 0x2a0)) {
  case (ulong *)0x0:
    iVar7 = FUN_00450e50(auStack_138);
    if (iVar7 < 1) {
      return 0;
    }
    uVar25 = 0x20;
    break;
  case (ulong *)0x1:
    iVar7 = FUN_00428350(auStack_138);
    if (iVar7 < 1) {
      return 0;
    }
    uVar25 = 0x30;
    goto LAB_004d0d2c;
  case (ulong *)0x2:
    iVar7 = FUN_00428390(auStack_138);
    if (iVar7 < 1) {
      return 0;
    }
    uVar25 = 0x40;
LAB_004d0d2c:
    bVar6 = true;
    __n_02 = 0x80;
    __n_00 = 0x28;
    __n_01 = 0x10;
    pcVar9 = (code *)&LAB_004d16f0;
    local_328 = (code *)PTR_LAB_043746e0;
    goto LAB_004d0d7c;
  case (ulong *)0x3:
    iVar7 = FUN_00450e10(auStack_138);
    if (iVar7 < 1) {
      return 0;
    }
    uVar25 = 0x1c;
    break;
  default:
    if (iVar7 == 0x40) {
      iVar7 = FUN_00450dd0(auStack_138);
      if (iVar7 < 1) {
        return 0;
      }
      local_328 = (code *)PTR_LAB_043746e8;
      bVar6 = true;
      uVar25 = 0x14;
      __n_02 = 0x40;
      __n_00 = 0x28;
      __n_01 = 8;
      pcVar9 = (code *)&LAB_004d1500;
    }
    else {
      if (iVar7 != 4) {
        puVar12 = (ulong *)(ulong)(iVar7 - 0x2a0);
        if (param_3 != (ulong *)0x0) {
          *param_3 = 0;
          puVar12 = param_3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00404dd0(puVar12,"Assertion failed: 0","external/openssl/ssl/s3_cbc.c",0xea);
      }
      iVar7 = FUN_0044f800(auStack_138);
      if (iVar7 < 1) {
        return 0;
      }
      bVar6 = false;
      uVar25 = 0x10;
      __n_02 = 0x40;
      local_328 = (code *)PTR_LAB_043746d8;
      __n_00 = 0x30;
      __n_01 = 8;
      pcVar9 = (code *)&LAB_004d1460;
    }
    goto LAB_004d0d7c;
  }
  bVar6 = true;
  __n_02 = 0x40;
  __n_00 = 0x28;
  __n_01 = 8;
  pcVar9 = FUN_004d15c0;
  local_328 = (code *)PTR_FUN_043746d0;
LAB_004d0d7c:
  uVar1 = param_9 + __n_00 + 0xb;
  if (param_10 == '\0') {
    uVar1 = 0xd;
    uVar18 = 0;
    if (__n_02 != 0) {
      uVar18 = ((__n_02 + (uVar25 | 0x100)) - 1) / __n_02;
    }
    uVar18 = uVar18 + 1;
  }
  else {
    uVar18 = 2;
  }
  uVar2 = 0;
  if (__n_02 != 0) {
    uVar2 = ((((__n_01 - 1) + __n_02) - uVar25) + uVar1 + param_7) / __n_02;
  }
  uVar23 = (uVar1 + param_6) - uVar25;
  uVar24 = uVar18;
  if (param_10 != '\0') {
    uVar24 = uVar18 + 1;
  }
  uVar19 = uVar2 - uVar18;
  uVar20 = uVar19 * __n_02;
  if (uVar2 <= uVar24) {
    uVar19 = 0;
    uVar20 = 0;
  }
  iVar7 = (int)uVar23 * 8;
  if (param_10 == '\0') {
    memset(&local_1d0,0,__n_02);
    if (0x80 < param_9) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("Assertion failed: mac_secret_length <= sizeof(hmac_pad)",
                   "external/openssl/ssl/s3_cbc.c",0x151);
    }
    iVar7 = iVar7 + (int)__n_02 * 8;
    memcpy(&local_1d0,param_8,param_9);
    uStack_1c0 = uStack_1c0 ^ 0x3636363636363636;
    uStack_1b8 = uStack_1b8 ^ 0x3636363636363636;
    local_1d0 = local_1d0 ^ 0x3636363636363636;
    uStack_1c8 = uStack_1c8 ^ 0x3636363636363636;
    uStack_1a0 = uStack_1a0 ^ 0x3636363636363636;
    uStack_198 = uStack_198 ^ 0x3636363636363636;
    local_1b0 = local_1b0 ^ 0x3636363636363636;
    uStack_1a8 = uStack_1a8 ^ 0x3636363636363636;
    if (__n_02 != 0x40) {
      uStack_180 = uStack_180 ^ 0x3636363636363636;
      uStack_178 = uStack_178 ^ 0x3636363636363636;
      local_190 = local_190 ^ 0x3636363636363636;
      uStack_188 = uStack_188 ^ 0x3636363636363636;
      local_170 = local_170 ^ 0x3636363636363636;
      uStack_168 = uStack_168 ^ 0x3636363636363636;
      uStack_160 = uStack_160 ^ 0x3636363636363636;
      uStack_158 = uStack_158 ^ 0x3636363636363636;
    }
    (*local_328)(auStack_138,&local_1d0);
    if (!bVar6) goto LAB_004d0fac;
LAB_004d0e2c:
    memset(abStack_150 + 8,0,__n_01 - 4);
    abStack_150[__n_01 + 4] = (byte)((uint)iVar7 >> 0x18);
    abStack_150[__n_01 + 5] = (byte)((uint)iVar7 >> 0x10);
    abStack_150[__n_01 + 6] = (byte)((uint)iVar7 >> 8);
    abStack_150[__n_01 + 7] = (byte)iVar7;
  }
  else {
    if (bVar6) goto LAB_004d0e2c;
LAB_004d0fac:
    memset(abStack_150 + 8,0,__n_01);
    abStack_150[__n_01 + 3] = (byte)((uint)iVar7 >> 0x18);
    abStack_150[__n_01 + 2] = (byte)((uint)iVar7 >> 0x10);
    abStack_150[__n_01 + 1] = (byte)((uint)iVar7 >> 8);
    abStack_150[__n_01] = (byte)iVar7;
  }
  if (uVar20 != 0) {
    if (param_10 == '\0') {
      uStack_248 = (undefined5)((ulong)*(undefined8 *)((long)param_4 + 5) >> 0x18);
      uStack_250 = (undefined5)*param_4;
      local_24b = (undefined3)((ulong)*param_4 >> 0x28);
      memcpy(auStack_243,param_5,__n_02 - 0xd);
      (*local_328)(auStack_138,&uStack_250);
      uVar2 = 0;
      if (__n_02 != 0) {
        uVar2 = uVar20 / __n_02;
      }
      if (1 < uVar2) {
        lVar11 = (long)param_5 + (__n_02 - 0xd);
        uVar24 = 1;
        do {
          (*local_328)(auStack_138,lVar11);
          uVar24 = uVar24 + 1;
          lVar11 = lVar11 + __n_02;
        } while (uVar24 < uVar2);
      }
    }
    else {
      __n = uVar1 - __n_02;
      if (uVar1 < __n_02 || __n == 0) {
        return 0;
      }
      (*local_328)(auStack_138,param_4);
      memcpy(&uStack_250,(void *)((long)param_4 + __n_02),__n);
      memcpy(auStack_243 + (__n - 0xd),param_5,__n_02 - __n);
      (*local_328)(auStack_138,&uStack_250);
      uVar2 = 0;
      if (__n_02 != 0) {
        uVar2 = uVar20 / __n_02;
      }
      if (1 < uVar2 - 1) {
        lVar11 = (long)param_5 + (__n_02 * 2 - uVar1);
        uVar24 = 1;
        do {
          (*local_328)(auStack_138,lVar11);
          uVar24 = uVar24 + 1;
          lVar11 = lVar11 + __n_02;
        } while (uVar24 < uVar2 - 1);
      }
    }
  }
  uVar2 = uVar19 + uVar18;
  uStack_268 = 0;
  local_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_288 = 0;
  local_290 = 0;
  uStack_278 = 0;
  local_280 = 0;
  if (!CARRY8(uVar19,uVar18)) {
    uVar18 = 0;
    if (__n_02 != 0) {
      uVar18 = uVar23 / __n_02;
    }
    uVar13 = uVar25 & 0x40;
    uVar24 = 0;
    if (__n_02 != 0) {
      uVar24 = (uVar23 + __n_01) / __n_02;
    }
    uVar23 = uVar23 - uVar18 * __n_02;
    do {
      uVar26 = 0;
      bVar5 = (char)((byte)((uVar19 ^ uVar18) - 1 >> 0x38) &
                    ((byte)((uVar19 ^ uVar18) >> 0x38) ^ 0x80)) >> 7;
      bVar3 = (char)((byte)((uVar19 ^ uVar24) - 1 >> 0x38) &
                    ((byte)((uVar19 ^ uVar24) >> 0x38) ^ 0x80)) >> 7;
      uVar16 = uVar20;
      uVar22 = uVar20;
      if (uVar1 <= uVar20) goto LAB_004d1184;
LAB_004d117c:
      pbVar15 = (byte *)((long)param_4 + uVar26 + uVar20);
LAB_004d1194:
      bVar21 = *pbVar15;
LAB_004d11a0:
      bVar4 = bVar5 & ((byte)((long)(uVar26 - uVar23) >> 0x3f) ^ 0xff);
      uVar16 = uVar16 + 1;
      bVar21 = (bVar21 & (bVar4 ^ 0xff) | bVar4 & 0x80) &
               ((byte)((long)(uVar26 + ~uVar23) >> 0x3f) | ~bVar5);
      if (uVar26 < __n_02 - __n_01) {
        *(byte *)((long)local_310 + uVar26) = bVar21 & (bVar5 | bVar3 ^ 0xff);
        if (__n_02 == uVar26 + 1) goto LAB_004d11e8;
LAB_004d1170:
        uVar26 = uVar26 + 1;
        uVar22 = uVar20 + uVar26;
        if (uVar22 < uVar1) goto LAB_004d117c;
LAB_004d1184:
        if (uVar1 + param_7 <= uVar22) goto LAB_004d119c;
        pbVar15 = (byte *)((long)param_5 + (uVar16 - uVar1));
        goto LAB_004d1194;
      }
      *(byte *)((long)local_310 + uVar26) =
           abStack_150[uVar26 + (__n_01 - __n_02) + 8] & bVar3 | bVar21 & ~bVar3;
      if (__n_02 != uVar26 + 1) goto LAB_004d1170;
LAB_004d11e8:
      (*local_328)(auStack_138,local_310);
      (*pcVar9)(auStack_138,local_310);
      uVar20 = uVar20 + uVar26 + 1;
      if (uVar25 < 0x40) {
        uVar16 = 0;
        goto LAB_004d1284;
      }
      puVar10 = auStack_2f0;
      puVar14 = &local_270;
      uVar16 = uVar13;
      do {
        uVar27 = puVar10[-3];
        uVar8 = puVar10[-4];
        uVar29 = puVar10[-1];
        uVar28 = puVar10[-2];
        uVar16 = uVar16 - 0x40;
        uVar31 = puVar14[-3];
        uVar30 = puVar14[-4];
        uVar33 = puVar14[-1];
        uVar32 = puVar14[-2];
        puVar14[-3] = CONCAT17((byte)((ulong)uVar31 >> 0x38) | (byte)((ulong)uVar27 >> 0x38) & bVar3
                               ,CONCAT16((byte)((ulong)uVar31 >> 0x30) |
                                         (byte)((ulong)uVar27 >> 0x30) & bVar3,
                                         CONCAT15((byte)((ulong)uVar31 >> 0x28) |
                                                  (byte)((ulong)uVar27 >> 0x28) & bVar3,
                                                  CONCAT14((byte)((ulong)uVar31 >> 0x20) |
                                                           (byte)((ulong)uVar27 >> 0x20) & bVar3,
                                                           CONCAT13((byte)((ulong)uVar31 >> 0x18) |
                                                                    (byte)((ulong)uVar27 >> 0x18) &
                                                                    bVar3,CONCAT12((byte)((ulong)
                                                  uVar31 >> 0x10) |
                                                  (byte)((ulong)uVar27 >> 0x10) & bVar3,
                                                  CONCAT11((byte)((ulong)uVar31 >> 8) |
                                                           (byte)((ulong)uVar27 >> 8) & bVar3,
                                                           (byte)uVar31 | (byte)uVar27 & bVar3))))))
                              );
        puVar14[-4] = CONCAT17((byte)((ulong)uVar30 >> 0x38) | (byte)((ulong)uVar8 >> 0x38) & bVar3,
                               CONCAT16((byte)((ulong)uVar30 >> 0x30) |
                                        (byte)((ulong)uVar8 >> 0x30) & bVar3,
                                        CONCAT15((byte)((ulong)uVar30 >> 0x28) |
                                                 (byte)((ulong)uVar8 >> 0x28) & bVar3,
                                                 CONCAT14((byte)((ulong)uVar30 >> 0x20) |
                                                          (byte)((ulong)uVar8 >> 0x20) & bVar3,
                                                          CONCAT13((byte)((ulong)uVar30 >> 0x18) |
                                                                   (byte)((ulong)uVar8 >> 0x18) &
                                                                   bVar3,CONCAT12((byte)((ulong)
                                                  uVar30 >> 0x10) |
                                                  (byte)((ulong)uVar8 >> 0x10) & bVar3,
                                                  CONCAT11((byte)((ulong)uVar30 >> 8) |
                                                           (byte)((ulong)uVar8 >> 8) & bVar3,
                                                           (byte)uVar30 | (byte)uVar8 & bVar3)))))))
        ;
        uVar27 = puVar10[1];
        uVar8 = *puVar10;
        uVar31 = puVar10[3];
        uVar30 = puVar10[2];
        uVar35 = puVar14[1];
        uVar34 = *puVar14;
        uVar37 = puVar14[3];
        uVar36 = puVar14[2];
        puVar14[-1] = CONCAT17((byte)((ulong)uVar33 >> 0x38) | (byte)((ulong)uVar29 >> 0x38) & bVar3
                               ,CONCAT16((byte)((ulong)uVar33 >> 0x30) |
                                         (byte)((ulong)uVar29 >> 0x30) & bVar3,
                                         CONCAT15((byte)((ulong)uVar33 >> 0x28) |
                                                  (byte)((ulong)uVar29 >> 0x28) & bVar3,
                                                  CONCAT14((byte)((ulong)uVar33 >> 0x20) |
                                                           (byte)((ulong)uVar29 >> 0x20) & bVar3,
                                                           CONCAT13((byte)((ulong)uVar33 >> 0x18) |
                                                                    (byte)((ulong)uVar29 >> 0x18) &
                                                                    bVar3,CONCAT12((byte)((ulong)
                                                  uVar33 >> 0x10) |
                                                  (byte)((ulong)uVar29 >> 0x10) & bVar3,
                                                  CONCAT11((byte)((ulong)uVar33 >> 8) |
                                                           (byte)((ulong)uVar29 >> 8) & bVar3,
                                                           (byte)uVar33 | (byte)uVar29 & bVar3))))))
                              );
        puVar14[-2] = CONCAT17((byte)((ulong)uVar32 >> 0x38) | (byte)((ulong)uVar28 >> 0x38) & bVar3
                               ,CONCAT16((byte)((ulong)uVar32 >> 0x30) |
                                         (byte)((ulong)uVar28 >> 0x30) & bVar3,
                                         CONCAT15((byte)((ulong)uVar32 >> 0x28) |
                                                  (byte)((ulong)uVar28 >> 0x28) & bVar3,
                                                  CONCAT14((byte)((ulong)uVar32 >> 0x20) |
                                                           (byte)((ulong)uVar28 >> 0x20) & bVar3,
                                                           CONCAT13((byte)((ulong)uVar32 >> 0x18) |
                                                                    (byte)((ulong)uVar28 >> 0x18) &
                                                                    bVar3,CONCAT12((byte)((ulong)
                                                  uVar32 >> 0x10) |
                                                  (byte)((ulong)uVar28 >> 0x10) & bVar3,
                                                  CONCAT11((byte)((ulong)uVar32 >> 8) |
                                                           (byte)((ulong)uVar28 >> 8) & bVar3,
                                                           (byte)uVar32 | (byte)uVar28 & bVar3))))))
                              );
        puVar14[1] = CONCAT17((byte)((ulong)uVar35 >> 0x38) | (byte)((ulong)uVar27 >> 0x38) & bVar3,
                              CONCAT16((byte)((ulong)uVar35 >> 0x30) |
                                       (byte)((ulong)uVar27 >> 0x30) & bVar3,
                                       CONCAT15((byte)((ulong)uVar35 >> 0x28) |
                                                (byte)((ulong)uVar27 >> 0x28) & bVar3,
                                                CONCAT14((byte)((ulong)uVar35 >> 0x20) |
                                                         (byte)((ulong)uVar27 >> 0x20) & bVar3,
                                                         CONCAT13((byte)((ulong)uVar35 >> 0x18) |
                                                                  (byte)((ulong)uVar27 >> 0x18) &
                                                                  bVar3,CONCAT12((byte)((ulong)
                                                  uVar35 >> 0x10) |
                                                  (byte)((ulong)uVar27 >> 0x10) & bVar3,
                                                  CONCAT11((byte)((ulong)uVar35 >> 8) |
                                                           (byte)((ulong)uVar27 >> 8) & bVar3,
                                                           (byte)uVar35 | (byte)uVar27 & bVar3))))))
                             );
        *puVar14 = CONCAT17((byte)((ulong)uVar34 >> 0x38) | (byte)((ulong)uVar8 >> 0x38) & bVar3,
                            CONCAT16((byte)((ulong)uVar34 >> 0x30) |
                                     (byte)((ulong)uVar8 >> 0x30) & bVar3,
                                     CONCAT15((byte)((ulong)uVar34 >> 0x28) |
                                              (byte)((ulong)uVar8 >> 0x28) & bVar3,
                                              CONCAT14((byte)((ulong)uVar34 >> 0x20) |
                                                       (byte)((ulong)uVar8 >> 0x20) & bVar3,
                                                       CONCAT13((byte)((ulong)uVar34 >> 0x18) |
                                                                (byte)((ulong)uVar8 >> 0x18) & bVar3
                                                                ,CONCAT12((byte)((ulong)uVar34 >>
                                                                                0x10) |
                                                                          (byte)((ulong)uVar8 >>
                                                                                0x10) & bVar3,
                                                                          CONCAT11((byte)((ulong)
                                                  uVar34 >> 8) | (byte)((ulong)uVar8 >> 8) & bVar3,
                                                  (byte)uVar34 | (byte)uVar8 & bVar3)))))));
        puVar14[3] = CONCAT17((byte)((ulong)uVar37 >> 0x38) | (byte)((ulong)uVar31 >> 0x38) & bVar3,
                              CONCAT16((byte)((ulong)uVar37 >> 0x30) |
                                       (byte)((ulong)uVar31 >> 0x30) & bVar3,
                                       CONCAT15((byte)((ulong)uVar37 >> 0x28) |
                                                (byte)((ulong)uVar31 >> 0x28) & bVar3,
                                                CONCAT14((byte)((ulong)uVar37 >> 0x20) |
                                                         (byte)((ulong)uVar31 >> 0x20) & bVar3,
                                                         CONCAT13((byte)((ulong)uVar37 >> 0x18) |
                                                                  (byte)((ulong)uVar31 >> 0x18) &
                                                                  bVar3,CONCAT12((byte)((ulong)
                                                  uVar37 >> 0x10) |
                                                  (byte)((ulong)uVar31 >> 0x10) & bVar3,
                                                  CONCAT11((byte)((ulong)uVar37 >> 8) |
                                                           (byte)((ulong)uVar31 >> 8) & bVar3,
                                                           (byte)uVar37 | (byte)uVar31 & bVar3))))))
                             );
        puVar14[2] = CONCAT17((byte)((ulong)uVar36 >> 0x38) | (byte)((ulong)uVar30 >> 0x38) & bVar3,
                              CONCAT16((byte)((ulong)uVar36 >> 0x30) |
                                       (byte)((ulong)uVar30 >> 0x30) & bVar3,
                                       CONCAT15((byte)((ulong)uVar36 >> 0x28) |
                                                (byte)((ulong)uVar30 >> 0x28) & bVar3,
                                                CONCAT14((byte)((ulong)uVar36 >> 0x20) |
                                                         (byte)((ulong)uVar30 >> 0x20) & bVar3,
                                                         CONCAT13((byte)((ulong)uVar36 >> 0x18) |
                                                                  (byte)((ulong)uVar30 >> 0x18) &
                                                                  bVar3,CONCAT12((byte)((ulong)
                                                  uVar36 >> 0x10) |
                                                  (byte)((ulong)uVar30 >> 0x10) & bVar3,
                                                  CONCAT11((byte)((ulong)uVar36 >> 8) |
                                                           (byte)((ulong)uVar30 >> 8) & bVar3,
                                                           (byte)uVar36 | (byte)uVar30 & bVar3))))))
                             );
        puVar10 = puVar10 + 8;
        puVar14 = puVar14 + 8;
      } while (uVar16 != 0);
      uVar16 = uVar13;
      if (uVar25 != uVar13) {
LAB_004d1284:
        lVar11 = uVar25 - uVar16;
        pbVar15 = (byte *)((long)&local_290 + uVar16);
        pbVar17 = (byte *)((long)local_310 + uVar16);
        do {
          lVar11 = lVar11 + -1;
          *pbVar15 = *pbVar15 | *pbVar17 & bVar3;
          pbVar15 = pbVar15 + 1;
          pbVar17 = pbVar17 + 1;
        } while (lVar11 != 0);
      }
      uVar19 = uVar19 + 1;
      if (uVar2 < uVar19) break;
    } while( true );
  }
  lVar11 = FUN_00444930();
  if (lVar11 != 0) {
    uVar8 = FUN_0041cd10(param_1);
    iVar7 = FUN_004449b0(lVar11,uVar8,0);
    if (0 < iVar7) {
      if (param_10 == '\0') {
        uStack_1c0 = uStack_1c0 ^ 0x6a6a6a6a6a6a6a6a;
        uStack_1b8 = uStack_1b8 ^ 0x6a6a6a6a6a6a6a6a;
        local_1d0 = local_1d0 ^ 0x6a6a6a6a6a6a6a6a;
        uStack_1c8 = uStack_1c8 ^ 0x6a6a6a6a6a6a6a6a;
        uStack_1a0 = uStack_1a0 ^ 0x6a6a6a6a6a6a6a6a;
        uStack_198 = uStack_198 ^ 0x6a6a6a6a6a6a6a6a;
        local_1b0 = local_1b0 ^ 0x6a6a6a6a6a6a6a6a;
        uStack_1a8 = uStack_1a8 ^ 0x6a6a6a6a6a6a6a6a;
        if (__n_02 != 0x40) {
          uStack_180 = uStack_180 ^ 0x6a6a6a6a6a6a6a6a;
          uStack_178 = uStack_178 ^ 0x6a6a6a6a6a6a6a6a;
          local_190 = local_190 ^ 0x6a6a6a6a6a6a6a6a;
          uStack_188 = uStack_188 ^ 0x6a6a6a6a6a6a6a6a;
          local_170 = local_170 ^ 0x6a6a6a6a6a6a6a6a;
          uStack_168 = uStack_168 ^ 0x6a6a6a6a6a6a6a6a;
          uStack_160 = uStack_160 ^ 0x6a6a6a6a6a6a6a6a;
          uStack_158 = uStack_158 ^ 0x6a6a6a6a6a6a6a6a;
        }
        iVar7 = FUN_00444ad0(lVar11,&local_1d0,__n_02);
      }
      else {
        memset(&local_1d0,0x5c,__n_00);
        iVar7 = FUN_00444ad0(lVar11,param_8,param_9);
        if (iVar7 < 1) goto LAB_004d13e0;
        iVar7 = FUN_00444ad0(lVar11,&local_1d0,__n_00);
      }
      if ((0 < iVar7) && (iVar7 = FUN_00444ad0(lVar11,&local_290,uVar25), 0 < iVar7)) {
        iVar7 = FUN_00444af0(lVar11,param_2,local_310);
        if ((param_3 != (ulong *)0x0) && (iVar7 != 0)) {
          *param_3 = (ulong)local_310[0];
        }
        FUN_00444950(lVar11);
        return 1;
      }
    }
  }
LAB_004d13e0:
  FUN_00444950(lVar11);
  return 0;
LAB_004d119c:
  bVar21 = 0;
  goto LAB_004d11a0;
}


