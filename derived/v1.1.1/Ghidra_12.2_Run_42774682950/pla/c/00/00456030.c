/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00456030; name: FUN_00456030
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00456030(byte *param_1,uint param_2,long param_3,uint param_4,uint param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
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
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  byte *pbVar29;
  byte *pbVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  uint uVar36;
  uint uVar37;
  byte *pbVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  long lVar43;
  ulong uVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  undefined8 uVar59;
  int iVar61;
  undefined8 uVar60;
  int iVar62;
  undefined8 uVar63;
  int iVar65;
  undefined8 uVar64;
  int iVar66;
  undefined8 uVar67;
  int iVar68;
  int iVar69;
  undefined8 uVar70;
  int iVar71;
  int iVar72;
  undefined8 uVar73;
  int iVar74;
  int iVar75;
  undefined8 uVar76;
  int iVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  byte bVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  
  if ((int)param_2 < 1) {
    return 0xffffffff;
  }
  if ((int)param_4 < 1) {
    return 0xffffffff;
  }
  if (((int)param_5 < (int)param_4) || ((int)param_5 < 0xb)) {
    uVar31 = 0x6f;
    uVar32 = 0x4a;
  }
  else {
    lVar43 = (long)(int)param_5;
    lVar28 = FUN_00400260(lVar43,"external/openssl/crypto/rsa/rsa_ssl.c",0x4e);
    if (lVar28 != 0) {
      pbVar38 = (byte *)(param_3 + (int)param_4);
      uVar36 = 0;
      pbVar30 = (byte *)(lVar28 + lVar43);
      do {
        pbVar29 = pbVar30;
        uVar1 = (int)(param_4 - 1 & (param_4 ^ 0xffffffff)) >> 0x1f;
        pbVar38 = pbVar38 + -(ulong)((uVar1 ^ 0xffffffff) & 1);
        uVar39 = (uint)*pbVar38 & (uVar1 ^ 0xffffffff);
        uVar36 = uVar36 + 1;
        pbVar30 = pbVar29 + -1;
        *pbVar30 = (byte)uVar39;
        param_4 = param_4 + (uVar1 ^ 0xffffffff);
      } while (uVar36 != param_5);
      uVar36 = (*pbVar29 ^ 2) - 1 & uVar39 - 1;
      uVar1 = (int)uVar36 >> 0x1f;
      if ((int)param_5 < 3) {
        uVar39 = 0;
        uVar37 = 0;
      }
      else {
        uVar37 = 0;
        uVar39 = 0;
        uVar40 = 0;
        uVar42 = 2;
        do {
          pbVar38 = pbVar30 + uVar42;
          uVar41 = (int)(*pbVar38 - 1) >> 0x1f;
          uVar4 = uVar41 & (uVar40 ^ 0xffffffff);
          uVar40 = uVar41 | uVar40;
          uVar41 = (uint)uVar42;
          uVar42 = uVar42 + 1;
          uVar37 = uVar37 & (uVar4 ^ 0xffffffff) | uVar4 & uVar41;
          uVar39 = (~uVar40 & 1) + uVar39 & (uVar40 | (int)((*pbVar38 ^ 3) - 1) >> 0x1f);
        } while (param_5 != uVar42);
      }
      uVar4 = uVar37 - 10 & (uVar37 ^ 0xffffffff);
      uVar5 = uVar1 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
      uVar40 = (int)(uVar39 - 8 & (uVar39 ^ 0xffffffff)) >> 0x1f;
      uVar6 = uVar5 & (uVar40 ^ 0xffffffff);
      uVar39 = ~uVar37 + param_5;
      uVar41 = (int)((param_2 - uVar39 ^ uVar39 | uVar39 ^ param_2) ^ param_2) >> 0x1f;
      uVar8 = param_5 - 0xb;
      uVar7 = uVar8;
      if (-1 < (int)((uVar8 - param_2 ^ param_2 | uVar8 ^ param_2) ^ uVar8)) {
        uVar7 = param_2;
      }
      if (1 < (int)uVar8) {
        uVar9 = param_5 - 1;
        uVar26 = 1;
        do {
          if (0xb < (int)uVar9) {
            uVar3 = uVar26 & uVar8 - uVar39;
            uVar42 = (ulong)uVar9;
            uVar34 = uVar42 - 0xb;
            bVar80 = (char)((byte)(uVar3 - 1 >> 0x18) & ((byte)(uVar3 >> 0x18) ^ 0x80)) >> 7;
            bVar47 = bVar80 ^ 0xff;
            lVar28 = (long)(int)uVar26;
            if ((uVar34 < 0x40) ||
               ((pbVar29 + 10 < pbVar30 + lVar28 + uVar42 &&
                (pbVar29 + 10 + lVar28 < pbVar30 + uVar42)))) {
              uVar33 = 0xb;
              uVar34 = 0xfffffffffffffff4;
            }
            else {
              bVar45 = bVar80 ^ 0xff;
              bVar46 = bVar80 ^ 0xff;
              bVar48 = bVar80 ^ 0xff;
              bVar49 = bVar80 ^ 0xff;
              bVar50 = bVar80 ^ 0xff;
              bVar51 = bVar80 ^ 0xff;
              bVar52 = bVar80 ^ 0xff;
              bVar53 = bVar80 ^ 0xff;
              uVar35 = uVar34 & 0xffffffffffffffc0;
              uVar33 = uVar35 | 0xb;
              uVar44 = 0;
              do {
                lVar27 = uVar44 + lVar28;
                uVar63 = *(undefined8 *)(pbVar30 + lVar27 + 0x13);
                uVar59 = *(undefined8 *)(pbVar30 + lVar27 + 0xb);
                uVar70 = *(undefined8 *)(pbVar30 + lVar27 + 0x23);
                uVar67 = *(undefined8 *)(pbVar30 + lVar27 + 0x1b);
                uVar76 = *(undefined8 *)(pbVar30 + lVar27 + 0x33);
                uVar73 = *(undefined8 *)(pbVar30 + lVar27 + 0x2b);
                uVar79 = *(undefined8 *)(pbVar30 + lVar27 + 0x43);
                uVar78 = *(undefined8 *)(pbVar30 + lVar27 + 0x3b);
                uVar82 = *(undefined8 *)(pbVar30 + uVar44 + 0x13);
                uVar81 = *(undefined8 *)(pbVar30 + uVar44 + 0xb);
                uVar32 = *(undefined8 *)(pbVar30 + uVar44 + 0x23);
                uVar31 = *(undefined8 *)(pbVar30 + uVar44 + 0x1b);
                uVar64 = *(undefined8 *)(pbVar30 + uVar44 + 0x43);
                uVar60 = *(undefined8 *)(pbVar30 + uVar44 + 0x3b);
                *(ulong *)(pbVar30 + uVar44 + 0x23) =
                     CONCAT17((byte)((ulong)uVar32 >> 0x38) & bVar80 |
                              (byte)((ulong)uVar70 >> 0x38) & bVar47,
                              CONCAT16((byte)((ulong)uVar32 >> 0x30) & bVar80 |
                                       (byte)((ulong)uVar70 >> 0x30) & bVar47,
                                       CONCAT15((byte)((ulong)uVar32 >> 0x28) & bVar80 |
                                                (byte)((ulong)uVar70 >> 0x28) & bVar53,
                                                CONCAT14((byte)((ulong)uVar32 >> 0x20) & bVar80 |
                                                         (byte)((ulong)uVar70 >> 0x20) & bVar52,
                                                         CONCAT13((byte)((ulong)uVar32 >> 0x18) &
                                                                  bVar80 | (byte)((ulong)uVar70 >>
                                                                                 0x18) & bVar47,
                                                                  CONCAT12((byte)((ulong)uVar32 >>
                                                                                 0x10) & bVar80 |
                                                                           (byte)((ulong)uVar70 >>
                                                                                 0x10) & bVar47,
                                                                           CONCAT11((byte)((ulong)
                                                  uVar32 >> 8) & bVar80 |
                                                  (byte)((ulong)uVar70 >> 8) & bVar51,
                                                  (byte)uVar32 & bVar80 | (byte)uVar70 & bVar50)))))
                                      ));
                *(ulong *)(pbVar30 + uVar44 + 0x1b) =
                     CONCAT17((byte)((ulong)uVar31 >> 0x38) & bVar80 |
                              (byte)((ulong)uVar67 >> 0x38) & bVar47,
                              CONCAT16((byte)((ulong)uVar31 >> 0x30) & bVar80 |
                                       (byte)((ulong)uVar67 >> 0x30) & bVar47,
                                       CONCAT15((byte)((ulong)uVar31 >> 0x28) & bVar80 |
                                                (byte)((ulong)uVar67 >> 0x28) & bVar49,
                                                CONCAT14((byte)((ulong)uVar31 >> 0x20) & bVar80 |
                                                         (byte)((ulong)uVar67 >> 0x20) & bVar48,
                                                         CONCAT13((byte)((ulong)uVar31 >> 0x18) &
                                                                  bVar80 | (byte)((ulong)uVar67 >>
                                                                                 0x18) & bVar47,
                                                                  CONCAT12((byte)((ulong)uVar31 >>
                                                                                 0x10) & bVar80 |
                                                                           (byte)((ulong)uVar67 >>
                                                                                 0x10) & bVar47,
                                                                           CONCAT11((byte)((ulong)
                                                  uVar31 >> 8) & bVar80 |
                                                  (byte)((ulong)uVar67 >> 8) & bVar46,
                                                  (byte)uVar31 & bVar80 | (byte)uVar67 & bVar45)))))
                                      ));
                *(ulong *)(pbVar30 + uVar44 + 0x13) =
                     CONCAT17((byte)((ulong)uVar82 >> 0x38) & bVar80 |
                              (byte)((ulong)uVar63 >> 0x38) & bVar47,
                              CONCAT16((byte)((ulong)uVar82 >> 0x30) & bVar80 |
                                       (byte)((ulong)uVar63 >> 0x30) & bVar47,
                                       CONCAT15((byte)((ulong)uVar82 >> 0x28) & bVar80 |
                                                (byte)((ulong)uVar63 >> 0x28) & bVar53,
                                                CONCAT14((byte)((ulong)uVar82 >> 0x20) & bVar80 |
                                                         (byte)((ulong)uVar63 >> 0x20) & bVar52,
                                                         CONCAT13((byte)((ulong)uVar82 >> 0x18) &
                                                                  bVar80 | (byte)((ulong)uVar63 >>
                                                                                 0x18) & bVar47,
                                                                  CONCAT12((byte)((ulong)uVar82 >>
                                                                                 0x10) & bVar80 |
                                                                           (byte)((ulong)uVar63 >>
                                                                                 0x10) & bVar47,
                                                                           CONCAT11((byte)((ulong)
                                                  uVar82 >> 8) & bVar80 |
                                                  (byte)((ulong)uVar63 >> 8) & bVar51,
                                                  (byte)uVar82 & bVar80 | (byte)uVar63 & bVar50)))))
                                      ));
                *(ulong *)(pbVar30 + uVar44 + 0xb) =
                     CONCAT17((byte)((ulong)uVar81 >> 0x38) & bVar80 |
                              (byte)((ulong)uVar59 >> 0x38) & bVar47,
                              CONCAT16((byte)((ulong)uVar81 >> 0x30) & bVar80 |
                                       (byte)((ulong)uVar59 >> 0x30) & bVar47,
                                       CONCAT15((byte)((ulong)uVar81 >> 0x28) & bVar80 |
                                                (byte)((ulong)uVar59 >> 0x28) & bVar49,
                                                CONCAT14((byte)((ulong)uVar81 >> 0x20) & bVar80 |
                                                         (byte)((ulong)uVar59 >> 0x20) & bVar48,
                                                         CONCAT13((byte)((ulong)uVar81 >> 0x18) &
                                                                  bVar80 | (byte)((ulong)uVar59 >>
                                                                                 0x18) & bVar47,
                                                                  CONCAT12((byte)((ulong)uVar81 >>
                                                                                 0x10) & bVar80 |
                                                                           (byte)((ulong)uVar59 >>
                                                                                 0x10) & bVar47,
                                                                           CONCAT11((byte)((ulong)
                                                  uVar81 >> 8) & bVar80 |
                                                  (byte)((ulong)uVar59 >> 8) & bVar46,
                                                  (byte)uVar81 & bVar80 | (byte)uVar59 & bVar45)))))
                                      ));
                uVar2 = uVar44 + 0x40;
                *(ulong *)(pbVar30 + uVar44 + 0x33) =
                     CONCAT17(pbVar30[uVar44 + 0x3a] & bVar80 |
                              (byte)((ulong)uVar76 >> 0x38) & bVar47,
                              CONCAT16(pbVar30[uVar44 + 0x39] & bVar80 |
                                       (byte)((ulong)uVar76 >> 0x30) & bVar47,
                                       CONCAT15(pbVar30[uVar44 + 0x38] & bVar80 |
                                                (byte)((ulong)uVar76 >> 0x28) & bVar53,
                                                CONCAT14(pbVar30[uVar44 + 0x37] & bVar80 |
                                                         (byte)((ulong)uVar76 >> 0x20) & bVar52,
                                                         CONCAT13(pbVar30[uVar44 + 0x36] & bVar80 |
                                                                  (byte)((ulong)uVar76 >> 0x18) &
                                                                  bVar47,CONCAT12(pbVar30[uVar44 + 
                                                  0x35] & bVar80 |
                                                  (byte)((ulong)uVar76 >> 0x10) & bVar47,
                                                  CONCAT11(pbVar30[uVar44 + 0x34] & bVar80 |
                                                           (byte)((ulong)uVar76 >> 8) & bVar51,
                                                           pbVar30[uVar44 + 0x33] & bVar80 |
                                                           (byte)uVar76 & bVar50)))))));
                *(ulong *)(pbVar30 + uVar44 + 0x2b) =
                     CONCAT17(pbVar30[uVar44 + 0x32] & bVar80 |
                              (byte)((ulong)uVar73 >> 0x38) & bVar47,
                              CONCAT16(pbVar30[uVar44 + 0x31] & bVar80 |
                                       (byte)((ulong)uVar73 >> 0x30) & bVar47,
                                       CONCAT15(pbVar30[uVar44 + 0x30] & bVar80 |
                                                (byte)((ulong)uVar73 >> 0x28) & bVar49,
                                                CONCAT14(pbVar30[uVar44 + 0x2f] & bVar80 |
                                                         (byte)((ulong)uVar73 >> 0x20) & bVar48,
                                                         CONCAT13(pbVar30[uVar44 + 0x2e] & bVar80 |
                                                                  (byte)((ulong)uVar73 >> 0x18) &
                                                                  bVar47,CONCAT12(pbVar30[uVar44 + 
                                                  0x2d] & bVar80 |
                                                  (byte)((ulong)uVar73 >> 0x10) & bVar47,
                                                  CONCAT11(pbVar30[uVar44 + 0x2c] & bVar80 |
                                                           (byte)((ulong)uVar73 >> 8) & bVar46,
                                                           pbVar30[uVar44 + 0x2b] & bVar80 |
                                                           (byte)uVar73 & bVar45)))))));
                *(ulong *)(pbVar30 + uVar44 + 0x43) =
                     CONCAT17((byte)((ulong)uVar64 >> 0x38) & bVar80 |
                              (byte)((ulong)uVar79 >> 0x38) & bVar47,
                              CONCAT16((byte)((ulong)uVar64 >> 0x30) & bVar80 |
                                       (byte)((ulong)uVar79 >> 0x30) & bVar47,
                                       CONCAT15((byte)((ulong)uVar64 >> 0x28) & bVar80 |
                                                (byte)((ulong)uVar79 >> 0x28) & bVar53,
                                                CONCAT14((byte)((ulong)uVar64 >> 0x20) & bVar80 |
                                                         (byte)((ulong)uVar79 >> 0x20) & bVar52,
                                                         CONCAT13((byte)((ulong)uVar64 >> 0x18) &
                                                                  bVar80 | (byte)((ulong)uVar79 >>
                                                                                 0x18) & bVar47,
                                                                  CONCAT12((byte)((ulong)uVar64 >>
                                                                                 0x10) & bVar80 |
                                                                           (byte)((ulong)uVar79 >>
                                                                                 0x10) & bVar47,
                                                                           CONCAT11((byte)((ulong)
                                                  uVar64 >> 8) & bVar80 |
                                                  (byte)((ulong)uVar79 >> 8) & bVar51,
                                                  (byte)uVar64 & bVar80 | (byte)uVar79 & bVar50)))))
                                      ));
                *(ulong *)(pbVar30 + uVar44 + 0x3b) =
                     CONCAT17((byte)((ulong)uVar60 >> 0x38) & bVar80 |
                              (byte)((ulong)uVar78 >> 0x38) & bVar47,
                              CONCAT16((byte)((ulong)uVar60 >> 0x30) & bVar80 |
                                       (byte)((ulong)uVar78 >> 0x30) & bVar47,
                                       CONCAT15((byte)((ulong)uVar60 >> 0x28) & bVar80 |
                                                (byte)((ulong)uVar78 >> 0x28) & bVar49,
                                                CONCAT14((byte)((ulong)uVar60 >> 0x20) & bVar80 |
                                                         (byte)((ulong)uVar78 >> 0x20) & bVar48,
                                                         CONCAT13((byte)((ulong)uVar60 >> 0x18) &
                                                                  bVar80 | (byte)((ulong)uVar78 >>
                                                                                 0x18) & bVar47,
                                                                  CONCAT12((byte)((ulong)uVar60 >>
                                                                                 0x10) & bVar80 |
                                                                           (byte)((ulong)uVar78 >>
                                                                                 0x10) & bVar47,
                                                                           CONCAT11((byte)((ulong)
                                                  uVar60 >> 8) & bVar80 |
                                                  (byte)((ulong)uVar78 >> 8) & bVar46,
                                                  (byte)uVar60 & bVar80 | (byte)uVar78 & bVar45)))))
                                      ));
                uVar44 = uVar2;
              } while (uVar35 != uVar2);
              if (uVar34 == uVar35) goto LAB_00456274;
              uVar34 = ~uVar33;
            }
            if ((uVar9 & 1) == 0) {
              pbVar30[uVar33] = pbVar30[uVar33] & bVar80 | pbVar30[uVar33 + lVar28] & bVar47;
              uVar33 = uVar33 + 1;
            }
            if (uVar34 + uVar42 != 0) {
              do {
                lVar27 = uVar33 + lVar28;
                pbVar38 = pbVar30 + uVar33;
                *pbVar38 = *pbVar38 & bVar80 | pbVar30[lVar27] & bVar47;
                uVar33 = uVar33 + 2;
                pbVar38[1] = pbVar38[1] & bVar80 | (pbVar30 + lVar27)[1] & bVar47;
              } while (uVar42 != uVar33);
            }
          }
LAB_00456274:
          if ((int)uVar8 <= (int)(uVar26 * 2)) break;
          uVar9 = param_5 + uVar26 * -2;
          uVar26 = uVar26 * 2;
        } while( true );
      }
      uVar8 = uVar6 & (uVar41 ^ 0xffffffff);
      if (0 < (int)uVar7) {
        uVar42 = (ulong)uVar7;
        bVar80 = (byte)uVar8;
        bVar47 = (byte)(uVar39 >> 0x18);
        if ((uVar7 < 0x10) ||
           ((param_1 < pbVar30 + uVar42 + 0xb && (pbVar29 + 10 < param_1 + uVar42)))) {
          uVar34 = 0;
        }
        else {
          uVar33 = 0;
          uVar34 = uVar42 & 0xfffffff0;
          uVar31 = _DAT_03889c60;
          uVar32 = _UNK_03889c68;
          uVar60 = _DAT_038894d0;
          uVar64 = _UNK_038894d8;
          uVar59 = _DAT_03889080;
          uVar63 = _UNK_03889088;
          uVar67 = _DAT_03889d70;
          uVar70 = _UNK_03889d78;
          do {
            iVar58 = (int)uVar60;
            iVar61 = (int)((ulong)uVar60 >> 0x20);
            iVar62 = (int)uVar64;
            iVar65 = (int)((ulong)uVar64 >> 0x20);
            iVar54 = (int)uVar31;
            iVar55 = (int)((ulong)uVar31 >> 0x20);
            iVar56 = (int)uVar32;
            iVar57 = (int)((ulong)uVar32 >> 0x20);
            iVar72 = (int)uVar67;
            iVar74 = (int)((ulong)uVar67 >> 0x20);
            iVar75 = (int)uVar70;
            iVar77 = (int)((ulong)uVar70 >> 0x20);
            uVar67 = CONCAT44(iVar74 + 0x10,iVar72 + 0x10);
            uVar70 = CONCAT44(iVar77 + 0x10,iVar75 + 0x10);
            iVar66 = (int)uVar59;
            iVar68 = (int)((ulong)uVar59 >> 0x20);
            iVar69 = (int)uVar63;
            iVar71 = (int)((ulong)uVar63 >> 0x20);
            uVar59 = CONCAT44(iVar68 + 0x10,iVar66 + 0x10);
            uVar63 = CONCAT44(iVar71 + 0x10,iVar69 + 0x10);
            pbVar38 = param_1 + uVar33;
            uVar31 = *(undefined8 *)(pbVar38 + 8);
            bVar83 = (byte)((ulong)uVar31 >> 8);
            bVar84 = (byte)((ulong)uVar31 >> 0x10);
            bVar85 = (byte)((ulong)uVar31 >> 0x18);
            bVar86 = (byte)((ulong)uVar31 >> 0x20);
            bVar87 = (byte)((ulong)uVar31 >> 0x28);
            bVar88 = (byte)((ulong)uVar31 >> 0x30);
            bVar89 = (byte)((ulong)uVar31 >> 0x38);
            bVar45 = *pbVar38;
            bVar46 = pbVar38[1];
            bVar48 = pbVar38[2];
            bVar49 = pbVar38[3];
            bVar50 = pbVar38[4];
            bVar51 = pbVar38[5];
            bVar52 = pbVar38[6];
            bVar53 = pbVar38[7];
            bVar18 = *pbVar38;
            bVar19 = pbVar38[1];
            bVar20 = pbVar38[2];
            bVar21 = pbVar38[3];
            bVar22 = pbVar38[4];
            bVar23 = pbVar38[5];
            bVar24 = pbVar38[6];
            bVar25 = pbVar38[7];
            uVar73 = *(undefined8 *)(pbVar30 + uVar33 + 0x13);
            bVar10 = pbVar30[uVar33 + 0xb];
            bVar11 = pbVar30[uVar33 + 0xc];
            bVar12 = pbVar30[uVar33 + 0xd];
            bVar13 = pbVar30[uVar33 + 0xe];
            bVar14 = pbVar30[uVar33 + 0xf];
            bVar15 = pbVar30[uVar33 + 0x10];
            bVar16 = pbVar30[uVar33 + 0x11];
            bVar17 = pbVar30[uVar33 + 0x12];
            uVar60 = CONCAT44(iVar61 + 0x10,iVar58 + 0x10);
            uVar64 = CONCAT44(iVar65 + 0x10,iVar62 + 0x10);
            uVar31 = CONCAT44(iVar55 + 0x10,iVar54 + 0x10);
            uVar32 = CONCAT44(iVar57 + 0x10,iVar56 + 0x10);
            pbVar29 = param_1 + uVar33;
            pbVar29[8] = pbVar38[8] ^
                         (pbVar38[8] ^ pbVar30[uVar33 + 0x13]) &
                         (char)((byte)(iVar58 - uVar39 >> 0x18) | bVar47) >> 7 & bVar80;
            pbVar29[9] = bVar83 ^ (bVar83 ^ (byte)((ulong)uVar73 >> 8)) &
                                  (char)((byte)(iVar61 - uVar39 >> 0x18) | bVar47) >> 7 & bVar80;
            pbVar29[10] = bVar84 ^ (bVar84 ^ (byte)((ulong)uVar73 >> 0x10)) &
                                   (char)((byte)(iVar62 - uVar39 >> 0x18) | bVar47) >> 7 & bVar80;
            pbVar29[0xb] = bVar85 ^ (bVar85 ^ (byte)((ulong)uVar73 >> 0x18)) &
                                    (char)((byte)(iVar65 - uVar39 >> 0x18) | bVar47) >> 7 & bVar80;
            pbVar29[0xc] = bVar86 ^ (bVar86 ^ (byte)((ulong)uVar73 >> 0x20)) &
                                    (char)((byte)(iVar54 - uVar39 >> 0x18) | bVar47) >> 7 & bVar80;
            pbVar29[0xd] = bVar87 ^ (bVar87 ^ (byte)((ulong)uVar73 >> 0x28)) &
                                    (char)((byte)(iVar55 - uVar39 >> 0x18) | bVar47) >> 7 & bVar80;
            pbVar29[0xe] = bVar88 ^ (bVar88 ^ (byte)((ulong)uVar73 >> 0x30)) &
                                    (char)((byte)(iVar56 - uVar39 >> 0x18) | bVar47) >> 7 & bVar80;
            pbVar29[0xf] = bVar89 ^ (bVar89 ^ (byte)((ulong)uVar73 >> 0x38)) &
                                    (char)((byte)(iVar57 - uVar39 >> 0x18) | bVar47) >> 7 & bVar80;
            *pbVar29 = bVar45 ^ (bVar18 ^ bVar10) &
                                (char)((byte)(iVar72 - uVar39 >> 0x18) | bVar47) >> 7 & bVar80;
            pbVar29[1] = bVar46 ^ (bVar19 ^ bVar11) &
                                  (char)((byte)(iVar74 - uVar39 >> 0x18) | bVar47) >> 7 & bVar80;
            pbVar29[2] = bVar48 ^ (bVar20 ^ bVar12) &
                                  (char)((byte)(iVar75 - uVar39 >> 0x18) | bVar47) >> 7 & bVar80;
            pbVar29[3] = bVar49 ^ (bVar21 ^ bVar13) &
                                  (char)((byte)(iVar77 - uVar39 >> 0x18) | bVar47) >> 7 & bVar80;
            pbVar29[4] = bVar50 ^ (bVar22 ^ bVar14) &
                                  (char)((byte)(iVar66 - uVar39 >> 0x18) | bVar47) >> 7 & bVar80;
            pbVar29[5] = bVar51 ^ (bVar23 ^ bVar15) &
                                  (char)((byte)(iVar68 - uVar39 >> 0x18) | bVar47) >> 7 & bVar80;
            pbVar29[6] = bVar52 ^ (bVar24 ^ bVar16) &
                                  (char)((byte)(iVar69 - uVar39 >> 0x18) | bVar47) >> 7 & bVar80;
            pbVar29[7] = bVar53 ^ (bVar25 ^ bVar17) &
                                  (char)((byte)(iVar71 - uVar39 >> 0x18) | bVar47) >> 7 & bVar80;
            uVar33 = uVar33 + 0x10;
          } while (uVar34 != uVar33);
          if (uVar34 == uVar42) goto LAB_00456470;
        }
        do {
          bVar45 = bVar80 & (char)((byte)((uVar37 - param_5) + 1 + (int)uVar34 >> 0x18) | bVar47) >>
                            7;
          param_1[uVar34] = param_1[uVar34] & (bVar45 ^ 0xff) | pbVar30[uVar34 + 0xb] & bVar45;
          uVar34 = uVar34 + 1;
        } while (uVar42 != uVar34);
      }
LAB_00456470:
      FUN_00400620(pbVar30,lVar43,"external/openssl/crypto/rsa/rsa_ssl.c",0xa5);
      FUN_004014b0(4,0x72,(((int)(uVar36 & uVar4) >> 0x1f & 0x71U | (uVar1 ^ 0xffffffff) & 0x6b) &
                           (~uVar5 | uVar40 ^ 0xffffffff) | uVar40 & uVar5 & 0x73) &
                          (~uVar41 | uVar6 ^ 0xffffffff) | uVar6 & uVar41 & 0x6d,
                   "external/openssl/crypto/rsa/rsa_ssl.c",0xa6);
      FUN_004024e0(uVar8 & 1);
      return uVar39 | uVar8 ^ 0xffffffff;
    }
    uVar31 = 0x41;
    uVar32 = 0x50;
  }
  FUN_004014b0(4,0x72,uVar31,"external/openssl/crypto/rsa/rsa_ssl.c",uVar32);
  return 0xffffffff;
}


