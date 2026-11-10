/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03106724; name: FUN_03106724
 */


/* WARNING: Removing unreachable block (ram,0x0310690c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03106724(long *param_1,float *param_2,undefined8 *param_3,long *param_4)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  bool bVar20;
  long *plVar21;
  undefined4 *puVar22;
  long lVar23;
  long lVar24;
  int *piVar25;
  ulong uVar26;
  undefined8 *puVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  byte bVar31;
  byte bVar38;
  byte bVar39;
  int iVar32;
  uint uVar33;
  byte bVar40;
  byte bVar41;
  byte bVar43;
  byte bVar44;
  int iVar42;
  byte bVar45;
  int iVar46;
  undefined1 auVar34 [12];
  undefined1 auVar35 [12];
  int iVar47;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar48;
  float fVar53;
  float fVar55;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  int iVar49;
  int iVar54;
  int iVar56;
  float fVar57;
  int iVar58;
  undefined1 auVar52 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar71;
  float fVar72;
  float fVar74;
  undefined1 auVar73 [16];
  byte local_620;
  byte bStack_61f;
  byte bStack_61e;
  byte bStack_61d;
  byte bStack_61c;
  byte bStack_61b;
  byte bStack_61a;
  byte bStack_619;
  byte bStack_618;
  byte bStack_617;
  byte bStack_616;
  byte bStack_615;
  byte bStack_614;
  byte bStack_613;
  byte bStack_612;
  byte bStack_611;
  float local_590;
  float fStack_58c;
  float fStack_588;
  undefined4 local_570 [256];
  undefined4 *local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  ulong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  float local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined2 local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  int local_c0;
  undefined1 local_bc;
  undefined2 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined1 auStack_a0 [16];
  float local_90;
  float fStack_8c;
  float fStack_88;
  uint uStack_84;
  undefined8 local_80;
  
  uVar19 = DAT_0388a148;
  uVar18 = DAT_0388a140;
  uVar17 = _UNK_03889a88;
  uVar16 = _DAT_03889a80;
  uVar15 = _UNK_03889708;
  uVar14 = _DAT_03889700;
  uVar13 = _UNK_03888d18;
  uVar12 = _DAT_03888d10;
  if ((char)param_4[0xf] == '\0') {
    fVar7 = *param_2;
    fVar8 = param_2[1];
    fVar9 = param_2[2];
    auVar11._12_4_ = fVar7;
    auVar11._8_4_ = fVar7;
    auVar11._4_4_ = fVar7;
    auVar11._0_4_ = fVar7;
    puVar27 = (undefined8 *)((ulong)&local_120 | 8);
    uVar29 = *param_3;
    auVar10._12_4_ = fVar8;
    auVar10._8_4_ = fVar8;
    auVar10._4_4_ = fVar8;
    auVar10._0_4_ = fVar8;
    local_570[0] = 1;
    puVar22 = (undefined4 *)((ulong)local_570 | 4);
    uVar30 = uVar29;
    do {
      while( true ) {
        local_170 = puVar22 + -1;
        pauVar1 = (undefined1 (*) [16])((long)param_1 + (long)(int)puVar22[-1] * 0x80 + *param_1);
        auVar51 = *pauVar1;
        fVar28 = (float)((ulong)*(undefined8 *)(pauVar1[1] + 8) >> 0x20);
        uVar6 = *(undefined8 *)pauVar1[1];
        auVar50 = NEON_fmax(auVar11,auVar51,4);
        auVar66._4_4_ = fVar9;
        auVar66._0_4_ = fVar9;
        auVar66._8_4_ = fVar9;
        iVar32 = -(uint)(auVar51._0_4_ <= (float)uVar6);
        iVar42 = -(uint)(auVar51._4_4_ <= (float)((ulong)uVar6 >> 0x20));
        iVar46 = -(uint)(auVar51._8_4_ <= (float)*(undefined8 *)(pauVar1[1] + 8));
        iVar47 = -(uint)(auVar51._12_4_ <= fVar28);
        auVar51._12_4_ = fVar28;
        auVar51._0_12_ = *(undefined1 (*) [12])pauVar1[1];
        auVar51 = NEON_fmin(auVar50,auVar51,4);
        fVar48 = auVar51._0_4_ - fVar7;
        fVar53 = auVar51._4_4_ - fVar7;
        fVar55 = auVar51._8_4_ - fVar7;
        fVar57 = auVar51._12_4_ - fVar7;
        auVar51 = NEON_fmax(auVar10,pauVar1[2],4);
        auVar51 = NEON_fmin(auVar51,pauVar1[3],4);
        fVar59 = auVar51._0_4_ - fVar8;
        fVar61 = auVar51._4_4_ - fVar8;
        fVar62 = auVar51._8_4_ - fVar8;
        fVar63 = auVar51._12_4_ - fVar8;
        auVar66._12_4_ = fVar9;
        auVar51 = NEON_fmax(auVar66,pauVar1[4],4);
        auVar51 = NEON_fmin(auVar51,pauVar1[5],4);
        fVar64 = auVar51._0_4_ - fVar9;
        fVar67 = auVar51._4_4_ - fVar9;
        fVar69 = auVar51._8_4_ - fVar9;
        fVar70 = auVar51._12_4_ - fVar9;
        fVar28 = (float)uVar29;
        iVar49 = -(uint)(fVar48 * fVar48 + fVar59 * fVar59 + fVar64 * fVar64 <= fVar28);
        iVar54 = -(uint)(fVar53 * fVar53 + fVar61 * fVar61 + fVar67 * fVar67 <=
                        (float)((ulong)uVar29 >> 0x20));
        iVar56 = -(uint)(fVar55 * fVar55 + fVar62 * fVar62 + fVar69 * fVar69 <= (float)uVar30);
        iVar58 = -(uint)(fVar57 * fVar57 + fVar63 * fVar63 + fVar70 * fVar70 <=
                        (float)((ulong)uVar30 >> 0x20));
        bVar31 = (byte)iVar49 & (byte)iVar32;
        bVar38 = (byte)((uint)iVar49 >> 8) & (byte)((uint)iVar32 >> 8);
        bVar39 = (byte)((uint)iVar49 >> 0x10) & (byte)((uint)iVar32 >> 0x10);
        bVar40 = (byte)((uint)iVar49 >> 0x18) & (byte)((uint)iVar32 >> 0x18);
        iVar32 = CONCAT13(bVar40,CONCAT12(bVar39,CONCAT11(bVar38,bVar31)));
        bVar41 = (byte)iVar54 & (byte)iVar42;
        bVar43 = (byte)((uint)iVar54 >> 8) & (byte)((uint)iVar42 >> 8);
        bVar44 = (byte)((uint)iVar54 >> 0x10) & (byte)((uint)iVar42 >> 0x10);
        bVar45 = (byte)((uint)iVar54 >> 0x18) & (byte)((uint)iVar42 >> 0x18);
        auVar34._0_8_ = CONCAT17(bVar45,CONCAT16(bVar44,CONCAT15(bVar43,CONCAT14(bVar41,iVar32))));
        auVar34[8] = (byte)iVar56 & (byte)iVar46;
        auVar34[9] = (byte)((uint)iVar56 >> 8) & (byte)((uint)iVar46 >> 8);
        auVar34[10] = (byte)((uint)iVar56 >> 0x10) & (byte)((uint)iVar46 >> 0x10);
        auVar34[0xb] = (byte)((uint)iVar56 >> 0x18) & (byte)((uint)iVar46 >> 0x18);
        auVar50[0xc] = (byte)iVar58 & (byte)iVar47;
        auVar50._0_12_ = auVar34;
        auVar50[0xd] = (byte)((uint)iVar58 >> 8) & (byte)((uint)iVar47 >> 8);
        auVar50[0xe] = (byte)((uint)iVar58 >> 0x10) & (byte)((uint)iVar47 >> 0x10);
        auVar50[0xf] = (byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar47 >> 0x18);
        if (((iVar32 == 0 && (int)((ulong)auVar34._0_8_ >> 0x20) == 0) && auVar34._8_4_ == 0) &&
            auVar50._12_4_ == 0) break;
        local_620 = (byte)uVar14;
        bStack_61f = (byte)((ulong)uVar14 >> 8);
        bStack_61e = (byte)((ulong)uVar14 >> 0x10);
        bStack_61d = (byte)((ulong)uVar14 >> 0x18);
        bStack_61c = (byte)((ulong)uVar14 >> 0x20);
        bStack_61b = (byte)((ulong)uVar14 >> 0x28);
        bStack_61a = (byte)((ulong)uVar14 >> 0x30);
        bStack_619 = (byte)((ulong)uVar14 >> 0x38);
        bStack_618 = (byte)uVar15;
        bStack_617 = (byte)((ulong)uVar15 >> 8);
        bStack_616 = (byte)((ulong)uVar15 >> 0x10);
        bStack_615 = (byte)((ulong)uVar15 >> 0x18);
        bStack_614 = (byte)((ulong)uVar15 >> 0x20);
        bStack_613 = (byte)((ulong)uVar15 >> 0x28);
        bStack_612 = (byte)((ulong)uVar15 >> 0x30);
        bStack_611 = (byte)((ulong)uVar15 >> 0x38);
        iVar32 = CONCAT13(bVar40 & bStack_61d,
                          CONCAT12(bVar39 & bStack_61e,
                                   CONCAT11(bVar38 & bStack_61f,bVar31 & local_620)));
        auVar35._0_8_ =
             CONCAT17(bVar45 & bStack_619,
                      CONCAT16(bVar44 & bStack_61a,
                               CONCAT15(bVar43 & bStack_61b,CONCAT14(bVar41 & bStack_61c,iVar32))));
        auVar35[8] = auVar34[8] & bStack_618;
        auVar35[9] = auVar34[9] & bStack_617;
        auVar35[10] = auVar34[10] & bStack_616;
        auVar35[0xb] = auVar34[0xb] & bStack_615;
        auVar36[0xc] = auVar50[0xc] & bStack_614;
        auVar36._0_12_ = auVar35;
        auVar36[0xd] = auVar50[0xd] & bStack_613;
        auVar36[0xe] = auVar50[0xe] & bStack_612;
        auVar36[0xf] = auVar50[0xf] & bStack_611;
        uVar33 = iVar32 + (int)((ulong)auVar35._0_8_ >> 0x20) + auVar35._8_4_ + auVar36._12_4_;
        uVar2 = *(uint *)(&DAT_03aadfe0 + (ulong)uVar33 * 4);
        auVar73._12_4_ = (int)((ulong)*(undefined8 *)(pauVar1[6] + 8) >> 0x20);
        auVar73._0_12_ = *(undefined1 (*) [12])pauVar1[6];
        auVar51 = a64_TBL(ZEXT816(0),auVar73,
                          *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar33 * 0x10));
        if (pauVar1[7][0] == '\0') {
          *(long *)(puVar22 + -1) = auVar51._0_8_;
          auVar51 = NEON_ext(auVar51,auVar51,8,1);
          *(long *)(puVar22 + 1) = auVar51._0_8_;
          puVar22 = local_170 + (int)uVar2;
          if (local_570 == local_170 + (int)uVar2) {
            return;
          }
        }
        else {
          if (uVar33 != 0) {
            uVar33 = 0;
LAB_03106a34:
            switch(uVar33) {
            default:
              uVar26 = (ulong)auVar51._0_4_;
              break;
            case 1:
              uVar26 = (ulong)auVar51._4_4_;
              break;
            case 2:
              uVar26 = (ulong)auVar51._8_4_;
              break;
            case 3:
              uVar26 = (ulong)auVar51._12_4_;
            }
            do {
              lVar23 = param_4[1];
              puVar3 = (undefined8 *)
                       (*(long *)(lVar23 + 0x110) +
                       (-(uVar26 >> 0x1f) & 0xffffffe000000000 | uVar26 << 5));
              uStack_128 = puVar3[1];
              local_130 = *puVar3;
              iVar32 = (int)uVar26;
              local_590 = (float)uVar16;
              fStack_58c = (float)((ulong)uVar16 >> 0x20);
              fStack_588 = (float)uVar17;
              fVar28 = (float)((ulong)uVar17 >> 0x20);
              if (*(char *)(lVar23 + 0x15dc) == '\0') {
                auVar52._8_8_ = uVar13;
                auVar52._0_8_ = uVar12;
                auVar37._8_8_ = uVar19;
                auVar37._0_8_ = uVar18;
                uStack_158 = uVar17;
                local_160 = uVar16;
                uStack_138 = uVar13;
                local_140 = uVar12;
                uStack_148 = uVar19;
                local_150 = uVar18;
                fVar48 = local_590;
                fVar53 = fStack_58c;
                fVar55 = fStack_588;
                fVar57 = fVar28;
              }
              else {
                FUN_032c9fc0(&local_160,*(long *)(lVar23 + 0x120) + (long)iVar32 * 0x10);
                auVar37._8_8_ = uStack_148;
                auVar37._0_8_ = local_150;
                auVar52._8_8_ = uStack_138;
                auVar52._0_8_ = local_140;
                lVar23 = param_4[1];
                fVar48 = (float)local_160;
                fVar53 = (float)((ulong)local_160 >> 0x20);
                fVar55 = (float)uStack_158;
                fVar57 = (float)((ulong)uStack_158 >> 0x20);
              }
              auVar4._4_4_ = fVar53;
              auVar4._0_4_ = fVar48;
              auVar4._8_4_ = fVar55;
              auVar4._12_4_ = fVar57;
              auVar5._4_4_ = fVar53;
              auVar5._0_4_ = fVar48;
              auVar5._8_4_ = fVar55;
              auVar5._12_4_ = fVar57;
              auVar66 = NEON_ext(auVar4,auVar5,8,1);
              auVar50 = NEON_ext(auVar37,auVar37,8,1);
              auVar73 = NEON_ext(auVar52,auVar52,8,1);
              fVar59 = *param_2 - (float)local_130;
              fVar61 = param_2[1] - (float)((ulong)local_130 >> 0x20);
              fVar62 = param_2[2] - (float)uStack_128;
              if (*(int *)(lVar23 + 0x30) == 0) {
                piVar25 = (int *)(lVar23 + 0x20);
              }
              else {
                piVar25 = (int *)(*(long *)(lVar23 + 0x28) +
                                 (long)*(int *)(lVar23 + 0x34) * (long)iVar32);
              }
              lVar24 = *param_4;
              fVar63 = auVar66._0_4_ * fVar62 + fVar48 * fVar59 + fVar53 * fVar61;
              fVar64 = auVar50._0_4_ * fVar62 + auVar37._0_4_ * fVar59 + auVar37._4_4_ * fVar61;
              fVar67 = auVar73._0_4_ * fVar62 + auVar52._0_4_ * fVar59 + auVar52._4_4_ * fVar61;
              fVar59 = auVar73._4_4_ * fVar62 + auVar52._4_4_ * fVar59 + auVar73._4_4_ * fVar61;
              if (*(char *)(lVar24 + 0x20) == '\x02') {
                fVar70 = fVar67 * fVar67 + fVar63 * fVar63 + fVar64 * fVar64;
                fVar68 = fVar67 * fVar67 + fVar63 * fVar63 + fVar64 * fVar64;
                uVar30 = CONCAT44(fVar68,fVar70);
                uVar29 = NEON_frsqrte(uVar30,4);
                fVar61 = (float)uVar29;
                fVar69 = (float)((ulong)uVar29 >> 0x20);
                fVar62 = fVar69 * fVar69;
                uVar29 = NEON_frsqrts(uVar30,CONCAT17((char)((uint)fVar62 >> 0x18),
                                                      CONCAT16((char)((uint)fVar62 >> 0x10),
                                                               CONCAT15((char)((uint)fVar62 >> 8),
                                                                        CONCAT14(SUB41(fVar62,0),
                                                                                 fVar61 * fVar61))))
                                      ,4);
                fVar61 = fVar61 * (float)uVar29;
                fVar69 = fVar69 * (float)((ulong)uVar29 >> 0x20);
                fVar62 = fVar69 * fVar69;
                uVar29 = NEON_frsqrts(uVar30,CONCAT17((char)((uint)fVar62 >> 0x18),
                                                      CONCAT16((char)((uint)fVar62 >> 0x10),
                                                               CONCAT15((char)((uint)fVar62 >> 8),
                                                                        CONCAT14(SUB41(fVar62,0),
                                                                                 fVar61 * fVar61))))
                                      ,4);
                fVar61 = (float)uVar29 * fVar61;
                fVar69 = (float)((ulong)uVar29 >> 0x20) * fVar69;
                iVar42 = -(uint)(fVar70 <= 0.0);
                iVar46 = -(uint)(fVar68 <= 0.0);
                fVar62 = fVar70 * fVar61;
                fVar74 = fVar68 * fVar69;
                bVar31 = (byte)((uint)iVar42 >> 8);
                bVar38 = (byte)((uint)iVar42 >> 0x10);
                bVar39 = (byte)((uint)iVar42 >> 0x18);
                bVar40 = (byte)((uint)iVar46 >> 8);
                bVar41 = (byte)((uint)iVar46 >> 0x10);
                bVar43 = (byte)((uint)iVar46 >> 0x18);
                fVar71 = (float)CONCAT13((byte)((uint)fVar62 >> 0x18) & ~bVar39,
                                         CONCAT12((byte)((uint)fVar62 >> 0x10) & ~bVar38,
                                                  CONCAT11((byte)((uint)fVar62 >> 8) & ~bVar31,
                                                           SUB41(fVar62,0) & ~(byte)iVar42)));
                if (*(int *)(lVar23 + 0x30) == 0) {
                  piVar25 = (int *)(lVar23 + 0x20);
                }
                else {
                  piVar25 = (int *)(*(long *)(lVar23 + 0x28) +
                                   (long)*(int *)(lVar23 + 0x34) * (long)iVar32);
                }
                fVar60 = (float)CONCAT13((byte)((uint)fVar61 >> 0x18) & ~bVar39,
                                         CONCAT12((byte)((uint)fVar61 >> 0x10) & ~bVar38,
                                                  CONCAT11((byte)((uint)fVar61 >> 8) & ~bVar31,
                                                           SUB41(fVar61,0) & ~(byte)iVar42)));
                uVar29 = *(undefined8 *)
                          (*(long *)(*(long *)(*(long *)(lVar23 + 0x18) + 0x18) + (long)*piVar25 * 8
                                    ) + 0x10);
                fVar61 = (float)(CONCAT17((byte)((uint)fVar69 >> 0x18) & ~bVar43,
                                          CONCAT16((byte)((uint)fVar69 >> 0x10) & ~bVar41,
                                                   CONCAT15((byte)((uint)fVar69 >> 8) & ~bVar40,
                                                            CONCAT14(SUB41(fVar69,0) & ~(byte)iVar46
                                                                     ,fVar60)))) >> 0x20);
                fVar62 = fVar64 * fVar61;
                fVar59 = fVar59 * fVar61;
                fVar72 = fVar71 - (float)uVar29;
                local_80 = CONCAT44((float)(CONCAT17((byte)((uint)fVar74 >> 0x18) & ~bVar43,
                                                     CONCAT16((byte)((uint)fVar74 >> 0x10) & ~bVar41
                                                              ,CONCAT15((byte)((uint)fVar74 >> 8) &
                                                                        ~bVar40,CONCAT14(SUB41(
                                                  fVar74,0) & ~(byte)iVar46,fVar71)))) >> 0x20) -
                                    (float)((ulong)uVar29 >> 0x20),fVar72);
                fVar61 = (float)((uint)(fVar63 * fVar60) ^
                                ((uint)(fVar63 * fVar60) ^ (uint)local_590) &
                                -(uint)(fVar70 < 1.4210855e-14));
                fVar62 = (float)((uint)fVar62 ^
                                ((uint)fVar62 ^ (uint)fStack_58c) & -(uint)(fVar68 < 1.4210855e-14))
                ;
                fVar69 = (float)((uint)(fVar67 * fVar60) ^
                                ((uint)(fVar67 * fVar60) ^ (uint)fStack_588) &
                                -(uint)(fVar70 < 1.4210855e-14));
                _fStack_88 = CONCAT44((uint)fVar59 ^
                                      ((uint)fVar59 ^ (uint)fVar28) &
                                      -(uint)(fVar68 < 1.4210855e-14),fVar69);
                _local_90 = CONCAT44(fVar62,fVar61);
                plVar21 = (long *)param_4[0xe];
                if (fVar72 <= *(float *)(plVar21 + 2)) {
LAB_03106910:
                  local_f8 = 0xffffffffffffffff;
                  local_100 = (float)local_80;
                  local_e8 = 0xffffffff;
                  fVar63 = fVar63 - fVar61 * local_100;
                  fVar64 = fVar64 - fVar62 * (float)((ulong)local_80 >> 0x20);
                  fVar67 = fVar67 - fVar69 * local_100;
                  auVar65._0_8_ =
                       CONCAT44(auVar52._4_4_ * fVar69 + fVar53 * fVar61 + auVar37._4_4_ * fVar62,
                                auVar52._0_4_ * fVar69 + fVar48 * fVar61 + auVar37._0_4_ * fVar62);
                  auVar65._8_4_ = auVar52._8_4_ * fVar69 + fVar55 * fVar61 + auVar37._8_4_ * fVar62;
                  auVar65._12_4_ =
                       auVar52._12_4_ * fVar69 + fVar57 * fVar61 + auVar37._12_4_ * fVar62;
                  local_f0 = 0xffffff;
                  uStack_108 = auVar65._8_8_;
                  local_120 = CONCAT44((float)((ulong)local_130 >> 0x20) +
                                       auVar52._4_4_ * fVar67 +
                                       fVar53 * fVar63 + auVar37._4_4_ * fVar64,
                                       (float)local_130 +
                                       auVar52._0_4_ * fVar67 +
                                       fVar48 * fVar63 + auVar37._0_4_ * fVar64);
                  uStack_118 = CONCAT44((float)((ulong)uStack_128 >> 0x20) +
                                        auVar52._12_4_ * fVar67 +
                                        fVar57 * fVar63 + auVar37._12_4_ * fVar64,
                                        (float)uStack_128 +
                                        auVar52._8_4_ * fVar67 +
                                        fVar55 * fVar63 + auVar37._8_4_ * fVar64);
                  local_a8 = 4;
                  local_e0 = *(undefined2 *)(lVar24 + 0x10);
                  uStack_d4 = *(undefined4 *)(lVar24 + 0x1c);
                  local_dc = (undefined4)*(undefined8 *)(lVar24 + 0x14);
                  uStack_d8 = (undefined4)((ulong)*(undefined8 *)(lVar24 + 0x14) >> 0x20);
                  local_e4 = 0xf;
                  local_b8 = (undefined2)param_4[2];
                  uStack_ac = *(undefined4 *)((long)param_4 + 0x1c);
                  local_b4 = (undefined4)*(undefined8 *)((long)param_4 + 0x14);
                  uStack_b0 = (undefined4)((ulong)*(undefined8 *)((long)param_4 + 0x14) >> 0x20);
                  local_d0 = *(undefined8 *)(lVar23 + 0x148);
                  local_c8 = *(undefined4 *)(lVar23 + 0x150);
                  local_bc = *(undefined1 *)(lVar24 + 0x20);
                  local_110 = auVar65._0_8_;
                  local_c0 = iVar32;
                  (**(code **)(*plVar21 + 0x28))(plVar21,&local_120);
                }
              }
              else {
                lVar23 = *(long *)(*(long *)(*(long *)(*(long *)(lVar23 + 0x18) + 0x18) +
                                            (long)*piVar25 * 8) + 0xa0);
                local_80 = *(undefined8 *)(param_4[0xe] + 0x10);
                param_4[0x17] = CONCAT44(fVar59,fVar67);
                param_4[0x16] = CONCAT44(fVar64,fVar63);
                local_120 = CONCAT44(local_120._4_4_,7);
                puVar27[2] = 0;
                puVar27[3] = 0;
                *puVar27 = 0;
                puVar27[1] = 0;
                (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar23 + 0x18) * 0x200 + 0xa8))
                          (lVar23,&local_120,0,0);
                uVar26 = (**(code **)(param_4[4] + (ulong)*(uint *)(param_4 + 6) * 0x38 +
                                      (local_120 & 0xffffffff) * 8 + 0x3cb8))
                                   (param_4 + 6,&local_120,param_4 + 0x10,0,auStack_a0);
                if ((uVar26 & 1) != 0) {
                  auVar37._8_8_ = uStack_148;
                  auVar37._0_8_ = local_150;
                  fVar55 = (float)uStack_158;
                  fVar57 = (float)((ulong)uStack_158 >> 0x20);
                  fVar48 = (float)local_160;
                  fVar53 = (float)((ulong)local_160 >> 0x20);
                  auVar52._8_8_ = uStack_138;
                  auVar52._0_8_ = local_140;
                  lVar24 = *param_4;
                  lVar23 = param_4[1];
                  plVar21 = (long *)param_4[0xe];
                  fVar61 = local_90;
                  fVar62 = fStack_8c;
                  fVar69 = fStack_88;
                  goto LAB_03106910;
                }
              }
              uVar33 = uVar33 + 1;
              bVar20 = *(char *)(param_4[0xe] + 0x18) != '\0';
              *(bool *)(param_4 + 0xf) = bVar20;
              if (uVar2 == uVar33) {
                uVar29 = *(undefined8 *)(param_4[0xe] + 0x10);
                fVar28 = (float)uVar29;
                fVar48 = (float)((ulong)uVar29 >> 0x20);
                uVar29 = CONCAT44(fVar48 * fVar48,fVar28 * fVar28);
                if (bVar20) {
                  return;
                }
                goto LAB_03106d10;
              }
              if (uVar33 < 4) goto LAB_03106a34;
              uVar26 = 0;
            } while( true );
          }
          uVar29 = CONCAT44(fVar28,fVar28);
          if ((char)param_4[0xf] != '\0') {
            return;
          }
LAB_03106d10:
          puVar22 = local_170;
          uVar30 = uVar29;
          if (local_570 == local_170) {
            return;
          }
        }
      }
      puVar22 = local_170;
    } while (local_570 != local_170);
  }
  return;
}


