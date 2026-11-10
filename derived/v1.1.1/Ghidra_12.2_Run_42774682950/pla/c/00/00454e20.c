/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00454e20; name: FUN_00454e20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00454e20(byte *param_1,uint param_2,long param_3,uint param_4,int param_5,
                 undefined8 param_6,int param_7,long param_8,long param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  byte *pbVar18;
  long lVar19;
  byte bVar20;
  uint uVar21;
  byte *pbVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  byte *pbVar29;
  byte *pbVar30;
  uint uVar31;
  uint uVar32;
  byte *pbVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  byte bVar38;
  undefined8 uVar37;
  undefined8 uVar39;
  int iVar40;
  undefined8 uVar41;
  int iVar42;
  int iVar43;
  undefined8 uVar44;
  int iVar45;
  int iVar46;
  undefined8 uVar47;
  int iVar48;
  int iVar49;
  undefined8 uVar50;
  int iVar51;
  int iVar52;
  undefined8 uVar53;
  int iVar54;
  int iVar55;
  undefined8 uVar56;
  int iVar57;
  int iVar58;
  undefined8 uVar59;
  int iVar60;
  int iVar61;
  undefined8 uVar62;
  int iVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  undefined1 auStack_e0 [64];
  byte local_a0 [32];
  undefined8 local_80 [4];
  
  if (param_8 == 0) {
    param_8 = FUN_0044f830();
  }
  lVar25 = param_8;
  if (param_9 != 0) {
    lVar25 = param_9;
  }
  uVar14 = FUN_0041ccc0(param_8);
  if ((int)param_2 < 1) {
    return 0xffffffff;
  }
  if ((int)param_4 < 1) {
    return 0xffffffff;
  }
  if ((param_5 < (int)param_4) || (param_5 < (int)(uVar14 * 2 + 2))) {
    FUN_004014b0(4,0x99,0x79,"external/openssl/crypto/rsa/rsa_oaep.c",0x98);
    return 0xffffffff;
  }
  uVar1 = ~uVar14 + param_5;
  uVar17 = (ulong)(int)uVar1;
  pbVar18 = (byte *)FUN_00400260(uVar17,"external/openssl/crypto/rsa/rsa_oaep.c",0x9d);
  if (pbVar18 == (byte *)0x0) {
    FUN_004014b0(4,0x99,0x41,"external/openssl/crypto/rsa/rsa_oaep.c",0x9f);
  }
  else {
    lVar19 = FUN_00400260((long)param_5,"external/openssl/crypto/rsa/rsa_oaep.c",0xa3);
    if (lVar19 != 0) {
      pbVar33 = (byte *)(lVar19 + param_5);
      if (param_5 < 1) {
        uVar31 = (uint)*pbVar33;
      }
      else {
        pbVar22 = (byte *)(param_3 + (int)param_4);
        iVar15 = param_5;
        do {
          uVar16 = (int)(param_4 - 1 & (param_4 ^ 0xffffffff)) >> 0x1f;
          pbVar22 = pbVar22 + -(ulong)((uVar16 ^ 0xffffffff) & 1);
          uVar31 = (uint)*pbVar22 & (uVar16 ^ 0xffffffff);
          param_4 = param_4 + (uVar16 ^ 0xffffffff);
          iVar15 = iVar15 + -1;
          pbVar33 = pbVar33 + -1;
          *pbVar33 = (byte)uVar31;
        } while (iVar15 != 0);
      }
      pbVar22 = pbVar33 + 1;
      lVar19 = (long)(int)uVar14;
      pbVar30 = pbVar22 + lVar19;
      uVar16 = (int)(uVar31 - 1) >> 0x1f;
      iVar15 = FUN_00454cc0(local_a0,lVar19,pbVar30,uVar17,lVar25);
      if (iVar15 != 0) {
        uVar31 = 0xffffffff;
        goto LAB_004555dc;
      }
      if (0 < (int)uVar14) {
        uVar23 = (ulong)uVar14;
        if (uVar14 < 0x40) {
          uVar26 = 0;
          uVar27 = 0xffffffffffffffff;
        }
        else {
          if (local_a0 < pbVar33 + uVar23 + 1 && pbVar22 < local_a0 + uVar23) {
            uVar26 = 0;
          }
          else {
            uVar26 = uVar23 & 0xffffffc0;
            puVar28 = local_80;
            pbVar29 = pbVar33 + 0x21;
            uVar27 = uVar26;
            do {
              uVar39 = *(undefined8 *)(pbVar29 + -0x18);
              uVar37 = *(undefined8 *)(pbVar29 + -0x20);
              uVar44 = *(undefined8 *)(pbVar29 + -8);
              uVar41 = *(undefined8 *)(pbVar29 + -0x10);
              uVar27 = uVar27 - 0x40;
              uVar62 = puVar28[-3];
              uVar59 = puVar28[-4];
              uVar65 = puVar28[-1];
              uVar64 = puVar28[-2];
              uVar50 = *(undefined8 *)(pbVar29 + 8);
              uVar47 = *(undefined8 *)pbVar29;
              uVar56 = *(undefined8 *)(pbVar29 + 0x18);
              uVar53 = *(undefined8 *)(pbVar29 + 0x10);
              puVar28[-3] = CONCAT17((byte)((ulong)uVar62 >> 0x38) ^ (byte)((ulong)uVar39 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar62 >> 0x30) ^
                                              (byte)((ulong)uVar39 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar62 >> 0x28) ^
                                                       (byte)((ulong)uVar39 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar62 >> 0x20) ^
                                                                (byte)((ulong)uVar39 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar62 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar39 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar62 >> 0x10) ^ (byte)((ulong)uVar39 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar62 >> 8) ^
                                                           (byte)((ulong)uVar39 >> 8),
                                                           (byte)uVar62 ^ (byte)uVar39)))))));
              puVar28[-4] = CONCAT17((byte)((ulong)uVar59 >> 0x38) ^ (byte)((ulong)uVar37 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar59 >> 0x30) ^
                                              (byte)((ulong)uVar37 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar59 >> 0x28) ^
                                                       (byte)((ulong)uVar37 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar59 >> 0x20) ^
                                                                (byte)((ulong)uVar37 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar59 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar37 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar59 >> 0x10) ^ (byte)((ulong)uVar37 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar59 >> 8) ^
                                                           (byte)((ulong)uVar37 >> 8),
                                                           (byte)uVar59 ^ (byte)uVar37)))))));
              puVar28[-1] = CONCAT17((byte)((ulong)uVar65 >> 0x38) ^ (byte)((ulong)uVar44 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar65 >> 0x30) ^
                                              (byte)((ulong)uVar44 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar65 >> 0x28) ^
                                                       (byte)((ulong)uVar44 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar65 >> 0x20) ^
                                                                (byte)((ulong)uVar44 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar65 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar44 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar65 >> 0x10) ^ (byte)((ulong)uVar44 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar65 >> 8) ^
                                                           (byte)((ulong)uVar44 >> 8),
                                                           (byte)uVar65 ^ (byte)uVar44)))))));
              puVar28[-2] = CONCAT17((byte)((ulong)uVar64 >> 0x38) ^ (byte)((ulong)uVar41 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar64 >> 0x30) ^
                                              (byte)((ulong)uVar41 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar64 >> 0x28) ^
                                                       (byte)((ulong)uVar41 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar64 >> 0x20) ^
                                                                (byte)((ulong)uVar41 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar64 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar41 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar64 >> 0x10) ^ (byte)((ulong)uVar41 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar64 >> 8) ^
                                                           (byte)((ulong)uVar41 >> 8),
                                                           (byte)uVar64 ^ (byte)uVar41)))))));
              uVar39 = puVar28[1];
              uVar37 = *puVar28;
              uVar44 = puVar28[3];
              uVar41 = puVar28[2];
              puVar28[1] = CONCAT17((byte)((ulong)uVar39 >> 0x38) ^ (byte)((ulong)uVar50 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar39 >> 0x30) ^
                                             (byte)((ulong)uVar50 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar39 >> 0x28) ^
                                                      (byte)((ulong)uVar50 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar39 >> 0x20) ^
                                                               (byte)((ulong)uVar50 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar39 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar50 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar39 >> 0x10) ^
                                                           (byte)((ulong)uVar50 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar39 >> 8) ^
                                                                    (byte)((ulong)uVar50 >> 8),
                                                                    (byte)uVar39 ^ (byte)uVar50)))))
                                            ));
              *puVar28 = CONCAT17((byte)((ulong)uVar37 >> 0x38) ^ (byte)((ulong)uVar47 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar37 >> 0x30) ^
                                           (byte)((ulong)uVar47 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar37 >> 0x28) ^
                                                    (byte)((ulong)uVar47 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar37 >> 0x20) ^
                                                             (byte)((ulong)uVar47 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar37 >> 0x18)
                                                                      ^ (byte)((ulong)uVar47 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar37
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar47
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar37 >> 8) ^ (byte)((ulong)uVar47 >> 8),
                                                  (byte)uVar37 ^ (byte)uVar47)))))));
              puVar28[3] = CONCAT17((byte)((ulong)uVar44 >> 0x38) ^ (byte)((ulong)uVar56 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar44 >> 0x30) ^
                                             (byte)((ulong)uVar56 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar44 >> 0x28) ^
                                                      (byte)((ulong)uVar56 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar44 >> 0x20) ^
                                                               (byte)((ulong)uVar56 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar44 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar56 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar44 >> 0x10) ^
                                                           (byte)((ulong)uVar56 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar44 >> 8) ^
                                                                    (byte)((ulong)uVar56 >> 8),
                                                                    (byte)uVar44 ^ (byte)uVar56)))))
                                            ));
              puVar28[2] = CONCAT17((byte)((ulong)uVar41 >> 0x38) ^ (byte)((ulong)uVar53 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar41 >> 0x30) ^
                                             (byte)((ulong)uVar53 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar41 >> 0x28) ^
                                                      (byte)((ulong)uVar53 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar41 >> 0x20) ^
                                                               (byte)((ulong)uVar53 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar41 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar53 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar41 >> 0x10) ^
                                                           (byte)((ulong)uVar53 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar41 >> 8) ^
                                                                    (byte)((ulong)uVar53 >> 8),
                                                                    (byte)uVar41 ^ (byte)uVar53)))))
                                            ));
              puVar28 = puVar28 + 8;
              pbVar29 = pbVar29 + 0x40;
            } while (uVar27 != 0);
            if (uVar26 == uVar23) goto LAB_00455114;
          }
          uVar27 = ~uVar26;
        }
        if ((uVar14 & 1) != 0) {
          local_a0[uVar26] = local_a0[uVar26] ^ pbVar22[uVar26];
          uVar26 = uVar26 | 1;
        }
        if (uVar27 + uVar23 != 0) {
          lVar24 = uVar23 - uVar26;
          pbVar29 = local_a0 + uVar26 + 1;
          pbVar22 = pbVar33 + uVar26;
          do {
            lVar24 = lVar24 + -2;
            pbVar29[-1] = pbVar29[-1] ^ pbVar22[1];
            *pbVar29 = *pbVar29 ^ pbVar22[2];
            pbVar29 = pbVar29 + 2;
            pbVar22 = pbVar22 + 2;
          } while (lVar24 != 0);
        }
      }
