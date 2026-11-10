/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fac5b0; name: FUN_02fac5b0
 */


void FUN_02fac5b0(long *param_1,long *param_2,float *param_3,long param_4,long *param_5,
                 undefined8 *param_6,long *param_7,undefined1 (*param_8) [16])

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined *puVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  float *pfVar21;
  long lVar22;
  undefined4 uVar23;
  float *pfVar24;
  float *pfVar25;
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  byte bVar28;
  float fVar29;
  float fVar30;
  float fVar33;
  undefined4 uVar34;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  uint uVar37;
  float fVar38;
  undefined1 auVar39 [12];
  uint uVar41;
  uint uVar42;
  undefined1 auVar40 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  byte bVar47;
  byte bVar48;
  byte bVar49;
  float fVar46;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  float fVar50;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  float fVar54;
  float fVar58;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  float fVar59;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  float fVar63;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  float fVar67;
  undefined1 auVar71 [12];
  undefined1 auVar72 [12];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [12];
  undefined1 auVar96 [12];
  undefined1 auVar97 [16];
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar129;
  undefined1 auVar119 [12];
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  undefined1 auVar120 [16];
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  undefined1 auVar130 [16];
  undefined1 auVar140 [16];
  undefined2 local_ab8 [2];
  undefined8 local_ab4;
  undefined4 local_aac;
  long local_aa8;
  long local_aa0;
  long lStack_a98;
  uint local_a90;
  undefined8 local_a88;
  undefined2 local_a80;
  undefined2 uStack_a7e;
  undefined4 uStack_a7c;
  undefined4 uStack_a78;
  undefined4 local_a74;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 auStack_a60 [4];
  float afStack_a40 [568];
  int local_160;
  long local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined2 local_140;
  undefined4 local_13c;
  long *plStack_130;
  undefined1 local_120 [16];
  undefined2 local_110;
  undefined4 local_10c;
  int local_100;
  int local_fc;
  undefined2 local_f0;
  undefined2 uStack_ee;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  long local_e0;
  long local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  uint local_90;
  undefined1 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  
  FUN_02fa7314(auStack_a60,param_4,param_3,param_3 + 4);
  if (param_8 != (undefined1 (*) [16])0x0) {
    lVar18 = (long)local_160 + -1;
    fVar33 = afStack_a40[lVar18 * 0xc];
    fVar30 = afStack_a40[lVar18 * 0xc + 1];
    if (0 < (int)fVar30) {
      uVar23 = *(undefined4 *)(*param_8 + 4);
      fVar29 = afStack_a40[lVar18 * 0xc + -8];
      *(undefined4 *)(*param_8 + 8) = *(undefined4 *)(*param_8 + 8);
      *(undefined4 *)(*param_8 + 0xc) = *(undefined4 *)(*param_8 + 0xc);
      *(float *)*param_8 = fVar29;
      *(undefined4 *)(*param_8 + 4) = uVar23;
    }
    fVar29 = afStack_a40[lVar18 * 0xc + 2];
    if (0 < (int)fVar29) {
      uVar23 = *(undefined4 *)*param_8;
      uVar34 = *(undefined4 *)(*param_8 + 4);
      *(float *)(*param_8 + 8) = afStack_a40[lVar18 * 0xc + -6];
      *(undefined4 *)(*param_8 + 0xc) = *(undefined4 *)(*param_8 + 0xc);
      *(undefined4 *)*param_8 = uVar23;
      *(undefined4 *)(*param_8 + 4) = uVar34;
    }
    if ((int)fVar30 + 1 << (ulong)((uint)fVar33 & 0x1f) < local_100) {
      uVar23 = *(undefined4 *)(param_8[1] + 4);
      uVar34 = *(undefined4 *)(param_8[1] + 0xc);
      fVar30 = afStack_a40[lVar18 * 0xc + -4];
      *(undefined4 *)(param_8[1] + 8) = *(undefined4 *)(param_8[1] + 8);
      *(undefined4 *)(param_8[1] + 0xc) = uVar34;
      *(float *)param_8[1] = fVar30;
      *(undefined4 *)(param_8[1] + 4) = uVar23;
    }
    if ((int)fVar29 + 1 << (ulong)((uint)fVar33 & 0x1f) < local_fc) {
      fVar33 = afStack_a40[lVar18 * 0xc + -2];
      uVar23 = *(undefined4 *)param_8[1];
      uVar6 = *(undefined4 *)(param_8[1] + 4);
      uVar34 = *(undefined4 *)(param_8[1] + 0xc);
      *(float *)(param_8[1] + 8) = fVar33;
      *(undefined4 *)(param_8[1] + 0xc) = uVar34;
      *(undefined4 *)param_8[1] = uVar23;
      *(undefined4 *)(param_8[1] + 4) = uVar6;
    }
    else {
      uVar23 = *(undefined4 *)param_8[1];
      fVar33 = *(float *)(param_8[1] + 8);
      uVar34 = *(undefined4 *)(param_8[1] + 0xc);
    }
    *(float *)(param_8[1] + 8) = fVar33;
    *(undefined4 *)(param_8[1] + 0xc) = uVar34;
    *(ulong *)param_8[1] = CONCAT44(0x7f7fffee,uVar23);
    uVar3 = *(undefined8 *)*param_8;
    *(undefined8 *)(*param_8 + 8) = *(undefined8 *)(*param_8 + 8);
    *(ulong *)*param_8 = CONCAT44(0xff7fffee,(int)uVar3);
  }
  puVar15 = PTR_DAT_043723a0;
  iVar2 = local_160;
  if (param_7 == (long *)0x0) {
    bVar28 = 0;
  }
  else {
    bVar28 = *(byte *)(param_7 + 1) & 1;
  }
  do {
    while( true ) {
      while( true ) {
        if (iVar2 == 0) {
          return;
        }
        lVar18 = (long)iVar2 + -1;
        pfVar25 = afStack_a40 + lVar18 * 0xc;
        fVar33 = *pfVar25;
        pfVar24 = afStack_a40 + lVar18 * 0xc + 1;
        fVar30 = *pfVar24;
        pfVar21 = afStack_a40 + lVar18 * 0xc + 2;
        fVar29 = *pfVar21;
        local_160 = (int)lVar18;
        if (fVar33 == 0.0) break;
        pauVar26 = (undefined1 (*) [16])(afStack_a40 + lVar18 * 0xc + -8);
        pauVar27 = (undefined1 (*) [16])(afStack_a40 + lVar18 * 0xc + -4);
        fVar46 = afStack_a40[lVar18 * 0xc + -7];
        fVar59 = afStack_a40[lVar18 * 0xc + -3];
        fVar50 = fVar46;
        fVar54 = fVar46;
        fVar58 = fVar46;
        fVar63 = fVar59;
        fVar67 = fVar59;
        fVar38 = fVar59;
        if ((int)*(uint *)(local_158 + 0x50) < (int)fVar33) {
          iVar17 = (int)fVar33 + ~*(uint *)(local_158 + 0x50);
          plVar19 = (long *)(local_158 + 0x20);
          lVar22 = *plVar19;
          if ((int)fVar30 <
              (int)(uint)*(ushort *)((long)plVar19 + (long)iVar17 * 0x18 + lVar22 + 0x10)) {
            uVar4 = *(ushort *)((long)plVar19 + (long)iVar17 * 0x18 + lVar22 + 0x12);
            if ((int)fVar29 < (int)(uint)uVar4) {
              plVar19 = (long *)((long)plVar19 + (long)iVar17 * 0x18 + lVar22);
              uVar41 = (int)fVar29 + (int)fVar30 * (uint)uVar4;
              fVar38 = *(float *)(local_158 + 0x40);
              puVar5 = (ushort *)
                       ((long)plVar19 +
                       (-(ulong)((uVar41 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                       (ulong)(uVar41 * 4) << 2) + *plVar19);
              auVar140._2_2_ = 0;
              auVar140._0_2_ = *puVar5;
              auVar140._4_2_ = puVar5[1];
              auVar140._6_2_ = 0;
              auVar140._8_2_ = puVar5[2];
              auVar140._10_2_ = 0;
              auVar140._12_2_ = puVar5[3];
              auVar140._14_2_ = 0;
              auVar35._2_2_ = 0;
              auVar35._0_2_ = puVar5[4];
              auVar35._4_2_ = puVar5[5];
              auVar35._6_2_ = 0;
              auVar35._8_2_ = puVar5[6];
              auVar35._10_2_ = 0;
              auVar35._12_2_ = puVar5[7];
              auVar35._14_2_ = 0;
              auVar140 = NEON_ucvtf(auVar140,4);
              auVar35 = NEON_ucvtf(auVar35,4);
              fVar46 = *(float *)(local_158 + 0x30) + auVar140._0_4_ * fVar38;
              fVar50 = *(float *)(local_158 + 0x34) + auVar140._4_4_ * fVar38;
              fVar54 = *(float *)(local_158 + 0x38) + auVar140._8_4_ * fVar38;
              fVar58 = *(float *)(local_158 + 0x3c) + auVar140._12_4_ * fVar38;
              fVar59 = *(float *)(local_158 + 0x30) + auVar35._0_4_ * fVar38;
              fVar63 = *(float *)(local_158 + 0x34) + auVar35._4_4_ * fVar38;
              fVar67 = *(float *)(local_158 + 0x38) + auVar35._8_4_ * fVar38;
              fVar38 = *(float *)(local_158 + 0x3c) + auVar35._12_4_ * fVar38;
            }
          }
        }
        auVar35 = *pauVar26;
        auVar140 = *pauVar27;
        fVar33 = (float)((int)fVar33 + -1);
        auVar31._0_4_ = (auVar35._0_4_ + auVar140._0_4_) * 0.5;
        auVar31._4_4_ = (auVar35._4_4_ + auVar140._4_4_) * 0.5;
        auVar31._8_4_ = (auVar35._8_4_ + auVar140._8_4_) * 0.5;
        auVar31._12_4_ = (auVar35._12_4_ + auVar140._12_4_) * 0.5;
        auVar107 = auVar35 ^ (auVar35 ^ auVar31) & *(undefined1 (*) [16])puVar15;
        auVar93 = auVar35 ^ (auVar35 ^ auVar31) & *(undefined1 (*) [16])(puVar15 + 0x10);
        auVar43 = auVar35 ^ (auVar35 ^ auVar31) & *(undefined1 (*) [16])(puVar15 + 0x50);
        auVar35 = auVar35 ^ (auVar35 ^ auVar31) & *(undefined1 (*) [16])(puVar15 + 0x40);
        auVar73 = auVar31 ^ (auVar31 ^ auVar140) & *(undefined1 (*) [16])(puVar15 + 0x10);
        auVar108._8_8_ = auVar107._8_8_;
        auVar108._0_8_ = CONCAT44(fVar46,auVar107._0_4_);
        auVar97 = auVar31 ^ (auVar31 ^ auVar140) & *(undefined1 (*) [16])puVar15;
        auVar94._8_8_ = auVar93._8_8_;
        auVar94._0_8_ = CONCAT44(fVar50,auVar93._0_4_);
        auVar40 = auVar31 ^ (auVar31 ^ auVar140) & *(undefined1 (*) [16])(puVar15 + 0x50);
        auVar31 = auVar31 ^ (auVar31 ^ auVar140) & *(undefined1 (*) [16])(puVar15 + 0x40);
        auVar109._8_8_ = auVar97._8_8_;
        auVar109._0_8_ = CONCAT44(fVar59,auVar97._0_4_);
        auVar74._8_8_ = auVar73._8_8_;
        auVar74._0_8_ = CONCAT44(fVar63,auVar73._0_4_);
        auVar44._8_8_ = auVar43._8_8_;
        auVar44._0_8_ = CONCAT44(fVar54,auVar43._0_4_);
        auVar36._8_8_ = auVar35._8_8_;
        auVar36._0_8_ = CONCAT44(fVar58,auVar35._0_4_);
        auVar45._8_8_ = auVar40._8_8_;
        auVar45._0_8_ = CONCAT44(fVar67,auVar40._0_4_);
        auVar32._8_8_ = auVar31._8_8_;
        auVar32._0_8_ = CONCAT44(fVar38,auVar31._0_4_);
        fVar7 = *param_3;
        fVar8 = param_3[1];
        fVar9 = param_3[2];
        fVar10 = param_3[3];
        fVar11 = param_3[4];
        fVar12 = param_3[5];
        fVar13 = param_3[6];
        fVar14 = param_3[7];
        auVar120._0_4_ = -(uint)(auVar107._0_4_ <= fVar11);
        auVar120._4_4_ = -(uint)(fVar46 <= fVar12);
        auVar120._8_4_ = -(uint)(auVar107._8_4_ <= fVar13);
        auVar120._12_4_ = -(uint)(auVar107._12_4_ <= fVar14);
        auVar107._0_4_ = -(uint)(auVar93._0_4_ <= fVar11);
        auVar107._4_4_ = -(uint)(fVar50 <= fVar12);
        auVar107._8_4_ = -(uint)(auVar93._8_4_ <= fVar13);
        auVar107._12_4_ = -(uint)(auVar93._12_4_ <= fVar14);
        auVar93._0_4_ = -(uint)(auVar43._0_4_ <= fVar11);
        auVar93._4_4_ = -(uint)(fVar54 <= fVar12);
        auVar93._8_4_ = -(uint)(auVar43._8_4_ <= fVar13);
        auVar93._12_4_ = -(uint)(auVar43._12_4_ <= fVar14);
        auVar130._0_4_ = -(uint)(fVar7 <= auVar97._0_4_);
        auVar130._4_4_ = -(uint)(fVar8 <= fVar59);
        auVar130._8_4_ = -(uint)(fVar9 <= auVar97._8_4_);
        auVar130._12_4_ = -(uint)(fVar10 <= auVar97._12_4_);
        auVar97._0_4_ = -(uint)(fVar7 <= auVar73._0_4_);
        auVar97._4_4_ = -(uint)(fVar8 <= fVar63);
        auVar97._8_4_ = -(uint)(fVar9 <= auVar73._8_4_);
        auVar97._12_4_ = -(uint)(fVar10 <= auVar73._12_4_);
        auVar73._0_4_ = -(uint)(fVar7 <= auVar40._0_4_);
        auVar73._4_4_ = -(uint)(fVar8 <= fVar67);
        auVar73._8_4_ = -(uint)(fVar9 <= auVar40._8_4_);
        auVar73._12_4_ = -(uint)(fVar10 <= auVar40._12_4_);
        auVar40._0_4_ = -(uint)(fVar7 <= auVar31._0_4_);
        auVar40._4_4_ = -(uint)(fVar8 <= fVar38);
        auVar40._8_4_ = -(uint)(fVar9 <= auVar31._8_4_);
        auVar40._12_4_ = -(uint)(fVar10 <= auVar31._12_4_);
        auVar43._0_4_ = -(uint)(auVar35._0_4_ <= fVar11);
        auVar43._4_4_ = -(uint)(fVar58 <= fVar12);
        auVar43._8_4_ = -(uint)(auVar35._8_4_ <= fVar13);
        auVar43._12_4_ = -(uint)(auVar35._12_4_ <= fVar14);
        bVar131 = (byte)((uint)auVar130._0_4_ >> 8);
        bVar132 = (byte)((uint)auVar130._0_4_ >> 0x10);
        bVar133 = (byte)((uint)auVar130._0_4_ >> 0x18);
        bVar134 = (byte)((uint)auVar130._4_4_ >> 8);
        bVar135 = (byte)((uint)auVar130._4_4_ >> 0x10);
        bVar136 = (byte)((uint)auVar130._4_4_ >> 0x18);
        bVar137 = (byte)((uint)auVar130._8_4_ >> 8);
        bVar138 = (byte)((uint)auVar130._8_4_ >> 0x10);
        bVar139 = (byte)((uint)auVar130._8_4_ >> 0x18);
        bVar98 = (byte)((uint)auVar107._0_4_ >> 8);
        bVar99 = (byte)((uint)auVar107._0_4_ >> 0x10);
        bVar100 = (byte)((uint)auVar107._0_4_ >> 0x18);
        bVar101 = (byte)((uint)auVar107._4_4_ >> 8);
        bVar102 = (byte)((uint)auVar107._4_4_ >> 0x10);
        bVar103 = (byte)((uint)auVar107._4_4_ >> 0x18);
        bVar104 = (byte)((uint)auVar107._8_4_ >> 8);
        bVar105 = (byte)((uint)auVar107._8_4_ >> 0x10);
        bVar106 = (byte)((uint)auVar107._8_4_ >> 0x18);
        bVar110 = (byte)((uint)auVar97._0_4_ >> 8);
        bVar111 = (byte)((uint)auVar97._0_4_ >> 0x10);
        bVar112 = (byte)((uint)auVar97._0_4_ >> 0x18);
        bVar113 = (byte)((uint)auVar97._4_4_ >> 8);
        bVar114 = (byte)((uint)auVar97._4_4_ >> 0x10);
        bVar115 = (byte)((uint)auVar97._4_4_ >> 0x18);
        bVar116 = (byte)((uint)auVar97._8_4_ >> 8);
        bVar117 = (byte)((uint)auVar97._8_4_ >> 0x10);
        bVar118 = (byte)((uint)auVar97._8_4_ >> 0x18);
        bVar75 = (byte)((uint)auVar93._0_4_ >> 8);
        bVar76 = (byte)((uint)auVar93._0_4_ >> 0x10);
        bVar77 = (byte)((uint)auVar93._0_4_ >> 0x18);
        bVar78 = (byte)((uint)auVar93._4_4_ >> 8);
        bVar79 = (byte)((uint)auVar93._4_4_ >> 0x10);
        bVar80 = (byte)((uint)auVar93._4_4_ >> 0x18);
        bVar81 = (byte)((uint)auVar93._8_4_ >> 8);
        bVar82 = (byte)((uint)auVar93._8_4_ >> 0x10);
        bVar83 = (byte)((uint)auVar93._8_4_ >> 0x18);
        bVar84 = (byte)((uint)auVar73._0_4_ >> 8);
        bVar85 = (byte)((uint)auVar73._0_4_ >> 0x10);
        bVar86 = (byte)((uint)auVar73._0_4_ >> 0x18);
        bVar87 = (byte)((uint)auVar73._4_4_ >> 8);
        bVar88 = (byte)((uint)auVar73._4_4_ >> 0x10);
        bVar89 = (byte)((uint)auVar73._4_4_ >> 0x18);
        bVar90 = (byte)((uint)auVar73._8_4_ >> 8);
        bVar91 = (byte)((uint)auVar73._8_4_ >> 0x10);
        bVar92 = (byte)((uint)auVar73._8_4_ >> 0x18);
        bVar47 = (byte)((uint)auVar40._0_4_ >> 8);
        bVar48 = (byte)((uint)auVar40._0_4_ >> 0x10);
        bVar49 = (byte)((uint)auVar40._0_4_ >> 0x18);
        bVar51 = (byte)((uint)auVar40._4_4_ >> 8);
        bVar52 = (byte)((uint)auVar40._4_4_ >> 0x10);
        bVar53 = (byte)((uint)auVar40._4_4_ >> 0x18);
        bVar55 = (byte)((uint)auVar40._8_4_ >> 8);
        bVar56 = (byte)((uint)auVar40._8_4_ >> 0x10);
        bVar57 = (byte)((uint)auVar40._8_4_ >> 0x18);
        bVar60 = (byte)((uint)auVar43._0_4_ >> 8);
        bVar61 = (byte)((uint)auVar43._0_4_ >> 0x10);
        bVar62 = (byte)((uint)auVar43._0_4_ >> 0x18);
        bVar64 = (byte)((uint)auVar43._4_4_ >> 8);
        bVar65 = (byte)((uint)auVar43._4_4_ >> 0x10);
        bVar66 = (byte)((uint)auVar43._4_4_ >> 0x18);
        bVar68 = (byte)((uint)auVar43._8_4_ >> 8);
        bVar69 = (byte)((uint)auVar43._8_4_ >> 0x10);
        bVar70 = (byte)((uint)auVar43._8_4_ >> 0x18);
        bVar121 = (byte)((uint)auVar120._0_4_ >> 8);
        bVar127 = (byte)((uint)auVar120._8_4_ >> 8);
        bVar128 = (byte)((uint)auVar120._8_4_ >> 0x10);
        bVar129 = (byte)((uint)auVar120._8_4_ >> 0x18);
        bVar122 = (byte)((uint)auVar120._0_4_ >> 0x10);
        bVar123 = (byte)((uint)auVar120._0_4_ >> 0x18);
        bVar124 = (byte)((uint)auVar120._4_4_ >> 8);
        bVar125 = (byte)((uint)auVar120._4_4_ >> 0x10);
        bVar126 = (byte)((uint)auVar120._4_4_ >> 0x18);
        if (param_8 == (undefined1 (*) [16])0x0) {
          uVar41 = CONCAT13(bVar123 & bVar133,
                            CONCAT12(bVar122 & bVar132,
                                     CONCAT11(bVar121 & bVar131,
                                              (byte)auVar120._0_4_ & (byte)auVar130._0_4_)));
          auVar119._0_8_ =
               CONCAT17(bVar126 & bVar136,
                        CONCAT16(bVar125 & bVar135,
                                 CONCAT15(bVar124 & bVar134,
                                          CONCAT14((byte)auVar120._4_4_ & (byte)auVar130._4_4_,
                                                   uVar41))));
          auVar119[8] = (byte)auVar120._8_4_ & (byte)auVar130._8_4_;
          auVar119[9] = bVar127 & bVar137;
          auVar119[10] = bVar128 & bVar138;
          auVar119[0xb] = bVar129 & bVar139;
          if ((uVar41 & (uint)((ulong)auVar119._0_8_ >> 0x20) & auVar119._8_4_) != 0) {
            local_160 = iVar2;
            *pfVar25 = fVar33;
            *pfVar24 = (float)((int)fVar30 << 1);
            *pfVar21 = (float)((int)fVar29 << 1);
            *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -6) = auVar108._8_8_;
            *(undefined8 *)*pauVar26 = auVar108._0_8_;
            *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -2) = auVar109._8_8_;
            *(undefined8 *)*pauVar27 = auVar109._0_8_;
          }
          uVar41 = CONCAT13(bVar112 & bVar100,
                            CONCAT12(bVar111 & bVar99,
                                     CONCAT11(bVar110 & bVar98,
                                              (byte)auVar97._0_4_ & (byte)auVar107._0_4_)));
          auVar96._0_8_ =
               CONCAT17(bVar115 & bVar103,
                        CONCAT16(bVar114 & bVar102,
                                 CONCAT15(bVar113 & bVar101,
                                          CONCAT14((byte)auVar97._4_4_ & (byte)auVar107._4_4_,uVar41
                                                  ))));
          auVar96[8] = (byte)auVar97._8_4_ & (byte)auVar107._8_4_;
          auVar96[9] = bVar116 & bVar104;
          auVar96[10] = bVar117 & bVar105;
          auVar96[0xb] = bVar118 & bVar106;
          if ((uVar41 & (uint)((ulong)auVar96._0_8_ >> 0x20) & auVar96._8_4_) != 0) {
            lVar18 = (long)local_160;
            local_160 = local_160 + 1;
            afStack_a40[lVar18 * 0xc] = fVar33;
            afStack_a40[lVar18 * 0xc + 1] = (float)((int)fVar30 << 1 | 1);
            afStack_a40[lVar18 * 0xc + 2] = (float)((int)fVar29 << 1);
            *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -6) = auVar94._8_8_;
            *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -8) = auVar94._0_8_;
            *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -2) = auVar74._8_8_;
            *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -4) = auVar74._0_8_;
          }
          uVar41 = CONCAT13(bVar86 & bVar77,
                            CONCAT12(bVar85 & bVar76,
                                     CONCAT11(bVar84 & bVar75,
                                              (byte)auVar73._0_4_ & (byte)auVar93._0_4_)));
          auVar72._0_8_ =
               CONCAT17(bVar89 & bVar80,
                        CONCAT16(bVar88 & bVar79,
                                 CONCAT15(bVar87 & bVar78,
                                          CONCAT14((byte)auVar73._4_4_ & (byte)auVar93._4_4_,uVar41)
                                         )));
          auVar72[8] = (byte)auVar73._8_4_ & (byte)auVar93._8_4_;
          auVar72[9] = bVar90 & bVar81;
          auVar72[10] = bVar91 & bVar82;
          auVar72[0xb] = bVar92 & bVar83;
          if ((uVar41 & (uint)((ulong)auVar72._0_8_ >> 0x20) & auVar72._8_4_) != 0) {
            lVar18 = (long)local_160;
            local_160 = local_160 + 1;
            afStack_a40[lVar18 * 0xc] = fVar33;
            afStack_a40[lVar18 * 0xc + 1] = (float)((int)fVar30 << 1 | 1);
            *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -6) = auVar44._8_8_;
            *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -8) = auVar44._0_8_;
            *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -2) = auVar45._8_8_;
            *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -4) = auVar45._0_8_;
            afStack_a40[lVar18 * 0xc + 2] = (float)((int)fVar29 << 1 | 1);
          }
          uVar37 = CONCAT13(bVar49 & bVar62,
                            CONCAT12(bVar48 & bVar61,
                                     CONCAT11(bVar47 & bVar60,
                                              (byte)auVar40._0_4_ & (byte)auVar43._0_4_)));
          auVar39._0_8_ =
               CONCAT17(bVar53 & bVar66,
                        CONCAT16(bVar52 & bVar65,
                                 CONCAT15(bVar51 & bVar64,
                                          CONCAT14((byte)auVar40._4_4_ & (byte)auVar43._4_4_,uVar37)
                                         )));
          auVar39[8] = (byte)auVar40._8_4_ & (byte)auVar43._8_4_;
          auVar39[9] = bVar55 & bVar68;
          auVar39[10] = bVar56 & bVar69;
          auVar39[0xb] = bVar57 & bVar70;
          uVar41 = (uint)((ulong)auVar39._0_8_ >> 0x20);
          uVar42 = auVar39._8_4_;
        }
        else {
          auVar35 = NEON_fmin(param_8[1],auVar108,4);
          auVar140 = NEON_fmax(*param_8,auVar109,4);
          auVar35 = auVar35 ^ (auVar35 ^ param_8[1]) & auVar120;
          auVar140 = auVar140 ^ (auVar140 ^ *param_8) & auVar130;
          *(long *)(*param_8 + 8) = auVar140._8_8_;
          *(long *)*param_8 = auVar140._0_8_;
          *(long *)(param_8[1] + 8) = auVar35._8_8_;
          *(long *)param_8[1] = auVar35._0_8_;
          if ((CONCAT13(bVar123 & bVar133,
                        CONCAT12(bVar122 & bVar132,
                                 CONCAT11(bVar121 & bVar131,
                                          (byte)auVar120._0_4_ & (byte)auVar130._0_4_))) &
               CONCAT13(bVar126 & bVar136,
                        CONCAT12(bVar125 & bVar135,
                                 CONCAT11(bVar124 & bVar134,
                                          (byte)auVar120._4_4_ & (byte)auVar130._4_4_))) &
              CONCAT13(bVar129 & bVar139,
                       CONCAT12(bVar128 & bVar138,
                                CONCAT11(bVar127 & bVar137,
                                         (byte)auVar120._8_4_ & (byte)auVar130._8_4_)))) != 0) {
            local_160 = iVar2;
            *pfVar25 = fVar33;
            *pfVar24 = (float)((int)fVar30 << 1);
            *pfVar21 = (float)((int)fVar29 << 1);
            *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -6) = auVar108._8_8_;
            *(undefined8 *)*pauVar26 = auVar108._0_8_;
            *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -2) = auVar109._8_8_;
            *(undefined8 *)*pauVar27 = auVar109._0_8_;
          }
          auVar31 = NEON_fmin(auVar35,auVar94,4);
          auVar109 = NEON_fmax(auVar140,auVar74,4);
          auVar109 = auVar109 ^ (auVar109 ^ auVar140) & auVar97;
          auVar31 = auVar31 ^ (auVar31 ^ auVar35) & auVar107;
          *(long *)(*param_8 + 8) = auVar109._8_8_;
          *(long *)*param_8 = auVar109._0_8_;
          *(long *)(param_8[1] + 8) = auVar31._8_8_;
          *(long *)param_8[1] = auVar31._0_8_;
          if ((CONCAT13(bVar112 & bVar100,
                        CONCAT12(bVar111 & bVar99,
                                 CONCAT11(bVar110 & bVar98,
                                          (byte)auVar97._0_4_ & (byte)auVar107._0_4_))) &
               CONCAT13(bVar115 & bVar103,
                        CONCAT12(bVar114 & bVar102,
                                 CONCAT11(bVar113 & bVar101,
                                          (byte)auVar97._4_4_ & (byte)auVar107._4_4_))) &
              CONCAT13(bVar118 & bVar106,
                       CONCAT12(bVar117 & bVar105,
                                CONCAT11(bVar116 & bVar104,
                                         (byte)auVar97._8_4_ & (byte)auVar107._8_4_)))) != 0) {
            lVar18 = (long)local_160;
            local_160 = local_160 + 1;
            afStack_a40[lVar18 * 0xc] = fVar33;
            afStack_a40[lVar18 * 0xc + 1] = (float)((int)fVar30 << 1 | 1);
            afStack_a40[lVar18 * 0xc + 2] = (float)((int)fVar29 << 1);
            *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -6) = auVar94._8_8_;
            *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -8) = auVar94._0_8_;
            *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -2) = auVar74._8_8_;
            *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -4) = auVar74._0_8_;
          }
          uVar41 = CONCAT13(bVar86 & bVar77,
                            CONCAT12(bVar85 & bVar76,
                                     CONCAT11(bVar84 & bVar75,
                                              (byte)auVar73._0_4_ & (byte)auVar93._0_4_)));
          auVar95._0_8_ =
               CONCAT17(bVar89 & bVar80,
                        CONCAT16(bVar88 & bVar79,
                                 CONCAT15(bVar87 & bVar78,
                                          CONCAT14((byte)auVar73._4_4_ & (byte)auVar93._4_4_,uVar41)
                                         )));
          auVar95[8] = (byte)auVar73._8_4_ & (byte)auVar93._8_4_;
          auVar95[9] = bVar90 & bVar81;
          auVar95[10] = bVar91 & bVar82;
          auVar95[0xb] = bVar92 & bVar83;
          auVar35 = NEON_fmin(auVar31,auVar44,4);
          auVar140 = NEON_fmax(auVar109,auVar45,4);
          auVar140 = auVar140 ^ (auVar140 ^ auVar109) & auVar73;
          auVar35 = auVar35 ^ (auVar35 ^ auVar31) & auVar93;
          *(long *)(*param_8 + 8) = auVar140._8_8_;
          *(long *)*param_8 = auVar140._0_8_;
          *(long *)(param_8[1] + 8) = auVar35._8_8_;
          *(long *)param_8[1] = auVar35._0_8_;
          if ((uVar41 & (uint)((ulong)auVar95._0_8_ >> 0x20) & auVar95._8_4_) != 0) {
            lVar18 = (long)local_160;
            local_160 = local_160 + 1;
            afStack_a40[lVar18 * 0xc] = fVar33;
            afStack_a40[lVar18 * 0xc + 1] = (float)((int)fVar30 << 1 | 1);
            *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -6) = auVar44._8_8_;
            *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -8) = auVar44._0_8_;
            *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -2) = auVar45._8_8_;
            *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -4) = auVar45._0_8_;
            afStack_a40[lVar18 * 0xc + 2] = (float)((int)fVar29 << 1 | 1);
          }
          auVar31 = NEON_fmin(auVar35,auVar36,4);
          uVar37 = CONCAT13(bVar49 & bVar62,
                            CONCAT12(bVar48 & bVar61,
                                     CONCAT11(bVar47 & bVar60,
                                              (byte)auVar40._0_4_ & (byte)auVar43._0_4_)));
          auVar71._0_8_ =
               CONCAT17(bVar53 & bVar66,
                        CONCAT16(bVar52 & bVar65,
                                 CONCAT15(bVar51 & bVar64,
                                          CONCAT14((byte)auVar40._4_4_ & (byte)auVar43._4_4_,uVar37)
                                         )));
          auVar71[8] = (byte)auVar40._8_4_ & (byte)auVar43._8_4_;
          auVar71[9] = bVar55 & bVar68;
          auVar71[10] = bVar56 & bVar69;
          auVar71[0xb] = bVar57 & bVar70;
          auVar45 = NEON_fmax(auVar140,auVar32,4);
          uVar42 = auVar71._8_4_;
          auVar31 = auVar31 ^ (auVar31 ^ auVar35) & auVar43;
          auVar45 = auVar45 ^ (auVar45 ^ auVar140) & auVar40;
          uVar41 = (uint)((ulong)auVar71._0_8_ >> 0x20);
          *(long *)(*param_8 + 8) = auVar45._8_8_;
          *(long *)*param_8 = auVar45._0_8_;
          *(long *)(param_8[1] + 8) = auVar31._8_8_;
          *(long *)param_8[1] = auVar31._0_8_;
        }
        iVar2 = local_160;
        if ((uVar37 & uVar41 & uVar42) != 0) {
          lVar18 = (long)local_160;
          local_160 = local_160 + 1;
          afStack_a40[lVar18 * 0xc] = fVar33;
          afStack_a40[lVar18 * 0xc + 1] = (float)((int)fVar30 << 1);
          afStack_a40[lVar18 * 0xc + 2] = (float)((int)fVar29 << 1 | 1);
          *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -6) = auVar36._8_8_;
          *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -8) = auVar36._0_8_;
          *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -2) = auVar32._8_8_;
          *(undefined8 *)(afStack_a40 + lVar18 * 0xc + -4) = auVar32._0_8_;
          iVar2 = local_160;
        }
      }
      if ((int)fVar30 < local_100 && (int)fVar29 < local_fc) break;
      iVar2 = local_160;
    }
    local_160 = iVar2;
    (**(code **)(*plStack_130 + 0x28))();
    uStack_148 = local_120._8_8_;
    local_150 = local_120._0_8_;
    local_140 = local_110;
    lVar18 = (long)local_160 + -1;
    local_160 = (int)lVar18;
    local_13c = local_10c;
    iVar2 = ((int)afStack_a40[lVar18 * 0xc + 2] << (ulong)(*(int *)(param_4 + 0x60) + 1U & 0x1f)) +
            (int)afStack_a40[lVar18 * 0xc + 1] * 2;
    uVar41 = -((uint)*(byte *)(param_4 + 0x1c) + *(int *)((long)param_5 + 0x1c));
    uVar42 = (iVar2 + 2 << (ulong)(uVar41 & 0x1f)) - 1U |
             (&DAT_03aa74b0)[*(int *)((long)param_5 + 0x1c)] & *(uint *)(param_5 + 3);
    plVar19 = (long *)*param_1;
    uVar41 = (iVar2 + 1 << (ulong)(uVar41 & 0x1f)) - 1U |
             (&DAT_03aa74b0)[*(int *)((long)param_5 + 0x1c)] & *(uint *)(param_5 + 3);
    if (plVar19 == (long *)0x0) {
      lVar22 = *param_2;
      lVar18 = *param_5;
      uVar23 = 0xffffff;
      local_b8 = 0xffffffff;
      uStack_a8 = 0;
      uStack_a4 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_b4 = 0xf;
      local_f0 = 0;
      uStack_ee = 0;
      uStack_ec = 0;
      uStack_e8 = 0;
      local_e4 = 0;
      local_b0 = 0xffff;
      local_ac = 0;
      local_88 = 0xffff;
      local_c0._4_4_ = (undefined4)((ulong)local_c0 >> 0x20);
      local_8c = 0xf;
      local_84 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      local_d0 = local_d0 & 0xffffffff00000000;
      local_78 = 6;
      uStack_74 = 0;
      if (lVar22 == 0) {
        local_c8 = 0xffffffffffffffff;
      }
      else {
        local_c8 = *(undefined8 *)(lVar22 + 0xb0);
        uVar23 = *(undefined4 *)(lVar22 + 0x50);
      }
      if (lVar18 == 0) {
        local_98 = 0xffffff;
        local_a0 = 0xffffffffffffffff;
      }
      else {
        local_a0 = *(undefined8 *)(lVar18 + 0xb0);
        local_98 = *(undefined4 *)(lVar18 + 0x50);
      }
      local_90 = uVar41;
      local_c0._0_4_ = uVar23;
      (**(code **)(*param_7 + 0x28))(param_7,&local_f0);
      if (bVar28 != 0) {
        return;
      }
      uVar23 = 0xffffff;
      lVar22 = *param_2;
      lVar18 = *param_5;
      local_b0 = 0xffff;
      local_ac = 0;
      local_88 = 0xffff;
      local_84 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      if (lVar22 == 0) {
        local_c8 = 0xffffffffffffffff;
      }
      else {
        local_c8 = *(undefined8 *)(lVar22 + 0xb0);
        uVar23 = *(undefined4 *)(lVar22 + 0x50);
      }
      local_c0 = CONCAT44(local_c0._4_4_,uVar23);
      if (lVar18 == 0) {
        local_98 = 0xffffff;
        local_a0 = 0xffffffffffffffff;
      }
      else {
        local_a0 = *(undefined8 *)(lVar18 + 0xb0);
        local_98 = *(undefined4 *)(lVar18 + 0x50);
      }
LAB_02facf88:
      local_d0 = local_d0 & 0xffffffff00000000;
      local_e4 = 0;
      uStack_e8 = 0;
      uStack_ec = 0;
      uStack_ee = 0;
      local_f0 = 0;
      uStack_74 = 0;
      local_78 = 6;
      local_8c = 0xf;
      local_b4 = 0xf;
      local_b8 = 0xffffffff;
      local_d8 = 0;
      local_e0 = 0;
      local_90 = uVar42;
      (**(code **)(*param_7 + 0x28))(param_7,&local_f0);
      iVar17 = 0;
    }
    else {
      puVar1 = (undefined8 *)((long)param_1 + 0x14);
      puVar20 = (undefined8 *)((ulong)&local_a70 | 4);
      local_a70 = *param_6;
      uStack_a68 = param_6[1];
      uVar3 = *param_6;
      local_a80 = (undefined2)uVar3;
      uStack_a7e = (undefined2)((ulong)uVar3 >> 0x10);
      uStack_a7c = (undefined4)((ulong)uVar3 >> 0x20);
      uStack_a78 = (undefined4)param_6[1];
      local_a74 = (undefined4)((ulong)param_6[1] >> 0x20);
      (**(code **)(*plVar19 + 0x40))
                (plVar19,local_110,6,*param_5,param_5[1],param_4,uVar41,0,&local_a70);
      (**(code **)(*plVar19 + 0x40))
                (plVar19,local_140,6,*param_5,param_5[1],param_4,uVar42,0,&local_a80);
      plVar19 = (long *)param_1[1];
      if (plVar19 == (long *)0x0) {
LAB_02facd2c:
        lVar22 = *param_2;
        lVar18 = *param_5;
        uVar23 = 0xffffff;
        local_e0 = 0;
        local_d8 = 0;
        local_f0 = 0;
        uStack_ee = 0;
        uStack_ec = 0;
        uStack_e8 = 0;
        local_e4 = 0;
        local_b8 = 0xffffffff;
        local_b4 = 0xf;
        local_8c = 0xf;
        local_d0 = local_d0 & 0xffffffff00000000;
        local_78 = 6;
        uStack_74 = 0;
        if (lVar22 == 0) {
          local_c8 = 0xffffffffffffffff;
        }
        else {
          local_c8 = *(undefined8 *)(lVar22 + 0xb0);
          uVar23 = *(undefined4 *)(lVar22 + 0x50);
        }
        local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar23);
        local_b0 = (undefined2)param_1[2];
        uStack_a4 = *(undefined4 *)((long)param_1 + 0x1c);
        local_ac = (undefined4)*puVar1;
        uStack_a8 = (undefined4)((ulong)*puVar1 >> 0x20);
        if (lVar18 == 0) {
          local_98 = 0xffffff;
          local_a0 = 0xffffffffffffffff;
        }
        else {
          local_a0 = *(undefined8 *)(lVar18 + 0xb0);
          local_98 = *(undefined4 *)(lVar18 + 0x50);
        }
        local_88 = (undefined2)local_a70;
        uStack_7c = *(undefined4 *)(puVar20 + 1);
        local_84 = (undefined4)*puVar20;
        uStack_80 = (undefined4)((ulong)*puVar20 >> 0x20);
        local_90 = uVar41;
        (**(code **)(*param_7 + 0x28))(param_7,&local_f0);
        if (bVar28 == 0) {
          lVar22 = *param_2;
          lVar18 = *param_5;
          uVar23 = 0xffffff;
          if (lVar22 == 0) {
            local_c8 = 0xffffffffffffffff;
          }
          else {
            local_c8 = *(undefined8 *)(lVar22 + 0xb0);
            uVar23 = *(undefined4 *)(lVar22 + 0x50);
          }
          local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar23);
          local_b0 = (undefined2)param_1[2];
          uStack_a4 = *(undefined4 *)((long)param_1 + 0x1c);
          local_ac = (undefined4)*puVar1;
          uStack_a8 = (undefined4)((ulong)*puVar1 >> 0x20);
          if (lVar18 == 0) {
            local_98 = 0xffffff;
            local_a0 = 0xffffffffffffffff;
          }
          else {
            local_a0 = *(undefined8 *)(lVar18 + 0xb0);
            local_98 = *(undefined4 *)(lVar18 + 0x50);
          }
          local_88 = local_a80;
          uStack_7c = local_a74;
          local_84 = uStack_a7c;
          uStack_80 = uStack_a78;
          goto LAB_02facf88;
        }
        iVar17 = 3;
      }
      else {
        local_f0 = (undefined2)param_1[2];
        local_e4 = *(undefined4 *)((long)param_1 + 0x1c);
        uStack_ec = (undefined4)*puVar1;
        uStack_e8 = (undefined4)((ulong)*puVar1 >> 0x20);
        local_e0 = *param_2;
        local_d8 = param_2[1];
        local_d0 = param_2[2];
        local_c0 = 0;
        local_c8 = CONCAT44(local_c8._4_4_,(int)param_2[3]);
        local_aa8 = *param_5;
        local_aa0 = param_5[1];
        local_a88 = 0;
        local_ab8[0] = (undefined2)local_a70;
        local_aac = *(undefined4 *)(puVar20 + 1);
        local_ab4 = *puVar20;
        lStack_a98 = param_4;
        local_a90 = uVar41;
        uVar16 = (**(code **)(*plVar19 + 0x40))(plVar19,6,1,&local_f0,local_ab8);
        if ((uVar16 & 1) != 0) {
          local_ab8[0] = local_a80;
          *(undefined4 *)((undefined8 *)((ulong)local_ab8 | 4) + 1) = local_a74;
          *(undefined8 *)((ulong)local_ab8 | 4) = CONCAT44(uStack_a78,uStack_a7c);
          local_a90 = uVar42;
          uVar16 = (**(code **)(*(long *)param_1[1] + 0x40))
                             ((long *)param_1[1],6,1,&local_f0,local_ab8);
          if ((uVar16 & 1) != 0) goto LAB_02facd2c;
        }
        iVar17 = 2;
      }
    }
    iVar2 = local_160;
    if (iVar17 == 3) {
      return;
    }
  } while( true );
}


