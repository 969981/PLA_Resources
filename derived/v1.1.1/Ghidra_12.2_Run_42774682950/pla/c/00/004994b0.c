/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004994b0; name: FUN_004994b0
 */


undefined8
FUN_004994b0(long param_1,ulong param_2,ulong param_3,long param_4,void *param_5,ulong param_6,
            void *param_7,int *param_8,ulong *param_9,undefined8 param_10)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  size_t sVar18;
  size_t sVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  undefined8 *puVar22;
  byte *pbVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  int iVar28;
  uint uVar29;
  ulong uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  byte local_e0 [31];
  byte bStack_c1;
  undefined8 auStack_c0 [3];
  byte abStack_a1 [33];
  undefined8 local_80 [4];
  
  uVar3 = (uint)(param_3 >> 3);
  if (0x20 < uVar3) {
    return 0;
  }
  if ((1L << (param_3 >> 3 & 0x3f) & 0x110100000U) == 0) {
    return 0;
  }
  if (param_4 == 0) {
    if (uVar3 == 0x1c) {
      uVar3 = 0x1c;
      param_4 = FUN_0044f840();
    }
    else if (uVar3 == 0x14) {
      uVar3 = 0x14;
      param_4 = FUN_0044f830();
    }
    else {
      param_4 = FUN_0044f850();
    }
    if (param_2 < 0x201) {
      param_2 = 0x200;
    }
    if (param_5 == (void *)0x0) goto LAB_004995c4;
LAB_00499534:
    sVar18 = (size_t)(int)uVar3;
    if (param_6 < sVar18) {
      FUN_004014b0(10,0x7d,0x6e,"external/openssl/crypto/dsa/dsa_gen.c",0x55);
      return 0;
    }
    if (param_6 <= sVar18) {
      sVar18 = param_6;
    }
    memcpy(local_80,param_5,sVar18);
    lVar8 = FUN_0040d8e0();
    if (lVar8 == 0) goto LAB_004996fc;
LAB_004995d0:
    lVar27 = FUN_0040de30();
    if (lVar27 != 0) {
      FUN_0040e090(lVar27);
      uVar31 = FUN_0040e240(lVar27);
      uVar9 = FUN_0040e240(lVar27);
      uVar10 = FUN_0040e240(lVar27);
      uVar11 = FUN_0040e240(lVar27);
      uVar12 = FUN_0040e240(lVar27);
      uVar13 = FUN_0040e240(lVar27);
      uVar14 = FUN_0040e240(lVar27);
      lVar15 = FUN_0040e240(lVar27);
      if (lVar15 != 0) {
        uVar16 = FUN_0040bfc0();
        uVar30 = (param_2 + 0x3f & 0xffffffffffffffc0) - 1;
        iVar4 = FUN_00410600(lVar15,uVar16,uVar30 & 0xffffffff);
        if (iVar4 != 0) {
          sVar18 = (size_t)(int)uVar3;
          uVar25 = (ulong)uVar3;
          uVar26 = uVar25 & 0xffffffc0;
          iVar4 = 0;
          do {
            if (0 < (int)uVar3) {
              do {
                iVar7 = FUN_0042a060(param_10,0,iVar4);
                if ((iVar7 == 0) ||
                   ((param_5 == (void *)0x0 && (iVar7 = FUN_00427c60(local_80,uVar3), iVar7 < 1))))
                goto LAB_00499700;
                iVar4 = iVar4 + 1;
                memcpy(auStack_c0,local_80,sVar18);
                memcpy(local_e0,local_80,sVar18);
                sVar19 = sVar18;
                do {
                  sVar19 = sVar19 - 1;
                  uVar29 = *(byte *)((long)auStack_c0 + sVar19) + 1;
                  *(char *)((long)auStack_c0 + sVar19) = (char)uVar29;
                  if (uVar29 >> 8 == 0) break;
                } while (0 < (long)sVar19);
                iVar7 = FUN_00444ea0(local_80,sVar18,abStack_a1 + 1,0,param_4,0);
                if ((iVar7 == 0) ||
                   (iVar7 = FUN_00444ea0(auStack_c0,sVar18,local_e0,0,param_4,0), iVar7 == 0))
                goto LAB_00499700;
                if (uVar3 < 0x40) {
                  uVar24 = 0;
LAB_00499b50:
                  lVar17 = uVar25 - uVar24;
                  pbVar21 = local_e0 + uVar24;
                  pbVar23 = abStack_a1 + uVar24 + 1;
                  do {
                    lVar17 = lVar17 + -1;
                    *pbVar23 = *pbVar23 ^ *pbVar21;
                    pbVar21 = pbVar21 + 1;
                    pbVar23 = pbVar23 + 1;
                  } while (lVar17 != 0);
                }
                else {
                  puVar20 = auStack_c0;
                  puVar22 = local_80;
                  uVar24 = uVar26;
                  do {
                    uVar32 = puVar20[-3];
                    uVar16 = puVar20[-4];
                    uVar34 = puVar20[-1];
                    uVar33 = puVar20[-2];
                    uVar24 = uVar24 - 0x40;
                    uVar36 = puVar22[-3];
                    uVar35 = puVar22[-4];
                    uVar38 = puVar22[-1];
                    uVar37 = puVar22[-2];
                    puVar22[-3] = CONCAT17((byte)((ulong)uVar36 >> 0x38) ^
                                           (byte)((ulong)uVar32 >> 0x38),
                                           CONCAT16((byte)((ulong)uVar36 >> 0x30) ^
                                                    (byte)((ulong)uVar32 >> 0x30),
                                                    CONCAT15((byte)((ulong)uVar36 >> 0x28) ^
                                                             (byte)((ulong)uVar32 >> 0x28),
                                                             CONCAT14((byte)((ulong)uVar36 >> 0x20)
                                                                      ^ (byte)((ulong)uVar32 >> 0x20
                                                                              ),
                                                                      CONCAT13((byte)((ulong)uVar36
                                                                                     >> 0x18) ^
                                                                               (byte)((ulong)uVar32
                                                                                     >> 0x18),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar36 >> 0x10) ^
                                                  (byte)((ulong)uVar32 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar36 >> 8) ^
                                                           (byte)((ulong)uVar32 >> 8),
                                                           (byte)uVar36 ^ (byte)uVar32)))))));
                    puVar22[-4] = CONCAT17((byte)((ulong)uVar35 >> 0x38) ^
                                           (byte)((ulong)uVar16 >> 0x38),
                                           CONCAT16((byte)((ulong)uVar35 >> 0x30) ^
                                                    (byte)((ulong)uVar16 >> 0x30),
                                                    CONCAT15((byte)((ulong)uVar35 >> 0x28) ^
                                                             (byte)((ulong)uVar16 >> 0x28),
                                                             CONCAT14((byte)((ulong)uVar35 >> 0x20)
                                                                      ^ (byte)((ulong)uVar16 >> 0x20
                                                                              ),
                                                                      CONCAT13((byte)((ulong)uVar35
                                                                                     >> 0x18) ^
                                                                               (byte)((ulong)uVar16
                                                                                     >> 0x18),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar35 >> 0x10) ^
                                                  (byte)((ulong)uVar16 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar35 >> 8) ^
                                                           (byte)((ulong)uVar16 >> 8),
                                                           (byte)uVar35 ^ (byte)uVar16)))))));
                    puVar22[-1] = CONCAT17((byte)((ulong)uVar38 >> 0x38) ^
                                           (byte)((ulong)uVar34 >> 0x38),
                                           CONCAT16((byte)((ulong)uVar38 >> 0x30) ^
                                                    (byte)((ulong)uVar34 >> 0x30),
                                                    CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                                             (byte)((ulong)uVar34 >> 0x28),
                                                             CONCAT14((byte)((ulong)uVar38 >> 0x20)
                                                                      ^ (byte)((ulong)uVar34 >> 0x20
                                                                              ),
                                                                      CONCAT13((byte)((ulong)uVar38
                                                                                     >> 0x18) ^
                                                                               (byte)((ulong)uVar34
                                                                                     >> 0x18),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar38 >> 0x10) ^
                                                  (byte)((ulong)uVar34 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar38 >> 8) ^
                                                           (byte)((ulong)uVar34 >> 8),
                                                           (byte)uVar38 ^ (byte)uVar34)))))));
                    puVar22[-2] = CONCAT17((byte)((ulong)uVar37 >> 0x38) ^
                                           (byte)((ulong)uVar33 >> 0x38),
                                           CONCAT16((byte)((ulong)uVar37 >> 0x30) ^
                                                    (byte)((ulong)uVar33 >> 0x30),
                                                    CONCAT15((byte)((ulong)uVar37 >> 0x28) ^
                                                             (byte)((ulong)uVar33 >> 0x28),
                                                             CONCAT14((byte)((ulong)uVar37 >> 0x20)
                                                                      ^ (byte)((ulong)uVar33 >> 0x20
                                                                              ),
                                                                      CONCAT13((byte)((ulong)uVar37
                                                                                     >> 0x18) ^
                                                                               (byte)((ulong)uVar33
                                                                                     >> 0x18),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar37 >> 0x10) ^
                                                  (byte)((ulong)uVar33 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar37 >> 8) ^
                                                           (byte)((ulong)uVar33 >> 8),
                                                           (byte)uVar37 ^ (byte)uVar33)))))));
                    uVar32 = puVar22[1];
                    uVar16 = *puVar22;
                    uVar34 = puVar22[3];
                    uVar33 = puVar22[2];
                    uVar36 = puVar20[1];
                    uVar35 = *puVar20;
                    uVar38 = puVar20[3];
                    uVar37 = puVar20[2];
                    puVar22[1] = CONCAT17((byte)((ulong)uVar32 >> 0x38) ^
                                          (byte)((ulong)uVar36 >> 0x38),
                                          CONCAT16((byte)((ulong)uVar32 >> 0x30) ^
                                                   (byte)((ulong)uVar36 >> 0x30),
                                                   CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                                            (byte)((ulong)uVar36 >> 0x28),
                                                            CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                                     (byte)((ulong)uVar36 >> 0x20),
                                                                     CONCAT13((byte)((ulong)uVar32
                                                                                    >> 0x18) ^
                                                                              (byte)((ulong)uVar36
                                                                                    >> 0x18),
                                                                              CONCAT12((byte)((ulong
                                                  )uVar32 >> 0x10) ^ (byte)((ulong)uVar36 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar32 >> 8) ^
                                                           (byte)((ulong)uVar36 >> 8),
                                                           (byte)uVar32 ^ (byte)uVar36)))))));
                    *puVar22 = CONCAT17((byte)((ulong)uVar16 >> 0x38) ^
                                        (byte)((ulong)uVar35 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar16 >> 0x30) ^
                                                 (byte)((ulong)uVar35 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar16 >> 0x28) ^
                                                          (byte)((ulong)uVar35 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                                                   (byte)((ulong)uVar35 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar16 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar35 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar16 >> 0x10) ^ (byte)((ulong)uVar35 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar16 >> 8) ^
                                                           (byte)((ulong)uVar35 >> 8),
                                                           (byte)uVar16 ^ (byte)uVar35)))))));
                    puVar22[3] = CONCAT17((byte)((ulong)uVar34 >> 0x38) ^
                                          (byte)((ulong)uVar38 >> 0x38),
                                          CONCAT16((byte)((ulong)uVar34 >> 0x30) ^
                                                   (byte)((ulong)uVar38 >> 0x30),
                                                   CONCAT15((byte)((ulong)uVar34 >> 0x28) ^
                                                            (byte)((ulong)uVar38 >> 0x28),
                                                            CONCAT14((byte)((ulong)uVar34 >> 0x20) ^
                                                                     (byte)((ulong)uVar38 >> 0x20),
                                                                     CONCAT13((byte)((ulong)uVar34
                                                                                    >> 0x18) ^
                                                                              (byte)((ulong)uVar38
                                                                                    >> 0x18),
                                                                              CONCAT12((byte)((ulong
                                                  )uVar34 >> 0x10) ^ (byte)((ulong)uVar38 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar34 >> 8) ^
                                                           (byte)((ulong)uVar38 >> 8),
                                                           (byte)uVar34 ^ (byte)uVar38)))))));
                    puVar22[2] = CONCAT17((byte)((ulong)uVar33 >> 0x38) ^
                                          (byte)((ulong)uVar37 >> 0x38),
                                          CONCAT16((byte)((ulong)uVar33 >> 0x30) ^
                                                   (byte)((ulong)uVar37 >> 0x30),
                                                   CONCAT15((byte)((ulong)uVar33 >> 0x28) ^
                                                            (byte)((ulong)uVar37 >> 0x28),
                                                            CONCAT14((byte)((ulong)uVar33 >> 0x20) ^
                                                                     (byte)((ulong)uVar37 >> 0x20),
                                                                     CONCAT13((byte)((ulong)uVar33
                                                                                    >> 0x18) ^
                                                                              (byte)((ulong)uVar37
                                                                                    >> 0x18),
                                                                              CONCAT12((byte)((ulong
                                                  )uVar33 >> 0x10) ^ (byte)((ulong)uVar37 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar33 >> 8) ^
                                                           (byte)((ulong)uVar37 >> 8),
                                                           (byte)uVar33 ^ (byte)uVar37)))))));
                    puVar20 = puVar20 + 8;
                    puVar22 = puVar22 + 8;
                  } while (uVar24 != 0);
                  uVar24 = uVar26;
                  if (uVar26 != uVar25) goto LAB_00499b50;
                }
                abStack_a1[1] = abStack_a1[1] | 0x80;
                abStack_a1[sVar18] = abStack_a1[sVar18] | 1;
                lVar17 = FUN_0040c710(abStack_a1 + 1,uVar3,uVar11);
                if (lVar17 == 0) goto LAB_00499700;
                iVar7 = FUN_0042a960(uVar11,0x40,lVar27,param_5 == (void *)0x0,param_10);
                if (0 < iVar7) goto LAB_00499be4;
                param_5 = (void *)0x0;
                if (iVar7 != 0) goto LAB_00499700;
              } while( true );
            }
            while( true ) {
              iVar7 = FUN_0042a060(param_10,0,iVar4);
              if ((iVar7 == 0) ||
                 ((param_5 == (void *)0x0 && (iVar7 = FUN_00427c60(local_80,uVar3), iVar7 < 1))))
              goto LAB_00499700;
              memcpy(auStack_c0,local_80,sVar18);
              memcpy(local_e0,local_80,sVar18);
              iVar7 = FUN_00444ea0(local_80,sVar18,abStack_a1 + 1,0,param_4,0);
              if ((iVar7 == 0) ||
                 (iVar7 = FUN_00444ea0(auStack_c0,sVar18,local_e0,0,param_4,0), iVar7 == 0))
              goto LAB_00499700;
              abStack_a1[1] = abStack_a1[1] | 0x80;
              abStack_a1[sVar18] = abStack_a1[sVar18] | 1;
              lVar17 = FUN_0040c710(abStack_a1 + 1,uVar3,uVar11);
              if (lVar17 == 0) goto LAB_00499700;
              iVar7 = FUN_0042a960(uVar11,0x40,lVar27,param_5 == (void *)0x0,param_10);
              if (0 < iVar7) break;
              param_5 = (void *)0x0;
              iVar4 = iVar4 + 1;
              if (iVar7 != 0) goto LAB_00499700;
            }
            iVar4 = iVar4 + 1;