LAB_00455114:
      iVar15 = FUN_00454cc0(pbVar18,uVar17,local_a0,lVar19,lVar25);
      if (iVar15 != 0) {
        uVar31 = 0xffffffff;
        goto LAB_004555dc;
      }
      if (0 < (int)uVar1) {
        uVar23 = (ulong)uVar1;
        if ((uVar1 < 0x40) ||
           ((pbVar18 < pbVar33 + lVar19 + uVar23 + 1 && (pbVar30 < pbVar18 + uVar23)))) {
          uVar26 = 0;
          uVar27 = 0xffffffffffffffff;
        }
        else {
          uVar26 = uVar17 & 0xffffffc0;
          pbVar22 = pbVar18 + 0x20;
          pbVar29 = pbVar33 + lVar19 + 0x21;
          uVar27 = uVar26;
          do {
            uVar39 = *(undefined8 *)(pbVar29 + -0x18);
            uVar37 = *(undefined8 *)(pbVar29 + -0x20);
            uVar44 = *(undefined8 *)(pbVar29 + -8);
            uVar41 = *(undefined8 *)(pbVar29 + -0x10);
            uVar27 = uVar27 - 0x40;
            uVar62 = *(undefined8 *)(pbVar22 + -0x18);
            uVar59 = *(undefined8 *)(pbVar22 + -0x20);
            uVar65 = *(undefined8 *)(pbVar22 + -8);
            uVar64 = *(undefined8 *)(pbVar22 + -0x10);
            uVar50 = *(undefined8 *)(pbVar29 + 8);
            uVar47 = *(undefined8 *)pbVar29;
            uVar56 = *(undefined8 *)(pbVar29 + 0x18);
            uVar53 = *(undefined8 *)(pbVar29 + 0x10);
            *(ulong *)(pbVar22 + -0x18) =
                 CONCAT17((byte)((ulong)uVar62 >> 0x38) ^ (byte)((ulong)uVar39 >> 0x38),
                          CONCAT16((byte)((ulong)uVar62 >> 0x30) ^ (byte)((ulong)uVar39 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar62 >> 0x28) ^
                                            (byte)((ulong)uVar39 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar62 >> 0x20) ^
                                                     (byte)((ulong)uVar39 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar62 >> 0x18) ^
                                                              (byte)((ulong)uVar39 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar62 >> 0x10)
                                                                       ^ (byte)((ulong)uVar39 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar62
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar39
                                                                                      >> 8),
                                                                                (byte)uVar62 ^
                                                                                (byte)uVar39)))))));
            *(ulong *)(pbVar22 + -0x20) =
                 CONCAT17((byte)((ulong)uVar59 >> 0x38) ^ (byte)((ulong)uVar37 >> 0x38),
                          CONCAT16((byte)((ulong)uVar59 >> 0x30) ^ (byte)((ulong)uVar37 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar59 >> 0x28) ^
                                            (byte)((ulong)uVar37 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar59 >> 0x20) ^
                                                     (byte)((ulong)uVar37 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar59 >> 0x18) ^
                                                              (byte)((ulong)uVar37 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar59 >> 0x10)
                                                                       ^ (byte)((ulong)uVar37 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar59
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar37
                                                                                      >> 8),
                                                                                (byte)uVar59 ^
                                                                                (byte)uVar37)))))));
            *(ulong *)(pbVar22 + -8) =
                 CONCAT17((byte)((ulong)uVar65 >> 0x38) ^ (byte)((ulong)uVar44 >> 0x38),
                          CONCAT16((byte)((ulong)uVar65 >> 0x30) ^ (byte)((ulong)uVar44 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar65 >> 0x28) ^
                                            (byte)((ulong)uVar44 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar65 >> 0x20) ^
                                                     (byte)((ulong)uVar44 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar65 >> 0x18) ^
                                                              (byte)((ulong)uVar44 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar65 >> 0x10)
                                                                       ^ (byte)((ulong)uVar44 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar65
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar44
                                                                                      >> 8),
                                                                                (byte)uVar65 ^
                                                                                (byte)uVar44)))))));
            *(ulong *)(pbVar22 + -0x10) =
                 CONCAT17((byte)((ulong)uVar64 >> 0x38) ^ (byte)((ulong)uVar41 >> 0x38),
                          CONCAT16((byte)((ulong)uVar64 >> 0x30) ^ (byte)((ulong)uVar41 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar64 >> 0x28) ^
                                            (byte)((ulong)uVar41 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar64 >> 0x20) ^
                                                     (byte)((ulong)uVar41 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar64 >> 0x18) ^
                                                              (byte)((ulong)uVar41 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar64 >> 0x10)
                                                                       ^ (byte)((ulong)uVar41 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar64
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar41
                                                                                      >> 8),
                                                                                (byte)uVar64 ^
                                                                                (byte)uVar41)))))));
            uVar39 = *(undefined8 *)(pbVar22 + 8);
            uVar37 = *(undefined8 *)pbVar22;
            uVar44 = *(undefined8 *)(pbVar22 + 0x18);
            uVar41 = *(undefined8 *)(pbVar22 + 0x10);
            *(ulong *)(pbVar22 + 8) =
                 CONCAT17((byte)((ulong)uVar39 >> 0x38) ^ (byte)((ulong)uVar50 >> 0x38),
                          CONCAT16((byte)((ulong)uVar39 >> 0x30) ^ (byte)((ulong)uVar50 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar39 >> 0x28) ^
                                            (byte)((ulong)uVar50 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar39 >> 0x20) ^
                                                     (byte)((ulong)uVar50 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar39 >> 0x18) ^
                                                              (byte)((ulong)uVar50 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar39 >> 0x10)
                                                                       ^ (byte)((ulong)uVar50 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar39
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar50
                                                                                      >> 8),
                                                                                (byte)uVar39 ^
                                                                                (byte)uVar50)))))));
            *(ulong *)pbVar22 =
                 CONCAT17((byte)((ulong)uVar37 >> 0x38) ^ (byte)((ulong)uVar47 >> 0x38),
                          CONCAT16((byte)((ulong)uVar37 >> 0x30) ^ (byte)((ulong)uVar47 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar37 >> 0x28) ^
                                            (byte)((ulong)uVar47 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar37 >> 0x20) ^
                                                     (byte)((ulong)uVar47 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar37 >> 0x18) ^
                                                              (byte)((ulong)uVar47 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar37 >> 0x10)
                                                                       ^ (byte)((ulong)uVar47 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar37
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar47
                                                                                      >> 8),
                                                                                (byte)uVar37 ^
                                                                                (byte)uVar47)))))));
            *(ulong *)(pbVar22 + 0x18) =
                 CONCAT17((byte)((ulong)uVar44 >> 0x38) ^ (byte)((ulong)uVar56 >> 0x38),
                          CONCAT16((byte)((ulong)uVar44 >> 0x30) ^ (byte)((ulong)uVar56 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar44 >> 0x28) ^
                                            (byte)((ulong)uVar56 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar44 >> 0x20) ^
                                                     (byte)((ulong)uVar56 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar44 >> 0x18) ^
                                                              (byte)((ulong)uVar56 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar44 >> 0x10)
                                                                       ^ (byte)((ulong)uVar56 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar44
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar56
                                                                                      >> 8),
                                                                                (byte)uVar44 ^
                                                                                (byte)uVar56)))))));
            *(ulong *)(pbVar22 + 0x10) =
                 CONCAT17((byte)((ulong)uVar41 >> 0x38) ^ (byte)((ulong)uVar53 >> 0x38),
                          CONCAT16((byte)((ulong)uVar41 >> 0x30) ^ (byte)((ulong)uVar53 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar41 >> 0x28) ^
                                            (byte)((ulong)uVar53 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar41 >> 0x20) ^
                                                     (byte)((ulong)uVar53 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar41 >> 0x18) ^
                                                              (byte)((ulong)uVar53 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar41 >> 0x10)
                                                                       ^ (byte)((ulong)uVar53 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar41
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar53
                                                                                      >> 8),
                                                                                (byte)uVar41 ^
                                                                                (byte)uVar53)))))));
            pbVar22 = pbVar22 + 0x40;
            pbVar29 = pbVar29 + 0x40;
          } while (uVar27 != 0);
          if (uVar26 == uVar23) goto LAB_00455254;
          uVar27 = ~uVar26;
        }
        if ((uVar17 & 1) != 0) {
          pbVar18[uVar26] = pbVar18[uVar26] ^ pbVar30[uVar26];
          uVar26 = uVar26 | 1;
        }
        if (uVar27 + uVar23 != 0) {
          lVar25 = uVar23 - uVar26;
          pbVar30 = pbVar18 + uVar26 + 1;
          pbVar22 = pbVar33 + uVar26 + lVar19;
          do {
            lVar25 = lVar25 + -2;
            pbVar30[-1] = pbVar30[-1] ^ pbVar22[1];
            *pbVar30 = *pbVar30 ^ pbVar22[2];
            pbVar30 = pbVar30 + 2;
            pbVar22 = pbVar22 + 2;
          } while (lVar25 != 0);
        }
      }
