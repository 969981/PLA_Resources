/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa4d38; name: FUN_02fa4d38
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fa4d38(long param_1,long *param_2,long param_3)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined2 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  float *pfVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  int iVar25;
  int iVar26;
  undefined1 auVar21 [12];
  int iVar27;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar28;
  undefined8 uVar29;
  undefined1 auVar30 [12];
  int iVar36;
  int iVar39;
  int iVar41;
  undefined1 auVar31 [16];
  float fVar37;
  float fVar40;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  byte bVar35;
  byte bVar38;
  undefined1 auVar34 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar53;
  undefined8 uVar48;
  float fVar54;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  undefined8 uVar60;
  float fVar63;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined8 uVar76;
  undefined1 auVar77 [16];
  float fVar78;
  undefined8 uVar79;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar86 [16];
  undefined1 auVar85 [16];
  undefined1 auVar84 [16];
  undefined1 auVar83 [16];
  undefined1 auVar87 [16];
  undefined1 auVar91 [16];
  undefined1 auVar95 [16];
  undefined1 auVar94 [16];
  undefined1 auVar93 [16];
  undefined1 auVar92 [16];
  undefined1 auVar96 [16];
  float fVar97;
  float fVar98;
  float fVar99;
  float local_950;
  float fStack_94c;
  float fStack_948;
  undefined8 local_8e0 [2];
  undefined1 local_8d0 [16];
  undefined8 local_8c0 [2];
  undefined1 local_8b0 [16];
  undefined1 local_8a0 [16];
  undefined8 local_890;
  undefined1 local_880 [16];
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  ulong uStack_858;
  undefined8 local_850;
  ulong uStack_848;
  undefined8 uStack_840;
  ulong uStack_838;
  long *local_830;
  float local_820 [128];
  undefined8 auStack_620 [144];
  int aiStack_1a0 [64];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined2 local_90 [2];
  int local_8c [3];
  long local_80;
  
  lVar19 = tpidr_el0;
  if (*(long *)(lVar19 + 0x38d490) == 0) {
    lVar13 = FUN_0333d16c(0,1);
    *(long *)(lVar19 + 0x38d490) = lVar13;
    local_80 = *(long *)(lVar13 + 0x10);
  }
  else {
    local_80 = *(long *)(*(long *)(lVar19 + 0x38d490) + 0x10);
  }
  if (local_80 != 0) {
    FUN_032d5af0(local_80,"TtGetHfDistances",0x10);
  }
  uVar11 = DAT_0388a148;
  uVar10 = DAT_0388a140;
  uVar9 = _UNK_03889708;
  uVar8 = _DAT_03889700;
  local_830 = *(long **)(param_1 + 0x48);
  local_820[0] = 2.0;
  local_820[1] = 2.0;
  local_820[2] = 2.0;
  local_820[3] = 2.0;
  local_820[4] = 2.0;
  local_820[5] = 2.0;
  local_820[6] = 2.0;
  local_820[7] = 2.0;
  local_820[0x2e] = 2.0;
  local_820[0x2f] = 2.0;
  local_820[0x2c] = 2.0;
  local_820[0x2d] = 2.0;
  local_820[0x32] = 2.0;
  local_820[0x33] = 2.0;
  local_820[0x30] = 2.0;
  local_820[0x31] = 2.0;
  local_820[0x36] = 2.0;
  local_820[0x37] = 2.0;
  local_820[0x34] = 2.0;
  local_820[0x35] = 2.0;
  local_820[0x3a] = 2.0;
  local_820[0x3b] = 2.0;
  local_820[0x38] = 2.0;
  local_820[0x39] = 2.0;
  local_820[0x3e] = 2.0;
  local_820[0x3f] = 2.0;
  local_820[0x3c] = 2.0;
  local_820[0x3d] = 2.0;
  local_820[0x42] = 2.0;
  local_820[0x43] = 2.0;
  local_820[0x40] = 2.0;
  local_820[0x41] = 2.0;
  local_820[0x46] = 2.0;
  local_820[0x47] = 2.0;
  local_820[0x44] = 2.0;
  local_820[0x45] = 2.0;
  local_820[0x4a] = 2.0;
  local_820[0x4b] = 2.0;
  local_820[0x48] = 2.0;
  local_820[0x49] = 2.0;
  local_820[0x4e] = 2.0;
  local_820[0x4f] = 2.0;
  local_820[0x4c] = 2.0;
  local_820[0x4d] = 2.0;
  local_820[0x52] = 2.0;
  local_820[0x53] = 2.0;
  local_820[0x50] = 2.0;
  local_820[0x51] = 2.0;
  local_820[0x56] = 2.0;
  local_820[0x57] = 2.0;
  local_820[0x54] = 2.0;
  local_820[0x55] = 2.0;
  local_820[0x5a] = 2.0;
  local_820[0x5b] = 2.0;
  local_820[0x58] = 2.0;
  local_820[0x59] = 2.0;
  local_820[0x5e] = 2.0;
  local_820[0x5f] = 2.0;
  local_820[0x5c] = 2.0;
  local_820[0x5d] = 2.0;
  local_820[0x62] = 2.0;
  local_820[99] = 2.0;
  local_820[0x60] = 2.0;
  local_820[0x61] = 2.0;
  local_820[0x66] = 2.0;
  local_820[0x67] = 2.0;
  local_820[100] = 2.0;
  local_820[0x65] = 2.0;
  local_820[0x6a] = 2.0;
  local_820[0x6b] = 2.0;
  local_820[0x68] = 2.0;
  local_820[0x69] = 2.0;
  local_820[0x6e] = 2.0;
  local_820[0x6f] = 2.0;
  local_820[0x6c] = 2.0;
  local_820[0x6d] = 2.0;
  local_820[0x72] = 2.0;
  local_820[0x73] = 2.0;
  local_820[0x70] = 2.0;
  local_820[0x71] = 2.0;
  local_820[0x76] = 2.0;
  local_820[0x77] = 2.0;
  local_820[0x74] = 2.0;
  local_820[0x75] = 2.0;
  local_820[0x7a] = 2.0;
  local_820[0x7b] = 2.0;
  local_820[0x78] = 2.0;
  local_820[0x79] = 2.0;
  local_820[0x7c] = 2.0;
  local_820[0x7d] = 2.0;
  local_820[0x7e] = 2.0;
  local_820[0x7f] = 2.0;
  local_820[8] = 2.0;
  local_820[9] = 2.0;
  local_820[10] = 2.0;
  local_820[0xb] = 2.0;
  local_820[0xc] = 2.0;
  local_820[0xd] = 2.0;
  local_820[0xe] = 2.0;
  local_820[0xf] = 2.0;
  local_820[0x10] = 2.0;
  local_820[0x11] = 2.0;
  local_820[0x12] = 2.0;
  local_820[0x13] = 2.0;
  local_820[0x14] = 2.0;
  local_820[0x15] = 2.0;
  local_820[0x16] = 2.0;
  local_820[0x17] = 2.0;
  local_820[0x18] = 2.0;
  local_820[0x19] = 2.0;
  local_820[0x1a] = 2.0;
  local_820[0x1b] = 2.0;
  local_820[0x1c] = 2.0;
  local_820[0x1d] = 2.0;
  local_820[0x1e] = 2.0;
  local_820[0x1f] = 2.0;
  local_820[0x20] = 2.0;
  local_820[0x21] = 2.0;
  local_820[0x22] = 2.0;
  local_820[0x23] = 2.0;
  local_820[0x24] = 2.0;
  local_820[0x25] = 2.0;
  local_820[0x26] = 2.0;
  local_820[0x27] = 2.0;
  local_820[0x28] = 2.0;
  local_820[0x29] = 2.0;
  local_820[0x2a] = 2.0;
  local_820[0x2b] = 2.0;
  if (0 < (int)param_2[1]) {
    cVar1 = *(char *)(param_1 + 0x68);
    uVar76 = NEON_fmov(0x3f800000,4);
    lVar19 = 0;
    do {
      pfVar17 = (float *)(param_3 + lVar19 * 0x60);
      puVar3 = (undefined8 *)(*param_2 + lVar19 * 0x10);
      uVar79 = puVar3[1];
      uVar29 = *puVar3;
      *(short *)(pfVar17 + 0xd) = (short)lVar19;
      *(undefined8 *)(pfVar17 + 2) = uVar79;
      *(undefined8 *)pfVar17 = uVar29;
      uVar60 = DAT_0388a148;
      uVar48 = DAT_0388a140;
      fVar28 = (float)uVar29;
      fVar97 = (float)((ulong)uVar29 >> 0x20);
      iVar36 = -(uint)(fVar97 <= *(float *)(param_1 + 0xa4));
      fVar98 = (float)uVar79;
      iVar39 = -(uint)(fVar98 <= *(float *)(param_1 + 0xa8));
      fVar99 = (float)((ulong)uVar79 >> 0x20);
      iVar41 = -(uint)(fVar99 <= *(float *)(param_1 + 0xac));
      iVar25 = -(uint)(*(float *)(param_1 + 0x94) <= fVar97);
      iVar26 = -(uint)(*(float *)(param_1 + 0x98) <= fVar98);
      iVar27 = -(uint)(*(float *)(param_1 + 0x9c) <= fVar99);
      uVar20 = (uint)(byte)(-(fVar28 <= *(float *)(param_1 + 0xa0)) &
                            -(*(float *)(param_1 + 0x90) <= fVar28) & (byte)uVar8);
      auVar21._0_8_ =
           CONCAT17((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar25 >> 0x18) &
                    (byte)((ulong)uVar8 >> 0x38),
                    (uint7)CONCAT14((byte)iVar36 & (byte)iVar25 & (byte)((ulong)uVar8 >> 0x20),
                                    uVar20));
      auVar21[8] = (byte)iVar39 & (byte)iVar26 & (byte)uVar9;
      auVar21[9] = (byte)((uint)iVar39 >> 8) & (byte)((uint)iVar26 >> 8) & (byte)((ulong)uVar9 >> 8)
      ;
      auVar21[10] = (byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar26 >> 0x10) &
                    (byte)((ulong)uVar9 >> 0x10);
      auVar21[0xb] = (byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar26 >> 0x18) &
                     (byte)((ulong)uVar9 >> 0x18);
      auVar31[0xc] = (byte)iVar41 & (byte)iVar27 & (byte)((ulong)uVar9 >> 0x20);
      auVar31._0_12_ = auVar21;
      auVar31[0xd] = (byte)((uint)iVar41 >> 8) & (byte)((uint)iVar27 >> 8) &
                     (byte)((ulong)uVar9 >> 0x28);
      auVar31[0xe] = (byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                     (byte)((ulong)uVar9 >> 0x30);
      auVar31[0xf] = (byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                     (byte)((ulong)uVar9 >> 0x38);
      if (((uVar20 + (int)((ulong)auVar21._0_8_ >> 0x20) + auVar21._8_4_ + auVar31._12_4_ ^
           0xffffffff) & 5) == 0) {
        auVar31 = *(undefined1 (*) [16])(param_1 + 0x70);
        fVar78 = fVar28 * auVar31._0_4_;
        fVar88 = fVar97 * auVar31._4_4_;
        fVar89 = fVar98 * auVar31._8_4_;
        fVar90 = fVar99 * auVar31._12_4_;
        fVar47 = (float)(int)fVar78;
        auVar49._0_8_ = CONCAT44((int)fVar88,fVar47);
        auVar49._8_4_ = (float)(int)fVar89;
        auVar49._12_4_ = (int)fVar90;
        uVar16 = (ulong)((uint)fVar47 & 7);
        uVar18 = (ulong)((uint)auVar49._8_4_ & 7);
        if ((local_820[uVar16 * 0x10 + uVar18 * 2] == fVar47) &&
           (local_820[uVar16 * 0x10 + uVar18 * 2 + 1] == auVar49._8_4_)) {
          auVar22 = *(undefined1 (*) [16])(auStack_620 + uVar16 * 0x10 + uVar18 * 2);
          uStack_98 = auVar22._8_8_;
          local_a0 = auVar22._0_8_;
          local_90[0] = *(undefined2 *)(((ulong)(local_820 + uVar16 * 4) | uVar18 << 1) + 0x600);
          local_8c[0] = aiStack_1a0[uVar16 * 8 + uVar18];
          auVar42 = auVar49;
        }
        else {
          (**(code **)(*local_830 + 0x28))
                    (local_830,fVar47,auVar49._8_4_,&local_a0,local_90,local_8c);
          iVar25 = local_8c[0];
          uVar12 = local_90[0];
          local_820[uVar16 * 0x10 + uVar18 * 2] = fVar47;
          auVar42._8_8_ = auVar49._8_8_;
          auVar42._0_8_ = auVar49._0_8_;
          local_820[uVar16 * 0x10 + uVar18 * 2 + 1] = auVar49._8_4_;
          uVar48 = local_a0;
          auStack_620[uVar16 * 0x10 + uVar18 * 2 + 1] = uStack_98;
          auStack_620[uVar16 * 0x10 + uVar18 * 2] = uVar48;
          *(undefined2 *)(((ulong)(local_820 + uVar16 * 4) | uVar18 << 1) + 0x600) = uVar12;
          aiStack_1a0[uVar16 * 8 + uVar18] = iVar25;
          auVar22._8_8_ = uStack_98;
          auVar22._0_8_ = local_a0;
        }
        iVar25 = local_8c[0];
        auVar31 = NEON_ucvtf(auVar42,4);
        if (*(char *)((long)param_2 + 0x15) == '\0') {
LAB_02fa50e4:
          auVar42 = NEON_ext(auVar22,auVar22,8,1);
          auVar96._0_4_ = fVar78 - auVar31._0_4_;
          auVar96._4_4_ = fVar88 - auVar31._4_4_;
          auVar96._8_4_ = fVar89 - auVar31._8_4_;
          auVar96._12_4_ = fVar90 - auVar31._12_4_;
          lVar13 = 0;
          if (local_8c[0] != 0) {
            lVar13 = 0xf0;
          }
          auVar31 = *(undefined1 (*) [16])(PTR_DAT_043723a0 + lVar13);
          auVar50 = NEON_ext(auVar96,auVar96,8,1);
          auVar64[0] = ~auVar31[0];
          auVar64[1] = ~auVar31[1];
          auVar64[2] = ~auVar31[2];
          auVar64[3] = ~auVar31[3];
          auVar64[4] = ~auVar31[4];
          auVar64[5] = ~auVar31[5];
          auVar64[6] = ~auVar31[6];
          auVar64[7] = ~auVar31[7];
          auVar64[8] = ~auVar31[8];
          auVar64[9] = ~auVar31[9];
          auVar64[10] = ~auVar31[10];
          auVar64[0xb] = ~auVar31[0xb];
          auVar64[0xc] = ~auVar31[0xc];
          auVar64[0xd] = ~auVar31[0xd];
          auVar64[0xe] = ~auVar31[0xe];
          auVar64[0xf] = ~auVar31[0xf];
          auVar42 = auVar42 ^ (auVar42 ^ auVar22) & auVar31;
          auVar22 = NEON_ext(auVar31,auVar31,8,1);
          auVar43 = NEON_ext(auVar64,auVar64,8,1);
          uVar16 = auVar22._0_8_ & auVar50._0_8_;
          auVar22 = NEON_ext(auVar42,auVar42,8,1);
          uVar18 = auVar43._0_8_ & (ulong)(uint)((float)uVar76 - auVar50._0_4_);
          fVar89 = auVar42._0_4_;
          fVar78 = (float)CONCAT13((byte)(uVar18 >> 0x18) | (byte)(uVar16 >> 0x18),
                                   CONCAT12((byte)(uVar18 >> 0x10) | (byte)(uVar16 >> 0x10),
                                            CONCAT11((byte)(uVar18 >> 8) | (byte)(uVar16 >> 8),
                                                     (byte)uVar18 | (byte)uVar16)));
          uVar16 = CONCAT44(auVar22._0_4_ - fVar89,auVar22._4_4_ - auVar22._0_4_);
          uVar16 = uVar16 ^ (uVar16 ^ CONCAT44(auVar22._4_4_ - auVar42._4_4_,auVar42._4_4_ - fVar89)
                            ) & CONCAT44(-(uint)(fVar78 < auVar96._0_4_),
                                         -(uint)(fVar78 < auVar96._0_4_));
          fVar90 = (float)uVar16;
          fVar37 = (float)(uVar16 >> 0x20);
          local_950 = (float)uVar10;
          fStack_94c = (float)((ulong)uVar10 >> 0x20);
          fStack_948 = (float)uVar11;
          auVar43._0_4_ = local_950 - fVar90;
          auVar43._4_4_ = fStack_94c - 0.0;
          auVar43._8_4_ =
               fStack_948 - (float)((uint)-fVar37 ^ ((uint)-fVar37 ^ (uint)fVar37) & auVar31._0_4_);
          auVar43._12_4_ = fVar88 - (fVar78 * fVar37 + fVar89 + auVar96._0_4_ * fVar90);
          fVar88 = *(float *)(param_1 + 0x7c);
          fVar89 = *(float *)(param_1 + 0x84);
          fVar90 = *(float *)(param_1 + 0x70) * auVar43._0_4_;
          fVar37 = *(float *)(param_1 + 0x74) * auVar43._4_4_;
          fVar40 = *(float *)(param_1 + 0x78) * auVar43._8_4_;
          auVar31 = NEON_ext(auVar43,auVar43,8,1);
          fVar78 = fVar90 * fVar90 + fVar37 * fVar37 + fVar40 * fVar40;
          fVar53 = fVar90 * fVar90 + fVar37 * fVar37 + fVar40 * fVar40;
          uVar48 = CONCAT44(fVar53,fVar78);
          uVar60 = NEON_frsqrte(uVar48,4);
          fVar59 = (float)uVar60;
          fVar63 = (float)((ulong)uVar60 >> 0x20);
          uVar60 = NEON_frsqrts(uVar48,CONCAT44(fVar63 * fVar63,fVar59 * fVar59),4);
          fVar59 = fVar59 * (float)uVar60;
          fVar63 = fVar63 * (float)((ulong)uVar60 >> 0x20);
          iVar25 = -(uint)(fVar78 <= 0.0);
          iVar26 = -(uint)(fVar53 <= 0.0);
          uVar48 = NEON_frsqrts(uVar48,CONCAT44(fVar63 * fVar63,fVar59 * fVar59),4);
          fVar59 = (float)uVar48 * fVar59;
          fVar63 = (float)((ulong)uVar48 >> 0x20) * fVar63;
          fVar53 = (float)CONCAT13((byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                                   CONCAT12((byte)((uint)fVar59 >> 0x10) &
                                            ~(byte)((uint)iVar25 >> 0x10),
                                            CONCAT11((byte)((uint)fVar59 >> 8) &
                                                     ~(byte)((uint)iVar25 >> 8),
                                                     SUB41(fVar59,0) & ~(byte)iVar25)));
          fVar78 = *(float *)((long)param_2 + 0xc);
          lVar13 = param_3 + lVar19 * 0x60;
          *(undefined2 *)(lVar13 + 0x5c) = local_90[0];
          fVar90 = fVar90 * fVar53;
          fVar59 = (float)(CONCAT17((byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                                    CONCAT16((byte)((uint)fVar63 >> 0x10) &
                                             ~(byte)((uint)iVar26 >> 0x10),
                                             CONCAT15((byte)((uint)fVar63 >> 8) &
                                                      ~(byte)((uint)iVar26 >> 8),
                                                      CONCAT14(SUB41(fVar63,0) & ~(byte)iVar26,
                                                               fVar53)))) >> 0x20);
          fVar37 = fVar37 * fVar59;
          fVar40 = fVar40 * fVar53;
          fVar59 = fVar88 * auVar43._12_4_ * fVar59;
          fVar89 = fVar89 * auVar31._4_4_ * fVar37;
          *(float *)(lVar13 + 0x18) = fVar40;
          *(float *)(lVar13 + 0x1c) = fVar59;
          *(float *)(lVar13 + 0x10) = fVar90;
          *(float *)(lVar13 + 0x14) = fVar37;
          *(float *)(lVar13 + 0x28) = fVar40;
          *(float *)(lVar13 + 0x2c) = fVar59;
          *(float *)(lVar13 + 0x20) = fVar90;
          *(float *)(lVar13 + 0x24) = fVar37;
          fVar88 = fVar89 - fVar78;
          fVar53 = fVar78 + fVar88;
          fVar78 = fVar78 + (fVar89 - fVar78);
          pfVar17[2] = fVar98 - fVar40 * fVar53;
          pfVar17[3] = fVar99 - fVar59 * fVar78;
          *pfVar17 = fVar28 - fVar90 * fVar53;
          pfVar17[1] = fVar97 - fVar37 * fVar78;
          *(float *)(lVar13 + 0x30) = fVar88;
        }
        else {
          fVar37 = auVar22._0_4_;
          if (auVar22._12_4_ == fVar37 && (auVar22._8_4_ == fVar37 && auVar22._4_4_ == fVar37))
          goto LAB_02fa50e4;
          auVar50._4_12_ = auVar42._4_12_;
          auVar50._0_4_ = (int)fVar47 + 1;
          auVar51._12_4_ = auVar42._12_4_;
          auVar51._0_8_ = auVar50._0_8_;
          auVar51._8_4_ = (int)auVar49._8_4_ + 1;
          iVar26 = 3;
          auVar42 = NEON_ucvtf(auVar51,4);
          fVar78 = *(float *)(param_1 + 0x84);
          fVar88 = *(float *)(param_1 + 0x80) * auVar31._0_4_;
          fVar89 = *(float *)(param_1 + 0x80) * auVar42._0_4_;
          uStack_868 = (ulong)(uint)(*(float *)(param_1 + 0x88) * auVar31._8_4_);
          uStack_848 = (ulong)(uint)(*(float *)(param_1 + 0x88) * auVar42._8_4_);
          lVar13 = 0;
          lVar15 = 0x20;
          local_850 = CONCAT44(auVar22._8_4_ * fVar78,fVar88);
          uStack_838 = uStack_848;
          uStack_840 = CONCAT44(auVar22._12_4_ * fVar78,fVar89);
          local_870 = CONCAT44(fVar37 * fVar78,fVar88);
          uStack_858 = uStack_868;
          uStack_860 = CONCAT44(auVar22._4_4_ * fVar78,fVar89);
          lVar14 = 0;
          do {
            iVar27 = (int)(lVar14 + 1);
            if (iVar25 != 0) {
              iVar27 = iVar26;
            }
            fVar78 = *(float *)(local_880 + lVar15 + 0x10);
            fVar88 = *(float *)(local_880 + lVar15 + 0x14);
            fVar89 = *(float *)((long)local_820 + lVar15 + -0x48);
            fVar90 = *(float *)((long)local_820 + lVar15 + -0x44);
            fVar37 = *(float *)(local_880 + lVar13 + 0x10);
            fVar40 = *(float *)(local_880 + lVar13 + 0x14);
            fVar59 = *(float *)((long)local_820 + lVar13 + -0x48);
            fVar53 = *(float *)((long)local_820 + lVar13 + -0x44);
            lVar2 = (long)iVar27;
            fVar63 = *(float *)(local_880 + lVar2 * 0x10 + 0x10);
            fVar54 = *(float *)(local_880 + lVar2 * 0x10 + 0x14);
            fVar6 = local_820[lVar2 * 4 + -0x12];
            fVar7 = local_820[lVar2 * 4 + -0x11];
            auVar44._0_4_ = fVar78 - fVar37;
            auVar44._4_4_ = fVar88 - fVar40;
            auVar44._8_4_ = fVar89 - fVar59;
            auVar44._12_4_ = fVar90 - fVar53;
            auVar31 = NEON_ext(auVar44,auVar44,4,1);
            auVar32._0_4_ = fVar37 - fVar63;
            auVar32._4_4_ = fVar40 - fVar54;
            auVar32._8_4_ = fVar59 - fVar6;
            auVar32._12_4_ = fVar53 - fVar7;
            auVar23._0_4_ = fVar28 - fVar37;
            auVar23._4_4_ = fVar97 - fVar40;
            auVar23._8_4_ = fVar98 - fVar59;
            auVar23._12_4_ = fVar99 - fVar53;
            auVar22 = NEON_ext(auVar23,auVar23,4,1);
            auVar52._0_4_ = fVar63 - fVar78;
            auVar52._4_4_ = fVar54 - fVar88;
            auVar52._8_4_ = fVar6 - fVar89;
            auVar52._12_4_ = fVar7 - fVar90;
            auVar42 = NEON_ext(auVar52,auVar52,4,1);
            auVar61._0_4_ = fVar28 - fVar78;
            auVar61._4_4_ = fVar97 - fVar88;
            auVar61._8_4_ = fVar98 - fVar89;
            auVar61._12_4_ = fVar99 - fVar90;
            auVar80._0_4_ = auVar44._0_4_ * auVar22._0_4_ - auVar23._0_4_ * auVar31._0_4_;
            auVar80._4_4_ = auVar44._4_4_ * auVar22._4_4_ - auVar23._4_4_ * auVar31._4_4_;
            auVar80._8_4_ = auVar44._8_4_ * auVar23._0_4_ - auVar23._8_4_ * auVar44._0_4_;
            auVar80._12_4_ = auVar44._12_4_ * auVar23._4_4_ - auVar23._12_4_ * auVar44._4_4_;
            auVar96 = NEON_ext(auVar80,auVar80,4,1);
            auVar55._0_4_ = fVar28 - fVar63;
            auVar55._4_4_ = fVar97 - fVar54;
            auVar55._8_4_ = fVar98 - fVar6;
            auVar55._12_4_ = fVar99 - fVar7;
            auVar43 = NEON_ext(auVar55,auVar55,4,1);
            auVar22 = NEON_ext(auVar61,auVar61,4,1);
            fVar88 = auVar44._0_4_ * auVar42._0_4_ - auVar52._0_4_ * auVar31._0_4_;
            auVar71._0_8_ =
                 CONCAT44(auVar44._4_4_ * auVar42._4_4_ - auVar52._4_4_ * auVar31._4_4_,fVar88);
            auVar71._8_4_ = auVar44._8_4_ * auVar52._0_4_ - auVar52._8_4_ * auVar44._0_4_;
            auVar71._12_4_ = auVar44._12_4_ * auVar52._4_4_ - auVar52._12_4_ * auVar44._4_4_;
            auVar31 = NEON_ext(auVar71,auVar71,4,1);
            fVar37 = auVar31._4_4_;
            auVar67._8_8_ = auVar71._0_8_;
            auVar67._0_8_ = auVar31._0_8_;
            fVar78 = auVar31._0_4_;
            fVar89 = auVar96._0_4_ * fVar78;
            auVar81._0_4_ = auVar52._0_4_ * auVar22._0_4_ - auVar61._0_4_ * auVar42._0_4_;
            auVar81._4_4_ = auVar52._4_4_ * auVar22._4_4_ - auVar61._4_4_ * auVar42._4_4_;
            auVar81._8_4_ = auVar52._8_4_ * auVar61._0_4_ - auVar61._8_4_ * auVar52._0_4_;
            auVar81._12_4_ = auVar52._12_4_ * auVar61._4_4_ - auVar61._12_4_ * auVar52._4_4_;
            auVar22 = NEON_ext(auVar81,auVar81,4,1);
            *(undefined8 *)(local_8b0 + lVar13 + 8) = auVar71._0_8_;
            *(long *)(local_8b0 + lVar13) = auVar31._0_8_;
            auVar31 = NEON_ext(auVar32,auVar32,4,1);
            fVar59 = fVar78 * auVar22._0_4_;
            auVar82._0_4_ = auVar32._0_4_ * auVar43._0_4_ - auVar55._0_4_ * auVar31._0_4_;
            auVar82._4_4_ = auVar32._4_4_ * auVar43._4_4_ - auVar55._4_4_ * auVar31._4_4_;
            auVar82._8_4_ = auVar32._8_4_ * auVar55._0_4_ - auVar55._8_4_ * auVar32._0_4_;
            auVar82._12_4_ = auVar32._12_4_ * auVar55._4_4_ - auVar55._12_4_ * auVar32._4_4_;
            auVar31 = NEON_ext(auVar82,auVar82,4,1);
            fVar90 = fVar78 * auVar31._0_4_;
            fVar40 = fVar37 * auVar31._4_4_;
            auVar4._4_4_ = fVar59;
            auVar4._0_4_ = fVar89;
            auVar4._8_4_ = auVar80._0_4_ * fVar88;
            auVar4._12_4_ = fVar88 * auVar81._0_4_;
            auVar5._4_4_ = fVar59;
            auVar5._0_4_ = fVar89;
            auVar5._8_4_ = auVar80._0_4_ * fVar88;
            auVar5._12_4_ = fVar88 * auVar81._0_4_;
            auVar31 = NEON_ext(auVar4,auVar5,8,1);
            auVar91._0_4_ = auVar31._0_4_ + auVar96._4_4_ * fVar37 + fVar89;
            auVar91._4_4_ = auVar31._4_4_ + fVar37 * auVar22._4_4_ + fVar59;
            fVar89 = fVar90 + fVar40 + fVar88 * auVar82._0_4_;
            fVar90 = fVar90 + fVar40 + fVar88 * auVar82._0_4_;
            auVar91._12_4_ = fVar90;
            auVar91._8_4_ = fVar89;
            if (0.0 < fVar89 && (0.0 < auVar91._0_4_ && 0.0 < auVar91._4_4_)) {
              fVar90 = fVar88 * fVar88 + fVar78 * fVar78 + fVar37 * fVar37;
              fVar40 = fVar88 * fVar88 + fVar78 * fVar78 + fVar37 * fVar37;
              uVar48 = CONCAT44(fVar40,fVar90);
              uVar60 = NEON_frecpe(uVar48,4);
              iVar27 = -(uint)(fVar90 == 0.0);
              iVar36 = -(uint)(fVar40 == 0.0);
              uVar29 = NEON_frecps(uVar48,uVar60,4);
              fVar89 = (float)uVar60 * (float)uVar29;
              fVar59 = (float)((ulong)uVar60 >> 0x20) * (float)((ulong)uVar29 >> 0x20);
              uVar48 = NEON_frecps(uVar48,CONCAT44(fVar59,fVar89),4);
              uVar16 = CONCAT44(fVar59 * (float)((ulong)uVar48 >> 0x20),fVar89 * (float)uVar48) &
                       CONCAT17(~(byte)((uint)iVar36 >> 0x18),
                                CONCAT16(~(byte)((uint)iVar36 >> 0x10),
                                         CONCAT15(~(byte)((uint)iVar36 >> 8),
                                                  CONCAT14(~(byte)iVar36,
                                                           CONCAT13(~(byte)((uint)iVar27 >> 0x18),
                                                                    CONCAT12(~(byte)((uint)iVar27 >>
                                                                                    0x10),
                                                                             CONCAT11(~(byte)((uint)
                                                  iVar27 >> 8),~(byte)iVar27)))))));
              fVar89 = (auVar23._8_4_ * fVar88 + auVar23._0_4_ * fVar78 + auVar23._4_4_ * fVar37) *
                       (float)uVar16;
              fVar78 = (auVar23._8_4_ * fVar88 + auVar23._0_4_ * fVar78 + auVar23._4_4_ * fVar37) *
                       (float)(uVar16 >> 0x20);
              *(ulong *)((long)local_8c0 + lVar13) = CONCAT44(fVar78,fVar89);
              uVar48 = CONCAT44(fVar40 * fVar78 * fVar78,fVar90 * fVar89 * fVar89);
            }
            else {
              fVar78 = auVar44._0_4_ * auVar23._0_4_;
              *(undefined8 *)((long)local_8c0 + lVar13) = 0x3f8000003f800000;
              auVar83._4_12_ = auVar82._4_12_;
              auVar83._0_4_ = fVar78;
              auVar85._0_8_ = auVar83._0_8_;
              auVar85._8_4_ = auVar44._8_4_ * auVar23._8_4_;
              auVar85._12_4_ = auVar82._12_4_;
              auVar84._8_8_ = auVar85._8_8_;
              auVar84._4_4_ = auVar61._0_4_ * auVar52._0_4_;
              auVar84._0_4_ = fVar78;
              auVar86._0_12_ = auVar84._0_12_;
              auVar86._12_4_ = auVar61._8_4_ * auVar52._8_4_;
              auVar31 = NEON_ext(auVar86,auVar86,8,1);
              fVar88 = auVar44._0_4_ * auVar44._0_4_;
              auVar92._4_12_ = auVar91._4_12_;
              auVar92._0_4_ = fVar88;
              auVar94._0_8_ = auVar92._0_8_;
              auVar94._8_4_ = auVar44._8_4_ * auVar44._8_4_;
              auVar94._12_4_ = fVar90;
              auVar93._8_8_ = auVar94._8_8_;
              auVar93._4_4_ = auVar52._0_4_ * auVar52._0_4_;
              auVar93._0_4_ = fVar88;
              auVar95._0_12_ = auVar93._0_12_;
              auVar95._12_4_ = auVar52._8_4_ * auVar52._8_4_;
              auVar22 = NEON_ext(auVar95,auVar95,8,1);
              auVar72._0_4_ = auVar22._0_4_ + auVar44._4_4_ * auVar44._4_4_ + fVar88;
              auVar72._4_4_ =
                   auVar22._4_4_ + auVar52._4_4_ * auVar52._4_4_ + auVar52._0_4_ * auVar52._0_4_;
              auVar72._12_4_ =
                   auVar32._8_4_ * auVar32._8_4_ +
                   auVar32._0_4_ * auVar32._0_4_ + auVar32._4_4_ * auVar32._4_4_;
              auVar72._8_4_ =
                   auVar32._8_4_ * auVar32._8_4_ +
                   auVar32._0_4_ * auVar32._0_4_ + auVar32._4_4_ * auVar32._4_4_;
              auVar22 = NEON_frecpe(auVar72,4);
              auVar42 = NEON_frecps(auVar72,auVar22,4);
              auVar77._0_4_ = auVar22._0_4_ * auVar42._0_4_;
              auVar77._4_4_ = auVar22._4_4_ * auVar42._4_4_;
              auVar77._8_4_ = auVar22._8_4_ * auVar42._8_4_;
              auVar77._12_4_ = auVar22._12_4_ * auVar42._12_4_;
              auVar22 = NEON_frecps(auVar72,auVar77,4);
              auVar65._0_4_ =
                   (auVar31._0_4_ + auVar44._4_4_ * auVar23._4_4_ + fVar78) *
                   auVar77._0_4_ * auVar22._0_4_;
              auVar65._4_4_ =
                   (auVar31._4_4_ + auVar61._4_4_ * auVar52._4_4_ + auVar61._0_4_ * auVar52._0_4_) *
                   auVar77._4_4_ * auVar22._4_4_;
              auVar65._8_4_ =
                   (auVar32._8_4_ * auVar55._8_4_ +
                   auVar32._0_4_ * auVar55._0_4_ + auVar32._4_4_ * auVar55._4_4_) *
                   auVar77._8_4_ * auVar22._8_4_;
              auVar65._12_4_ =
                   (auVar32._8_4_ * auVar55._8_4_ +
                   auVar32._0_4_ * auVar55._0_4_ + auVar32._4_4_ * auVar55._4_4_) *
                   auVar77._12_4_ * auVar22._12_4_;
              auVar31 = NEON_fmov(0x3f800000,4);
              auVar31 = NEON_fminnm(auVar65,auVar31,4);
              auVar31 = NEON_fmax(auVar31,ZEXT816(0),4);
              fVar78 = auVar31._0_4_;
              fVar88 = auVar31._8_4_;
              auVar24._0_4_ = auVar23._0_4_ - auVar44._0_4_ * fVar78;
              auVar24._4_4_ = auVar23._4_4_ - auVar44._4_4_ * fVar78;
              auVar24._8_4_ = auVar23._8_4_ - auVar44._8_4_ * fVar78;
              auVar24._12_4_ = auVar23._12_4_ - auVar44._12_4_ * fVar78;
              fVar78 = auVar31._4_4_;
              auVar45._0_4_ = auVar61._0_4_ - auVar52._0_4_ * fVar78;
              auVar45._4_4_ = auVar61._4_4_ - auVar52._4_4_ * fVar78;
              auVar45._8_4_ = auVar61._8_4_ - auVar52._8_4_ * fVar78;
              auVar45._12_4_ = auVar61._12_4_ - auVar52._12_4_ * fVar78;
              auVar33._0_4_ = auVar55._0_4_ - auVar32._0_4_ * fVar88;
              auVar33._4_4_ = auVar55._4_4_ - auVar32._4_4_ * fVar88;
              auVar33._8_4_ = auVar55._8_4_ - auVar32._8_4_ * fVar88;
              auVar33._12_4_ = auVar55._12_4_ - auVar32._12_4_ * fVar88;
              fVar78 = auVar24._0_4_ * auVar24._0_4_ + auVar24._4_4_ * auVar24._4_4_ +
                       auVar24._8_4_ * auVar24._8_4_;
              fVar88 = auVar24._0_4_ * auVar24._0_4_ + auVar24._4_4_ * auVar24._4_4_ +
                       auVar24._8_4_ * auVar24._8_4_;
              fVar89 = auVar45._0_4_ * auVar45._0_4_ + auVar45._4_4_ * auVar45._4_4_ +
                       auVar45._8_4_ * auVar45._8_4_;
              fVar90 = auVar45._0_4_ * auVar45._0_4_ + auVar45._4_4_ * auVar45._4_4_ +
                       auVar45._8_4_ * auVar45._8_4_;
              auVar73._0_8_ = CONCAT44(-(uint)(fVar88 < fVar90),-(uint)(fVar78 < fVar89));
              auVar73._8_8_ = auVar73._0_8_;
              fVar37 = auVar33._0_4_ * auVar33._0_4_ + auVar33._4_4_ * auVar33._4_4_ +
                       auVar33._8_4_ * auVar33._8_4_;
              fVar40 = auVar33._0_4_ * auVar33._0_4_ + auVar33._4_4_ * auVar33._4_4_ +
                       auVar33._8_4_ * auVar33._8_4_;
              uVar48 = NEON_fmin(CONCAT44(fVar88,fVar78),CONCAT44(fVar90,fVar89),4);
              auVar66._0_8_ =
                   CONCAT44(-(uint)((float)((ulong)uVar48 >> 0x20) < fVar40),
                            -(uint)((float)uVar48 < fVar37));
              uVar48 = NEON_fmin(uVar48,CONCAT44(fVar40,fVar37),4);
              auVar66._8_8_ = auVar66._0_8_;
              auVar67 = auVar33 ^ (auVar33 ^ auVar45 ^ (auVar45 ^ auVar24) & auVar73) & auVar66;
            }
            *(long *)(local_8d0 + lVar13 + 8) = auVar67._8_8_;
            *(long *)(local_8d0 + lVar13) = auVar67._0_8_;
            lVar13 = lVar13 + 0x30;
            iVar26 = iVar26 + -3;
            lVar15 = lVar15 + -0x10;
            local_8e0[lVar14] = uVar48;
            lVar14 = lVar14 + 1;
          } while (lVar13 != 0x60);
          fVar78 = local_8d0._0_4_ * local_8d0._0_4_;
          fVar88 = local_8d0._4_4_ * local_8d0._4_4_;
          fVar89 = local_8d0._8_4_ * local_8d0._8_4_;
          auVar46._0_8_ =
               CONCAT44(-(uint)((float)((ulong)local_8e0[0] >> 0x20) <
                               (float)((ulong)local_8e0[1] >> 0x20)),
                        -(uint)((float)local_8e0[0] < (float)local_8e0[1]));
          auVar46._8_8_ = auVar46._0_8_;
          uVar60 = NEON_fmin(local_8e0[0],local_8e0[1],4);
          uVar29 = NEON_frsqrte(uVar60,4);
          auVar62._0_8_ =
               CONCAT44(-(uint)(fVar78 + fVar88 + fVar89 == 0.0),
                        -(uint)(fVar78 + fVar88 + fVar89 == 0.0));
          auVar62._8_8_ = auVar62._0_8_;
          auVar31 = local_8d0 ^ (local_8d0 ^ local_8b0) & auVar62;
          fVar78 = auVar31._0_4_;
          fVar88 = auVar31._4_4_;
          fVar89 = auVar31._8_4_;
          fVar90 = fVar78 * fVar78 + fVar88 * fVar88 + fVar89 * fVar89;
          fVar40 = fVar78 * fVar78 + fVar88 * fVar88 + fVar89 * fVar89;
          uVar48 = CONCAT44(fVar40,fVar90);
          uVar79 = NEON_frsqrte(uVar48,4);
          fVar37 = (float)uVar79;
          fVar59 = (float)((ulong)uVar79 >> 0x20);
          uVar79 = NEON_frsqrts(uVar48,CONCAT44(fVar59 * fVar59,fVar37 * fVar37),4);
          fVar37 = fVar37 * (float)uVar79;
          fVar59 = fVar59 * (float)((ulong)uVar79 >> 0x20);
          auVar56._0_8_ = CONCAT44(-(uint)(fVar40 < 1.4210855e-14),-(uint)(fVar90 < 1.4210855e-14));
          iVar25 = -(uint)(fVar90 <= 0.0);
          iVar26 = -(uint)(fVar40 <= 0.0);
          auVar56._8_8_ = auVar56._0_8_;
          uVar48 = NEON_frsqrts(uVar48,CONCAT44(fVar59 * fVar59,fVar37 * fVar37),4);
          fVar37 = (float)uVar48 * fVar37;
          fVar59 = (float)((ulong)uVar48 >> 0x20) * fVar59;
          fVar90 = (float)CONCAT13((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                                   CONCAT12((byte)((uint)fVar37 >> 0x10) &
                                            ~(byte)((uint)iVar25 >> 0x10),
                                            CONCAT11((byte)((uint)fVar37 >> 8) &
                                                     ~(byte)((uint)iVar25 >> 8),
                                                     SUB41(fVar37,0) & ~(byte)iVar25)));
          fVar37 = local_8a0._0_4_ * local_8a0._0_4_;
          fVar40 = local_8a0._4_4_ * local_8a0._4_4_;
          fVar53 = local_8a0._8_4_ * local_8a0._8_4_;
          auVar57._0_4_ = fVar78 * fVar90;
          fVar78 = (float)(CONCAT17((byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                                    CONCAT16((byte)((uint)fVar59 >> 0x10) &
                                             ~(byte)((uint)iVar26 >> 0x10),
                                             CONCAT15((byte)((uint)fVar59 >> 8) &
                                                      ~(byte)((uint)iVar26 >> 8),
                                                      CONCAT14(SUB41(fVar59,0) & ~(byte)iVar26,
                                                               fVar90)))) >> 0x20);
          auVar57._4_4_ = fVar88 * fVar78;
          auVar57._8_4_ = fVar89 * fVar90;
          auVar57._12_4_ = auVar31._12_4_ * fVar78;
          auVar68._8_8_ = _UNK_03889a88;
          auVar68._0_8_ = _DAT_03889a80;
          lVar13 = param_3 + lVar19 * 0x60;
          auVar57 = auVar57 ^ (auVar57 ^ auVar68) & auVar56;
          auVar87._0_8_ =
               CONCAT44(-(uint)(fVar37 + fVar40 + fVar53 == 0.0),
                        -(uint)(fVar37 + fVar40 + fVar53 == 0.0));
          auVar87._8_8_ = auVar87._0_8_;
          auVar31 = local_8a0 ^ (local_8a0 ^ local_880) & auVar87;
          fVar89 = auVar31._0_4_;
          fVar90 = auVar31._4_4_;
          fVar37 = auVar31._8_4_;
          fVar78 = fVar89 * fVar89 + fVar90 * fVar90 + fVar37 * fVar37;
          fVar88 = fVar89 * fVar89 + fVar90 * fVar90 + fVar37 * fVar37;
          uVar79 = CONCAT44(fVar88,fVar78);
          uVar48 = NEON_frsqrte(uVar79,4);
          fVar40 = (float)uVar48;
          fVar59 = (float)((ulong)uVar48 >> 0x20);
          uVar48 = NEON_frsqrts(uVar79,CONCAT44(fVar59 * fVar59,fVar40 * fVar40),4);
          fVar40 = fVar40 * (float)uVar48;
          fVar59 = fVar59 * (float)((ulong)uVar48 >> 0x20);
          uVar48 = NEON_frsqrts(uVar79,CONCAT44(fVar59 * fVar59,fVar40 * fVar40),4);
          auVar74._0_8_ = CONCAT44(-(uint)(fVar88 < 1.4210855e-14),-(uint)(fVar78 < 1.4210855e-14));
          iVar25 = -(uint)(fVar78 <= 0.0);
          iVar26 = -(uint)(fVar88 <= 0.0);
          auVar74._8_8_ = auVar74._0_8_;
          fVar40 = (float)uVar48 * fVar40;
          fVar59 = (float)((ulong)uVar48 >> 0x20) * fVar59;
          fVar78 = (float)CONCAT13((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                                   CONCAT12((byte)((uint)fVar40 >> 0x10) &
                                            ~(byte)((uint)iVar25 >> 0x10),
                                            CONCAT11((byte)((uint)fVar40 >> 8) &
                                                     ~(byte)((uint)iVar25 >> 8),
                                                     SUB41(fVar40,0) & ~(byte)iVar25)));
          auVar75._0_4_ = fVar89 * fVar78;
          fVar88 = (float)(CONCAT17((byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                                    CONCAT16((byte)((uint)fVar59 >> 0x10) &
                                             ~(byte)((uint)iVar26 >> 0x10),
                                             CONCAT15((byte)((uint)fVar59 >> 8) &
                                                      ~(byte)((uint)iVar26 >> 8),
                                                      CONCAT14(SUB41(fVar59,0) & ~(byte)iVar26,
                                                               fVar78)))) >> 0x20);
          auVar75._4_4_ = fVar90 * fVar88;
          auVar75._8_4_ = fVar37 * fVar78;
          auVar75._12_4_ = auVar31._12_4_ * fVar88;
          bVar35 = (byte)((ulong)local_8c0[0] >> 0x18);
          bVar38 = (byte)((ulong)local_8c0[0] >> 0x38);
          uVar16 = CONCAT17(bVar38,(uint7)(bVar35 & 0x80) << 0x18) & 0x80ffffffffffffff;
          auVar75 = auVar75 ^ (auVar75 ^ auVar68) & auVar74;
          auVar58._0_3_ = auVar57._0_3_;
          auVar58[3] = auVar57[3] ^ (byte)(uVar16 >> 0x18);
          auVar58[4] = auVar57[4];
          auVar58[5] = auVar57[5];
          auVar58[6] = auVar57[6];
          auVar58[7] = auVar57[7] ^ (byte)(uVar16 >> 0x38);
          auVar58[8] = auVar57[8];
          auVar58[9] = auVar57[9];
          auVar58[10] = auVar57[10];
          auVar58[0xb] = auVar57[0xb] ^ bVar35 & 0x80;
          auVar58[0xc] = auVar57[0xc];
          auVar58[0xd] = auVar57[0xd];
          auVar58[0xe] = auVar57[0xe];
          auVar58[0xf] = auVar57[0xf] ^ bVar38 & 0x80;
          bVar35 = (byte)((ulong)local_890 >> 0x18);
          bVar38 = (byte)((ulong)local_890 >> 0x38);
          uVar16 = CONCAT17(bVar38,(uint7)(bVar35 & 0x80) << 0x18) & 0x80ffffffffffffff;
          auVar69._8_8_ = auVar46._0_8_;
          auVar69._0_8_ = auVar46._0_8_;
          auVar31 = local_880 ^ (local_880 ^ local_8b0) & auVar46;
          fVar40 = auVar31._0_4_;
          fVar59 = auVar31._4_4_;
          fVar53 = auVar31._8_4_;
          auVar70._0_3_ = auVar75._0_3_;
          auVar70[3] = auVar75[3] ^ (byte)(uVar16 >> 0x18);
          auVar70[4] = auVar75[4];
          auVar70[5] = auVar75[5];
          auVar70[6] = auVar75[6];
          auVar70[7] = auVar75[7] ^ (byte)(uVar16 >> 0x38);
          auVar70[8] = auVar75[8];
          auVar70[9] = auVar75[9];
          auVar70[10] = auVar75[10];
          auVar70[0xb] = auVar75[0xb] ^ bVar35 & 0x80;
          auVar70[0xc] = auVar75[0xc];
          auVar70[0xd] = auVar75[0xd];
          auVar70[0xe] = auVar75[0xe];
          auVar70[0xf] = auVar75[0xf] ^ bVar38 & 0x80;
          auVar70 = auVar70 ^ (auVar70 ^ auVar58) & auVar69;
          fVar78 = fVar53 * fVar53 + fVar40 * fVar40 + fVar59 * fVar59;
          fVar89 = fVar53 * fVar53 + fVar40 * fVar40 + fVar59 * fVar59;
          uVar48 = CONCAT44(fVar89,fVar78);
          uVar79 = NEON_frsqrte(uVar48,4);
          fVar88 = (float)uVar79;
          fVar90 = (float)((ulong)uVar79 >> 0x20);
          uVar79 = NEON_frsqrts(uVar48,CONCAT44(fVar90 * fVar90,fVar88 * fVar88),4);
          fVar88 = fVar88 * (float)uVar79;
          fVar90 = fVar90 * (float)((ulong)uVar79 >> 0x20);
          iVar25 = -(uint)(fVar78 <= 0.0);
          iVar26 = -(uint)(fVar89 <= 0.0);
          uVar48 = NEON_frsqrts(uVar48,CONCAT44(fVar90 * fVar90,fVar88 * fVar88),4);
          fVar88 = (float)uVar48 * fVar88;
          fVar90 = (float)((ulong)uVar48 >> 0x20) * fVar90;
          fVar63 = (float)CONCAT13((byte)((uint)fVar88 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                                   CONCAT12((byte)((uint)fVar88 >> 0x10) &
                                            ~(byte)((uint)iVar25 >> 0x10),
                                            CONCAT11((byte)((uint)fVar88 >> 8) &
                                                     ~(byte)((uint)iVar25 >> 8),
                                                     SUB41(fVar88,0) & ~(byte)iVar25)));
          fVar54 = (float)(CONCAT17((byte)((uint)fVar90 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                                    CONCAT16((byte)((uint)fVar90 >> 0x10) &
                                             ~(byte)((uint)iVar26 >> 0x10),
                                             CONCAT15((byte)((uint)fVar90 >> 8) &
                                                      ~(byte)((uint)iVar26 >> 8),
                                                      CONCAT14(SUB41(fVar90,0) & ~(byte)iVar26,
                                                               fVar63)))) >> 0x20);
          fVar59 = fVar59 * fVar54;
          fVar78 = (float)uVar29;
          fVar88 = (float)((ulong)uVar29 >> 0x20);
          uVar48 = NEON_frsqrts(uVar60,CONCAT44(fVar88 * fVar88,fVar78 * fVar78),4);
          fVar78 = fVar78 * (float)uVar48;
          fVar88 = fVar88 * (float)((ulong)uVar48 >> 0x20);
          uVar48 = NEON_frsqrts(uVar60,CONCAT44(fVar88 * fVar88,fVar78 * fVar78),4);
          fVar78 = (float)uVar60 * (float)uVar48 * fVar78;
          fVar88 = (float)((ulong)uVar60 >> 0x20) * (float)((ulong)uVar48 >> 0x20) * fVar88;
          fVar89 = fVar40 * fVar63 * auVar70._0_4_;
          fVar90 = fVar59 * auVar70._4_4_;
          fVar37 = fVar53 * fVar63 * auVar70._8_4_;
          iVar25 = -(uint)(fVar89 + fVar90 + fVar37 < 0.0);
          iVar26 = -(uint)(fVar89 + fVar90 + fVar37 < 0.0);
          uVar18 = CONCAT44(iVar26,iVar25) & 0x8000000080000000;
          fVar78 = (float)CONCAT13((byte)(uVar18 >> 0x18) ^ (byte)((uint)fVar78 >> 0x18),
                                   SUB43(fVar78,0));
          bVar35 = (byte)((uint)iVar25 >> 0x18);
          bVar38 = (byte)((uint)iVar26 >> 0x18);
          uVar16 = CONCAT17(bVar38,(uint7)(bVar35 & 0x80) << 0x18) & 0x80ffffffffffffff;
          fVar89 = (float)CONCAT13((byte)(uVar16 >> 0x18) ^ auVar70[3],auVar70._0_3_);
          auVar30._0_8_ =
               CONCAT17((byte)(uVar16 >> 0x38) ^ auVar70[7],
                        CONCAT16(auVar70[6],CONCAT15(auVar70[5],CONCAT14(auVar70[4],fVar89))));
          auVar30[8] = auVar70[8];
          auVar30[9] = auVar70[9];
          auVar30[10] = auVar70[10];
          auVar30[0xb] = bVar35 & 0x80 ^ auVar70[0xb];
          auVar34[0xc] = auVar70[0xc];
          auVar34._0_12_ = auVar30;
          auVar34[0xd] = auVar70[0xd];
          auVar34[0xe] = auVar70[0xe];
          auVar34[0xf] = bVar38 & 0x80 ^ auVar70[0xf];
          *(long *)(lVar13 + 0x18) = auVar34._8_8_;
          *(undefined8 *)(lVar13 + 0x10) = auVar30._0_8_;
          *(float *)(lVar13 + 0x28) = fVar53 * fVar63;
          *(float *)(lVar13 + 0x2c) = auVar31._12_4_ * fVar54;
          *(float *)(lVar13 + 0x20) = fVar40 * fVar63;
          *(float *)(lVar13 + 0x24) = fVar59;
          fVar88 = (float)(CONCAT17((byte)(uVar18 >> 0x38) ^ (byte)((uint)fVar88 >> 0x18),
                                    CONCAT16((char)((uint)fVar88 >> 0x10),
                                             CONCAT15((char)((uint)fVar88 >> 8),
                                                      CONCAT14(SUB41(fVar88,0),fVar78)))) >> 0x20);
          pfVar17[2] = fVar98 - fVar78 * auVar30._8_4_;
          pfVar17[3] = fVar99 - fVar88 * auVar34._12_4_;
          *pfVar17 = fVar28 - fVar78 * fVar89;
          pfVar17[1] = fVar97 - fVar88 * (float)((ulong)auVar30._0_8_ >> 0x20);
          fVar28 = *(float *)((long)param_2 + 0xc);
          *(undefined2 *)(lVar13 + 0x5c) = local_90[0];
          *(float *)(lVar13 + 0x30) = fVar78 - fVar28;
        }
        if (cVar1 == '\0') {
          *(undefined4 *)(param_3 + lVar19 * 0x60 + 0x58) = 0xffffffff;
        }
        else {
          *(int *)(param_3 + lVar19 * 0x60 + 0x58) =
               ((int)auVar49._8_4_ << (ulong)(*(int *)(param_1 + 0x60) + 1U & 0x1f)) +
               (int)fVar47 * 2;
        }
      }
      else {
        lVar13 = param_3 + lVar19 * 0x60;
        *(undefined4 *)(lVar13 + 0x58) = 0xffffffff;
        *(undefined2 *)(lVar13 + 0x5c) = 0xffff;
        *(undefined8 *)(lVar13 + 0x18) = uVar60;
        *(undefined8 *)(lVar13 + 0x10) = uVar48;
        *(undefined4 *)(lVar13 + 0x30) = 0x7f7fffee;
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < (int)param_2[1]);
  }
  if (local_80 != 0) {
    FUN_032d5b34(local_80,&DAT_0390f40e);
  }
  return;
}