LAB_00499be4:
            iVar7 = FUN_0042a060(param_10,2,0);
            if ((iVar7 == 0) || (iVar7 = FUN_0042a060(param_10,3,0), iVar7 == 0)) goto LAB_00499700;
            iVar7 = 0;
            do {
              if ((iVar7 != 0) && (iVar5 = FUN_0042a060(param_10,0,iVar7), iVar5 == 0))
              goto LAB_00499700;
              FUN_0040c6b0(uVar10,0);
              iVar5 = (int)(uVar30 / 0xa0);
              if (-1 < iVar5) {
                iVar28 = 0;
                do {
                  sVar19 = sVar18;
                  do {
                    if ((long)sVar19 < 1) break;
                    bVar2 = local_e0[sVar19 + 0x1f];
                    local_e0[sVar19 + 0x1f] = (byte)(bVar2 + 1);
                    sVar19 = sVar19 - 1;
                  } while (bVar2 + 1 >> 8 != 0);
                  iVar6 = FUN_00444ea0(auStack_c0,sVar18,abStack_a1 + 1,0,param_4,0);
                  if ((((iVar6 == 0) ||
                       (lVar17 = FUN_0040c710(abStack_a1 + 1,uVar3,uVar31), lVar17 == 0)) ||
                      (iVar6 = FUN_00410600(uVar31,uVar31,uVar3 * 8 * iVar28), iVar6 == 0)) ||
                     (iVar6 = FUN_00411730(uVar10,uVar10,uVar31), iVar6 == 0)) goto LAB_00499d98;
                  bVar1 = iVar28 < iVar5;
                  iVar28 = iVar28 + 1;
                } while (bVar1);
              }
              iVar5 = FUN_0040cdf0(uVar10,uVar30);
              if (iVar5 == 0) goto LAB_00499d98;
              lVar17 = FUN_0040c5d0(uVar12,uVar10);
              if (((lVar17 == 0) || (iVar5 = FUN_00411730(uVar12,uVar12,lVar15), iVar5 == 0)) ||
                 ((iVar5 = FUN_00410400(uVar31,uVar11), iVar5 == 0 ||
                  (iVar5 = FUN_0040e5a0(0,uVar13,uVar12,uVar31,lVar27), iVar5 == 0))))
              goto LAB_00499700;
              uVar16 = FUN_0040bfc0();
              iVar5 = FUN_00411b00(uVar31,uVar13,uVar16);
              if ((iVar5 == 0) || (iVar5 = FUN_00411b00(uVar14,uVar12,uVar31), iVar5 == 0))
              goto LAB_00499700;
              iVar5 = FUN_0040cc60(uVar14,lVar15);
              if (-1 < iVar5) {
                iVar5 = FUN_0042a960(uVar14,0x40,lVar27,1,param_10);
                if (0 < iVar5) {
                  iVar4 = FUN_0042a060(param_10,2,1);
                  if (iVar4 == 0) goto LAB_00499700;
                  uVar10 = FUN_0040bfc0();
                  iVar4 = FUN_00411b00(lVar15,uVar14,uVar10);
                  if ((((iVar4 == 0) ||
                       (iVar4 = FUN_0040e5a0(uVar31,0,lVar15,uVar11,lVar27), iVar4 == 0)) ||
                      (iVar4 = FUN_0040c6b0(lVar15,2), iVar4 == 0)) ||
                     ((iVar4 = FUN_0040d9b0(lVar8,uVar14,lVar27), iVar4 == 0 ||
                      (iVar4 = FUN_004250f0(uVar9,lVar15,uVar31,uVar14,lVar27,lVar8), iVar4 == 0))))
                  goto LAB_00499d98;
                  uVar29 = 2;
                  goto LAB_00499c98;
                }
                if (iVar5 != 0) goto LAB_00499700;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 != 0x1000);
            param_5 = (void *)0x0;
          } while( true );
        }
        goto LAB_00499d98;
      }
    }
  }
  else {
    uVar3 = FUN_0041ccc0(param_4);
    if (param_2 < 0x201) {
      param_2 = 0x200;
    }
    if (param_5 != (void *)0x0) goto LAB_00499534;
LAB_004995c4:
    lVar8 = FUN_0040d8e0();
    if (lVar8 != 0) goto LAB_004995d0;
LAB_004996fc:
    lVar27 = 0;
  }