LAB_00455254:
      iVar15 = FUN_00444ea0(param_6,(long)param_7,auStack_e0,0,param_8,0);
      if (iVar15 == 0) {
        uVar31 = 0xffffffff;
        goto LAB_004555dc;
      }
      uVar16 = FUN_00404df0(pbVar18,auStack_e0,lVar19);
      uVar16 = (int)(uVar31 - 1 & uVar16 - 1 & (uVar16 ^ 0xffffffff)) >> 0x1f;
      if ((int)uVar14 < (int)uVar1) {
        uVar32 = 0;
        uVar21 = 0;
        lVar25 = uVar17 - lVar19;
        pbVar22 = pbVar18 + lVar19;
        uVar31 = uVar14;
        do {
          uVar3 = (int)((*pbVar22 ^ 1) - 1) >> 0x1f;
          uVar4 = uVar3 & (uVar32 ^ 0xffffffff);
          uVar32 = uVar3 | uVar32;
          uVar21 = uVar21 & (uVar4 ^ 0xffffffff) | uVar4 & uVar31;
          uVar16 = (uVar32 | (int)(*pbVar22 - 1) >> 0x1f) & uVar16;
          uVar31 = uVar31 + 1;
          lVar25 = lVar25 + -1;
          pbVar22 = pbVar22 + 1;
        } while (lVar25 != 0);
        uVar21 = ~uVar21;
      }
      else {
        uVar32 = 0;
        uVar21 = 0xffffffff;
      }
      uVar31 = uVar1 + uVar21;
      uVar3 = uVar1 + ~uVar14;
      uVar4 = uVar3;
      if (-1 < (int)((uVar3 - param_2 ^ param_2 | uVar3 ^ param_2) ^ uVar3)) {
        uVar4 = param_2;
      }
      if (1 < (int)uVar3) {
        lVar25 = (long)(int)(uVar14 + 1);
        pbVar22 = pbVar18 + lVar25;
        iVar15 = uVar1 - 1;
        uVar13 = 1;
        do {
          if ((int)(uVar14 + 1) < iVar15) {
            uVar2 = uVar13 & uVar3 - uVar31;
            uVar26 = (ulong)((param_5 + uVar14 * -2 + -3) - uVar13);
            uVar23 = uVar26 + 1;
            bVar38 = (char)((byte)(uVar2 - 1 >> 0x18) & ((byte)(uVar2 >> 0x18) ^ 0x80)) >> 7;
            bVar20 = bVar38 ^ 0xff;
            lVar24 = (long)(int)uVar13;
            lVar19 = lVar25;
            if ((0xf < uVar23) &&
               ((pbVar30 = pbVar22 + lVar24, pbVar22 + lVar24 + uVar26 + 1 <= pbVar22 ||
                (pbVar22 + uVar26 + 1 <= pbVar30)))) {
              uVar27 = uVar23 & 0x1fffffff0;
              uVar26 = (uVar27 - 0x10 >> 4) + 1;
              uVar34 = uVar26 & 1;
              lVar35 = 0;
              if (uVar27 - 0x10 != 0) {
                lVar19 = uVar34 - uVar26;
                lVar36 = lVar35;
                do {
                  pbVar29 = pbVar22 + lVar36;
                  uVar39 = *(undefined8 *)(pbVar30 + lVar36 + 8);
                  uVar37 = *(undefined8 *)(pbVar30 + lVar36);
                  uVar44 = *(undefined8 *)(pbVar29 + 8);
                  uVar41 = *(undefined8 *)pbVar29;
                  uVar50 = *(undefined8 *)(pbVar29 + 0x18);
                  uVar47 = *(undefined8 *)(pbVar29 + 0x10);
                  lVar35 = lVar36 + 0x20;
                  *(ulong *)(pbVar29 + 8) =
                       CONCAT17((byte)((ulong)uVar44 >> 0x38) & bVar38 |
                                (byte)((ulong)uVar39 >> 0x38) & bVar20,
                                CONCAT16((byte)((ulong)uVar44 >> 0x30) & bVar38 |
                                         (byte)((ulong)uVar39 >> 0x30) & bVar20,
                                         CONCAT15((byte)((ulong)uVar44 >> 0x28) & bVar38 |
                                                  (byte)((ulong)uVar39 >> 0x28) & bVar20,
                                                  CONCAT14((byte)((ulong)uVar44 >> 0x20) & bVar38 |
                                                           (byte)((ulong)uVar39 >> 0x20) & bVar20,
                                                           CONCAT13((byte)((ulong)uVar44 >> 0x18) &
                                                                    bVar38 | (byte)((ulong)uVar39 >>
                                                                                   0x18) & bVar20,
                                                                    CONCAT12((byte)((ulong)uVar44 >>
                                                                                   0x10) & bVar38 |
                                                                             (byte)((ulong)uVar39 >>
                                                                                   0x10) & bVar20,
                                                                             CONCAT11((byte)((ulong)
                                                  uVar44 >> 8) & bVar38 |
                                                  (byte)((ulong)uVar39 >> 8) & bVar20,
                                                  (byte)uVar44 & bVar38 | (byte)uVar39 & bVar20)))))
                                        ));
                  *(ulong *)pbVar29 =
                       CONCAT17((byte)((ulong)uVar41 >> 0x38) & bVar38 |
                                (byte)((ulong)uVar37 >> 0x38) & bVar20,
                                CONCAT16((byte)((ulong)uVar41 >> 0x30) & bVar38 |
                                         (byte)((ulong)uVar37 >> 0x30) & bVar20,
                                         CONCAT15((byte)((ulong)uVar41 >> 0x28) & bVar38 |
                                                  (byte)((ulong)uVar37 >> 0x28) & bVar20,
                                                  CONCAT14((byte)((ulong)uVar41 >> 0x20) & bVar38 |
                                                           (byte)((ulong)uVar37 >> 0x20) & bVar20,
                                                           CONCAT13((byte)((ulong)uVar41 >> 0x18) &
                                                                    bVar38 | (byte)((ulong)uVar37 >>
                                                                                   0x18) & bVar20,
                                                                    CONCAT12((byte)((ulong)uVar41 >>
                                                                                   0x10) & bVar38 |
                                                                             (byte)((ulong)uVar37 >>
                                                                                   0x10) & bVar20,
                                                                             CONCAT11((byte)((ulong)
                                                  uVar41 >> 8) & bVar38 |
                                                  (byte)((ulong)uVar37 >> 8) & bVar20,
                                                  (byte)uVar41 & bVar38 | (byte)uVar37 & bVar20)))))
                                        ));
                  uVar39 = *(undefined8 *)(pbVar30 + lVar36 + 0x18);
                  uVar37 = *(undefined8 *)(pbVar30 + lVar36 + 0x10);
                  lVar19 = lVar19 + 2;
                  *(ulong *)(pbVar29 + 0x18) =
                       CONCAT17((byte)((ulong)uVar50 >> 0x38) & bVar38 |
                                (byte)((ulong)uVar39 >> 0x38) & bVar20,
                                CONCAT16((byte)((ulong)uVar50 >> 0x30) & bVar38 |
                                         (byte)((ulong)uVar39 >> 0x30) & bVar20,
                                         CONCAT15((byte)((ulong)uVar50 >> 0x28) & bVar38 |
                                                  (byte)((ulong)uVar39 >> 0x28) & bVar20,
                                                  CONCAT14((byte)((ulong)uVar50 >> 0x20) & bVar38 |
                                                           (byte)((ulong)uVar39 >> 0x20) & bVar20,
                                                           CONCAT13((byte)((ulong)uVar50 >> 0x18) &
                                                                    bVar38 | (byte)((ulong)uVar39 >>
                                                                                   0x18) & bVar20,
                                                                    CONCAT12((byte)((ulong)uVar50 >>
                                                                                   0x10) & bVar38 |
                                                                             (byte)((ulong)uVar39 >>
                                                                                   0x10) & bVar20,
                                                                             CONCAT11((byte)((ulong)
                                                  uVar50 >> 8) & bVar38 |
                                                  (byte)((ulong)uVar39 >> 8) & bVar20,
                                                  (byte)uVar50 & bVar38 | (byte)uVar39 & bVar20)))))
                                        ));
                  *(ulong *)(pbVar29 + 0x10) =
                       CONCAT17((byte)((ulong)uVar47 >> 0x38) & bVar38 |
                                (byte)((ulong)uVar37 >> 0x38) & bVar20,
                                CONCAT16((byte)((ulong)uVar47 >> 0x30) & bVar38 |
                                         (byte)((ulong)uVar37 >> 0x30) & bVar20,
                                         CONCAT15((byte)((ulong)uVar47 >> 0x28) & bVar38 |
                                                  (byte)((ulong)uVar37 >> 0x28) & bVar20,
                                                  CONCAT14((byte)((ulong)uVar47 >> 0x20) & bVar38 |
                                                           (byte)((ulong)uVar37 >> 0x20) & bVar20,
                                                           CONCAT13((byte)((ulong)uVar47 >> 0x18) &
                                                                    bVar38 | (byte)((ulong)uVar37 >>
                                                                                   0x18) & bVar20,
                                                                    CONCAT12((byte)((ulong)uVar47 >>
                                                                                   0x10) & bVar38 |
                                                                             (byte)((ulong)uVar37 >>
                                                                                   0x10) & bVar20,
                                                                             CONCAT11((byte)((ulong)
                                                  uVar47 >> 8) & bVar38 |
                                                  (byte)((ulong)uVar37 >> 8) & bVar20,
                                                  (byte)uVar47 & bVar38 | (byte)uVar37 & bVar20)))))
                                        ));
                  lVar36 = lVar35;
                } while (lVar19 != 0);
              }
              lVar19 = uVar27 + lVar25;
              if (uVar34 != 0) {
                lVar35 = lVar35 + lVar25;
                uVar39 = *(undefined8 *)(pbVar18 + lVar35 + lVar24 + 8);
                uVar37 = *(undefined8 *)(pbVar18 + lVar35 + lVar24);
                uVar44 = *(undefined8 *)(pbVar18 + lVar35 + 8);
                uVar41 = *(undefined8 *)(pbVar18 + lVar35);
                *(ulong *)(pbVar18 + lVar35 + 8) =
                     CONCAT17((byte)((ulong)uVar44 >> 0x38) & bVar38 |
                              (byte)((ulong)uVar39 >> 0x38) & bVar20,
                              CONCAT16((byte)((ulong)uVar44 >> 0x30) & bVar38 |
                                       (byte)((ulong)uVar39 >> 0x30) & bVar20,
                                       CONCAT15((byte)((ulong)uVar44 >> 0x28) & bVar38 |
                                                (byte)((ulong)uVar39 >> 0x28) & bVar20,
                                                CONCAT14((byte)((ulong)uVar44 >> 0x20) & bVar38 |
                                                         (byte)((ulong)uVar39 >> 0x20) & bVar20,
                                                         CONCAT13((byte)((ulong)uVar44 >> 0x18) &
                                                                  bVar38 | (byte)((ulong)uVar39 >>
                                                                                 0x18) & bVar20,
                                                                  CONCAT12((byte)((ulong)uVar44 >>
                                                                                 0x10) & bVar38 |
                                                                           (byte)((ulong)uVar39 >>
                                                                                 0x10) & bVar20,
                                                                           CONCAT11((byte)((ulong)
                                                  uVar44 >> 8) & bVar38 |
                                                  (byte)((ulong)uVar39 >> 8) & bVar20,
                                                  (byte)uVar44 & bVar38 | (byte)uVar39 & bVar20)))))
                                      ));
                *(ulong *)(pbVar18 + lVar35) =
                     CONCAT17((byte)((ulong)uVar41 >> 0x38) & bVar38 |
                              (byte)((ulong)uVar37 >> 0x38) & bVar20,
                              CONCAT16((byte)((ulong)uVar41 >> 0x30) & bVar38 |
                                       (byte)((ulong)uVar37 >> 0x30) & bVar20,
                                       CONCAT15((byte)((ulong)uVar41 >> 0x28) & bVar38 |
                                                (byte)((ulong)uVar37 >> 0x28) & bVar20,
                                                CONCAT14((byte)((ulong)uVar41 >> 0x20) & bVar38 |
                                                         (byte)((ulong)uVar37 >> 0x20) & bVar20,
                                                         CONCAT13((byte)((ulong)uVar41 >> 0x18) &
                                                                  bVar38 | (byte)((ulong)uVar37 >>
                                                                                 0x18) & bVar20,
                                                                  CONCAT12((byte)((ulong)uVar41 >>
                                                                                 0x10) & bVar38 |
                                                                           (byte)((ulong)uVar37 >>
                                                                                 0x10) & bVar20,
                                                                           CONCAT11((byte)((ulong)
                                                  uVar41 >> 8) & bVar38 |
                                                  (byte)((ulong)uVar37 >> 8) & bVar20,
                                                  (byte)uVar41 & bVar38 | (byte)uVar37 & bVar20)))))
                                      ));
              }
              if (uVar23 == uVar27) goto LAB_004553a0;
            }
            iVar15 = (int)lVar19;
            if (((((uVar14 ^ 1) + param_5) - uVar13) - iVar15 & 1) != 0) {
              pbVar18[lVar19] = pbVar18[lVar19] & bVar38 | pbVar18[lVar19 + lVar24] & bVar20;
              lVar19 = lVar19 + 1;
            }
            if (((param_5 - uVar14) + -2) - uVar13 != iVar15) {
              iVar15 = ((param_5 + -1) - (uVar14 + uVar13)) - (int)lVar19;
              pbVar30 = pbVar18 + lVar19 + 1;
              do {
                pbVar30[-1] = pbVar30[-1] & bVar38 | (pbVar30 + lVar24)[-1] & bVar20;
                *pbVar30 = *pbVar30 & bVar38 | pbVar30[lVar24] & bVar20;
                iVar15 = iVar15 + -2;
                pbVar30 = pbVar30 + 2;
              } while (iVar15 != 0);
            }
          }
LAB_004553a0:
          if ((int)uVar3 <= (int)(uVar13 * 2)) break;
          iVar15 = uVar1 + uVar13 * -2;
          uVar13 = uVar13 * 2;
        } while( true );
      }
      uVar16 = uVar32 & uVar16 &
               ((int)((param_2 - uVar31 ^ uVar31 | uVar31 ^ param_2) ^ param_2) >> 0x1f ^
               0xffffffffU);
      if (0 < (int)uVar4) {
        uVar23 = (ulong)uVar4;
        bVar20 = (byte)uVar16;
        bVar38 = (byte)(uVar31 >> 0x18);
        if (uVar4 < 0x10) {
LAB_00455560:
          uVar26 = 0;
        }
        else {
          iVar15 = uVar14 + 1;
          uVar26 = 0;
          if ((iVar15 <= iVar15 + (int)(uVar23 - 1)) && (uVar23 - 1 >> 0x20 == 0)) {
            if ((param_1 < pbVar18 + (long)(int)(uVar14 + 1) + uVar23) &&
               (pbVar18 + (int)(uVar14 + 1) < param_1 + uVar23)) goto LAB_00455560;
            uVar26 = uVar23 & 0xfffffff0;
            uVar27 = uVar26;
            pbVar22 = param_1;
            uVar37 = _DAT_03889c60;
            uVar39 = _UNK_03889c68;
            uVar41 = _DAT_038894d0;
            uVar44 = _UNK_038894d8;
            uVar47 = _DAT_03889080;
            uVar50 = _UNK_03889088;
            uVar53 = _DAT_03889d70;
            uVar56 = _UNK_03889d78;
            do {
              iVar46 = (int)uVar41;
              iVar48 = (int)((ulong)uVar41 >> 0x20);
              iVar49 = (int)uVar44;
              iVar51 = (int)((ulong)uVar44 >> 0x20);
              iVar58 = (int)uVar53;
              iVar60 = (int)((ulong)uVar53 >> 0x20);
              iVar61 = (int)uVar56;
              iVar63 = (int)((ulong)uVar56 >> 0x20);
              uVar27 = uVar27 - 0x10;
              iVar40 = (int)uVar37;
              iVar42 = (int)((ulong)uVar37 >> 0x20);
              iVar43 = (int)uVar39;
              iVar45 = (int)((ulong)uVar39 >> 0x20);
              iVar52 = (int)uVar47;
              iVar54 = (int)((ulong)uVar47 >> 0x20);
              iVar55 = (int)uVar50;
              iVar57 = (int)((ulong)uVar50 >> 0x20);
              uVar47 = CONCAT44(iVar54 + 0x10,iVar52 + 0x10);
              uVar50 = CONCAT44(iVar57 + 0x10,iVar55 + 0x10);
              pbVar30 = pbVar18 + iVar15;
              uVar59 = *(undefined8 *)(pbVar30 + 8);
              bVar5 = *pbVar30;
              bVar6 = pbVar30[1];
              bVar7 = pbVar30[2];
              bVar8 = pbVar30[3];
              bVar9 = pbVar30[4];
              bVar10 = pbVar30[5];
              bVar11 = pbVar30[6];
              bVar12 = pbVar30[7];
              uVar37 = *(undefined8 *)(pbVar22 + 8);
              bVar66 = (byte)((ulong)uVar37 >> 8);
              bVar67 = (byte)((ulong)uVar37 >> 0x10);
              bVar68 = (byte)((ulong)uVar37 >> 0x18);
              bVar69 = (byte)((ulong)uVar37 >> 0x20);
              bVar70 = (byte)((ulong)uVar37 >> 0x28);
              bVar71 = (byte)((ulong)uVar37 >> 0x30);
              bVar72 = (byte)((ulong)uVar37 >> 0x38);
              uVar53 = CONCAT44(iVar60 + 0x10,iVar58 + 0x10);
              uVar56 = CONCAT44(iVar63 + 0x10,iVar61 + 0x10);
              uVar41 = CONCAT44(iVar48 + 0x10,iVar46 + 0x10);
              uVar44 = CONCAT44(iVar51 + 0x10,iVar49 + 0x10);
              uVar37 = CONCAT44(iVar42 + 0x10,iVar40 + 0x10);
              uVar39 = CONCAT44(iVar45 + 0x10,iVar43 + 0x10);
              iVar15 = iVar15 + 0x10;
              pbVar22[8] = pbVar22[8] ^
                           (pbVar22[8] ^ pbVar30[8]) &
                           (char)((byte)(iVar46 - uVar31 >> 0x18) | bVar38) >> 7 & bVar20;
              pbVar22[9] = bVar66 ^ (bVar66 ^ (byte)((ulong)uVar59 >> 8)) &
                                    (char)((byte)(iVar48 - uVar31 >> 0x18) | bVar38) >> 7 & bVar20;
              pbVar22[10] = bVar67 ^ (bVar67 ^ (byte)((ulong)uVar59 >> 0x10)) &
                                     (char)((byte)(iVar49 - uVar31 >> 0x18) | bVar38) >> 7 & bVar20;
              pbVar22[0xb] = bVar68 ^ (bVar68 ^ (byte)((ulong)uVar59 >> 0x18)) &
                                      (char)((byte)(iVar51 - uVar31 >> 0x18) | bVar38) >> 7 & bVar20
              ;
              pbVar22[0xc] = bVar69 ^ (bVar69 ^ (byte)((ulong)uVar59 >> 0x20)) &
                                      (char)((byte)(iVar40 - uVar31 >> 0x18) | bVar38) >> 7 & bVar20
              ;
              pbVar22[0xd] = bVar70 ^ (bVar70 ^ (byte)((ulong)uVar59 >> 0x28)) &
                                      (char)((byte)(iVar42 - uVar31 >> 0x18) | bVar38) >> 7 & bVar20
              ;
              pbVar22[0xe] = bVar71 ^ (bVar71 ^ (byte)((ulong)uVar59 >> 0x30)) &
                                      (char)((byte)(iVar43 - uVar31 >> 0x18) | bVar38) >> 7 & bVar20
              ;
              pbVar22[0xf] = bVar72 ^ (bVar72 ^ (byte)((ulong)uVar59 >> 0x38)) &
                                      (char)((byte)(iVar45 - uVar31 >> 0x18) | bVar38) >> 7 & bVar20
              ;
              *pbVar22 = *pbVar22 ^
                         (*pbVar22 ^ bVar5) &
                         (char)((byte)(iVar58 - uVar31 >> 0x18) | bVar38) >> 7 & bVar20;
              pbVar22[1] = pbVar22[1] ^
                           (pbVar22[1] ^ bVar6) &
                           (char)((byte)(iVar60 - uVar31 >> 0x18) | bVar38) >> 7 & bVar20;
              pbVar22[2] = pbVar22[2] ^
                           (pbVar22[2] ^ bVar7) &
                           (char)((byte)(iVar61 - uVar31 >> 0x18) | bVar38) >> 7 & bVar20;
              pbVar22[3] = pbVar22[3] ^
                           (pbVar22[3] ^ bVar8) &
                           (char)((byte)(iVar63 - uVar31 >> 0x18) | bVar38) >> 7 & bVar20;
              pbVar22[4] = pbVar22[4] ^
                           (pbVar22[4] ^ bVar9) &
                           (char)((byte)(iVar52 - uVar31 >> 0x18) | bVar38) >> 7 & bVar20;
              pbVar22[5] = pbVar22[5] ^
                           (pbVar22[5] ^ bVar10) &
                           (char)((byte)(iVar54 - uVar31 >> 0x18) | bVar38) >> 7 & bVar20;
              pbVar22[6] = pbVar22[6] ^
                           (pbVar22[6] ^ bVar11) &
                           (char)((byte)(iVar55 - uVar31 >> 0x18) | bVar38) >> 7 & bVar20;
              pbVar22[7] = pbVar22[7] ^
                           (pbVar22[7] ^ bVar12) &
                           (char)((byte)(iVar57 - uVar31 >> 0x18) | bVar38) >> 7 & bVar20;
              pbVar22 = pbVar22 + 0x10;
            } while (uVar27 != 0);
            if (uVar26 == uVar23) goto LAB_004555b4;
          }
        }
        iVar15 = uVar14 + (int)uVar26;
        lVar25 = uVar23 - uVar26;
        pbVar22 = param_1 + uVar26;
        do {
          iVar15 = iVar15 + 1;
          bVar5 = bVar20 & (char)((byte)(iVar15 - (uVar21 + param_5) >> 0x18) | bVar38) >> 7;
          *pbVar22 = *pbVar22 & (bVar5 ^ 0xff) | pbVar18[iVar15] & bVar5;
          lVar25 = lVar25 + -1;
          pbVar22 = pbVar22 + 1;
        } while (lVar25 != 0);
      }
LAB_004555b4:
      FUN_004014b0(4,0x99,0x79,"external/openssl/crypto/rsa/rsa_oaep.c",0x107);
      FUN_004024e0(uVar16 & 1);
      goto LAB_004555dc;
    }
    FUN_004014b0(4,0x99,0x41,"external/openssl/crypto/rsa/rsa_oaep.c",0xa6);
  }
  pbVar33 = (byte *)0x0;
  uVar16 = 0;
  uVar31 = 0xffffffff;
LAB_004555dc:
  FUN_004006a0(local_a0,0x40);
  FUN_00400620(pbVar18,uVar17,"external/openssl/crypto/rsa/rsa_oaep.c",0x10b);
  FUN_00400620(pbVar33,(long)param_5,"external/openssl/crypto/rsa/rsa_oaep.c",0x10c);
  return uVar31 | uVar16 ^ 0xffffffff;
}


