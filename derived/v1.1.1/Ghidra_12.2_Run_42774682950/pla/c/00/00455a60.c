/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00455a60; name: FUN_00455a60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00455a60(byte *param_1,uint param_2,long param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  byte *pbVar25;
  byte *pbVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  byte *pbVar33;
  uint uVar34;
  uint uVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  undefined8 uVar53;
  int iVar55;
  undefined8 uVar54;
  int iVar56;
  undefined8 uVar57;
  int iVar59;
  undefined8 uVar58;
  int iVar60;
  undefined8 uVar61;
  int iVar62;
  int iVar63;
  undefined8 uVar64;
  int iVar65;
  int iVar66;
  undefined8 uVar67;
  int iVar68;
  int iVar69;
  undefined8 uVar70;
  int iVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  byte bVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  
  if ((int)param_2 < 1) {
    return 0xffffffff;
  }
  if ((int)param_4 < 1) {
    return 0xffffffff;
  }
  if (((int)param_5 < (int)param_4) || ((int)param_5 < 0xb)) {
    uVar27 = 0x9f;
    uVar28 = 0xae;
  }
  else {
    lVar37 = (long)(int)param_5;
    lVar24 = FUN_00400260(lVar37,"external/openssl/crypto/rsa/rsa_pk1.c",0xb2);
    if (lVar24 != 0) {
      pbVar33 = (byte *)(param_3 + (int)param_4);
      uVar32 = 0;
      pbVar26 = (byte *)(lVar24 + lVar37);
      do {
        pbVar25 = pbVar26;
        uVar34 = (int)(param_4 - 1 & (param_4 ^ 0xffffffff)) >> 0x1f;
        pbVar33 = pbVar33 + -(ulong)((uVar34 ^ 0xffffffff) & 1);
        uVar3 = (uint)*pbVar33 & (uVar34 ^ 0xffffffff);
        uVar32 = uVar32 + 1;
        pbVar26 = pbVar25 + -1;
        *pbVar26 = (byte)uVar3;
        param_4 = param_4 + (uVar34 ^ 0xffffffff);
      } while (uVar32 != param_5);
      bVar41 = *pbVar25;
      if ((int)param_5 < 3) {
        uVar32 = 0;
      }
      else {
        uVar32 = 0;
        uVar34 = 0;
        uVar36 = 2;
        do {
          uVar35 = (int)(pbVar26[uVar36] - 1) >> 0x1f;
          uVar4 = uVar35 & (uVar34 ^ 0xffffffff);
          uVar34 = uVar35 | uVar34;
          uVar35 = (uint)uVar36;
          uVar36 = uVar36 + 1;
          uVar32 = uVar32 & (uVar4 ^ 0xffffffff) | uVar4 & uVar35;
        } while (param_5 != uVar36);
      }
      uVar34 = ~uVar32 + param_5;
      uVar4 = param_5 - 0xb;
      uVar35 = uVar4;
      if (-1 < (int)((uVar4 - param_2 ^ param_2 | uVar4 ^ param_2) ^ uVar4)) {
        uVar35 = param_2;
      }
      if (1 < (int)uVar4) {
        uVar5 = param_5 - 1;
        uVar22 = 1;
        do {
          if (0xb < (int)uVar5) {
            uVar2 = uVar22 & uVar4 - uVar34;
            uVar36 = (ulong)uVar5;
            uVar30 = uVar36 - 0xb;
            bVar6 = (char)((byte)(uVar2 - 1 >> 0x18) & ((byte)(uVar2 >> 0x18) ^ 0x80)) >> 7;
            bVar74 = bVar6 ^ 0xff;
            lVar24 = (long)(int)uVar22;
            if ((uVar30 < 0x40) ||
               ((pbVar25 + 10 < pbVar26 + lVar24 + uVar36 &&
                (pbVar25 + 10 + lVar24 < pbVar26 + uVar36)))) {
              uVar29 = 0xb;
              uVar30 = 0xfffffffffffffff4;
            }
            else {
              bVar39 = bVar6 ^ 0xff;
              bVar40 = bVar6 ^ 0xff;
              bVar42 = bVar6 ^ 0xff;
              bVar43 = bVar6 ^ 0xff;
              bVar44 = bVar6 ^ 0xff;
              bVar45 = bVar6 ^ 0xff;
              bVar46 = bVar6 ^ 0xff;
              bVar47 = bVar6 ^ 0xff;
              uVar31 = uVar30 & 0xffffffffffffffc0;
              uVar29 = uVar31 | 0xb;
              uVar38 = 0;
              do {
                lVar23 = uVar38 + lVar24;
                uVar57 = *(undefined8 *)(pbVar26 + lVar23 + 0x13);
                uVar53 = *(undefined8 *)(pbVar26 + lVar23 + 0xb);
                uVar64 = *(undefined8 *)(pbVar26 + lVar23 + 0x23);
                uVar61 = *(undefined8 *)(pbVar26 + lVar23 + 0x1b);
                uVar70 = *(undefined8 *)(pbVar26 + lVar23 + 0x33);
                uVar67 = *(undefined8 *)(pbVar26 + lVar23 + 0x2b);
                uVar73 = *(undefined8 *)(pbVar26 + lVar23 + 0x43);
                uVar72 = *(undefined8 *)(pbVar26 + lVar23 + 0x3b);
                uVar76 = *(undefined8 *)(pbVar26 + uVar38 + 0x13);
                uVar75 = *(undefined8 *)(pbVar26 + uVar38 + 0xb);
                uVar28 = *(undefined8 *)(pbVar26 + uVar38 + 0x23);
                uVar27 = *(undefined8 *)(pbVar26 + uVar38 + 0x1b);
                uVar58 = *(undefined8 *)(pbVar26 + uVar38 + 0x43);
                uVar54 = *(undefined8 *)(pbVar26 + uVar38 + 0x3b);
                *(ulong *)(pbVar26 + uVar38 + 0x23) =
                     CONCAT17((byte)((ulong)uVar28 >> 0x38) & bVar6 |
                              (byte)((ulong)uVar64 >> 0x38) & bVar74,
                              CONCAT16((byte)((ulong)uVar28 >> 0x30) & bVar6 |
                                       (byte)((ulong)uVar64 >> 0x30) & bVar74,
                                       CONCAT15((byte)((ulong)uVar28 >> 0x28) & bVar6 |
                                                (byte)((ulong)uVar64 >> 0x28) & bVar47,
                                                CONCAT14((byte)((ulong)uVar28 >> 0x20) & bVar6 |
                                                         (byte)((ulong)uVar64 >> 0x20) & bVar46,
                                                         CONCAT13((byte)((ulong)uVar28 >> 0x18) &
                                                                  bVar6 | (byte)((ulong)uVar64 >>
                                                                                0x18) & bVar74,
                                                                  CONCAT12((byte)((ulong)uVar28 >>
                                                                                 0x10) & bVar6 |
                                                                           (byte)((ulong)uVar64 >>
                                                                                 0x10) & bVar74,
                                                                           CONCAT11((byte)((ulong)
                                                  uVar28 >> 8) & bVar6 |
                                                  (byte)((ulong)uVar64 >> 8) & bVar45,
                                                  (byte)uVar28 & bVar6 | (byte)uVar64 & bVar44))))))
                             );
                *(ulong *)(pbVar26 + uVar38 + 0x1b) =
                     CONCAT17((byte)((ulong)uVar27 >> 0x38) & bVar6 |
                              (byte)((ulong)uVar61 >> 0x38) & bVar74,
                              CONCAT16((byte)((ulong)uVar27 >> 0x30) & bVar6 |
                                       (byte)((ulong)uVar61 >> 0x30) & bVar74,
                                       CONCAT15((byte)((ulong)uVar27 >> 0x28) & bVar6 |
                                                (byte)((ulong)uVar61 >> 0x28) & bVar43,
                                                CONCAT14((byte)((ulong)uVar27 >> 0x20) & bVar6 |
                                                         (byte)((ulong)uVar61 >> 0x20) & bVar42,
                                                         CONCAT13((byte)((ulong)uVar27 >> 0x18) &
                                                                  bVar6 | (byte)((ulong)uVar61 >>
                                                                                0x18) & bVar74,
                                                                  CONCAT12((byte)((ulong)uVar27 >>
                                                                                 0x10) & bVar6 |
                                                                           (byte)((ulong)uVar61 >>
                                                                                 0x10) & bVar74,
                                                                           CONCAT11((byte)((ulong)
                                                  uVar27 >> 8) & bVar6 |
                                                  (byte)((ulong)uVar61 >> 8) & bVar40,
                                                  (byte)uVar27 & bVar6 | (byte)uVar61 & bVar39))))))
                             );
                *(ulong *)(pbVar26 + uVar38 + 0x13) =
                     CONCAT17((byte)((ulong)uVar76 >> 0x38) & bVar6 |
                              (byte)((ulong)uVar57 >> 0x38) & bVar74,
                              CONCAT16((byte)((ulong)uVar76 >> 0x30) & bVar6 |
                                       (byte)((ulong)uVar57 >> 0x30) & bVar74,
                                       CONCAT15((byte)((ulong)uVar76 >> 0x28) & bVar6 |
                                                (byte)((ulong)uVar57 >> 0x28) & bVar47,
                                                CONCAT14((byte)((ulong)uVar76 >> 0x20) & bVar6 |
                                                         (byte)((ulong)uVar57 >> 0x20) & bVar46,
                                                         CONCAT13((byte)((ulong)uVar76 >> 0x18) &
                                                                  bVar6 | (byte)((ulong)uVar57 >>
                                                                                0x18) & bVar74,
                                                                  CONCAT12((byte)((ulong)uVar76 >>
                                                                                 0x10) & bVar6 |
                                                                           (byte)((ulong)uVar57 >>
                                                                                 0x10) & bVar74,
                                                                           CONCAT11((byte)((ulong)
                                                  uVar76 >> 8) & bVar6 |
                                                  (byte)((ulong)uVar57 >> 8) & bVar45,
                                                  (byte)uVar76 & bVar6 | (byte)uVar57 & bVar44))))))
                             );
                *(ulong *)(pbVar26 + uVar38 + 0xb) =
                     CONCAT17((byte)((ulong)uVar75 >> 0x38) & bVar6 |
                              (byte)((ulong)uVar53 >> 0x38) & bVar74,
                              CONCAT16((byte)((ulong)uVar75 >> 0x30) & bVar6 |
                                       (byte)((ulong)uVar53 >> 0x30) & bVar74,
                                       CONCAT15((byte)((ulong)uVar75 >> 0x28) & bVar6 |
                                                (byte)((ulong)uVar53 >> 0x28) & bVar43,
                                                CONCAT14((byte)((ulong)uVar75 >> 0x20) & bVar6 |
                                                         (byte)((ulong)uVar53 >> 0x20) & bVar42,
                                                         CONCAT13((byte)((ulong)uVar75 >> 0x18) &
                                                                  bVar6 | (byte)((ulong)uVar53 >>
                                                                                0x18) & bVar74,
                                                                  CONCAT12((byte)((ulong)uVar75 >>
                                                                                 0x10) & bVar6 |
                                                                           (byte)((ulong)uVar53 >>
                                                                                 0x10) & bVar74,
                                                                           CONCAT11((byte)((ulong)
                                                  uVar75 >> 8) & bVar6 |
                                                  (byte)((ulong)uVar53 >> 8) & bVar40,
                                                  (byte)uVar75 & bVar6 | (byte)uVar53 & bVar39))))))
                             );
                uVar1 = uVar38 + 0x40;
                *(ulong *)(pbVar26 + uVar38 + 0x33) =
                     CONCAT17(pbVar26[uVar38 + 0x3a] & bVar6 |
                              (byte)((ulong)uVar70 >> 0x38) & bVar74,
                              CONCAT16(pbVar26[uVar38 + 0x39] & bVar6 |
                                       (byte)((ulong)uVar70 >> 0x30) & bVar74,
                                       CONCAT15(pbVar26[uVar38 + 0x38] & bVar6 |
                                                (byte)((ulong)uVar70 >> 0x28) & bVar47,
                                                CONCAT14(pbVar26[uVar38 + 0x37] & bVar6 |
                                                         (byte)((ulong)uVar70 >> 0x20) & bVar46,
                                                         CONCAT13(pbVar26[uVar38 + 0x36] & bVar6 |
                                                                  (byte)((ulong)uVar70 >> 0x18) &
                                                                  bVar74,CONCAT12(pbVar26[uVar38 + 
                                                  0x35] & bVar6 |
                                                  (byte)((ulong)uVar70 >> 0x10) & bVar74,
                                                  CONCAT11(pbVar26[uVar38 + 0x34] & bVar6 |
                                                           (byte)((ulong)uVar70 >> 8) & bVar45,
                                                           pbVar26[uVar38 + 0x33] & bVar6 |
                                                           (byte)uVar70 & bVar44)))))));
                *(ulong *)(pbVar26 + uVar38 + 0x2b) =
                     CONCAT17(pbVar26[uVar38 + 0x32] & bVar6 |
                              (byte)((ulong)uVar67 >> 0x38) & bVar74,
                              CONCAT16(pbVar26[uVar38 + 0x31] & bVar6 |
                                       (byte)((ulong)uVar67 >> 0x30) & bVar74,
                                       CONCAT15(pbVar26[uVar38 + 0x30] & bVar6 |
                                                (byte)((ulong)uVar67 >> 0x28) & bVar43,
                                                CONCAT14(pbVar26[uVar38 + 0x2f] & bVar6 |
                                                         (byte)((ulong)uVar67 >> 0x20) & bVar42,
                                                         CONCAT13(pbVar26[uVar38 + 0x2e] & bVar6 |
                                                                  (byte)((ulong)uVar67 >> 0x18) &
                                                                  bVar74,CONCAT12(pbVar26[uVar38 + 
                                                  0x2d] & bVar6 |
                                                  (byte)((ulong)uVar67 >> 0x10) & bVar74,
                                                  CONCAT11(pbVar26[uVar38 + 0x2c] & bVar6 |
                                                           (byte)((ulong)uVar67 >> 8) & bVar40,
                                                           pbVar26[uVar38 + 0x2b] & bVar6 |
                                                           (byte)uVar67 & bVar39)))))));
                *(ulong *)(pbVar26 + uVar38 + 0x43) =
                     CONCAT17((byte)((ulong)uVar58 >> 0x38) & bVar6 |
                              (byte)((ulong)uVar73 >> 0x38) & bVar74,
                              CONCAT16((byte)((ulong)uVar58 >> 0x30) & bVar6 |
                                       (byte)((ulong)uVar73 >> 0x30) & bVar74,
                                       CONCAT15((byte)((ulong)uVar58 >> 0x28) & bVar6 |
                                                (byte)((ulong)uVar73 >> 0x28) & bVar47,
                                                CONCAT14((byte)((ulong)uVar58 >> 0x20) & bVar6 |
                                                         (byte)((ulong)uVar73 >> 0x20) & bVar46,
                                                         CONCAT13((byte)((ulong)uVar58 >> 0x18) &
                                                                  bVar6 | (byte)((ulong)uVar73 >>
                                                                                0x18) & bVar74,
                                                                  CONCAT12((byte)((ulong)uVar58 >>
                                                                                 0x10) & bVar6 |
                                                                           (byte)((ulong)uVar73 >>
                                                                                 0x10) & bVar74,
                                                                           CONCAT11((byte)((ulong)
                                                  uVar58 >> 8) & bVar6 |
                                                  (byte)((ulong)uVar73 >> 8) & bVar45,
                                                  (byte)uVar58 & bVar6 | (byte)uVar73 & bVar44))))))
                             );
                *(ulong *)(pbVar26 + uVar38 + 0x3b) =
                     CONCAT17((byte)((ulong)uVar54 >> 0x38) & bVar6 |
                              (byte)((ulong)uVar72 >> 0x38) & bVar74,
                              CONCAT16((byte)((ulong)uVar54 >> 0x30) & bVar6 |
                                       (byte)((ulong)uVar72 >> 0x30) & bVar74,
                                       CONCAT15((byte)((ulong)uVar54 >> 0x28) & bVar6 |
                                                (byte)((ulong)uVar72 >> 0x28) & bVar43,
                                                CONCAT14((byte)((ulong)uVar54 >> 0x20) & bVar6 |
                                                         (byte)((ulong)uVar72 >> 0x20) & bVar42,
                                                         CONCAT13((byte)((ulong)uVar54 >> 0x18) &
                                                                  bVar6 | (byte)((ulong)uVar72 >>
                                                                                0x18) & bVar74,
                                                                  CONCAT12((byte)((ulong)uVar54 >>
                                                                                 0x10) & bVar6 |
                                                                           (byte)((ulong)uVar72 >>
                                                                                 0x10) & bVar74,
                                                                           CONCAT11((byte)((ulong)
                                                  uVar54 >> 8) & bVar6 |
                                                  (byte)((ulong)uVar72 >> 8) & bVar40,
                                                  (byte)uVar54 & bVar6 | (byte)uVar72 & bVar39))))))
                             );
                uVar38 = uVar1;
              } while (uVar31 != uVar1);
              if (uVar30 == uVar31) goto LAB_00455c18;
              uVar30 = ~uVar29;
            }
            if ((uVar5 & 1) == 0) {
              pbVar26[uVar29] = pbVar26[uVar29] & bVar6 | pbVar26[uVar29 + lVar24] & bVar74;
              uVar29 = uVar29 + 1;
            }
            if (uVar30 + uVar36 != 0) {
              do {
                lVar23 = uVar29 + lVar24;
                pbVar33 = pbVar26 + uVar29;
                *pbVar33 = *pbVar33 & bVar6 | pbVar26[lVar23] & bVar74;
                uVar29 = uVar29 + 2;
                pbVar33[1] = pbVar33[1] & bVar6 | (pbVar26 + lVar23)[1] & bVar74;
              } while (uVar36 != uVar29);
            }
          }
LAB_00455c18:
          if ((int)uVar4 <= (int)(uVar22 * 2)) break;
          uVar5 = param_5 + uVar22 * -2;
          uVar22 = uVar22 * 2;
        } while( true );
      }
      uVar3 = (int)((bVar41 ^ 2) - 1 & uVar3 - 1) >> 0x1f &
              ((int)(uVar32 - 10 & (uVar32 ^ 0xffffffff)) >> 0x1f ^ 0xffffffffU) &
              ((int)((param_2 - uVar34 ^ uVar34 | uVar34 ^ param_2) ^ param_2) >> 0x1f ^ 0xffffffffU
              );
      if (0 < (int)uVar35) {
        uVar36 = (ulong)uVar35;
        bVar74 = (byte)uVar3;
        bVar41 = (byte)(uVar34 >> 0x18);
        if ((uVar35 < 0x10) ||
           ((param_1 < pbVar26 + uVar36 + 0xb && (pbVar25 + 10 < param_1 + uVar36)))) {
          uVar30 = 0;
        }
        else {
          uVar29 = 0;
          uVar30 = uVar36 & 0xfffffff0;
          uVar27 = _DAT_03889c60;
          uVar28 = _UNK_03889c68;
          uVar54 = _DAT_038894d0;
          uVar58 = _UNK_038894d8;
          uVar53 = _DAT_03889080;
          uVar57 = _UNK_03889088;
          uVar61 = _DAT_03889d70;
          uVar64 = _UNK_03889d78;
          do {
            iVar52 = (int)uVar54;
            iVar55 = (int)((ulong)uVar54 >> 0x20);
            iVar56 = (int)uVar58;
            iVar59 = (int)((ulong)uVar58 >> 0x20);
            iVar48 = (int)uVar27;
            iVar49 = (int)((ulong)uVar27 >> 0x20);
            iVar50 = (int)uVar28;
            iVar51 = (int)((ulong)uVar28 >> 0x20);
            iVar66 = (int)uVar61;
            iVar68 = (int)((ulong)uVar61 >> 0x20);
            iVar69 = (int)uVar64;
            iVar71 = (int)((ulong)uVar64 >> 0x20);
            uVar61 = CONCAT44(iVar68 + 0x10,iVar66 + 0x10);
            uVar64 = CONCAT44(iVar71 + 0x10,iVar69 + 0x10);
            iVar60 = (int)uVar53;
            iVar62 = (int)((ulong)uVar53 >> 0x20);
            iVar63 = (int)uVar57;
            iVar65 = (int)((ulong)uVar57 >> 0x20);
            uVar53 = CONCAT44(iVar62 + 0x10,iVar60 + 0x10);
            uVar57 = CONCAT44(iVar65 + 0x10,iVar63 + 0x10);
            pbVar33 = param_1 + uVar29;
            uVar27 = *(undefined8 *)(pbVar33 + 8);
            bVar77 = (byte)((ulong)uVar27 >> 8);
            bVar78 = (byte)((ulong)uVar27 >> 0x10);
            bVar79 = (byte)((ulong)uVar27 >> 0x18);
            bVar80 = (byte)((ulong)uVar27 >> 0x20);
            bVar81 = (byte)((ulong)uVar27 >> 0x28);
            bVar82 = (byte)((ulong)uVar27 >> 0x30);
            bVar83 = (byte)((ulong)uVar27 >> 0x38);
            bVar6 = *pbVar33;
            bVar39 = pbVar33[1];
            bVar40 = pbVar33[2];
            bVar42 = pbVar33[3];
            bVar43 = pbVar33[4];
            bVar44 = pbVar33[5];
            bVar45 = pbVar33[6];
            bVar46 = pbVar33[7];
            bVar14 = *pbVar33;
            bVar15 = pbVar33[1];
            bVar16 = pbVar33[2];
            bVar17 = pbVar33[3];
            bVar18 = pbVar33[4];
            bVar19 = pbVar33[5];
            bVar20 = pbVar33[6];
            bVar21 = pbVar33[7];
            uVar67 = *(undefined8 *)(pbVar26 + uVar29 + 0x13);
            bVar47 = pbVar26[uVar29 + 0xb];
            bVar7 = pbVar26[uVar29 + 0xc];
            bVar8 = pbVar26[uVar29 + 0xd];
            bVar9 = pbVar26[uVar29 + 0xe];
            bVar10 = pbVar26[uVar29 + 0xf];
            bVar11 = pbVar26[uVar29 + 0x10];
            bVar12 = pbVar26[uVar29 + 0x11];
            bVar13 = pbVar26[uVar29 + 0x12];
            uVar54 = CONCAT44(iVar55 + 0x10,iVar52 + 0x10);
            uVar58 = CONCAT44(iVar59 + 0x10,iVar56 + 0x10);
            uVar27 = CONCAT44(iVar49 + 0x10,iVar48 + 0x10);
            uVar28 = CONCAT44(iVar51 + 0x10,iVar50 + 0x10);
            pbVar25 = param_1 + uVar29;
            pbVar25[8] = pbVar33[8] ^
                         (pbVar33[8] ^ pbVar26[uVar29 + 0x13]) &
                         (char)((byte)(iVar52 - uVar34 >> 0x18) | bVar41) >> 7 & bVar74;
            pbVar25[9] = bVar77 ^ (bVar77 ^ (byte)((ulong)uVar67 >> 8)) &
                                  (char)((byte)(iVar55 - uVar34 >> 0x18) | bVar41) >> 7 & bVar74;
            pbVar25[10] = bVar78 ^ (bVar78 ^ (byte)((ulong)uVar67 >> 0x10)) &
                                   (char)((byte)(iVar56 - uVar34 >> 0x18) | bVar41) >> 7 & bVar74;
            pbVar25[0xb] = bVar79 ^ (bVar79 ^ (byte)((ulong)uVar67 >> 0x18)) &
                                    (char)((byte)(iVar59 - uVar34 >> 0x18) | bVar41) >> 7 & bVar74;
            pbVar25[0xc] = bVar80 ^ (bVar80 ^ (byte)((ulong)uVar67 >> 0x20)) &
                                    (char)((byte)(iVar48 - uVar34 >> 0x18) | bVar41) >> 7 & bVar74;
            pbVar25[0xd] = bVar81 ^ (bVar81 ^ (byte)((ulong)uVar67 >> 0x28)) &
                                    (char)((byte)(iVar49 - uVar34 >> 0x18) | bVar41) >> 7 & bVar74;
            pbVar25[0xe] = bVar82 ^ (bVar82 ^ (byte)((ulong)uVar67 >> 0x30)) &
                                    (char)((byte)(iVar50 - uVar34 >> 0x18) | bVar41) >> 7 & bVar74;
            pbVar25[0xf] = bVar83 ^ (bVar83 ^ (byte)((ulong)uVar67 >> 0x38)) &
                                    (char)((byte)(iVar51 - uVar34 >> 0x18) | bVar41) >> 7 & bVar74;
            *pbVar25 = bVar6 ^ (bVar14 ^ bVar47) &
                               (char)((byte)(iVar66 - uVar34 >> 0x18) | bVar41) >> 7 & bVar74;
            pbVar25[1] = bVar39 ^ (bVar15 ^ bVar7) &
                                  (char)((byte)(iVar68 - uVar34 >> 0x18) | bVar41) >> 7 & bVar74;
            pbVar25[2] = bVar40 ^ (bVar16 ^ bVar8) &
                                  (char)((byte)(iVar69 - uVar34 >> 0x18) | bVar41) >> 7 & bVar74;
            pbVar25[3] = bVar42 ^ (bVar17 ^ bVar9) &
                                  (char)((byte)(iVar71 - uVar34 >> 0x18) | bVar41) >> 7 & bVar74;
            pbVar25[4] = bVar43 ^ (bVar18 ^ bVar10) &
                                  (char)((byte)(iVar60 - uVar34 >> 0x18) | bVar41) >> 7 & bVar74;
            pbVar25[5] = bVar44 ^ (bVar19 ^ bVar11) &
                                  (char)((byte)(iVar62 - uVar34 >> 0x18) | bVar41) >> 7 & bVar74;
            pbVar25[6] = bVar45 ^ (bVar20 ^ bVar12) &
                                  (char)((byte)(iVar63 - uVar34 >> 0x18) | bVar41) >> 7 & bVar74;
            pbVar25[7] = bVar46 ^ (bVar21 ^ bVar13) &
                                  (char)((byte)(iVar65 - uVar34 >> 0x18) | bVar41) >> 7 & bVar74;
            uVar29 = uVar29 + 0x10;
          } while (uVar30 != uVar29);
          if (uVar30 == uVar36) goto LAB_00455e14;
        }
        do {
          bVar6 = bVar74 & (char)((byte)((uVar32 - param_5) + 1 + (int)uVar30 >> 0x18) | bVar41) >>
                           7;
          param_1[uVar30] = param_1[uVar30] & (bVar6 ^ 0xff) | pbVar26[uVar30 + 0xb] & bVar6;
          uVar30 = uVar30 + 1;
        } while (uVar36 != uVar30);
      }
LAB_00455e14:
      FUN_00400620(pbVar26,lVar37,"external/openssl/crypto/rsa/rsa_pk1.c",0xfa);
      FUN_004014b0(4,0x71,0x9f,"external/openssl/crypto/rsa/rsa_pk1.c",0xfb);
      FUN_004024e0(uVar3 & 1);
      return uVar34 | uVar3 ^ 0xffffffff;
    }
    uVar27 = 0x41;
    uVar28 = 0xb4;
  }
  FUN_004014b0(4,0x71,uVar27,"external/openssl/crypto/rsa/rsa_pk1.c",uVar28);
  return 0xffffffff;
}