LAB_00499700:
  uVar31 = 0;
LAB_00499704:
  FUN_0040e1b0(lVar27);
  FUN_0040def0(lVar27);
  FUN_0040d960(lVar8);
  return uVar31;
  while( true ) {
    uVar10 = FUN_0040bfc0();
    iVar4 = FUN_00411730(lVar15,lVar15,uVar10);
    if (iVar4 == 0) break;
    uVar29 = uVar29 + 1;
    iVar4 = FUN_004250f0(uVar9,lVar15,uVar31,uVar14,lVar27,lVar8);
    if (iVar4 == 0) break;
LAB_00499c98:
    iVar4 = FUN_0040d220(uVar9);
    if (iVar4 == 0) {
      iVar4 = FUN_0042a060(param_10,3,1);
      if (iVar4 != 0) {
        FUN_0040c1e0(*(undefined8 *)(param_1 + 8));
        FUN_0040c1e0(*(undefined8 *)(param_1 + 0x10));
        FUN_0040c1e0(*(undefined8 *)(param_1 + 0x18));
        uVar31 = FUN_0040c480(uVar14);
        *(undefined8 *)(param_1 + 8) = uVar31;
        uVar31 = FUN_0040c480(uVar11);
        *(undefined8 *)(param_1 + 0x10) = uVar31;
        lVar15 = FUN_0040c480(uVar9);
        *(long *)(param_1 + 0x18) = lVar15;
        if (*(long *)(param_1 + 8) != 0) {
          uVar31 = 0;
          if ((lVar15 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
            if (param_8 != (int *)0x0) {
              *param_8 = iVar7;
            }
            if (param_9 != (ulong *)0x0) {
              *param_9 = (ulong)uVar29;
            }
            if (param_7 != (void *)0x0) {
              memcpy(param_7,local_80,(long)(int)uVar3);
            }
            uVar31 = 1;
          }
          goto LAB_00499704;
        }
      }
      break;
    }
  }
LAB_00499d98:
  uVar31 = 0;
  goto LAB_00499704;
}


