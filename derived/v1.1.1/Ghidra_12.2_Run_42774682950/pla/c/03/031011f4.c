/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031011f4; name: FUN_031011f4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031011f4(undefined8 *param_1,int *param_2)

{
  ulong uVar1;
  undefined1 (*pauVar2) [16];
  float *pfVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar30;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar31;
  ulong uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 uVar37;
  int iVar40;
  undefined1 auVar38 [16];
  float fVar41;
  undefined1 auVar39 [16];
  float fVar42;
  float fVar43;
  int iVar44;
  undefined8 uVar45;
  float fVar49;
  float fVar50;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  int iVar54;
  undefined8 uVar55;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined8 uVar61;
  undefined1 auVar62 [16];
  float fVar65;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  int iVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  int iVar72;
  int iVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar84;
  float fVar85;
  float fVar87;
  undefined1 auVar86 [16];
  undefined8 uVar88;
  undefined1 auVar89 [16];
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar94;
  undefined8 uVar93;
  float fVar95;
  float fVar96;
  float fVar98;
  undefined8 uVar97;
  float fVar99;
  float fVar100;
  float fVar103;
  undefined8 uVar101;
  undefined1 auVar102 [16];
  float fVar104;
  float fVar107;
  undefined8 uVar105;
  undefined8 uVar106;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  float local_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float local_240;
  float fStack_23c;
  undefined8 uStack_238;
  int *local_220;
  undefined4 local_218;
  uint local_214;
  int local_210;
  int local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 local_1f0 [16];
  undefined8 local_1e0;
  undefined4 uStack_1d8;
  undefined *local_f0;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined1 auStack_cc [12];
  undefined1 auStack_c0 [16];
  long local_98;
  
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  param_1[0x14] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  iVar10 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_2 + 6) * 0x200 + 0x78))(param_2);
  if ((iVar10 == 0) && (2 < param_2[0x11])) {
    if (param_2[0x10] == 0) {
      local_f0 = (undefined *)0x0;
    }
    else {
      local_f0 = (undefined *)((long)param_2 + (long)param_2[0x10] + 0x40);
    }
    uStack_e4 = 0xc;
    iStack_e8 = param_2[0x11];
    FUN_02fe00c8(&local_200);
    local_200._0_5_ = (uint5)(uint)local_200;
    FUN_02fdc280(&local_220,&local_f0,&local_200);
    piVar18 = local_220;
  }
  else {
    FUN_032d645c(param_2);
    piVar18 = param_2;
  }
  FUN_032d645c(param_2);
  lVar12 = param_1[0x14];
  param_1[0x14] = param_2;
  if (lVar12 != 0) {
    FUN_032d647c();
  }
  lVar12 = (long)param_1 + 0x5c;
  iVar10 = FUN_02fed370(piVar18,&local_200);
  if (iVar10 < 0) {
    iStack_e8 = -1;
    uStack_e4 = 0;
    uStack_e0 = 1;
    local_f0 = &DAT_042d95d8;
    local_d8 = 2;
    local_d4 = 0x3fc00000;
    uStack_d0 = 0xc47a0000;
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(piVar18 + 6) * 0x200 + 0x38))
              (piVar18,&local_f0,&local_200);
  }
  uVar37 = NEON_fmaxp(local_1e0,local_1e0,4);
  uVar37 = NEON_fmax(CONCAT44(uStack_1d8,uStack_1d8),uVar37,4);
  uVar45 = NEON_frecpe(uVar37,4);
  uVar55 = NEON_frecps(uVar37,uVar45,4);
  fVar42 = (float)uVar45 * (float)uVar55;
  fVar49 = (float)((ulong)uVar45 >> 0x20) * (float)((ulong)uVar55 >> 0x20);
  iVar10 = -(uint)((float)uVar37 == 0.0);
  iVar40 = -(uint)((float)((ulong)uVar37 >> 0x20) == 0.0);
  uVar37 = NEON_frecps(uVar37,CONCAT44(fVar49,fVar42),4);
  uVar32 = CONCAT44(fVar49 * (float)((ulong)uVar37 >> 0x20),fVar42 * (float)uVar37) &
           CONCAT17(~(byte)((uint)iVar40 >> 0x18),
                    CONCAT16(~(byte)((uint)iVar40 >> 0x10),
                             CONCAT15(~(byte)((uint)iVar40 >> 8),
                                      CONCAT14(~(byte)iVar40,
                                               CONCAT13(~(byte)((uint)iVar10 >> 0x18),
                                                        CONCAT12(~(byte)((uint)iVar10 >> 0x10),
                                                                 CONCAT11(~(byte)((uint)iVar10 >> 8)
                                                                          ,~(byte)iVar10)))))));
  param_1[0xc] = CONCAT44((float)(uVar32 >> 0x20) * local_200._4_4_,(float)uVar32 * local_200._4_4_)
  ;
  uStack_1f8 = 0;
  local_200 = (undefined1 (*) [16])0x0;
  (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(piVar18 + 6) * 0x200 + 0x98))
            (piVar18,&local_200,param_1 + 1);
  fVar42 = (float)piVar18[8];
  param_1[1] = CONCAT44((float)((ulong)param_1[1] >> 0x20) + fVar42,(float)param_1[1] + fVar42);
  uStack_1f8 = 0;
  local_200 = (undefined1 (*) [16])0x0;
  (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(piVar18 + 6) * 0x200 + 0x28))
            (piVar18,&local_200,param_1 + 2);
  auVar46._0_8_ = param_1[1];
  uVar37 = param_1[2];
  fVar31 = (float)uVar37;
  fVar52 = (float)((ulong)uVar37 >> 0x20);
  fVar42 = (float)auVar46._0_8_;
  fVar49 = (float)((ulong)auVar46._0_8_ >> 0x20);
  *param_1 = CONCAT44(fVar49 * 0.5 + fVar52 * 0.5,fVar42 * 0.5 + fVar31 * 0.5);
  uVar45 = NEON_frecpe(auVar46._0_8_,4);
  uVar55 = NEON_frecps(auVar46._0_8_,uVar45,4);
  fVar43 = (float)uVar45 * (float)uVar55;
  fVar50 = (float)((ulong)uVar45 >> 0x20) * (float)((ulong)uVar55 >> 0x20);
  uVar45 = NEON_frecps(auVar46._0_8_,CONCAT44(fVar50,fVar43),4);
  uVar55 = NEON_frecpe(uVar37,4);
  uVar61 = NEON_frecps(uVar37,uVar55,4);
  fVar51 = (float)uVar55 * (float)uVar61;
  fVar58 = (float)((ulong)uVar55 >> 0x20) * (float)((ulong)uVar61 >> 0x20);
  uVar37 = NEON_frecps(uVar37,CONCAT44(fVar58,fVar51),4);
  param_1[3] = CONCAT44(fVar50 * (float)((ulong)uVar45 >> 0x20),fVar43 * (float)uVar45);
  param_1[0x10] = CONCAT44(fVar49 * 0.5,fVar42 * 0.5);
  param_1[0x12] = 0x3b03126f3b03126f;
  param_1[5] = CONCAT44(fVar52 - fVar49,fVar31 - fVar42);
  param_1[0x11] = CONCAT44(fVar49 * 0.01,fVar42 * 0.01);
  auVar46._8_8_ = auVar46._0_8_;
  param_1[4] = CONCAT44(fVar49 * fVar58 * (float)((ulong)uVar37 >> 0x20),
                        fVar42 * fVar51 * (float)uVar37);
  auVar38._0_12_ = auVar46._0_12_;
  auVar38._12_4_ = fVar31;
  param_1[0x13] = CONCAT44(fVar49 * 0.002,fVar42 * 0.002);
  param_1[7] = auVar38._8_8_;
  param_1[6] = auVar46._0_8_;
  fVar42 = (float)piVar18[8];
  auVar35._0_8_ = CONCAT44(fVar42,fVar42);
  auVar35._8_4_ = fVar42;
  auVar35._12_4_ = fVar42;
  param_1[0xf] = auVar35._8_8_;
  param_1[0xe] = auVar35._0_8_;
  iVar10 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(piVar18 + 6) * 0x200 + 0x78))(piVar18);
  puVar9 = PTR_PTR_0434a080;
  uVar37 = NEON_fmov(0x3f800000,4);
  fVar42 = (float)uVar37;
  fVar49 = (float)((ulong)uVar37 >> 0x20);
  if (iVar10 == 0) {
    if ((char)piVar18[6] == '\x02') {
      lVar17 = param_1[8];
      pfVar3 = (float *)((long)piVar18[0x10] + (long)(piVar18 + 0x10));
      fVar60 = *pfVar3;
      fVar91 = pfVar3[1];
      fVar59 = pfVar3[2];
      iVar40 = *(int *)(param_1 + 9);
      iVar10 = iVar40 + 1;
      fVar31 = fVar60 * fVar60 + fVar91 * fVar91 + fVar59 * fVar59;
      fVar52 = fVar60 * fVar60 + fVar91 * fVar91 + fVar59 * fVar59;
      uVar37 = CONCAT44(fVar52,fVar31);
      uVar45 = NEON_frsqrte(uVar37,4);
      fVar43 = (float)uVar45;
      fVar50 = (float)((ulong)uVar45 >> 0x20);
      uVar45 = NEON_frsqrts(uVar37,CONCAT44(fVar50 * fVar50,fVar43 * fVar43),4);
      fVar43 = fVar43 * (float)uVar45;
      fVar50 = fVar50 * (float)((ulong)uVar45 >> 0x20);
      uVar37 = NEON_frsqrts(uVar37,CONCAT44(fVar50 * fVar50,fVar43 * fVar43),4);
      iVar66 = -(uint)(fVar31 <= 0.0);
      iVar44 = -(uint)(fVar52 <= 0.0);
      fVar43 = (float)uVar37 * fVar43;
      fVar50 = (float)((ulong)uVar37 >> 0x20) * fVar50;
      fVar43 = (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                               CONCAT12((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar43 >> 8) &
                                                  ~(byte)((uint)iVar66 >> 8),
                                                  SUB41(fVar43,0) & ~(byte)iVar66)));
      fVar50 = (float)(CONCAT17((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18),
                                CONCAT16((byte)((uint)fVar50 >> 0x10) &
                                         ~(byte)((uint)iVar44 >> 0x10),
                                         CONCAT15((byte)((uint)fVar50 >> 8) &
                                                  ~(byte)((uint)iVar44 >> 8),
                                                  CONCAT14(SUB41(fVar50,0) & ~(byte)iVar44,fVar43)))
                               ) >> 0x20);
      fVar23 = fVar60 * fVar43;
      fVar85 = fVar91 * fVar50;
      auVar63._0_8_ = CONCAT44(fVar85,fVar23);
      auVar63._8_4_ = fVar59 * fVar43;
      auVar63._12_4_ = fVar59 * fVar50;
      fVar51 = fVar23 * fVar23;
      auVar77._8_8_ = auVar63._8_8_;
      auVar77._0_8_ = auVar63._0_8_;
      uVar37 = NEON_ext(CONCAT44(fVar91 * fVar50,fVar60 * fVar43),
                        CONCAT44(fVar50 * fVar59,fVar43 * fVar59),4,1);
      auVar78._0_12_ = auVar77._0_12_;
      auVar78._12_4_ = 0;
      auVar82._8_8_ = _UNK_03889038;
      auVar82._0_8_ = _DAT_03889030;
      auVar68._8_8_ = _UNK_03889f18;
      auVar68._0_8_ = _DAT_03889f10;
      auVar81._0_4_ = fVar51 + fVar51;
      auVar81._4_4_ = fVar85 * fVar85 + fVar51;
      auVar81._8_4_ = auVar63._8_4_ * auVar63._8_4_ + fVar51;
      auVar81._12_4_ = auVar63._12_4_ * auVar63._12_4_ + fVar51;
      auVar46 = a64_TBL(ZEXT816(0),auVar78,auVar82);
      auVar38 = a64_TBL(ZEXT816(0),auVar78,auVar68);
      uVar16 = CONCAT44(-(uint)(auVar81._8_4_ < auVar81._4_4_),
                        -(uint)(auVar81._8_4_ < auVar81._4_4_));
      auVar79._8_8_ = uVar16;
      auVar79._0_8_ = uVar16;
      auVar38 = auVar38 ^ (auVar38 ^ auVar46) & auVar79;
      auVar46 = NEON_frsqrte(auVar81,4);
      fVar51 = auVar46._0_4_;
      auVar69._0_4_ = fVar51 * fVar51;
      fVar58 = auVar46._4_4_;
      auVar69._4_4_ = fVar58 * fVar58;
      fVar65 = auVar46._8_4_;
      auVar69._8_4_ = fVar65 * fVar65;
      fVar71 = auVar46._12_4_;
      auVar69._12_4_ = fVar71 * fVar71;
      auVar46 = NEON_frsqrts(auVar81,auVar69,4);
      fVar51 = fVar51 * auVar46._0_4_;
      fVar58 = fVar58 * auVar46._4_4_;
      fVar65 = fVar65 * auVar46._8_4_;
      fVar71 = fVar71 * auVar46._12_4_;
      fVar53 = -auVar38._0_4_;
      fVar30 = auVar38._4_4_;
      auVar80._4_12_ = auVar38._4_12_;
      auVar80._0_4_ = fVar53;
      auVar70._0_4_ = fVar51 * fVar51;
      auVar70._4_4_ = fVar58 * fVar58;
      auVar70._8_4_ = fVar65 * fVar65;
      auVar70._12_4_ = fVar71 * fVar71;
      auVar46 = NEON_frsqrts(auVar81,auVar70,4);
      iVar66 = -(uint)(auVar81._0_4_ <= 0.0);
      iVar44 = -(uint)(auVar81._4_4_ <= 0.0);
      iVar54 = -(uint)(auVar81._8_4_ <= 0.0);
      iVar72 = -(uint)(auVar81._12_4_ <= 0.0);
      fVar51 = auVar46._0_4_ * fVar51;
      fVar58 = auVar46._4_4_ * fVar58;
      fVar65 = auVar46._8_4_ * fVar65;
      fVar71 = auVar46._12_4_ * fVar71;
      auVar35 = NEON_ext(auVar80,auVar80,4,1);
      auVar75._0_8_ =
           CONCAT17((byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18),
                    CONCAT16((byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10),
                             CONCAT15((byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar44 >> 8),
                                      CONCAT14(SUB41(fVar58,0) & ~(byte)iVar44,
                                               CONCAT13((byte)((uint)fVar51 >> 0x18) &
                                                        ~(byte)((uint)iVar66 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar51 >> 0x10) &
                                                                 ~(byte)((uint)iVar66 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar51 >> 8)
                                                                          & ~(byte)((uint)iVar66 >>
                                                                                   8),
                                                                          SUB41(fVar51,0) &
                                                                          ~(byte)iVar66)))))));
      auVar75[8] = SUB41(fVar65,0) & ~(byte)iVar54;
      auVar75[9] = (byte)((uint)fVar65 >> 8) & ~(byte)((uint)iVar54 >> 8);
      auVar75[10] = (byte)((uint)fVar65 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10);
      auVar75[0xb] = (byte)((uint)fVar65 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18);
      auVar75[0xc] = SUB41(fVar71,0) & ~(byte)iVar72;
      auVar75[0xd] = (byte)((uint)fVar71 >> 8) & ~(byte)((uint)iVar72 >> 8);
      auVar75[0xe] = (byte)((uint)fVar71 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10);
      auVar75[0xf] = (byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18);
      uVar19 = (undefined4)((ulong)auVar75._0_8_ >> 0x20);
      auVar46 = NEON_ext(auVar75,auVar75,8,1);
      uVar32 = CONCAT44(auVar46._0_4_,auVar46._0_4_);
      uVar32 = uVar32 ^ (uVar32 ^ CONCAT44(uVar19,uVar19)) & uVar16;
      auVar102._0_4_ = fVar23 * auVar35._0_4_ - (float)uVar37 * fVar53;
      auVar102._4_4_ = fVar85 * auVar35._4_4_ - (float)((ulong)uVar37 >> 0x20) * fVar30;
      auVar102._8_4_ = auVar63._8_4_ * fVar53 - fVar60 * fVar43 * auVar38._8_4_;
      auVar102._12_4_ = auVar63._12_4_ * fVar30 - fVar91 * fVar50 * auVar38._12_4_;
      auVar46 = NEON_ext(auVar102,auVar102,4,1);
      fVar51 = (float)uVar32;
      fVar58 = (float)(uVar32 >> 0x20);
      auVar67._0_8_ = CONCAT44(fVar58 * fVar30,fVar51 * fVar53);
      auVar67._8_4_ = fVar51 * auVar38._8_4_;
      auVar67._12_4_ = fVar58 * auVar38._12_4_;
      fVar31 = fVar31 * fVar43;
      auVar62._0_8_ = CONCAT44(fVar58 * auVar46._4_4_,fVar51 * auVar46._0_4_);
      auVar62._8_4_ = fVar51 * auVar102._0_4_;
      auVar62._12_4_ = fVar58 * auVar102._4_4_;
      if ((int)(*(uint *)((long)param_1 + 0x4c) & 0x3fffffff) <= iVar40) {
        lVar17 = FUN_031020d4(PTR_PTR_0434a080,iVar10,lVar17,iVar40,(long)param_1 + 0x4c);
        auVar62._8_8_ = auVar62._8_8_;
        auVar67._8_8_ = auVar67._8_8_;
        iVar40 = *(int *)(param_1 + 9);
        param_1[8] = lVar17;
      }
      auVar28._0_4_ = 0.0 - auVar67._0_4_;
      auVar28._4_4_ = 0.0 - auVar67._4_4_;
      auVar28._8_4_ = 0.0 - auVar67._8_4_;
      auVar28._12_4_ = 0.0 - auVar67._12_4_;
      auVar36._0_4_ = 0.0 - auVar62._0_4_;
      auVar36._4_4_ = 0.0 - auVar62._4_4_;
      auVar36._8_4_ = 0.0 - auVar62._8_4_;
      auVar36._12_4_ = 0.0 - auVar62._12_4_;
      auVar35 = NEON_ext(auVar67,auVar67,8,1);
      auVar81 = NEON_ext(auVar62,auVar62,8,1);
      uVar37 = CONCAT44(auVar36._0_4_,auVar28._0_4_);
      uVar45 = CONCAT44(auVar36._4_4_,auVar28._4_4_);
      auVar46 = NEON_ext(auVar28,auVar28,8,1);
      auVar38 = NEON_ext(auVar36,auVar36,8,1);
      puVar14 = (undefined8 *)(lVar17 + (long)iVar40 * 0x30);
      auVar29._0_4_ = 0.0 - fVar60;
      auVar29._4_4_ = 0.0 - fVar91;
      auVar29._8_4_ = 0.0 - fVar59;
      auVar29._12_4_ = 0.0 - fVar59;
      *(int *)(param_1 + 9) = iVar10;
      puVar14[1] = uVar37;
      *puVar14 = CONCAT44(auVar62._0_4_,auVar67._0_4_);
      puVar14[3] = uVar45;
      puVar14[2] = CONCAT44(auVar62._4_4_,auVar67._4_4_);
      uVar61 = CONCAT44(auVar29._0_4_,fVar60);
      puVar14[5] = CONCAT44(auVar38._0_4_,auVar46._0_4_);
      puVar14[4] = CONCAT44(auVar81._0_4_,auVar35._0_4_);
      uVar105 = CONCAT44(auVar29._4_4_,fVar91);
      auVar46 = NEON_ext(auVar29,auVar29,8,1);
      lVar17 = param_1[10];
      uVar19 = auVar46._0_4_;
      auVar64._0_8_ = CONCAT44(uVar19,fVar59);
      uVar37 = CONCAT44(fVar52 * fVar50 * fVar52 * fVar50 * (float)((ulong)param_1[0xc] >> 0x20) +
                        fVar49,fVar31 * fVar31 * (float)param_1[0xc] + fVar42);
      auVar64._8_8_ = auVar64._0_8_;
      uVar45 = NEON_frecpe(uVar37,4);
      iVar40 = *(int *)(param_1 + 0xb);
      iVar10 = iVar40 + 1;
      uVar55 = NEON_frecps(uVar37,uVar45,4);
      fVar42 = (float)uVar45 * (float)uVar55;
      fVar49 = (float)((ulong)uVar45 >> 0x20) * (float)((ulong)uVar55 >> 0x20);
      uVar37 = NEON_frecps(uVar37,CONCAT44(fVar49,fVar42),4);
      uVar37 = CONCAT44(fVar49 * (float)((ulong)uVar37 >> 0x20),fVar42 * (float)uVar37);
      if ((int)(*(uint *)((long)param_1 + 0x5c) & 0x3fffffff) <= iVar40) {
        lVar17 = FUN_0310215c(puVar9,iVar10,lVar17,iVar40,lVar12);
        auVar64._4_4_ = uVar19;
        auVar64._0_4_ = fVar59;
        auVar64._8_4_ = fVar59;
        auVar64._12_4_ = uVar19;
        iVar40 = *(int *)(param_1 + 0xb);
        param_1[10] = lVar17;
      }
      uVar45 = CONCAT44(auVar29._4_4_,fVar91);
      puVar14 = (undefined8 *)(lVar17 + (long)iVar40 * 0x50);
      *(int *)(param_1 + 0xb) = iVar10;
      puVar14[1] = uVar61;
      *puVar14 = uVar61;
      puVar14[3] = uVar105;
      puVar14[2] = uVar45;
      *(float *)(puVar14 + 8) = fVar31;
      *(undefined4 *)((long)puVar14 + 0x44) = 0;
      puVar14[5] = auVar64._8_8_;
      puVar14[4] = auVar64._0_8_;
      puVar14[7] = uVar37;
      puVar14[6] = uVar37;
      lVar17 = param_1[10];
      iVar40 = *(int *)(param_1 + 0xb);
      iVar10 = iVar40 + 1;
      if ((int)(*(uint *)((long)param_1 + 0x5c) & 0x3fffffff) <= iVar40) {
        lVar17 = FUN_0310215c(puVar9,iVar10,lVar17,iVar40,lVar12);
        auVar64._4_4_ = uVar19;
        auVar64._0_4_ = fVar59;
        auVar64._8_4_ = fVar59;
        auVar64._12_4_ = uVar19;
        iVar40 = *(int *)(param_1 + 0xb);
        param_1[10] = lVar17;
      }
      uVar45 = CONCAT44(auVar29._4_4_,fVar91);
      puVar14 = (undefined8 *)(lVar17 + (long)iVar40 * 0x50);
      *(int *)(param_1 + 0xb) = iVar10;
      *(float *)(puVar14 + 8) = fVar31;
      *(undefined4 *)((long)puVar14 + 0x44) = 0;
      puVar14[1] = uVar61;
      *puVar14 = uVar61;
      puVar14[3] = uVar105;
      puVar14[2] = uVar45;
      puVar14[5] = auVar64._8_8_;
      puVar14[4] = auVar64._0_8_;
      puVar14[7] = uVar37;
      puVar14[6] = uVar37;
      lVar17 = param_1[10];
      iVar40 = *(int *)(param_1 + 0xb);
      iVar10 = iVar40 + 1;
      if ((int)(*(uint *)((long)param_1 + 0x5c) & 0x3fffffff) <= iVar40) {
        lVar17 = FUN_0310215c(puVar9,iVar10,lVar17,iVar40,lVar12);
        auVar64._4_4_ = uVar19;
        auVar64._0_4_ = fVar59;
        auVar64._8_4_ = fVar59;
        auVar64._12_4_ = uVar19;
        iVar40 = *(int *)(param_1 + 0xb);
        param_1[10] = lVar17;
      }
      uVar45 = CONCAT44(auVar29._4_4_,fVar91);
      puVar14 = (undefined8 *)(lVar17 + (long)iVar40 * 0x50);
      *(int *)(param_1 + 0xb) = iVar10;
      *(float *)(puVar14 + 8) = fVar31;
      *(undefined4 *)((long)puVar14 + 0x44) = 0;
      puVar14[1] = uVar61;
      *puVar14 = uVar61;
      puVar14[3] = uVar105;
      puVar14[2] = uVar45;
      puVar14[5] = auVar64._8_8_;
      puVar14[4] = auVar64._0_8_;
      puVar14[7] = uVar37;
      puVar14[6] = uVar37;
      lVar17 = param_1[10];
      iVar40 = *(int *)(param_1 + 0xb);
      iVar10 = iVar40 + 1;
      if ((int)(*(uint *)((long)param_1 + 0x5c) & 0x3fffffff) <= iVar40) {
        lVar17 = FUN_0310215c(puVar9,iVar10,lVar17,iVar40,lVar12);
        auVar64._4_4_ = uVar19;
        auVar64._0_4_ = fVar59;
        auVar64._8_4_ = fVar59;
        auVar64._12_4_ = uVar19;
        iVar40 = *(int *)(param_1 + 0xb);
        param_1[10] = lVar17;
      }
      uVar45 = CONCAT44(auVar29._4_4_,fVar91);
      puVar14 = (undefined8 *)(lVar17 + (long)iVar40 * 0x50);
      *(int *)(param_1 + 0xb) = iVar10;
      *(float *)(puVar14 + 8) = fVar31;
      *(undefined4 *)((long)puVar14 + 0x44) = 0;
      puVar14[1] = uVar61;
      *puVar14 = uVar61;
      puVar14[3] = uVar105;
      puVar14[2] = uVar45;
      puVar14[5] = auVar64._8_8_;
      puVar14[4] = auVar64._0_8_;
      puVar14[7] = uVar37;
      puVar14[6] = uVar37;
    }
    goto LAB_03102094;
  }
  iVar40 = piVar18[0x11];
  local_200 = &local_1f0;
  if (iVar40 < 5) {
    iVar40 = 4;
  }
  uStack_1f8 = -0x7ffffff000000000;
  if (iVar40 < 0x11) {
LAB_031014c4:
    uStack_1f8 = CONCAT44(uStack_1f8._4_4_,iVar40);
  }
  else {
    local_200 = (undefined1 (*) [16])
                FUN_02ffeb8c(PTR_PTR_0434a080,iVar40,local_200,0,(ulong)&local_200 | 0xc);
    if ((int)uStack_1f8 != iVar40) goto LAB_031014c4;
  }
  puVar9 = PTR_PTR_0434a080;
  if (0 < (int)(iVar10 + 3U & 0xfffffffc)) {
    local_98 = 0;
    do {
      lVar17 = 0;
      do {
        iVar40 = (int)(lVar17 + local_98);
        if ((long)(iVar10 + -1) <= lVar17 + local_98) {
          iVar40 = iVar10 + -1;
        }
        pauVar2 = (undefined1 (*) [16])(auStack_cc + lVar17 * 0x10 + -0x24);
        uVar11 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(piVar18 + 6) * 0x200 + 0x88))
                           (piVar18,iVar40,pauVar2,local_200);
        if ((int)uVar11 < 5) {
          auVar33 = local_200[2];
          if (uVar11 == 3) {
            *(long *)(local_200[3] + 8) = auVar33._8_8_;
            *(long *)local_200[3] = auVar33._0_8_;
            auVar26 = auVar33;
          }
          else {
            auVar26 = local_200[3];
          }
        }
        else {
          uVar32 = 1;
          fVar31 = -3.40282e+38;
          uVar16 = 0;
          do {
            uVar1 = uVar16 + 1;
            local_210 = -1;
            local_20c = -1;
            if ((long)uVar1 < (long)(int)uVar11) {
              pauVar4 = local_200 + uVar16;
              local_20c = -1;
              local_210 = -1;
              uVar15 = uVar32;
              fVar52 = -3.40282e+38;
              do {
                pauVar5 = local_200 + uVar15;
                fVar43 = *(float *)*pauVar5 - *(float *)*pauVar4;
                fVar50 = *(float *)(*pauVar5 + 4) - *(float *)(*pauVar4 + 4);
                fVar51 = *(float *)(*pauVar5 + 8) - *(float *)(*pauVar4 + 8);
                fVar43 = fVar43 * fVar43 + fVar50 * fVar50 + fVar51 * fVar51;
                iVar40 = (int)uVar16;
                iVar66 = (int)uVar15;
                if (fVar43 <= fVar52) {
                  fVar43 = fVar52;
                  iVar40 = local_210;
                  iVar66 = local_20c;
                }
                local_20c = iVar66;
                local_210 = iVar40;
                uVar15 = uVar15 + 1;
                fVar52 = fVar43;
              } while (uVar11 != uVar15);
            }
            pauVar4 = local_200 + local_20c;
            fVar58 = 3.40282e+38;
            pauVar5 = local_200 + local_210;
            fVar52 = -3.40282e+38;
            auVar24._0_4_ = *(float *)*pauVar4 - *(float *)*pauVar5;
            auVar24._4_4_ = *(float *)(*pauVar4 + 4) - *(float *)(*pauVar5 + 4);
            auVar24._8_4_ = *(float *)(*pauVar4 + 8) - *(float *)(*pauVar5 + 8);
            auVar24._12_4_ = *(float *)(*pauVar4 + 0xc) - *(float *)(*pauVar5 + 0xc);
            auVar46 = *pauVar2;
            auVar38 = NEON_ext(auVar46,auVar46,8,1);
            uVar37 = NEON_ext(auVar46._0_8_,auVar38._0_8_,4,1);
            auVar38 = NEON_ext(auVar24,auVar24,4,1);
            fVar51 = 3.40282e+38;
            uVar16 = 0;
            fVar43 = -3.40282e+38;
            auVar25._0_4_ = auVar46._0_4_ * auVar38._0_4_ - auVar24._0_4_ * (float)uVar37;
            auVar25._4_4_ =
                 auVar46._4_4_ * auVar38._4_4_ - auVar24._4_4_ * (float)((ulong)uVar37 >> 0x20);
            auVar25._8_4_ = auVar46._8_4_ * auVar24._0_4_ - auVar24._8_4_ * auVar46._0_4_;
            auVar25._12_4_ = auVar46._12_4_ * auVar24._4_4_ - auVar24._12_4_ * auVar46._4_4_;
            fVar50 = -3.40282e+38;
            auVar46 = NEON_ext(auVar25,auVar25,4,1);
            uVar20 = 0xffffffff;
            uVar19 = 0xffffffff;
            local_204 = 0xffffffff;
            uVar21 = 0xffffffff;
            fVar65 = 3.40282e+38;
            do {
              pauVar4 = local_200 + uVar16;
              fVar71 = (0.0 - auVar46._0_4_) * *(float *)*pauVar4 +
                       (0.0 - auVar46._4_4_) * *(float *)(*pauVar4 + 4) +
                       (0.0 - auVar25._0_4_) * *(float *)(*pauVar4 + 8);
              uVar22 = (undefined4)uVar16;
              if (fVar52 < fVar71) {
                uVar19 = uVar22;
                fVar52 = fVar71;
              }
              local_208 = uVar21;
              fVar23 = fVar43;
              if (fVar50 < fVar71) {
                local_208 = uVar22;
                uVar19 = uVar21;
                fVar23 = fVar71;
                fVar50 = fVar71;
                fVar52 = fVar43;
              }
              fVar43 = fVar23;
              if (fVar71 < fVar65) {
                uVar20 = local_204;
                local_204 = uVar22;
                fVar51 = fVar58;
                fVar58 = fVar71;
              }
              else if (fVar51 <= fVar71) {
                fVar71 = fVar65;
              }
              else {
                uVar20 = uVar22;
                fVar51 = fVar71;
                fVar71 = fVar65;
              }
              uVar16 = uVar16 + 1;
              uVar21 = local_208;
              fVar65 = fVar71;
            } while (uVar11 != uVar16);
            if (fVar50 < 0.0) {
              local_208 = uVar20;
            }
            if (0.0 < fVar71) {
              local_204 = uVar19;
            }
            local_214 = 0x80000004;
            local_218 = 4;
            local_220 = &local_210;
            FUN_02ff1e50(&local_210,0,3);
            auVar46 = local_200[local_220[1]];
            auVar38 = local_200[*local_220];
            auVar35 = local_200[local_220[2]];
            fVar52 = auVar38._0_4_;
            auVar47._0_4_ = auVar46._0_4_ - fVar52;
            fVar43 = auVar38._4_4_;
            auVar47._4_4_ = auVar46._4_4_ - fVar43;
            fVar50 = auVar38._8_4_;
            auVar47._8_4_ = auVar46._8_4_ - fVar50;
            fVar51 = auVar38._12_4_;
            auVar47._12_4_ = auVar46._12_4_ - fVar51;
            auVar62 = NEON_ext(auVar47,auVar47,4,1);
            auVar56._0_4_ = auVar35._0_4_ - fVar52;
            auVar56._4_4_ = auVar35._4_4_ - fVar43;
            auVar56._8_4_ = auVar35._8_4_ - fVar50;
            auVar56._12_4_ = auVar35._12_4_ - fVar51;
            auVar67 = NEON_ext(auVar56,auVar56,4,1);
            auVar48._0_4_ = auVar47._0_4_ * auVar67._0_4_ - auVar56._0_4_ * auVar62._0_4_;
            auVar48._4_4_ = auVar47._4_4_ * auVar67._4_4_ - auVar56._4_4_ * auVar62._4_4_;
            auVar48._8_4_ = auVar47._8_4_ * auVar56._0_4_ - auVar56._8_4_ * auVar47._0_4_;
            auVar48._12_4_ = auVar47._12_4_ * auVar56._4_4_ - auVar56._12_4_ * auVar47._4_4_;
            auVar62 = NEON_ext(auVar48,auVar48,4,1);
            fVar58 = auVar62._0_4_ * auVar62._0_4_;
            fVar65 = auVar62._4_4_ * auVar62._4_4_;
            auVar62 = local_200[local_220[3]];
            auVar74._0_4_ = auVar62._0_4_ - fVar52;
            auVar74._4_4_ = auVar62._4_4_ - fVar43;
            auVar74._8_4_ = auVar62._8_4_ - fVar50;
            auVar74._12_4_ = auVar62._12_4_ - fVar51;
            fVar43 = fVar58 + fVar65 + auVar48._0_4_ * auVar48._0_4_;
            uVar45 = CONCAT44(fVar58 + fVar65 + auVar48._0_4_ * auVar48._0_4_,fVar43);
            auVar81 = NEON_ext(auVar74,auVar74,4,1);
            uVar37 = NEON_frsqrte(uVar45,4);
            fVar58 = (float)uVar37;
            fVar65 = (float)((ulong)uVar37 >> 0x20);
            uVar37 = NEON_frsqrts(uVar45,CONCAT44(fVar65 * fVar65,fVar58 * fVar58),4);
            fVar58 = fVar58 * (float)uVar37;
            fVar65 = fVar65 * (float)((ulong)uVar37 >> 0x20);
            auVar57._0_4_ = auVar56._0_4_ * auVar81._0_4_ - auVar67._0_4_ * auVar74._0_4_;
            auVar57._4_4_ = auVar56._4_4_ * auVar81._4_4_ - auVar67._4_4_ * auVar74._4_4_;
            auVar57._8_4_ = auVar56._8_4_ * auVar74._0_4_ - auVar56._0_4_ * auVar74._8_4_;
            auVar57._12_4_ = auVar56._12_4_ * auVar74._4_4_ - auVar56._4_4_ * auVar74._12_4_;
            auVar67 = NEON_ext(auVar57,auVar57,4,1);
            fVar50 = auVar67._0_4_ * auVar67._0_4_;
            fVar51 = auVar67._4_4_ * auVar67._4_4_;
            fVar52 = fVar50 + fVar51 + auVar57._0_4_ * auVar57._0_4_;
            uVar37 = CONCAT44(fVar50 + fVar51 + auVar57._0_4_ * auVar57._0_4_,fVar52);
            uVar45 = NEON_frsqrts(uVar45,CONCAT44(fVar65 * fVar65,fVar58 * fVar58),4);
            iVar66 = -(uint)(fVar52 <= 0.0);
            fVar50 = (float)uVar45 * fVar58 * fVar43;
            iVar40 = -(uint)(fVar43 <= 0.0);
            uVar45 = NEON_frsqrte(uVar37,4);
            fVar43 = (float)uVar45;
            fVar51 = (float)((ulong)uVar45 >> 0x20);
            uVar45 = NEON_frsqrts(uVar37,CONCAT44(fVar51 * fVar51,fVar43 * fVar43),4);
            fVar43 = fVar43 * (float)uVar45;
            fVar51 = fVar51 * (float)((ulong)uVar45 >> 0x20);
            uVar37 = NEON_frsqrts(uVar37,CONCAT44(fVar51 * fVar51,fVar43 * fVar43),4);
            fVar52 = (float)uVar37 * fVar43 * fVar52;
            fVar52 = ((float)CONCAT13((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                                      CONCAT12((byte)((uint)fVar50 >> 0x10) &
                                               ~(byte)((uint)iVar40 >> 0x10),
                                               CONCAT11((byte)((uint)fVar50 >> 8) &
                                                        ~(byte)((uint)iVar40 >> 8),
                                                        SUB41(fVar50,0) & ~(byte)iVar40))) +
                     (float)CONCAT13((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                                     CONCAT12((byte)((uint)fVar52 >> 0x10) &
                                              ~(byte)((uint)iVar66 >> 0x10),
                                              CONCAT11((byte)((uint)fVar52 >> 8) &
                                                       ~(byte)((uint)iVar66 >> 8),
                                                       SUB41(fVar52,0) & ~(byte)iVar66)))) * 0.5;
            if (fVar31 < fVar52) {
              uStack_238 = auVar62._8_8_;
              uStack_268 = auVar38._8_8_;
              local_270 = auVar38._0_8_;
              uStack_258 = auVar46._8_8_;
              local_260 = auVar46._0_8_;
              local_250 = auVar35._0_4_;
              fStack_24c = auVar35._4_4_;
              fStack_248 = auVar35._8_4_;
              fStack_244 = auVar35._12_4_;
              local_240 = auVar62._0_4_;
              fStack_23c = auVar62._4_4_;
              fVar31 = fVar52;
            }
            local_218 = 0;
            if ((local_220 != (int *)0x0) && (-1 < (int)local_214)) {
              FUN_032cf244(puVar9,local_220,4,local_214 & 0x3fffffff);
            }
            uVar32 = uVar32 + 1;
            uVar16 = uVar1;
          } while (uVar1 != uVar11 - 1);
          *(undefined8 *)(*local_200 + 8) = uStack_268;
          *(undefined8 *)*local_200 = local_270;
          auVar33._8_4_ = fStack_248;
          auVar33._0_8_ = CONCAT44(fStack_24c,local_250);
          auVar33._12_4_ = fStack_244;
          *(undefined8 *)(local_200[1] + 8) = uStack_258;
          *(undefined8 *)local_200[1] = local_260;
          *(long *)(local_200[2] + 8) = auVar33._8_8_;
          *(ulong *)local_200[2] = CONCAT44(fStack_24c,local_250);
          auVar26._8_8_ = uStack_238;
          auVar26._0_8_ = CONCAT44(fStack_23c,local_240);
          *(undefined8 *)(local_200[3] + 8) = uStack_238;
          *(ulong *)local_200[3] = CONCAT44(fStack_23c,local_240);
        }
        auVar38 = *local_200;
        auVar46 = local_200[1];
        fVar43 = auVar33._4_4_;
        fVar65 = auVar26._4_4_;
        fVar31 = auVar33._0_4_;
        fVar51 = auVar26._0_4_;
        fVar50 = auVar38._4_4_;
        fVar71 = auVar46._4_4_;
        auVar35 = *pauVar2;
        auVar62 = NEON_ext(auVar35,auVar35,8,1);
        auVar81 = NEON_ext(auVar38,auVar38,8,1);
        fVar52 = auVar38._0_4_;
        fVar58 = auVar46._0_4_;
        uVar37 = NEON_ext(auVar35._0_8_,auVar62._0_8_,4,1);
        uVar45 = NEON_ext(auVar38._0_8_,auVar81._0_8_,4,1);
        auVar67 = NEON_ext(auVar46,auVar46,8,1);
        uVar55 = NEON_ext(auVar46._0_8_,auVar67._0_8_,4,1);
        auVar75 = NEON_ext(auVar33,auVar33,4,1);
        auVar82 = NEON_ext(auVar26,auVar26,4,1);
        auVar102 = NEON_ext(auVar33,auVar33,8,1);
        fVar59 = (float)uVar37;
        fVar91 = (float)((ulong)uVar37 >> 0x20);
        fVar60 = auVar38._8_4_;
        fVar94 = auVar35._0_4_;
        fVar95 = auVar35._4_4_;
        lVar13 = param_1[10];
        fVar53 = auVar35._8_4_;
        fVar41 = auVar35._12_4_;
        fVar30 = auVar46._8_4_;
        fVar23 = auVar33._8_4_;
        fVar85 = auVar26._8_4_;
        auVar62 = NEON_ext(auVar26,auVar26,8,1);
        auVar86._0_4_ = fVar52 * fVar59 - fVar94 * (float)uVar45;
        auVar86._4_4_ = fVar50 * fVar91 - fVar95 * (float)((ulong)uVar45 >> 0x20);
        auVar86._8_4_ = fVar60 * fVar94 - fVar53 * fVar52;
        auVar86._12_4_ = auVar38._12_4_ * fVar95 - fVar41 * fVar50;
        auVar89._0_4_ = fVar58 * fVar59 - fVar94 * (float)uVar55;
        auVar89._4_4_ = fVar71 * fVar91 - fVar95 * (float)((ulong)uVar55 >> 0x20);
        auVar89._8_4_ = fVar30 * fVar94 - fVar53 * fVar58;
        auVar89._12_4_ = auVar46._12_4_ * fVar95 - fVar41 * fVar71;
        auVar76._0_4_ = fVar31 * fVar59 - auVar75._0_4_ * fVar94;
        auVar76._4_4_ = fVar43 * fVar91 - auVar75._4_4_ * fVar95;
        auVar76._8_4_ = fVar23 * fVar94 - fVar31 * fVar53;
        auVar76._12_4_ = auVar33._12_4_ * fVar95 - fVar43 * fVar41;
        auVar46 = NEON_ext(auVar86,auVar86,4,1);
        auVar83._0_4_ = fVar51 * fVar59 - auVar82._0_4_ * fVar94;
        auVar83._4_4_ = fVar65 * fVar91 - auVar82._4_4_ * fVar95;
        auVar83._8_4_ = fVar85 * fVar94 - fVar51 * fVar53;
        auVar83._12_4_ = auVar26._12_4_ * fVar95 - fVar65 * fVar41;
        auVar75 = NEON_ext(auVar83,auVar83,4,1);
        fVar91 = auVar46._0_4_ * auVar46._0_4_;
        fVar94 = auVar46._4_4_ * auVar46._4_4_;
        auVar46 = NEON_ext(auVar89,auVar89,4,1);
        auVar38 = NEON_ext(auVar76,auVar76,4,1);
        fVar95 = auVar46._0_4_ * auVar46._0_4_;
        fVar98 = auVar46._4_4_ * auVar46._4_4_;
        fVar99 = auVar38._0_4_ * auVar38._0_4_;
        fVar103 = auVar38._4_4_ * auVar38._4_4_;
        fVar104 = auVar75._0_4_ * auVar75._0_4_;
        fVar107 = auVar75._4_4_ * auVar75._4_4_;
        fVar53 = (float)param_1[0xc];
        fVar59 = (float)((ulong)param_1[0xc] >> 0x20);
        uVar55 = CONCAT44(fVar59 * (fVar91 + fVar94 + auVar86._0_4_ * auVar86._0_4_) + fVar49,
                          fVar53 * (fVar91 + fVar94 + auVar86._0_4_ * auVar86._0_4_) + fVar42);
        uVar61 = NEON_frecpe(uVar55,4);
        uVar88 = CONCAT44(fVar59 * (fVar95 + fVar98 + auVar89._0_4_ * auVar89._0_4_) + fVar49,
                          fVar53 * (fVar95 + fVar98 + auVar89._0_4_ * auVar89._0_4_) + fVar42);
        uVar93 = NEON_frecpe(uVar88,4);
        uVar45 = CONCAT44(fVar59 * (auVar83._0_4_ * auVar83._0_4_ + fVar104 + fVar107) + fVar49,
                          fVar53 * (auVar83._0_4_ * auVar83._0_4_ + fVar104 + fVar107) + fVar42);
        uVar101 = NEON_frecpe(uVar45,4);
        uVar105 = NEON_frecps(uVar55,uVar61,4);
        uVar37 = CONCAT44(fVar59 * (auVar76._0_4_ * auVar76._0_4_ + fVar99 + fVar103) + fVar49,
                          fVar53 * (auVar76._0_4_ * auVar76._0_4_ + fVar99 + fVar103) + fVar42);
        uVar97 = NEON_frecpe(uVar37,4);
        fVar90 = (float)uVar61 * (float)uVar105;
        uVar106 = NEON_frecps(uVar88,uVar93,4);
        uVar105 = NEON_frecps(uVar55,CONCAT44((float)((ulong)uVar61 >> 0x20) *
                                              (float)((ulong)uVar105 >> 0x20),fVar90),4);
        fVar92 = (float)uVar93 * (float)uVar106;
        uVar55 = NEON_frecps(uVar37,uVar97,4);
        fVar96 = (float)uVar97 * (float)uVar55;
        uVar61 = NEON_frecps(uVar45,uVar101,4);
        uVar55 = NEON_frecps(uVar37,CONCAT44((float)((ulong)uVar97 >> 0x20) *
                                             (float)((ulong)uVar55 >> 0x20),fVar96),4);
        fVar100 = (float)uVar101 * (float)uVar61;
        uVar61 = NEON_frecps(uVar45,CONCAT44((float)((ulong)uVar101 >> 0x20) *
                                             (float)((ulong)uVar61 >> 0x20),fVar100),4);
        uVar88 = NEON_frecps(uVar88,CONCAT44((float)((ulong)uVar93 >> 0x20) *
                                             (float)((ulong)uVar106 >> 0x20),fVar92),4);
        auVar46 = NEON_fmov(0x3e800000,4);
        fVar103 = (fVar51 + fVar31 + fVar52 + fVar58) * auVar46._0_4_;
        fVar104 = (fVar65 + fVar43 + fVar50 + fVar71) * auVar46._4_4_;
        fVar107 = (fVar85 + fVar23 + fVar60 + fVar30) * auVar46._8_4_;
        fVar53 = (fVar103 - fVar52) * (fVar103 - fVar52);
        fVar59 = (fVar104 - fVar50) * (fVar104 - fVar50);
        fVar60 = (fVar107 - fVar60) * (fVar107 - fVar60);
        fVar95 = fVar60 + fVar53 + fVar59;
        uVar37 = CONCAT44(fVar60 + fVar53 + fVar59,fVar95);
        uVar45 = NEON_frsqrte(uVar37,4);
        fVar60 = (fVar103 - fVar58) * (fVar103 - fVar58);
        fVar98 = (fVar104 - fVar71) * (fVar104 - fVar71);
        fVar99 = (fVar107 - fVar30) * (fVar107 - fVar30);
        fVar84 = (float)uVar45;
        fVar87 = (float)((ulong)uVar45 >> 0x20);
        uVar45 = NEON_frsqrts(uVar37,CONCAT44(fVar87 * fVar87,fVar84 * fVar84),4);
        fVar59 = (fVar103 - fVar31) * (fVar103 - fVar31);
        fVar91 = (fVar104 - fVar43) * (fVar104 - fVar43);
        fVar94 = (fVar107 - fVar23) * (fVar107 - fVar23);
        fVar84 = fVar84 * (float)uVar45;
        fVar87 = fVar87 * (float)((ulong)uVar45 >> 0x20);
        fVar23 = (fVar103 - fVar51) * (fVar103 - fVar51);
        fVar53 = (fVar104 - fVar65) * (fVar104 - fVar65);
        fVar30 = (fVar107 - fVar85) * (fVar107 - fVar85);
        uVar37 = NEON_frsqrts(uVar37,CONCAT44(fVar87 * fVar87,fVar84 * fVar84),4);
        iVar72 = -(uint)(fVar95 <= 0.0);
        fVar103 = fVar95 * (float)uVar37 * fVar84 + 0.0;
        fVar95 = fVar99 + fVar60 + fVar98;
        uVar37 = CONCAT44(fVar99 + fVar60 + fVar98,fVar95);
        uVar45 = NEON_frsqrte(uVar37,4);
        fVar85 = (float)uVar45;
        fVar60 = (float)((ulong)uVar45 >> 0x20);
        uVar45 = NEON_frsqrts(uVar37,CONCAT44(fVar60 * fVar60,fVar85 * fVar85),4);
        fVar85 = fVar85 * (float)uVar45;
        fVar60 = fVar60 * (float)((ulong)uVar45 >> 0x20);
        uVar37 = NEON_frsqrts(uVar37,CONCAT44(fVar60 * fVar60,fVar85 * fVar85),4);
        iVar73 = -(uint)(fVar95 <= 0.0);
        fVar95 = fVar95 * (float)uVar37 * fVar85;
        fVar60 = fVar94 + fVar59 + fVar91;
        uVar37 = CONCAT44(fVar94 + fVar59 + fVar91,fVar60);
        uVar45 = NEON_frsqrte(uVar37,4);
        fVar85 = (float)uVar45;
        fVar59 = (float)((ulong)uVar45 >> 0x20);
        uVar45 = NEON_frsqrts(uVar37,CONCAT44(fVar59 * fVar59,fVar85 * fVar85),4);
        fVar85 = fVar85 * (float)uVar45;
        fVar59 = fVar59 * (float)((ulong)uVar45 >> 0x20);
        uVar37 = NEON_frsqrts(uVar37,CONCAT44(fVar59 * fVar59,fVar85 * fVar85),4);
        iVar54 = -(uint)(fVar60 <= 0.0);
        fVar60 = fVar60 * (float)uVar37 * fVar85;
        fVar85 = fVar30 + fVar23 + fVar53;
        uVar37 = CONCAT44(fVar30 + fVar23 + fVar53,fVar85);
        uVar45 = NEON_frsqrte(uVar37,4);
        fVar23 = (float)uVar45;
        fVar53 = (float)((ulong)uVar45 >> 0x20);
        uVar45 = NEON_frsqrts(uVar37,CONCAT44(fVar53 * fVar53,fVar23 * fVar23),4);
        fVar23 = fVar23 * (float)uVar45;
        fVar53 = fVar53 * (float)((ulong)uVar45 >> 0x20);
        uVar37 = NEON_frsqrts(uVar37,CONCAT44(fVar53 * fVar53,fVar23 * fVar23),4);
        iVar44 = -(uint)(fVar85 <= 0.0);
        fVar85 = fVar85 * (float)uVar37 * fVar23;
        auVar34._0_4_ = *(float *)(param_1 + 0xe);
        auVar39._0_4_ = *(undefined4 *)((long)param_1 + 0x74);
        auVar34._4_4_ = *(float *)(param_1 + 0xf);
        auVar34._8_8_ = 0;
        auVar39._8_8_ = auVar35._8_8_;
        auVar39._4_4_ = *(undefined4 *)((long)param_1 + 0x7c);
        iVar66 = *(int *)(param_1 + 0xb);
        iVar40 = iVar66 + 1;
        auVar27._0_4_ = auVar34._0_4_ - fVar41;
        auVar27._4_4_ = auVar34._4_4_ - fVar41;
        auVar27._8_8_ = 0;
        if ((int)(*(uint *)((long)param_1 + 0x5c) & 0x3fffffff) <= iVar66) {
          lVar13 = FUN_0310215c(auVar27,auVar34,auVar39,puVar9,iVar40,lVar13,iVar66,lVar12);
          param_1[10] = lVar13;
          iVar66 = *(int *)(param_1 + 0xb);
        }
        puVar14 = (undefined8 *)(lVar13 + (long)iVar66 * 0x50);
        lVar17 = lVar17 + 1;
        *(float *)(puVar14 + 6) = fVar90 * (float)uVar105;
        *(float *)((long)puVar14 + 0x34) = fVar92 * (float)uVar88;
        *(float *)(puVar14 + 7) = fVar96 * (float)uVar55;
        *(float *)((long)puVar14 + 0x3c) = fVar100 * (float)uVar61;
        puVar14[1] = CONCAT44(fVar51,fVar31);
        *puVar14 = CONCAT44(fVar58,fVar52);
        puVar14[3] = CONCAT44(fVar65,fVar43);
        puVar14[2] = CONCAT44(fVar71,fVar50);
        *(float *)(puVar14 + 8) =
             ((float)CONCAT13((byte)((uint)fVar103 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18),
                              CONCAT12((byte)((uint)fVar103 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10)
                                       ,CONCAT11((byte)((uint)fVar103 >> 8) &
                                                 ~(byte)((uint)iVar72 >> 8),
                                                 SUB41(fVar103,0) & ~(byte)iVar72))) +
              (float)CONCAT13((byte)((uint)fVar95 >> 0x18) & ~(byte)((uint)iVar73 >> 0x18),
                              CONCAT12((byte)((uint)fVar95 >> 0x10) & ~(byte)((uint)iVar73 >> 0x10),
                                       CONCAT11((byte)((uint)fVar95 >> 8) &
                                                ~(byte)((uint)iVar73 >> 8),
                                                SUB41(fVar95,0) & ~(byte)iVar73))) +
              (float)CONCAT13((byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18),
                              CONCAT12((byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10),
                                       CONCAT11((byte)((uint)fVar60 >> 8) &
                                                ~(byte)((uint)iVar54 >> 8),
                                                SUB41(fVar60,0) & ~(byte)iVar54))) +
             (float)CONCAT13((byte)((uint)fVar85 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18),
                             CONCAT12((byte)((uint)fVar85 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10),
                                      CONCAT11((byte)((uint)fVar85 >> 8) &
                                               ~(byte)((uint)iVar44 >> 8),
                                               SUB41(fVar85,0) & ~(byte)iVar44)))) * 0.5;
        *(float *)((long)puVar14 + 0x44) = auVar27._0_4_;
        puVar14[5] = CONCAT44(auVar62._0_4_,auVar102._0_4_);
        puVar14[4] = CONCAT44(auVar67._0_4_,auVar81._0_4_);
        *(int *)(param_1 + 0xb) = iVar40;
      } while (lVar17 != 4);
      auVar6._8_4_ = iStack_e8;
      auVar6._0_8_ = local_f0;
      auVar6._12_4_ = uStack_e4;
      auVar7._8_4_ = local_d8;
      auVar7._0_8_ = uStack_e0;
      auVar7._12_4_ = local_d4;
      uVar19 = SUB84(local_f0,0);
      uVar21 = (undefined4)uStack_e0;
      uVar32 = (ulong)local_f0 >> 0x20;
      uVar16 = (ulong)uStack_e0 >> 0x20;
      auVar35 = NEON_ext(auVar6,auVar6,8,1);
      auVar8._4_12_ = auStack_cc;
      auVar8._0_4_ = uStack_d0;
      auVar46 = NEON_ext(auVar7,auVar7,8,1);
      uVar37 = CONCAT44(auStack_c0._0_4_,uStack_d0);
      uVar20 = auStack_cc._0_4_;
      uVar22 = auStack_c0._4_4_;
      auVar62 = NEON_ext(auVar8,auVar8,8,1);
      lVar17 = param_1[8];
      auVar38 = NEON_ext(auStack_c0,auStack_c0,8,1);
      iVar66 = *(int *)(param_1 + 9);
      iVar40 = iVar66 + 1;
      if ((int)(*(uint *)((long)param_1 + 0x4c) & 0x3fffffff) <= iVar66) {
        lVar17 = FUN_031020d4(puVar9,iVar40,lVar17,iVar66,(long)param_1 + 0x4c);
        param_1[8] = lVar17;
        iVar66 = *(int *)(param_1 + 9);
      }
      puVar14 = (undefined8 *)(lVar17 + (long)iVar66 * 0x30);
      puVar14[1] = uVar37;
      *puVar14 = CONCAT44(uVar21,uVar19);
      puVar14[3] = CONCAT44(uVar22,uVar20);
      puVar14[2] = CONCAT44((int)uVar16,(int)uVar32);
      puVar14[5] = CONCAT44(auVar38._0_4_,auVar62._0_4_);
      puVar14[4] = CONCAT44(auVar46._0_4_,auVar35._0_4_);
      local_98 = local_98 + 4;
      *(int *)(param_1 + 9) = iVar40;
    } while (local_98 < (int)(iVar10 + 3U & 0xfffffffc));
  }
  lVar12 = uStack_1f8;
  uVar11 = uStack_1f8._4_4_;
  uStack_1f8 = (ulong)uStack_1f8._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_200 != (undefined1 (*) [16])0x0)) {
    FUN_032cf244(puVar9,local_200,0x10,uVar11 & 0x3fffffff);
  }
  if (piVar18 == (int *)0x0) {
    return;
  }
LAB_03102094:
  FUN_032d647c(piVar18);
  return;
}


