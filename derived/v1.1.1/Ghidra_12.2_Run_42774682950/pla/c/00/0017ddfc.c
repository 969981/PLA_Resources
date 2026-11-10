/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0017ddfc; name: FUN_0017ddfc
 */


/* WARNING: Removing unreachable block (ram,0x0017e33c) */
/* WARNING: Removing unreachable block (ram,0x0017e344) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0017ddfc(long param_1,long param_2,undefined8 *param_3,long *param_4,long *param_5,long param_6,
            uint *param_7)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ushort uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  undefined *puVar25;
  undefined1 uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  long lVar30;
  undefined1 (*pauVar31) [16];
  ulong uVar32;
  undefined1 (*pauVar33) [16];
  byte bVar34;
  ulong uVar35;
  uint *puVar36;
  byte bVar37;
  uint uVar38;
  ulong uVar39;
  uint *puVar40;
  ulong uVar41;
  byte *pbVar42;
  float *pfVar43;
  uint uVar44;
  long lVar45;
  undefined4 uVar46;
  long lVar47;
  undefined *puVar48;
  long lVar49;
  ulong uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  float fVar64;
  float fVar66;
  undefined1 auVar57 [16];
  float fVar65;
  float fVar67;
  float fVar68;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  undefined8 uVar72;
  undefined1 auVar73 [12];
  undefined1 auVar74 [12];
  undefined1 auVar75 [12];
  float fVar83;
  float fVar84;
  float fVar86;
  float fVar87;
  float fVar89;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar85;
  float fVar88;
  float fVar90;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar91;
  float fVar95;
  undefined8 uVar92;
  float fVar96;
  int iVar97;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  int iVar98;
  int iVar99;
  float fVar100;
  undefined8 uVar101;
  undefined1 auVar102 [16];
  int iVar105;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined8 uVar106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  float fVar113;
  undefined1 auVar112 [16];
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar119;
  float fVar121;
  float fVar122;
  undefined1 auVar117 [16];
  float fVar120;
  undefined1 auVar118 [16];
  undefined8 uVar123;
  float fVar125;
  float fVar126;
  undefined1 auVar124 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined8 uVar130;
  undefined8 uVar131;
  undefined8 uVar132;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  float fVar135;
  float fVar136;
  undefined4 uVar137;
  float fVar141;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  float fVar144;
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar145 [16];
  float local_8b0;
  float fStack_8ac;
  float local_850;
  float fStack_84c;
  float fStack_848;
  float local_840;
  float fStack_83c;
  float fStack_838;
  undefined4 uStack_7f4;
  float local_7e0;
  float fStack_7dc;
  undefined8 local_7a0;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  long local_730;
  uint *puStack_728;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined4 local_6f0;
  float fStack_6ec;
  float fStack_6e8;
  float fStack_6e4;
  float local_6b0 [2];
  undefined8 uStack_6a8;
  undefined1 local_4b0 [16];
  undefined8 local_4a0;
  undefined8 uStack_498;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  long local_88;
  undefined1 auStack_80 [8];
  long local_78;
  uint local_70;
  
  local_88 = param_3[0xe];
  local_70 = (uint)(*(int *)(local_88 + 0x98) != 0);
  if (*(int *)(local_88 + 0x98) != 0) {
    FUN_032d5acc(auStack_80);
  }
  lVar30 = param_5[5];
  lVar49 = param_4[5];
  *param_7 = 0;
  *(undefined1 *)((long)param_7 + 0x92) = 0;
  *(undefined2 *)((long)param_7 + 0x95) = 0;
  puVar25 = PTR_DAT_043723b0;
  lVar45 = *param_4;
  lVar47 = *param_5;
  iVar99 = *(int *)(lVar30 + 0x40);
  auVar57 = *(undefined1 (*) [16])(param_3 + 4);
  auVar76 = *(undefined1 (*) [16])(param_3 + 6);
  puVar1 = (undefined8 *)0x0;
  if (iVar99 != 0) {
    puVar1 = (undefined8 *)((long)iVar99 + lVar30 + 0x40);
  }
  auVar102 = NEON_ext(auVar57,auVar57,8,1);
  auVar108 = *(undefined1 (*) [16])(param_3 + 8);
  fVar55 = *(float *)(param_3 + 10);
  fVar120 = *(float *)((long)param_3 + 0x54);
  fVar113 = *(float *)(param_3 + 0xb);
  auVar107 = NEON_ext(auVar76,auVar76,8,1);
  fVar71 = auVar57._0_4_;
  fVar90 = auVar76._0_4_;
  auVar127 = NEON_ext(auVar108,auVar108,8,1);
  fVar85 = auVar102._0_4_;
  fVar51 = auVar107._0_4_;
  fVar135 = auVar108._0_4_;
  fVar136 = auVar108._4_4_;
  fVar88 = auVar57._4_4_;
  fVar52 = auVar76._4_4_;
  fVar69 = (float)*(undefined8 *)((long)puVar1 + 0xc) - fVar55;
  fVar83 = (float)((ulong)*(undefined8 *)((long)puVar1 + 0xc) >> 0x20) - fVar120;
  fVar86 = *(float *)((long)puVar1 + 0x14) - fVar113;
  fVar53 = (float)*puVar1 - fVar55;
  fVar64 = (float)((ulong)*puVar1 >> 0x20) - fVar120;
  fVar66 = *(float *)(puVar1 + 1) - fVar113;
  fVar91 = (float)puVar1[3] - fVar55;
  fVar95 = (float)((ulong)puVar1[3] >> 0x20) - fVar120;
  fVar96 = *(float *)(puVar1 + 4) - fVar113;
  fVar144 = auVar127._4_4_;
  fVar141 = auVar127._0_4_;
  fVar114 = fVar85 * fVar66 + fVar71 * fVar53 + fVar88 * fVar64;
  fVar119 = fVar51 * fVar66 + fVar90 * fVar53 + fVar52 * fVar64;
  fVar121 = fVar141 * fVar66 + fVar135 * fVar53 + fVar136 * fVar64;
  fVar122 = fVar144 * fVar66 + fVar136 * fVar53 + fVar144 * fVar64;
  fVar70 = fVar85 * fVar86 + fVar71 * fVar69 + fVar88 * fVar83;
  fVar84 = fVar51 * fVar86 + fVar90 * fVar69 + fVar52 * fVar83;
  fVar87 = fVar141 * fVar86 + fVar135 * fVar69 + fVar136 * fVar83;
  fVar89 = fVar144 * fVar86 + fVar136 * fVar69 + fVar144 * fVar83;
  fVar64 = fVar85 * fVar96 + fVar71 * fVar91 + fVar88 * fVar95;
  fVar69 = fVar51 * fVar96 + fVar90 * fVar91 + fVar52 * fVar95;
  fVar86 = fVar141 * fVar96 + fVar135 * fVar91 + fVar136 * fVar95;
  fVar91 = fVar144 * fVar96 + fVar136 * fVar91 + fVar144 * fVar95;
  fVar95 = fVar70 - fVar114;
  fVar96 = fVar84 - fVar119;
  auVar128._0_8_ = CONCAT44(fVar96,fVar95);
  auVar128._8_4_ = fVar87 - fVar121;
  auVar128._12_4_ = fVar89 - fVar122;
  fVar53 = fVar64 - fVar70;
  fVar83 = fVar69 - fVar84;
  auVar127._0_8_ = CONCAT44(fVar83,fVar53);
  auVar127._8_4_ = fVar86 - fVar87;
  auVar127._12_4_ = fVar91 - fVar89;
  auVar76 = NEON_ext(auVar127,auVar127,4,1);
  auVar57 = NEON_ext(auVar128,auVar128,4,1);
  fStack_98 = fVar95 * auVar76._0_4_ - fVar53 * auVar57._0_4_;
  fVar66 = fVar96 * auVar76._4_4_ - fVar83 * auVar57._4_4_;
  auVar102._0_8_ = CONCAT44(fVar66,fStack_98);
  auVar102._8_4_ = auVar128._8_4_ * fVar53 - auVar127._8_4_ * fVar95;
  auVar102._12_4_ = auVar128._12_4_ * fVar83 - auVar127._12_4_ * fVar96;
  auVar107 = NEON_ext(auVar102,auVar102,4,1);
  local_a0 = auVar107._0_4_;
  fStack_9c = auVar107._4_4_;
  fVar53 = local_a0 * local_a0 + fStack_9c * fStack_9c + fStack_98 * fStack_98;
  fVar95 = local_a0 * local_a0 + fStack_9c * fStack_9c + fStack_98 * fStack_98;
  uVar92 = CONCAT44(fVar95,fVar53);
  uVar106 = NEON_frsqrte(uVar92,4);
  fVar83 = (float)uVar106;
  fVar96 = (float)((ulong)uVar106 >> 0x20);
  uVar106 = NEON_frsqrts(uVar92,CONCAT44(fVar96 * fVar96,fVar83 * fVar83),4);
  fVar83 = fVar83 * (float)uVar106;
  fVar96 = fVar96 * (float)((ulong)uVar106 >> 0x20);
  iVar99 = -(uint)(fVar53 <= 0.0);
  iVar105 = -(uint)(fVar95 <= 0.0);
  uVar92 = NEON_frsqrts(uVar92,CONCAT44(fVar96 * fVar96,fVar83 * fVar83),4);
  fVar83 = (float)uVar92 * fVar83;
  fVar96 = (float)((ulong)uVar92 >> 0x20) * fVar96;
  fVar53 = (float)CONCAT13((byte)((uint)fVar83 >> 0x18) & ~(byte)((uint)iVar99 >> 0x18),
                           CONCAT12((byte)((uint)fVar83 >> 0x10) & ~(byte)((uint)iVar99 >> 0x10),
                                    CONCAT11((byte)((uint)fVar83 >> 8) & ~(byte)((uint)iVar99 >> 8),
                                             SUB41(fVar83,0) & ~(byte)iVar99)));
  local_a0 = local_a0 * fVar53;
  fVar83 = (float)(CONCAT17((byte)((uint)fVar96 >> 0x18) & ~(byte)((uint)iVar105 >> 0x18),
                            CONCAT16((byte)((uint)fVar96 >> 0x10) & ~(byte)((uint)iVar105 >> 0x10),
                                     CONCAT15((byte)((uint)fVar96 >> 8) &
                                              ~(byte)((uint)iVar105 >> 8),
                                              CONCAT14(SUB41(fVar96,0) & ~(byte)iVar105,fVar53))))
                  >> 0x20);
  fStack_9c = fStack_9c * fVar83;
  fStack_98 = fStack_98 * fVar53;
  uVar72 = *(undefined8 *)((long)puVar1 + 0x24);
  auVar57._0_4_ = fVar114 * local_a0;
  auVar57._4_4_ = fVar119 * fStack_9c;
  auVar57._8_4_ = fVar121 * fStack_98;
  auVar57._12_4_ = fVar122 * fVar66 * fVar83;
  auVar76 = NEON_ext(auVar57,auVar57,8,1);
  fStack_94 = -(auVar57._0_4_ + auVar57._4_4_ + auVar76._0_4_);
  fVar53 = *(float *)((long)puVar1 + 0x2c);
  uVar92 = *(undefined8 *)(param_4[1] + 0x60);
  uVar106 = *(undefined8 *)(param_4[1] + 0x68);
  pauVar31 = (undefined1 (*) [16])param_4[6];
  uVar131 = *(undefined8 *)(param_5[1] + 0x60);
  uVar123 = *(undefined8 *)(param_5[1] + 0x68);
  auVar76 = *pauVar31;
  pauVar33 = pauVar31 + 1;
  uVar132 = *(undefined8 *)*pauVar33;
  auVar24 = *(undefined1 (*) [12])*pauVar33;
  auVar75 = *(undefined1 (*) [12])*pauVar33;
  uStack_7f4 = (undefined4)((ulong)*(undefined8 *)(pauVar31[1] + 8) >> 0x20);
  auVar108 = pauVar31[2];
  uVar56 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x10);
  fVar66 = (float)param_3[3] + (float)param_3[2];
  auVar57 = *(undefined1 (*) [16])(PTR_DAT_04372370 + 0x50);
  if (*(byte *)(param_6 + 9) < 3) {
    *(undefined1 *)(param_6 + 9) = 10;
    *(undefined8 *)(param_6 + 0x30) = 0;
    *(undefined8 *)(param_6 + 0x38) = 0;
    uVar44 = 0xffffffff;
    *(undefined2 *)(param_6 + 0x36) = 0x5f7f;
    *(undefined4 *)(param_6 + 0x18) = 0xa7f7f7f;
    *(undefined4 *)(param_6 + 0x1c) = 0xaaa00;
    *(undefined8 *)(param_6 + 0xd0) = 0;
    *(undefined8 *)(param_6 + 0xd8) = 0;
    *(undefined8 *)(param_6 + 0xc0) = 0;
    *(undefined8 *)(param_6 + 200) = 0;
    *(undefined8 *)(param_6 + 0xb0) = 0;
    *(undefined8 *)(param_6 + 0xb8) = 0;
    *(undefined8 *)(param_6 + 0xa0) = 0;
    *(undefined8 *)(param_6 + 0xa8) = 0;
    *(undefined8 *)(param_6 + 0x90) = 0;
    *(undefined8 *)(param_6 + 0x98) = 0;
    *(undefined1 *)(param_6 + 0x97) = 0xff;
    *(undefined8 *)(param_6 + 0x80) = 0;
    *(undefined8 *)(param_6 + 0x88) = 0;
    *(undefined8 *)(param_6 + 0x70) = 0;
    *(undefined8 *)(param_6 + 0x78) = 0;
    *(undefined8 *)(param_6 + 0x60) = 0;
    *(undefined8 *)(param_6 + 0x68) = 0;
    *(undefined8 *)(param_6 + 0x50) = 0;
    *(undefined8 *)(param_6 + 0x58) = 0;
    *(undefined8 *)(param_6 + 0x40) = 0;
    *(undefined8 *)(param_6 + 0x48) = 0;
    *(undefined8 *)(param_6 + 0x20) = 0;
    *(undefined8 *)(param_6 + 0x28) = 0;
    *(undefined1 *)(param_6 + 0x2a) = 0xff;
LAB_0017e11c:
    puVar48 = PTR_DAT_04372370;
    auVar134._0_4_ = -local_a0;
    auVar134._4_4_ = -fStack_9c;
    auVar134._8_4_ = -fStack_98;
    auVar134._12_4_ = -fStack_94;
    uStack_6a8 = auVar134._8_8_;
    local_6b0[0] = auVar134._0_4_;
    local_6b0[1] = auVar134._4_4_;
    (**(code **)(*(long *)puVar25 + (ulong)*(byte *)(lVar49 + 0x18) * 0x200 + 0x68))
              (lVar49,&local_a0,&local_6f0);
    (**(code **)(*(long *)puVar25 + (ulong)*(byte *)(lVar49 + 0x18) * 0x200 + 0x68))
              (lVar49,local_6b0,&local_730);
    fVar54 = (float)local_730;
    auVar139._0_4_ = fVar54 * local_a0;
    fVar65 = (float)((ulong)local_730 >> 0x20);
    auVar139._4_4_ = fVar65 * fStack_9c;
    fVar67 = SUB84(puStack_728,0);
    auVar139._8_4_ = fVar67 * fStack_98;
    fVar68 = (float)((ulong)puStack_728 >> 0x20);
    auVar139._12_4_ = fVar68 * fStack_94;
    auVar134 = NEON_ext(auVar139,auVar139,8,1);
    fVar95 = auVar134._0_4_ + fStack_94;
    auVar145._0_4_ = local_a0 * local_6f0;
    auVar145._4_4_ = fStack_9c * fStack_6ec;
    auVar145._8_4_ = fStack_98 * fStack_6e8;
    auVar145._12_4_ = fStack_94 * fStack_6e4;
    auVar134 = NEON_ext(auVar145,auVar145,8,1);
    fVar83 = auVar139._0_4_ + auVar139._4_4_ + fVar95;
    fVar95 = auVar139._0_4_ + auVar139._4_4_ + fVar95;
    local_7a0 = CONCAT44(fVar95,fVar83);
    fVar96 = auVar134._0_4_ + fStack_94;
    fVar100 = auVar145._0_4_ + auVar145._4_4_ + fVar96 +
              fVar83 * (float)*(undefined8 *)(puVar48 + 0x70);
    if ((fVar83 <= fVar66) && (0.0 <= fVar100)) {
      *(undefined2 *)(param_6 + 0xc) = 0;
      pfVar43 = (float *)param_4[6];
      uVar130 = NEON_fmin(local_7a0,auVar57._0_8_,4);
      fVar96 = *pfVar43;
      fVar100 = pfVar43[1];
      fVar125 = pfVar43[2];
      fVar126 = pfVar43[3];
      fVar10 = pfVar43[4];
      fVar11 = pfVar43[5];
      fVar12 = pfVar43[6];
      fVar13 = pfVar43[7];
      fVar14 = pfVar43[8];
      fVar15 = pfVar43[9];
      fVar16 = pfVar43[10];
      fVar17 = pfVar43[0xb];
      fVar115 = fVar83 - (float)param_3[1];
      fVar116 = fVar54 - local_a0 * fVar115;
      fVar95 = fVar65 - fStack_9c * (fVar95 - (float)((ulong)param_3[1] >> 0x20));
      fVar115 = fVar67 - fStack_98 * fVar115;
      auVar103._0_8_ =
           CONCAT44(pfVar43[0xd] +
                    pfVar43[0x11] + fVar15 * fVar115 + fVar100 * fVar116 + fVar11 * fVar95,
                    pfVar43[0xc] +
                    pfVar43[0x10] + fVar14 * fVar115 + fVar96 * fVar116 + fVar10 * fVar95);
      auVar103._8_4_ =
           pfVar43[0xe] + pfVar43[0x12] + fVar16 * fVar115 + fVar125 * fVar116 + fVar12 * fVar95;
      fVar95 = (0.001 - (float)uVar130) + (float)*param_3;
      fVar115 = (0.001 - (float)((ulong)uVar130 >> 0x20)) + (float)((ulong)*param_3 >> 0x20);
      auVar103._12_4_ = fVar83;
      *(long *)(param_7 + 0x22) = auVar103._8_8_;
      *(undefined8 *)(param_7 + 0x20) = auVar103._0_8_;
      auVar58._0_8_ = CONCAT44(fVar65 - fStack_9c * fVar115,fVar54 - local_a0 * fVar95);
      auVar58._8_4_ = fVar67 - fStack_98 * fVar95;
      auVar58._12_4_ = fVar68 - fStack_94 * fVar115;
      auVar73._0_8_ =
           CONCAT44(fVar15 * fStack_98 + fVar100 * local_a0 + fVar11 * fStack_9c,
                    fVar14 * fStack_98 + fVar96 * local_a0 + fVar10 * fStack_9c);
      auVar73._8_4_ = fVar16 * fStack_98 + fVar125 * local_a0 + fVar12 * fStack_9c;
      auVar77._12_4_ = fVar17 * fStack_98 + fVar126 * local_a0 + fVar13 * fStack_9c;
      auVar77._0_12_ = auVar73;
      uStack_498 = auVar58._8_8_;
      local_4a0 = auVar58._0_8_;
      if ((*(byte *)(lVar49 + 0x1a) >> 1 & 1) == 0) {
        uVar27 = 0;
        *(undefined2 *)(param_6 + 0x94) = 0x400;
      }
      else {
        iVar99 = *(int *)(lVar49 + 0x48);
        lVar30 = 0;
        if (iVar99 != 0) {
          lVar30 = (long)iVar99 + lVar49 + 0x48;
        }
        uVar27 = FUN_02fe2b50(lVar30,*(undefined4 *)(lVar49 + 0x4c),&local_4a0);
        local_6f0 = (float)((uint)local_6f0 & 0xffff0000);
        (**(code **)(*(long *)puVar25 + (ulong)*(byte *)(lVar49 + 0x18) * 0x200 + 0x80))
                  (lVar49,uVar27,local_6b0,&local_6f0);
        auVar22._8_8_ = uStack_6a8;
        auVar22._0_8_ = CONCAT44(local_6b0[1],local_6b0[0]);
        auVar57 = NEON_ext(auVar22,auVar22,8,1);
        auVar23._8_4_ = fStack_98;
        auVar23._0_8_ = CONCAT44(fStack_9c,local_a0);
        auVar23._12_4_ = fStack_94;
        auVar134 = NEON_ext(auVar23,auVar23,8,1);
        uVar101 = NEON_ext(CONCAT44(fStack_9c,local_a0),auVar134._0_8_,4,1);
        uVar130 = NEON_ext(CONCAT44(local_6b0[1],local_6b0[0]),auVar57._0_8_,4,1);
        auVar59._0_4_ = local_6b0[0] * (float)uVar101 - local_a0 * (float)uVar130;
        auVar59._4_4_ =
             local_6b0[1] * (float)((ulong)uVar101 >> 0x20) -
             fStack_9c * (float)((ulong)uVar130 >> 0x20);
        auVar59._8_4_ = (float)uStack_6a8 * local_a0 - fStack_98 * local_6b0[0];
        auVar59._12_4_ = (float)((ulong)uStack_6a8 >> 0x20) * fStack_9c - fStack_94 * local_6b0[1];
        auVar57 = NEON_ext(auVar59,auVar59,4,1);
        fVar95 = auVar57._0_4_ * auVar57._0_4_;
        fVar96 = auVar57._4_4_ * auVar57._4_4_;
        fVar83 = fVar95 + fVar96 + auVar59._0_4_ * auVar59._0_4_;
        uVar130 = CONCAT44(fVar95 + fVar96 + auVar59._0_4_ * auVar59._0_4_,fVar83);
        uVar101 = NEON_frsqrte(uVar130,4);
        fVar95 = (float)uVar101;
        fVar96 = (float)((ulong)uVar101 >> 0x20);
        uVar130 = NEON_frsqrts(uVar130,CONCAT44(fVar96 * fVar96,fVar95 * fVar95),4);
        iVar99 = -(uint)(fVar83 <= 0.0);
        fVar83 = fVar95 * (float)uVar130 * fVar83 * 41720.875;
        auVar18._8_8_ = auVar77._8_8_;
        auVar18._0_8_ = auVar73._0_8_;
        auVar73 = auVar18._0_12_;
        uVar29 = ((uint)local_6f0 & 0xffff) -
                 (int)(*(float *)(puVar48 + 0x150) +
                      (float)CONCAT13((byte)((uint)fVar83 >> 0x18) & ~(byte)((uint)iVar99 >> 0x18),
                                      CONCAT12((byte)((uint)fVar83 >> 0x10) &
                                               ~(byte)((uint)iVar99 >> 0x10),
                                               CONCAT11((byte)((uint)fVar83 >> 8) &
                                                        ~(byte)((uint)iVar99 >> 8),
                                                        SUB41(fVar83,0) & ~(byte)iVar99))));
        uVar9 = (ushort)local_6f0 >> 2;
        uVar28 = (uint)uVar9;
        if ((int)(uint)uVar9 <= (int)uVar29) {
          uVar28 = uVar29;
        }
        *(ushort *)(param_6 + 0x94) = (short)uVar28 + uVar9;
        *(uint *)(param_6 + 0x88) = uVar27 & 0xffff;
      }
      fVar83 = *(float *)(puVar48 + 0x344);
      fVar95 = *(float *)(puVar48 + 0x348);
      iVar99 = *(int *)(PTR_DAT_043723a8 + 4);
      iVar105 = *(int *)(PTR_DAT_043723a8 + 8);
      *(short *)(param_6 + 0x80) =
           (short)((uint)(*(int *)PTR_DAT_043723a8 +
                         (int)(auVar73._0_4_ * *(float *)(puVar48 + 0x340))) >> 0x10);
      *(short *)(param_6 + 0x82) = (short)((uint)(iVar99 + (int)(auVar73._4_4_ * fVar83)) >> 0x10);
      *(short *)(param_6 + 0x84) = (short)((uint)(iVar105 + (int)(auVar73._8_4_ * fVar95)) >> 0x10);
      goto LAB_0017e474;
    }
    pfVar43 = (float *)param_4[6];
    uVar92 = NEON_fmax(CONCAT44(fVar95 - (float)((ulong)param_3[2] >> 0x20),
                                fVar83 - (float)param_3[2]),
                       CONCAT44(-(auVar145._0_4_ + auVar145._4_4_ + fVar96 +
                                 fVar95 * (float)((ulong)*(undefined8 *)(puVar48 + 0x70) >> 0x20)),
                                -fVar100),4);
    auVar108._0_8_ =
         CONCAT26((short)(int)(*(float *)(PTR_DAT_043723b8 + 0xc) *
                              (pfVar43[0xb] * fStack_98 +
                              pfVar43[3] * local_a0 + pfVar43[7] * fStack_9c)) + 0x7f,
                  CONCAT24((short)(int)(*(float *)(PTR_DAT_043723b8 + 8) *
                                       (pfVar43[10] * fStack_98 +
                                       pfVar43[2] * local_a0 + pfVar43[6] * fStack_9c)) + 0x7f,
                           CONCAT22((short)(int)(*(float *)(PTR_DAT_043723b8 + 4) *
                                                (pfVar43[9] * fStack_98 +
                                                pfVar43[1] * local_a0 + pfVar43[5] * fStack_9c)) +
                                    0x7f,(short)(int)(*(float *)PTR_DAT_043723b8 *
                                                     (pfVar43[8] * fStack_98 +
                                                     *pfVar43 * local_a0 + pfVar43[4] * fStack_9c))
                                         + 0x7f)));
    auVar108._8_8_ = auVar108._0_8_;
    uVar106 = NEON_sqxtun(auVar108._0_8_,auVar108,2);
    *(char *)(param_6 + 0x18) = (char)uVar106;
    *(char *)(param_6 + 0x1a) = (char)((ulong)uVar106 >> 0x10);
    *(char *)(param_6 + 0x19) = (char)((ulong)uVar106 >> 8);
    uVar106 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x48);
    auVar76._0_8_ =
         CONCAT44((int)((float)((ulong)uVar92 >> 0x20) * (float)((ulong)uVar106 >> 0x20)),
                  (int)((float)uVar92 * (float)uVar106));
    auVar76._8_8_ = auVar76._0_8_;
    uVar92 = NEON_sqxtun(auVar76._0_8_,auVar76,4);
    *(short *)(param_6 + 0xc) = (short)uVar92;
    iVar99 = *(int *)(param_6 + 0x1c);
    local_4a0 = local_730;
    uStack_498 = puStack_728;
joined_r0x0017e1ec:
    uVar46 = 0;
    uVar137 = 0;
  }
  else {
    uVar44 = *(uint *)(param_6 + 0x88);
    (**(code **)(*(long *)PTR_DAT_043723b0 + (ulong)*(byte *)(lVar49 + 0x18) * 0x200 + 0x80))
              (lVar49,uVar44,&local_4a0,local_6b0);
    iVar99 = ((uint)*(ushort *)(param_6 + 0x94) - (uint)*(ushort *)(lVar45 + 0x5a)) -
             (uint)*(ushort *)(lVar47 + 0x5a);
    if (iVar99 < 1) goto LAB_0017e11c;
    *(short *)(param_6 + 0x94) = (short)iVar99;
    puVar48 = PTR_DAT_04372370;
    uVar27 = uVar44;
    local_7a0 = auVar57._0_8_;
LAB_0017e474:
    uVar28 = (**(code **)(*(long *)puVar25 + (ulong)*(byte *)(lVar49 + 0x18) * 0x200 + 0x88))
                       (lVar49,uVar27,local_4b0,&local_4a0);
    fVar54 = fStack_94;
    fVar96 = fStack_98;
    fVar95 = fStack_9c;
    fVar83 = local_a0;
    auVar61 = *(undefined1 (*) [16])(puVar48 + 0x240);
    local_6f0 = -NAN;
    uVar39 = auVar61._0_8_;
    if ((int)uVar28 < 1) {
      uVar32 = 0;
      uVar29 = 0;
      uVar38 = 0xffffffff;
      auVar107._0_8_ = auVar61._0_8_;
      if (SUB164(*(undefined1 (*) [16])(puVar48 + 0x260),0) <= auVar61._0_4_) goto LAB_0017e788;
    }
    else {
      local_8b0 = (float)uVar72;
      fStack_8ac = (float)((ulong)uVar72 >> 0x20);
      uVar35 = 0;
      auVar21._8_8_ = auVar127._8_8_;
      auVar21._0_8_ = auVar127._0_8_;
      uVar29 = 0;
      uVar32 = 0;
      uVar41 = 1;
      auVar93._8_8_ = _UNK_03889f28;
      auVar93._0_8_ = _DAT_03889f20;
      auVar19._8_8_ = auVar102._0_8_;
      auVar19._0_8_ = auVar107._0_8_;
      auVar20._8_8_ = auVar128._8_8_;
      auVar20._0_8_ = auVar128._0_8_;
      auVar107 = a64_TBL(ZEXT816(0),auVar21,auVar93);
      uVar38 = 0xffffffff;
      auVar104._8_8_ = _UNK_03889f38;
      auVar104._0_8_ = _DAT_03889f30;
      auVar57 = a64_TBL(ZEXT816(0),auVar20,auVar104);
      auVar102 = a64_TBL(ZEXT816(0),auVar19,auVar104);
      auVar127 = a64_TBL(ZEXT816(0),auVar19,auVar93);
      auVar128 = a64_TBL(ZEXT816(0),auVar20,auVar93);
      fVar68 = auVar127._0_4_;
      fVar100 = auVar127._4_4_;
      fVar125 = auVar127._8_4_;
      fVar126 = auVar127._12_4_;
      local_8b0 = local_8b0 - fVar55;
      fStack_8ac = fStack_8ac - fVar120;
      fVar53 = fVar53 - fVar113;
      fVar55 = auVar102._0_4_;
      fVar113 = auVar102._4_4_;
      fVar65 = auVar102._8_4_;
      fVar67 = auVar102._12_4_;
      auVar129._0_4_ = fVar68 * auVar57._0_4_ - fVar55 * auVar128._0_4_;
      auVar129._4_4_ = fVar100 * auVar57._4_4_ - fVar113 * auVar128._4_4_;
      auVar129._8_4_ = fVar125 * auVar57._8_4_ - fVar65 * auVar128._8_4_;
      auVar129._12_4_ = fVar126 * auVar57._12_4_ - fVar67 * auVar128._12_4_;
      auVar57 = a64_TBL(ZEXT816(0),auVar21,auVar104);
      fVar71 = fVar85 * fVar53 + fVar71 * local_8b0 + fVar88 * fStack_8ac;
      fVar85 = fVar51 * fVar53 + fVar90 * local_8b0 + fVar52 * fStack_8ac;
      fVar88 = fVar141 * fVar53 + fVar135 * local_8b0 + fVar136 * fStack_8ac;
      fVar90 = fVar144 * fVar53 + fVar136 * local_8b0 + fVar144 * fStack_8ac;
      auVar142._0_4_ = fVar71 - fVar64;
      auVar142._4_4_ = fVar85 - fVar69;
      auVar142._8_4_ = fVar88 - fVar86;
      auVar142._12_4_ = fVar90 - fVar91;
      auVar112._0_4_ = fVar68 * auVar57._0_4_ - fVar55 * auVar107._0_4_;
      auVar112._4_4_ = fVar100 * auVar57._4_4_ - fVar113 * auVar107._4_4_;
      auVar112._8_4_ = fVar125 * auVar57._8_4_ - fVar65 * auVar107._8_4_;
      auVar112._12_4_ = fVar126 * auVar57._12_4_ - fVar67 * auVar107._12_4_;
      auVar133._0_4_ = fVar114 * auVar129._0_4_;
      auVar133._4_4_ = fVar119 * auVar129._4_4_;
      auVar133._8_4_ = fVar121 * auVar129._8_4_;
      auVar133._12_4_ = fVar122 * auVar129._12_4_;
      auVar127 = NEON_ext(auVar129,auVar129,8,1);
      auVar138._0_4_ = fVar70 * auVar112._0_4_;
      auVar138._4_4_ = fVar84 * auVar112._4_4_;
      auVar138._8_4_ = fVar87 * auVar112._8_4_;
      auVar138._12_4_ = fVar89 * auVar112._12_4_;
      auVar107 = NEON_ext(auVar112,auVar112,8,1);
      auVar145 = a64_TBL(ZEXT816(0),auVar142,auVar104);
      auVar6._4_4_ = fVar119 - fVar85;
      auVar6._0_4_ = fVar114 - fVar71;
      auVar6._8_4_ = fVar121 - fVar88;
      auVar6._12_4_ = fVar122 - fVar90;
      auVar102 = a64_TBL(ZEXT816(0),auVar6,auVar104);
      auVar128 = a64_TBL(ZEXT816(0),auVar142,auVar93);
      auVar7._4_4_ = fVar119 - fVar85;
      auVar7._0_4_ = fVar114 - fVar71;
      auVar7._8_4_ = fVar121 - fVar88;
      auVar7._12_4_ = fVar122 - fVar90;
      auVar57 = a64_TBL(ZEXT816(0),auVar7,auVar93);
      fVar53 = auVar127._0_4_;
      fVar120 = auVar107._0_4_;
      auVar134 = NEON_ext(auVar133,auVar133,8,1);
      auVar139 = NEON_ext(auVar138,auVar138,8,1);
      auVar109._0_4_ = fVar68 * auVar145._0_4_ - fVar55 * auVar128._0_4_;
      auVar109._4_4_ = fVar100 * auVar145._4_4_ - fVar113 * auVar128._4_4_;
      auVar109._8_4_ = fVar125 * auVar145._8_4_ - fVar65 * auVar128._8_4_;
      auVar109._12_4_ = fVar126 * auVar145._12_4_ - fVar67 * auVar128._12_4_;
      auVar94._0_4_ = fVar68 * auVar102._0_4_ - fVar55 * auVar57._0_4_;
      auVar94._4_4_ = fVar100 * auVar102._4_4_ - fVar113 * auVar57._4_4_;
      auVar94._8_4_ = fVar125 * auVar102._8_4_ - fVar65 * auVar57._8_4_;
      auVar94._12_4_ = fVar126 * auVar102._12_4_ - fVar67 * auVar57._12_4_;
      local_850 = (float)uVar131;
      fStack_84c = (float)((ulong)uVar131 >> 0x20);
      fStack_848 = (float)uVar123;
      local_840 = (float)uVar92;
      fStack_83c = (float)((ulong)uVar92 >> 0x20);
      fStack_838 = (float)uVar106;
      local_840 = local_840 - local_850;
      fStack_83c = fStack_83c - fStack_84c;
      fStack_838 = fStack_838 - fStack_848;
      auVar102 = NEON_ext(auVar109,auVar109,8,1);
      auVar57 = NEON_ext(auVar94,auVar94,8,1);
      auVar110._0_4_ = fVar64 * auVar109._0_4_;
      auVar110._4_4_ = fVar69 * auVar109._4_4_;
      auVar110._8_4_ = fVar86 * auVar109._8_4_;
      auVar110._12_4_ = fVar91 * auVar109._12_4_;
      fVar55 = auVar102._0_4_;
      fVar113 = auVar57._0_4_;
      auVar78._0_4_ = fVar71 * auVar94._0_4_;
      auVar78._4_4_ = fVar85 * auVar94._4_4_;
      auVar78._8_4_ = fVar88 * auVar94._8_4_;
      auVar78._12_4_ = fVar90 * auVar94._12_4_;
      auVar102 = NEON_ext(auVar78,auVar78,8,1);
      auVar127 = NEON_ext(auVar110,auVar110,8,1);
      auVar79._0_4_ =
           fVar53 * fVar53 + auVar129._0_4_ * auVar129._0_4_ + auVar129._4_4_ * auVar129._4_4_;
      auVar79._4_4_ =
           fVar120 * fVar120 + auVar112._0_4_ * auVar112._0_4_ + auVar112._4_4_ * auVar112._4_4_;
      auVar79._8_4_ =
           fVar55 * fVar55 + auVar109._0_4_ * auVar109._0_4_ + auVar109._4_4_ * auVar109._4_4_;
      auVar79._12_4_ =
           fVar113 * fVar113 + auVar94._0_4_ * auVar94._0_4_ + auVar94._4_4_ * auVar94._4_4_;
      auVar57 = NEON_frsqrte(auVar79,4);
      iVar99 = -(uint)(auVar79._0_4_ <= 0.0);
      iVar105 = -(uint)(auVar79._4_4_ <= 0.0);
      iVar97 = -(uint)(auVar79._8_4_ <= 0.0);
      iVar98 = -(uint)(auVar79._12_4_ <= 0.0);
      fVar71 = auVar57._0_4_;
      auVar111._0_4_ = fVar71 * fVar71;
      fVar85 = auVar57._4_4_;
      auVar111._4_4_ = fVar85 * fVar85;
      fVar88 = auVar57._8_4_;
      auVar111._8_4_ = fVar88 * fVar88;
      fVar90 = auVar57._12_4_;
      auVar111._12_4_ = fVar90 * fVar90;
      auVar57 = NEON_frsqrts(auVar79,auVar111,4);
      fVar71 = fVar71 * auVar57._0_4_;
      fVar85 = fVar85 * auVar57._4_4_;
      fVar88 = fVar88 * auVar57._8_4_;
      fVar90 = fVar90 * auVar57._12_4_;
      fVar71 = (float)CONCAT13((byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar99 >> 0x18),
                               CONCAT12((byte)((uint)fVar71 >> 0x10) & ~(byte)((uint)iVar99 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar71 >> 8) &
                                                  ~(byte)((uint)iVar99 >> 8),
                                                  SUB41(fVar71,0) & ~(byte)iVar99)));
      auVar74._0_8_ =
           CONCAT17((byte)((uint)fVar85 >> 0x18) & ~(byte)((uint)iVar105 >> 0x18),
                    CONCAT16((byte)((uint)fVar85 >> 0x10) & ~(byte)((uint)iVar105 >> 0x10),
                             CONCAT15((byte)((uint)fVar85 >> 8) & ~(byte)((uint)iVar105 >> 8),
                                      CONCAT14(SUB41(fVar85,0) & ~(byte)iVar105,fVar71))));
      auVar74[8] = SUB41(fVar88,0) & ~(byte)iVar97;
      auVar74[9] = (byte)((uint)fVar88 >> 8) & ~(byte)((uint)iVar97 >> 8);
      auVar74[10] = (byte)((uint)fVar88 >> 0x10) & ~(byte)((uint)iVar97 >> 0x10);
      auVar74[0xb] = (byte)((uint)fVar88 >> 0x18) & ~(byte)((uint)iVar97 >> 0x18);
      auVar80[0xc] = SUB41(fVar90,0) & ~(byte)iVar98;
      auVar80._0_12_ = auVar74;
      auVar80[0xd] = (byte)((uint)fVar90 >> 8) & ~(byte)((uint)iVar98 >> 8);
      auVar80[0xe] = (byte)((uint)fVar90 >> 0x10) & ~(byte)((uint)iVar98 >> 0x10);
      auVar80[0xf] = (byte)((uint)fVar90 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18);
      fVar88 = (float)((ulong)auVar74._0_8_ >> 0x20);
      fVar90 = auVar74._8_4_;
      fVar51 = auVar80._12_4_;
      auVar107 = NEON_ext(auVar76,auVar76,8,1);
      auVar4._12_4_ = uStack_7f4;
      auVar4._0_12_ = auVar75;
      auVar5._12_4_ = uStack_7f4;
      auVar5._0_12_ = auVar24;
      auVar128 = NEON_ext(auVar4,auVar5,8,1);
      auVar57 = NEON_ext(auVar108,auVar108,8,1);
      uVar92 = *(undefined8 *)(puVar48 + 0x170);
      local_7e0 = (float)uVar56;
      fStack_7dc = (float)((ulong)uVar56 >> 0x20);
      fVar85 = local_7e0 *
               (auVar107._0_4_ * fStack_838 + auVar76._0_4_ * local_840 + auVar76._4_4_ * fStack_83c
               );
      fStack_7dc = fStack_7dc *
                   (auVar128._0_4_ * fStack_838 +
                   (float)uVar132 * local_840 + (float)((ulong)uVar132 >> 0x20) * fStack_83c);
      local_7e0 = local_7e0 *
                  (auVar57._0_4_ * fStack_838 +
                  auVar108._0_4_ * local_840 + auVar108._4_4_ * fStack_83c);
      auVar57 = *(undefined1 (*) [16])(puVar48 + 0x260);
      auVar107 = auVar61;
      do {
        while( true ) {
          lVar30 = uVar35 * 0x10;
          fVar52 = *(float *)(local_4b0 + lVar30 + 0x10);
          fVar64 = *(float *)(local_4b0 + lVar30 + 0x14);
          fVar69 = *(float *)(&uStack_498 + uVar35 * 2);
          auVar140._0_4_ = fVar52 * fVar83;
          auVar140._4_4_ = fVar64 * fVar95;
          auVar140._8_4_ = fVar69 * fVar96;
          auVar140._12_4_ = *(float *)((long)&uStack_498 + lVar30 + 4) * fVar54;
          auVar76 = NEON_ext(auVar140,auVar140,8,1);
          fVar91 = auVar76._0_4_ + fVar54;
          fVar86 = auVar140._0_4_ + auVar140._4_4_ + fVar91;
          fVar91 = auVar140._0_4_ + auVar140._4_4_ + fVar91;
          uVar50 = CONCAT44(fVar91,fVar86);
          auVar143._0_4_ =
               (fVar53 * fVar71 * fVar69 +
               auVar129._0_4_ * fVar71 * fVar52 + auVar129._4_4_ * fVar71 * fVar64) -
               (auVar134._0_4_ + auVar133._0_4_ + auVar133._4_4_) * fVar71;
          auVar143._4_4_ =
               (fVar120 * fVar88 * fVar69 +
               auVar112._0_4_ * fVar88 * fVar52 + auVar112._4_4_ * fVar88 * fVar64) -
               (auVar139._0_4_ + auVar138._0_4_ + auVar138._4_4_) * fVar88;
          auVar143._8_4_ =
               (fVar55 * fVar90 * fVar69 +
               auVar109._0_4_ * fVar90 * fVar52 + auVar109._4_4_ * fVar90 * fVar64) -
               (auVar127._0_4_ + auVar110._0_4_ + auVar110._4_4_) * fVar90;
          auVar143._12_4_ =
               (fVar113 * fVar51 * fVar69 +
               auVar94._0_4_ * fVar51 * fVar52 + auVar94._4_4_ * fVar51 * fVar64) -
               (auVar102._0_4_ + auVar78._0_4_ + auVar78._4_4_) * fVar51;
          fVar52 = auVar57._0_4_;
          fVar64 = ABS(fVar86) * (float)uVar92 + fVar52;
          fVar69 = ABS(fVar91) * (float)((ulong)uVar92 >> 0x20) + auVar57._4_4_;
          auVar8._4_4_ = fVar120 * fVar88 * local_7e0 +
                         auVar112._0_4_ * fVar88 * fVar85 + auVar112._4_4_ * fVar88 * fStack_7dc +
                         auVar143._4_4_;
          auVar8._0_4_ = fVar53 * fVar71 * local_7e0 +
                         auVar129._0_4_ * fVar71 * fVar85 + auVar129._4_4_ * fVar71 * fStack_7dc +
                         auVar143._0_4_;
          auVar8._8_4_ = fVar55 * fVar90 * local_7e0 +
                         auVar109._0_4_ * fVar90 * fVar85 + auVar109._4_4_ * fVar90 * fStack_7dc +
                         auVar143._8_4_;
          auVar8._12_4_ =
               fVar113 * fVar51 * local_7e0 +
               auVar94._0_4_ * fVar51 * fVar85 + auVar94._4_4_ * fVar51 * fStack_7dc +
               auVar143._12_4_;
          auVar76 = NEON_fmin(auVar143,auVar8,4);
          *(ulong *)(local_6b0 + uVar35 * 2) = uVar50;
          if (fVar69 <= auVar76._12_4_ ||
              (fVar64 <= auVar76._8_4_ || (fVar69 <= auVar76._4_4_ || fVar64 <= auVar76._0_4_)))
          break;
          *(char *)((long)&local_6f0 + (long)(int)uVar29) = (char)uVar35;
          if (fVar86 < (float)uVar39) {
            uVar38 = uVar29;
            uVar39 = uVar50;
          }
          uVar32 = uVar41 | uVar32;
          uVar29 = uVar29 + 1;
          uVar35 = uVar35 + 1;
          uVar41 = uVar41 << 1;
          if (uVar28 == uVar35) goto LAB_0017e778;
        }
        uVar137 = NEON_fmaxnmv(auVar76,4);
        auVar107._0_8_ = NEON_fmin(auVar107._0_8_,CONCAT44(uVar137,uVar137),4);
        uVar35 = uVar35 + 1;
        uVar41 = uVar41 << 1;
      } while (uVar28 != uVar35);
LAB_0017e778:
      if (fVar52 <= (float)uVar39) {
LAB_0017e788:
        fVar53 = (float)(auVar107._0_8_ >> 0x20);
        if ((int)uVar29 < 5) {
          bVar34 = *(byte *)((long)&local_6f0 + (long)(int)uVar38);
          *(undefined1 *)(param_6 + 0x96) = 0x33;
          if (uVar29 == 4) goto LAB_0017ea3c;
          *(undefined1 *)(param_6 + 0x97) = 0xff;
          if (uVar29 != 0) goto LAB_0017ea44;
          fVar55 = *(float *)(*param_4 + 0x3c) + *(float *)(*param_5 + 0x3c);
          uVar92 = NEON_fmax(*(undefined8 *)(*(long *)(param_2 + 8) + 0x58),CONCAT44(fVar55,fVar55),
                             4);
          uVar106 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x48);
          fVar55 = ((float)auVar107._0_8_ + (float)uVar92) * (float)uVar106;
          fVar53 = (fVar53 + (float)((ulong)uVar92 >> 0x20)) * (float)((ulong)uVar106 >> 0x20);
        }
        else {
          bVar3 = *(byte *)((long)&local_6f0 + (long)(int)uVar38);
          uVar35 = (ulong)bVar3;
          bVar34 = *(byte *)(param_6 + 0x97);
          uVar92 = *(undefined8 *)(local_6b0 + uVar35 * 2);
          uVar106 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x60);
          fVar55 = (float)uVar92;
          fVar120 = (float)uVar106;
          if ((((ulong)bVar34 == 0xff) ||
              (uVar28 = *(uint *)(param_6 + 0x90),
              uVar41 = 1L << ((ulong)(uVar28 >> 0x18) & 0x3f) | 1L << ((ulong)uVar28 & 0x3f) |
                       1L << ((ulong)(uVar28 >> 8) & 0x3f) | 1L << ((ulong)(uVar28 >> 0x10) & 0x3f),
              (uVar41 & uVar32) != uVar41)) ||
             (fVar55 + fVar120 < (float)*(undefined8 *)(local_6b0 + (ulong)bVar34 * 2))) {
            uVar26 = (undefined1)local_6f0;
            local_6f0 = (float)CONCAT31(local_6f0._1_3_,bVar3);
            *(undefined1 *)((long)&local_6f0 + (long)(int)uVar38) = uVar26;
            lVar30 = uVar35 * 0x10;
            fVar113 = *(float *)(local_4b0 + lVar30 + 0x10);
            fVar71 = *(float *)(local_4b0 + lVar30 + 0x14);
            fVar85 = *(float *)(&uStack_498 + uVar35 * 2);
            fVar88 = *(float *)((long)&uStack_498 + lVar30 + 4);
            uVar41 = *(ulong *)(PTR_DAT_04372370 + 0x290);
            iVar99 = -1;
            uVar35 = 1;
            uVar32 = uVar41;
            do {
              lVar30 = (ulong)*(byte *)((long)&local_6f0 + uVar35) * 0x10;
              fVar90 = (*(float *)(local_4b0 + lVar30 + 0x10) - fVar113) *
                       (*(float *)(local_4b0 + lVar30 + 0x10) - fVar113) +
                       (*(float *)(local_4b0 + lVar30 + 0x14) - fVar71) *
                       (*(float *)(local_4b0 + lVar30 + 0x14) - fVar71) +
                       (*(float *)(&uStack_498 + (ulong)*(byte *)((long)&local_6f0 + uVar35) * 2) -
                       fVar85) * (*(float *)(&uStack_498 +
                                            (ulong)*(byte *)((long)&local_6f0 + uVar35) * 2) -
                                 fVar85);
              if ((float)uVar32 < fVar90) {
                iVar99 = (int)uVar35;
                uVar32 = (ulong)(uint)fVar90;
              }
              uVar35 = uVar35 + 1;
            } while (uVar29 != uVar35);
            uVar26 = local_6f0._1_1_;
            local_6f0._0_2_ =
                 CONCAT11(*(undefined1 *)((long)&local_6f0 + (long)iVar99),(undefined1)local_6f0);
            *(undefined1 *)((long)&local_6f0 + (long)iVar99) = uVar26;
            if ((int)uVar29 < 3) {
              bVar37 = 0xff;
              bVar34 = 0xff;
            }
            else {
              lVar30 = (ulong)uVar29 - 2;
              lVar45 = (ulong)local_6f0._1_1_ * 0x10;
              auVar57 = NEON_ext(local_4b0,local_4b0,8,1);
              uVar131 = NEON_ext(local_4b0._0_8_,auVar57._0_8_,4,1);
              auVar117._0_4_ = *(float *)(local_4b0 + lVar45 + 0x10) - fVar113;
              auVar117._4_4_ = *(float *)(local_4b0 + lVar45 + 0x14) - fVar71;
              auVar117._8_4_ = *(float *)(&uStack_498 + (ulong)local_6f0._1_1_ * 2) - fVar85;
              auVar117._12_4_ = *(float *)((long)&uStack_498 + lVar45 + 4) - fVar88;
              auVar57 = NEON_ext(auVar117,auVar117,4,1);
              bVar34 = 0xff;
              bVar37 = 0xff;
              auVar124._0_4_ = auVar117._0_4_ * (float)uVar131 - local_4b0._0_4_ * auVar57._0_4_;
              auVar124._4_4_ =
                   auVar117._4_4_ * (float)((ulong)uVar131 >> 0x20) -
                   local_4b0._4_4_ * auVar57._4_4_;
              auVar124._8_4_ = auVar117._8_4_ * local_4b0._0_4_ - local_4b0._8_4_ * auVar117._0_4_;
              auVar124._12_4_ =
                   auVar117._12_4_ * local_4b0._4_4_ - local_4b0._12_4_ * auVar117._4_4_;
              auVar57 = NEON_ext(auVar124,auVar124,4,1);
              uVar32 = auVar61._0_8_;
              pbVar42 = (byte *)((ulong)&local_6f0 | 2);
              do {
                bVar2 = *pbVar42;
                uVar35 = (ulong)bVar2;
                uVar123 = CONCAT44((float)((ulong)uVar106 >> 0x20) +
                                   ((float)((ulong)*(undefined8 *)(local_6b0 + uVar35 * 2) >> 0x20)
                                   - (float)((ulong)uVar92 >> 0x20)),
                                   fVar120 + ((float)*(undefined8 *)(local_6b0 + uVar35 * 2) -
                                             fVar55));
                uVar131 = NEON_frecpe(uVar123,4);
                uVar132 = NEON_frecps(uVar123,uVar131,4);
                fVar88 = (float)uVar131 * (float)uVar132;
                uVar131 = NEON_frecps(uVar123,CONCAT44((float)((ulong)uVar131 >> 0x20) *
                                                       (float)((ulong)uVar132 >> 0x20),fVar88),4);
                fVar88 = (auVar57._0_4_ * (*(float *)(local_4b0 + uVar35 * 0x10 + 0x10) - fVar113) +
                          auVar57._4_4_ * (*(float *)(local_4b0 + uVar35 * 0x10 + 0x14) - fVar71) +
                         auVar124._0_4_ * (*(float *)(&uStack_498 + uVar35 * 2) - fVar85)) *
                         fVar88 * (float)uVar131;
                if (fVar88 < (float)uVar32) {
                  uVar32 = (ulong)(uint)fVar88;
                  bVar37 = bVar2;
                }
                if ((float)uVar41 < fVar88) {
                  uVar41 = (ulong)(uint)fVar88;
                  bVar34 = bVar2;
                }
                lVar30 = lVar30 + -1;
                pbVar42 = pbVar42 + 1;
              } while (lVar30 != 0);
            }
            local_6f0 = (float)CONCAT13(bVar34,CONCAT12(bVar37,(ushort)local_6f0));
            bVar34 = bVar3;
          }
          else {
            local_6f0 = (float)(uVar28 & 0xff000000 | (uVar28 >> 0x10 & 0xff) << 0x10 |
                               uVar28 & 0xff | (uVar28 >> 8 & 0xff) << 8);
          }
          *(undefined1 *)(param_6 + 0x96) = 5;
LAB_0017ea3c:
          uVar29 = 4;
          *(byte *)(param_6 + 0x97) = bVar34;
LAB_0017ea44:
          if ((float)uVar39 <= fVar66) {
            fVar53 = *(float *)(param_6 + 0x90);
            *param_7 = uVar29;
            if ((int)uVar29 < 1) {
              uVar92 = param_3[2];
              auVar75 = SUB1612(ZEXT816(0),0);
            }
            else {
              auVar57 = ZEXT816(0);
              uVar106 = param_3[1];
              uVar92 = param_3[2];
              pfVar43 = (float *)param_4[6];
              uVar39 = 0;
              do {
                auVar107._0_8_ = (ulong)*(byte *)((long)&local_6f0 + uVar39);
                fVar55 = (float)*(undefined8 *)(local_6b0 + auVar107._0_8_ * 2);
                fVar71 = fVar55 - (float)uVar106;
                fVar120 = (float)((ulong)*(undefined8 *)(local_6b0 + auVar107._0_8_ * 2) >> 0x20);
                fVar55 = fVar55 - (float)uVar92;
                fVar113 = fVar120 - (float)((ulong)uVar92 >> 0x20);
                fVar85 = *(float *)(local_4b0 + auVar107._0_8_ * 0x10 + 0x10) - local_a0 * fVar71;
                fVar120 = *(float *)(local_4b0 + auVar107._0_8_ * 0x10 + 0x14) -
                          fStack_9c * (fVar120 - (float)((ulong)uVar106 >> 0x20));
                fVar71 = *(float *)(&uStack_498 + auVar107._0_8_ * 2) - fStack_98 * fVar71;
                auVar81._0_8_ =
                     CONCAT44(-(uint)(fVar113 < auVar61._4_4_),-(uint)(fVar55 < auVar61._0_4_));
                auVar118._0_8_ =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar43 + 0xc) >> 0x20) +
                              pfVar43[0x11] +
                              pfVar43[9] * fVar71 + pfVar43[1] * fVar85 + pfVar43[5] * fVar120,
                              (float)*(undefined8 *)(pfVar43 + 0xc) +
                              pfVar43[0x10] +
                              pfVar43[8] * fVar71 + *pfVar43 * fVar85 + pfVar43[4] * fVar120);
                auVar118._8_4_ =
                     (float)*(undefined8 *)(pfVar43 + 0xe) +
                     pfVar43[0x12] +
                     pfVar43[10] * fVar71 + pfVar43[2] * fVar85 + pfVar43[6] * fVar120;
                auVar118._12_4_ =
                     (float)((ulong)*(undefined8 *)(pfVar43 + 0xe) >> 0x20) +
                     pfVar43[0x13] +
                     pfVar43[0xb] * fVar71 + pfVar43[3] * fVar85 + pfVar43[7] * fVar120;
                auVar61._0_8_ = NEON_fmin(CONCAT44(fVar113,fVar55),auVar61._0_8_,4);
                auVar81._8_8_ = auVar81._0_8_;
                *(long *)(param_7 + uVar39 * 4 + 0x10 + 2) = auVar118._8_8_;
                *(undefined8 *)(param_7 + uVar39 * 4 + 0x10) = auVar118._0_8_;
                auVar107._0_8_ = uVar39 + 1;
                param_7[uVar39 + 0xc] = (uint)fVar55;
                auVar57 = auVar57 ^ (auVar57 ^ auVar118) & auVar81;
                auVar75 = auVar57._0_12_;
                uVar39 = auVar107._0_8_;
              } while (uVar29 != auVar107._0_8_);
            }
            param_7[1] = (uint)(float)auVar61._0_8_;
            auVar82._12_4_ = (float)auVar61._0_8_ + (float)uVar92;
            auVar82._0_12_ = auVar75;
            uVar28 = uVar29 + 3 & 0xfffffffc;
            *(long *)(param_7 + 0x22) = auVar82._8_8_;
            *(long *)(param_7 + 0x20) = auVar75._0_8_;
            if ((int)uVar29 < (int)uVar28) {
              uVar39 = (ulong)(int)uVar29;
              auVar61._0_8_ = ~uVar39;
              if ((uVar39 & 1) != 0) {
                puVar36 = param_7 + 0x10;
                uVar92 = *(undefined8 *)puVar36;
                *(undefined8 *)(puVar36 + uVar39 * 4 + 2) = *(undefined8 *)(param_7 + 0x12);
                *(undefined8 *)(puVar36 + uVar39 * 4) = uVar92;
                (param_7 + 0xc)[uVar39] = param_7[0xc];
                uVar39 = uVar39 + 1;
              }
              if (auVar61._0_8_ + (long)(int)uVar28 != 0) {
                lVar30 = (long)(int)uVar28 - uVar39;
                puVar36 = param_7 + uVar39 + 0xd;
                puVar40 = param_7 + uVar39 * 4 + 0x14;
                do {
                  uVar92 = *(undefined8 *)(param_7 + 0x10);
                  *(undefined8 *)(puVar40 + -2) = *(undefined8 *)(param_7 + 0x12);
                  *(undefined8 *)(puVar40 + -4) = uVar92;
                  puVar36[-1] = param_7[0xc];
                  uVar92 = *(undefined8 *)(param_7 + 0x10);
                  *(undefined8 *)(puVar40 + 2) = *(undefined8 *)(param_7 + 0x12);
                  *(undefined8 *)puVar40 = uVar92;
                  lVar30 = lVar30 + -2;
                  *puVar36 = param_7[0xc];
                  puVar36 = puVar36 + 2;
                  puVar40 = puVar40 + 8;
                } while (lVar30 != 0);
              }
            }
            pfVar43 = (float *)param_4[6];
            auVar57 = *(undefined1 (*) [16])(pfVar43 + 8);
            fVar55 = *pfVar43;
            fVar120 = pfVar43[1];
            fVar113 = pfVar43[2];
            fVar71 = pfVar43[3];
            fVar85 = pfVar43[4];
            fVar88 = pfVar43[5];
            fVar90 = pfVar43[6];
            fVar51 = pfVar43[7];
            *(undefined1 *)(param_7 + 0x25) = 0;
            uVar39 = (ulong)(uint)local_6f0;
            auVar62._0_8_ =
                 CONCAT44(auVar57._4_4_ * fStack_98 + fVar120 * local_a0 + fVar88 * fStack_9c,
                          auVar57._0_4_ * fStack_98 + fVar55 * local_a0 + fVar85 * fStack_9c);
            auVar62._8_4_ = auVar57._8_4_ * fStack_98 + fVar113 * local_a0 + fVar90 * fStack_9c;
            auVar62._12_4_ = auVar57._12_4_ * fStack_98 + fVar71 * local_a0 + fVar51 * fStack_9c;
            *(long *)(param_7 + 6) = auVar62._8_8_;
            *(undefined8 *)(param_7 + 4) = auVar62._0_8_;
            *(long *)(param_7 + 10) = auVar62._8_8_;
            *(undefined8 *)(param_7 + 8) = auVar62._0_8_;
            if (uVar44 == uVar27) {
              if (local_6f0 != fVar53) {
                *(float *)(param_6 + 0x90) = local_6f0;
                local_700 = 0xffffffffffffffff;
                uStack_6f8 = 0xffffffffffffffff;
                local_710 = 0xffffffffffffffff;
                uStack_708 = 0xffffffffffffffff;
                local_720 = 0xffffffffffffffff;
                uStack_718 = 0xffffffffffffffff;
                local_730 = -1;
                puStack_728 = (uint *)0xffffffffffffffff;
                if ((((~(uint)fVar53 & 0xff) != 0) &&
                    (*(undefined1 *)((long)&local_730 + ((ulong)(uint)fVar53 & 0xff)) = 0,
                    (((uint)fVar53 >> 8 ^ 0xffffffff) & 0xff) != 0)) &&
                   (*(undefined1 *)((long)&local_730 + ((ulong)((uint)fVar53 >> 8) & 0xff)) = 1,
                   (((uint)fVar53 >> 0x10 ^ 0xffffffff) & 0xff) != 0)) {
                  *(undefined1 *)((long)&local_730 + ((ulong)((uint)fVar53 >> 0x10) & 0xff)) = 2;
                  if ((uint)fVar53 >> 0x18 != 0xff) {
                    *(undefined1 *)((long)&local_730 + (ulong)((uint)fVar53 >> 0x18)) = 3;
                  }
                }
                uStack_748 = SUB168(*(undefined1 (*) [16])(param_6 + 0x50),8);
                local_750 = SUB168(*(undefined1 (*) [16])(param_6 + 0x50),0);
                uStack_738 = *(undefined8 *)(param_6 + 0x48);
                uStack_740 = *(undefined8 *)(param_6 + 0x40);
                pauVar33 = (undefined1 (*) [16])(param_6 + 0x60);
                *(undefined8 *)(param_6 + 0x50) = 0;
                *(undefined8 *)(param_6 + 0x40) = 0;
                *(undefined8 *)(param_6 + 0x58) = 0;
                *(undefined8 *)*pauVar33 = 0;
                *(undefined8 *)(param_6 + 0x68) = 0;
                *(undefined8 *)(param_6 + 0x48) = 0;
                *(char *)(param_6 + 0x2b) = (char)uVar29;
                uStack_758 = SUB168(*pauVar33,8);
                local_760 = SUB168(*pauVar33,0);
                if (0 < (int)uVar29) {
                  auVar61._0_8_ = (ulong)uVar29;
                  bVar34 = *(byte *)((long)&local_730 + (uVar39 & 0xff));
                  pbVar42 = (byte *)((ulong)&local_6f0 | 1);
                  while( true ) {
                    auVar61._0_8_ = auVar61._0_8_ - 1;
                    if ((ulong)bVar34 != 0xff) {
                      lVar30 = (ulong)bVar34 * 4;
                      uVar137 = *(undefined4 *)((long)&local_750 + lVar30);
                      *(undefined4 *)pauVar33[-2] = *(undefined4 *)((long)&uStack_740 + lVar30);
                      uVar46 = *(undefined4 *)((long)&local_760 + lVar30);
                      *(undefined4 *)pauVar33[-1] = uVar137;
                      *(undefined4 *)*pauVar33 = uVar46;
                    }
                    if (auVar61._0_8_ == 0) break;
                    pauVar33 = (undefined1 (*) [16])(*pauVar33 + 4);
                    bVar34 = *(byte *)((long)&local_730 + (ulong)*pbVar42);
                    pbVar42 = pbVar42 + 1;
                  }
                }
              }
            }
            else {
              bVar34 = *(byte *)(param_6 + 0x2b);
              *(float *)(param_6 + 0x90) = local_6f0;
              puVar25 = PTR_DAT_043723a0;
              auVar57 = *(undefined1 (*) [16])(param_6 + 0x40);
              *(undefined8 *)(param_6 + 0x50) = 0;
              *(undefined8 *)(param_6 + 0x58) = 0;
              *(undefined8 *)(param_6 + 0x60) = 0;
              *(undefined8 *)(param_6 + 0x68) = 0;
              *(char *)(param_6 + 0x2b) = (char)uVar29;
              pbVar42 = puVar25 + (ulong)(0xf >> (ulong)(4 - bVar34 & 0x1f)) * 0x10;
              auVar63._0_8_ =
                   CONCAT17(auVar57[7] & pbVar42[7],
                            CONCAT16(auVar57[6] & pbVar42[6],
                                     CONCAT15(auVar57[5] & pbVar42[5],
                                              CONCAT14(auVar57[4] & pbVar42[4],
                                                       CONCAT13(auVar57[3] & pbVar42[3],
                                                                CONCAT12(auVar57[2] & pbVar42[2],
                                                                         CONCAT11(auVar57[1] &
                                                                                  pbVar42[1],
                                                                                  auVar57[0] &
                                                                                  *pbVar42)))))));
              auVar63[8] = auVar57[8] & pbVar42[8];
              auVar63[9] = auVar57[9] & pbVar42[9];
              auVar63[10] = auVar57[10] & pbVar42[10];
              auVar63[0xb] = auVar57[0xb] & pbVar42[0xb];
              auVar63[0xc] = auVar57[0xc] & pbVar42[0xc];
              auVar63[0xd] = auVar57[0xd] & pbVar42[0xd];
              auVar63[0xe] = auVar57[0xe] & pbVar42[0xe];
              auVar63[0xf] = auVar57[0xf] & pbVar42[0xf];
              *(undefined1 *)((long)param_7 + 0x92) = 1;
              *(long *)(param_6 + 0x48) = auVar63._8_8_;
              *(undefined8 *)(param_6 + 0x40) = auVar63._0_8_;
            }
            *(long *)(param_7 + 0x26) = param_6;
            lVar30 = param_4[2];
            lVar45 = param_5[2];
            *(long *)(param_7 + 0x2a) = lVar30;
            *(long *)(param_7 + 0x2c) = lVar45;
            param_7[0x28] = *(uint *)(param_4 + 3);
            param_7[0x29] = *(uint *)(param_5 + 3);
            *(byte *)((long)param_7 + 0x91) = *(byte *)(param_6 + 10) >> 6 & 1;
            *(undefined1 *)(param_7 + 0x24) = 0;
            *(undefined1 *)((long)param_7 + 0x95) = 0;
            *(undefined1 *)((long)param_7 + 0x93) = 0;
            uVar44 = *(uint *)(lVar45 + 0x14) | *(uint *)(lVar30 + 0x14);
            iVar99 = *(int *)(param_6 + 0x1c);
            param_7[0x2f] = uVar44;
            if (iVar99 == 0xaaa00) {
              uVar44 = uVar44 | *(uint *)(*param_4 + 0x54) | *(uint *)(*param_5 + 0x54);
              bVar34 = *(byte *)(param_6 + 0xe) & 3;
              uVar28 = *(uint *)(*(long *)(param_1 + 0x30) +
                                 (ulong)*(ushort *)(param_4[1] + 0x58) * 0x70 + 4);
              uVar29 = *(uint *)(*(long *)(param_1 + 0x30) +
                                 (ulong)*(ushort *)(param_5[1] + 0x58) * 0x70 + 4);
              if (bVar34 == 1) {
                uVar44 = uVar44 & 0xffffff7f;
LAB_0017ef94:
                lVar47 = *(long *)(param_1 + 8);
              }
              else {
                if (bVar34 != 2) goto LAB_0017ef94;
                uVar44 = uVar44 | 0x80;
                lVar47 = *(long *)(param_1 + 8);
              }
              if (lVar47 != 0) {
                uVar44 = *(uint *)(lVar47 + 0x80c) | uVar44;
              }
              *(undefined2 *)((long)param_7 + 0x92) = 0x101;
              *(undefined4 *)(param_6 + 0x1c) = 0;
              *(uint *)(param_6 + 0x2c) = uVar29 | uVar28 | uVar44 | *(uint *)(param_6 + 0x2c);
              FUN_03048f60(param_6,lVar30,lVar45,param_4[5],param_5[5]);
              lVar30 = *(long *)(param_1 + 0x40);
              uVar44 = *(uint *)(param_6 + 0x2c);
              if ((*(uint *)(lVar30 + 0x108) & uVar44) != 0) {
                lVar45 = 0;
                uVar28 = *(uint *)(lVar30 + 0x110);
                puVar1 = (undefined8 *)(lVar30 + 0x118);
                uStack_498 = param_7;
                local_4a0 = param_6;
                while( true ) {
                  if ((uVar28 & uVar44) != 0) {
                    (**(code **)(*(long *)*puVar1 + 0x20))
                              ((long *)*puVar1,param_1,param_2,param_4,param_5,&local_4a0);
                  }
                  lVar45 = lVar45 + 1;
                  if (*(int *)(lVar30 + 0x10c) <= lVar45) break;
                  uVar28 = *(uint *)(puVar1 + 1);
                  puVar1 = puVar1 + 2;
                }
              }
            }
            uVar137 = 1;
            goto joined_r0x0017f064;
          }
          fVar55 = *(float *)(*param_4 + 0x3c) + *(float *)(*param_5 + 0x3c);
          uVar92 = NEON_fmax(*(undefined8 *)(*(long *)(param_2 + 8) + 0x58),CONCAT44(fVar55,fVar55),
                             4);
          uVar106 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x48);
          uVar92 = NEON_fmax(CONCAT44(fVar53 + (float)((ulong)uVar92 >> 0x20),
                                      (float)auVar107._0_8_ + (float)uVar92),local_7a0,4);
          uVar92 = NEON_fmin(uVar39,uVar92,4);
          fVar55 = ((float)uVar92 - (float)param_3[2]) * (float)uVar106;
          fVar53 = ((float)((ulong)uVar92 >> 0x20) - (float)((ulong)param_3[2] >> 0x20)) *
                   (float)((ulong)uVar106 >> 0x20);
        }
        auVar60._0_8_ = CONCAT44((int)fVar53,(int)fVar55);
        auVar60._8_8_ = auVar60._0_8_;
        uVar92 = NEON_sqxtun(auVar60._0_8_,auVar60,4);
        *(undefined2 *)(param_6 + 0x18) = 0x7f7f;
        *(undefined1 *)(param_6 + 0x1a) = 0x7f;
        *(short *)(param_6 + 0xc) = (short)uVar92;
        iVar99 = *(int *)(param_6 + 0x1c);
        goto joined_r0x0017e1ec;
      }
    }
    *(ushort *)(param_6 + 10) = *(ushort *)(param_6 + 10) & 0xfff7;
    uVar46 = 0xffffffff;
    uVar137 = 0xffffffff;
    iVar99 = *(int *)(param_6 + 0x1c);
  }
  if (iVar99 != 0xaaa00) {
    lVar45 = *param_4;
    lVar30 = *param_5;
    uVar39 = (ulong)local_4a0 >> 0x20;
    local_4a0 = CONCAT44((int)uVar39,(int)param_4[3]);
    local_6b0[0] = *(float *)(param_5 + 3);
    lVar47 = *(long *)(param_1 + 0x40);
    uVar44 = *(uint *)(param_6 + 0x2c);
    if ((*(uint *)(lVar47 + 0x108) & uVar44) != 0) {
      lVar49 = 0;
      uVar28 = *(uint *)(lVar47 + 0x110);
      puVar1 = (undefined8 *)(lVar47 + 0x118);
      while( true ) {
        if ((uVar28 & uVar44) != 0) {
          (**(code **)(*(long *)*puVar1 + 0x30))
                    ((long *)*puVar1,param_1,param_2,lVar45 + 0x50,lVar30 + 0x50,&local_4a0,
                     local_6b0,param_6);
        }
        lVar49 = lVar49 + 1;
        if (*(int *)(lVar47 + 0x10c) <= lVar49) break;
        uVar28 = *(uint *)(puVar1 + 1);
        puVar1 = puVar1 + 2;
      }
    }
    lVar30 = *(long *)(param_6 + 0x20);
    uVar137 = uVar46;
    if (lVar30 != 0) {
      lVar45 = param_3[0xd];
      if (*(long *)(lVar45 + 0x18) == lVar30) {
        iVar99 = *(int *)(lVar45 + 0x20) + 1;
      }
      else {
        if (*(long *)(lVar45 + 0x18) != 0) {
          FUN_032bfef8(lVar45);
        }
        iVar99 = 1;
        *(long *)(lVar45 + 0x18) = lVar30;
      }
      *(int *)(lVar45 + 0x20) = iVar99;
    }
  }
  *(undefined1 *)(param_6 + 0x15) = 0;
  *(undefined4 *)(param_6 + 0x1c) = 0;
  *(undefined1 *)(param_6 + 0x1b) = 0;
  *(undefined1 *)(param_6 + 9) = 2;
joined_r0x0017f064:
  if (local_70 != 0) {
    FUN_032d5acc(&local_4a0);
    *(long *)(local_88 + 8) = (long)uStack_498 + (*(long *)(local_88 + 8) - local_78);
    *(int *)(local_88 + 0x10) = *(int *)(local_88 + 0x10) + 1;
  }
  return uVar137;
}


