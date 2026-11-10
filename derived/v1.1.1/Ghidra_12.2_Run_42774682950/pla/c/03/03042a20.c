/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03042a20; name: FUN_03042a20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_03042a20(long param_1,long *param_2,float *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined **ppuVar13;
  long lVar14;
  ulong uVar15;
  undefined **ppuVar16;
  float *pfVar17;
  uint uVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined8 uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  undefined8 uVar25;
  float fVar26;
  long lVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar32;
  undefined1 auVar31 [16];
  float fVar33;
  float fVar34;
  int iVar35;
  float fVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  float fVar44;
  undefined8 uVar39;
  undefined1 auVar40 [12];
  int iVar43;
  undefined1 auVar41 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar42 [16];
  float fVar49;
  float fVar52;
  int iVar53;
  int iVar54;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined8 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float local_ab0;
  float fStack_aac;
  float local_aa0;
  float fStack_a9c;
  float fStack_a98;
  float fStack_a94;
  undefined8 local_a00;
  undefined **local_9e0;
  uint local_9d8;
  undefined4 local_9d4;
  undefined8 local_9d0;
  ulong uStack_9c8;
  undefined **local_9c0;
  float fStack_9b8;
  float fStack_9b4;
  float *local_9b0;
  uint local_9a8;
  uint local_9a4;
  float local_9a0 [128];
  undefined8 local_7a0;
  long local_790;
  undefined **local_788;
  undefined2 local_780;
  undefined4 local_77c;
  ulong uStack_778;
  undefined3 local_770;
  long local_768;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 local_730;
  undefined8 local_728;
  long local_720;
  undefined4 local_718;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  float local_6f0;
  float fStack_6ec;
  float fStack_6e8;
  float fStack_6e4;
  undefined *local_6e0;
  undefined8 local_6d8;
  undefined8 local_6d0;
  undefined1 local_6c8;
  undefined **local_6c0;
  float local_6b8;
  long local_6b0;
  float local_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  undefined8 local_688;
  undefined8 local_680;
  undefined8 local_678;
  float local_670;
  float fStack_66c;
  float fStack_668;
  float fStack_664;
  undefined **local_660;
  byte local_658;
  int local_654;
  undefined8 local_650;
  undefined1 local_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined4 local_620;
  undefined8 local_618;
  undefined4 local_610;
  undefined4 local_608;
  undefined1 local_604;
  undefined2 local_600;
  undefined4 local_5fc;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined4 local_5e8;
  undefined4 local_5e0;
  undefined1 local_5dc;
  undefined2 local_5d8;
  undefined4 local_5d4;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined **local_5c0;
  float local_5b8;
  undefined8 local_5b0;
  long local_598;
  undefined **local_590;
  undefined8 local_588;
  undefined *local_580 [162];
  
  local_590 = local_580;
  local_588 = 0x8000001000000000;
  lVar10 = tpidr_el0;
  if (*(long *)(lVar10 + 0x38d490) == 0) {
    lVar27 = FUN_0333d16c(0,1);
    *(long *)(lVar10 + 0x38d490) = lVar27;
    local_598 = *(long *)(lVar27 + 0x10);
  }
  else {
    local_598 = *(long *)(*(long *)(lVar10 + 0x38d490) + 0x10);
  }
  if (local_598 != 0) {
    FUN_032d5af0(local_598,"TthknpDeflectedLinearCast",0x19);
  }
  uVar28 = *(undefined8 *)(param_3 + 0x14);
  uVar25 = *(undefined8 *)(param_1 + 0x898);
  local_660 = &PTR_LAB_042aff48;
  local_620 = 0x7f7fffee;
  local_658 = 0;
  local_654 = 0;
  local_648 = 0;
  uStack_638 = 0;
  local_640 = 0;
  uStack_628 = 0;
  local_630 = 0;
  local_650 = 0x5f7ffff05f7ffff0;
  local_618 = 0xffffffffffffffff;
  local_608 = 0xffffffff;
  local_610 = 0xffffff;
  local_604 = 0xf;
  local_600 = 0xffff;
  local_5fc = 0;
  local_5f0 = 0xffffffffffffffff;
  uStack_5f8 = 0;
  uStack_5f8._4_4_ = 0;
  local_5e0 = 0xffffffff;
  local_5e8 = 0xffffff;
  local_5dc = 0xf;
  local_5d8 = 0xffff;
  local_5d4 = 0;
  local_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5d0._4_4_ = 0;
  (*(code *)PTR_FUN_042aff60)(&local_660);
  uVar39 = uStack_5d0;
  uVar37 = uStack_5f8;
  puVar4 = PTR_PTR_0434a080;
  local_5c0 = local_590;
  local_658 = local_658 | 0x20;
  fStack_668 = 0.0;
  fStack_664 = 0.0;
  local_670 = 0.0;
  fStack_66c = 0.0;
  local_660 = &PTR_LAB_042b24f0;
  local_5b8 = (float)local_588;
  local_678 = *(undefined8 *)(param_3 + 0xe);
  local_688 = *(undefined8 *)(param_3 + 10);
  local_698 = *(undefined8 *)(param_3 + 6);
  local_6a0 = *(undefined8 *)(param_3 + 4);
  local_690 = *(undefined8 *)(param_3 + 8);
  local_680 = *(undefined8 *)(param_3 + 0xc);
  fVar67 = (float)*(undefined8 *)(param_3 + 0x12);
  fVar68 = (float)((ulong)*(undefined8 *)(param_3 + 0x12) >> 0x20);
  fVar65 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar66 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  local_6b0 = param_2[1];
  local_6a8 = param_3[0x1a];
  local_6e0 = &DAT_042b25b0;
  local_6c8 = 4;
  local_6d0 = 1;
  local_6d8 = 0xffffffff;
  local_a00 = uVar28;
  local_5b0 = uVar25;
  if (1.1920929e-07 < (float)uVar28) {
    fVar26 = param_3[0x16];
    if (0 < (int)fVar26) {
      iVar23 = 0;
      fVar30 = fVar65 * fVar65 + fVar66 * fVar66 + fVar67 * fVar67;
      fVar32 = fVar65 * fVar65 + fVar66 * fVar66 + fVar67 * fVar67;
      uVar39 = CONCAT44(fVar32,fVar30);
      uVar37 = NEON_frsqrte(uVar39,4);
      fVar33 = (float)uVar37;
      fVar34 = (float)((ulong)uVar37 >> 0x20);
      uVar37 = NEON_frsqrts(uVar39,CONCAT44(fVar34 * fVar34,fVar33 * fVar33),4);
      fVar33 = fVar33 * (float)uVar37;
      fVar34 = fVar34 * (float)((ulong)uVar37 >> 0x20);
      auVar64._0_8_ = CONCAT44(-(uint)(fVar32 < 1.4210855e-14),-(uint)(fVar30 < 1.4210855e-14));
      iVar35 = -(uint)(fVar30 <= 0.0);
      iVar43 = -(uint)(fVar32 <= 0.0);
      uVar37 = NEON_frsqrts(uVar39,CONCAT44(fVar34 * fVar34,fVar33 * fVar33),4);
      fVar33 = fVar33 * (float)uVar37;
      fVar34 = fVar34 * (float)((ulong)uVar37 >> 0x20);
      auVar64._8_8_ = auVar64._0_8_;
      fVar30 = (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                               CONCAT12((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar33 >> 8) &
                                                  ~(byte)((uint)iVar35 >> 8),
                                                  SUB41(fVar33,0) & ~(byte)iVar35)));
      auVar56._0_4_ = fVar65 * fVar30;
      fVar33 = (float)(CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                                CONCAT16((byte)((uint)fVar34 >> 0x10) &
                                         ~(byte)((uint)iVar43 >> 0x10),
                                         CONCAT15((byte)((uint)fVar34 >> 8) &
                                                  ~(byte)((uint)iVar43 >> 8),
                                                  CONCAT14(SUB41(fVar34,0) & ~(byte)iVar43,fVar30)))
                               ) >> 0x20);
      auVar56._4_4_ = fVar66 * fVar33;
      auVar56._8_4_ = fVar67 * fVar30;
      auVar56._12_4_ = fVar68 * fVar33;
      auVar31._8_4_ = (int)_UNK_03889a88;
      auVar31._0_8_ = _DAT_03889a80;
      auVar31._12_4_ = (int)((ulong)_UNK_03889a88 >> 0x20);
      auVar56 = auVar56 ^ (auVar56 ^ auVar31) & auVar64;
      auVar31 = NEON_ext(auVar56,auVar56,8,1);
      uVar37 = NEON_ext(auVar56._0_8_,auVar31._0_8_,4,1);
      uVar24 = 0;
      do {
        fVar33 = *param_3 + local_670;
        fVar32 = param_3[1] + fStack_66c;
        fVar34 = param_3[2] + fStack_668;
        fVar30 = param_3[0x19];
        uVar39 = uVar28;
        if (0.0 < fVar30) {
          auVar2._4_4_ = fVar66;
          auVar2._0_4_ = fVar65;
          auVar2._8_4_ = fVar67;
          auVar2._12_4_ = fVar68;
          auVar3._4_4_ = fVar66;
          auVar3._0_4_ = fVar65;
          auVar3._8_4_ = fVar67;
          auVar3._12_4_ = fVar68;
          auVar31 = NEON_ext(auVar2,auVar3,4,1);
          local_aa0 = auVar56._0_4_;
          fStack_a9c = auVar56._4_4_;
          fStack_a98 = auVar56._8_4_;
          fStack_a94 = auVar56._12_4_;
          local_ab0 = (float)uVar37;
          fStack_aac = (float)((ulong)uVar37 >> 0x20);
          auVar41._0_4_ = local_aa0 * auVar31._0_4_ - local_ab0 * fVar65;
          auVar41._4_4_ = fStack_a9c * auVar31._4_4_ - fStack_aac * fVar66;
          auVar41._8_4_ = fStack_a98 * fVar65 - local_aa0 * fVar67;
          auVar41._12_4_ = fStack_a94 * fVar66 - fStack_a9c * fVar68;
          auVar31 = NEON_ext(auVar41,auVar41,4,1);
          fVar49 = auVar31._0_4_ * auVar31._0_4_;
          fVar52 = auVar31._4_4_ * auVar31._4_4_;
          fVar36 = auVar41._0_4_ * auVar41._0_4_ + fVar49 + fVar52;
          fVar52 = auVar41._0_4_ * auVar41._0_4_ + fVar49 + fVar52;
          uVar38 = CONCAT44(fVar52,fVar36);
          uVar55 = NEON_frsqrte(uVar38,4);
          fVar49 = (float)uVar55;
          fVar44 = (float)((ulong)uVar55 >> 0x20);
          iVar35 = -(uint)(fVar36 <= 0.0);
          iVar43 = -(uint)(fVar52 <= 0.0);
          uVar38 = NEON_frsqrts(uVar38,CONCAT44(fVar44 * fVar44,fVar49 * fVar49),4);
          fVar49 = fVar49 * (float)uVar38;
          fVar44 = fVar44 * (float)((ulong)uVar38 >> 0x20);
          fVar36 = (float)CONCAT13((byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                                   CONCAT12((byte)((uint)fVar49 >> 0x10) &
                                            ~(byte)((uint)iVar35 >> 0x10),
                                            CONCAT11((byte)((uint)fVar49 >> 8) &
                                                     ~(byte)((uint)iVar35 >> 8),
                                                     SUB41(fVar49,0) & ~(byte)iVar35)));
          if (fVar36 != 0.0) {
            uVar39 = NEON_fmin(CONCAT44((float)(CONCAT17((byte)((uint)fVar44 >> 0x18) &
                                                         ~(byte)((uint)iVar43 >> 0x18),
                                                         CONCAT16((byte)((uint)fVar44 >> 0x10) &
                                                                  ~(byte)((uint)iVar43 >> 0x10),
                                                                  CONCAT15((byte)((uint)fVar44 >> 8)
                                                                           & ~(byte)((uint)iVar43 >>
                                                                                    8),
                                                                           CONCAT14(SUB41(fVar44,0)
                                                                                    & ~(byte)iVar43,
                                                                                    fVar36)))) >>
                                               0x20) * fVar30,fVar36 * fVar30),local_a00,4);
          }
        }
        auVar31 = ZEXT816(0x3f800000);
        fVar36 = (float)uVar39;
        fVar49 = fVar65 * fVar36;
        fVar44 = (float)((ulong)uVar39 >> 0x20);
        fVar45 = fVar66 * fVar44;
        fVar47 = fVar67 * fVar36;
        fVar44 = fVar68 * fVar44;
        local_768 = param_2[5];
        fVar52 = (fVar33 + fVar49) - fVar33;
        fVar46 = (fVar32 + fVar45) - fVar32;
        fVar48 = (fVar34 + fVar47) - fVar34;
        iVar35 = -(uint)(fVar52 == 0.0);
        iVar43 = -(uint)(fVar46 == 0.0);
        iVar53 = -(uint)(fVar48 == 0.0);
        iVar54 = -(uint)(auVar31._0_4_ == 0.0);
        fVar52 = (float)CONCAT13((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                                 CONCAT12((byte)((uint)fVar52 >> 0x10) &
                                          ~(byte)((uint)iVar35 >> 0x10),
                                          CONCAT11((byte)((uint)fVar52 >> 8) &
                                                   ~(byte)((uint)iVar35 >> 8),
                                                   SUB41(fVar52,0) & ~(byte)iVar35)));
        auVar40._0_8_ =
             CONCAT17((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                      CONCAT16((byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10),
                               CONCAT15((byte)((uint)fVar46 >> 8) & ~(byte)((uint)iVar43 >> 8),
                                        CONCAT14(SUB41(fVar46,0) & ~(byte)iVar43,fVar52))));
        auVar40[8] = SUB41(fVar48,0) & ~(byte)iVar53;
        auVar40[9] = (byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar53 >> 8);
        auVar40[10] = (byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10);
        auVar40[0xb] = (byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18);
        auVar42._12_2_ = 0;
        auVar42._0_12_ = auVar40;
        auVar42[0xe] = auVar31[2] & ~(byte)((uint)iVar54 >> 0x10);
        auVar42[0xf] = auVar31[3] & ~(byte)((uint)iVar54 >> 0x18);
        auVar31 = NEON_frecpe(auVar42,4);
        iVar35 = -(uint)(fVar52 == 0.0);
        iVar43 = -(uint)((float)((ulong)auVar40._0_8_ >> 0x20) == 0.0);
        iVar53 = -(uint)(auVar40._8_4_ == 0.0);
        iVar54 = -(uint)(auVar42._12_4_ == 0.0);
        auVar50[0] = ~(byte)iVar35;
        auVar50[1] = ~(byte)((uint)iVar35 >> 8);
        auVar50[2] = ~(byte)((uint)iVar35 >> 0x10);
        auVar50[3] = ~(byte)((uint)iVar35 >> 0x18);
        auVar50[4] = ~(byte)iVar43;
        auVar50[5] = ~(byte)((uint)iVar43 >> 8);
        auVar50[6] = ~(byte)((uint)iVar43 >> 0x10);
        auVar50[7] = ~(byte)((uint)iVar43 >> 0x18);
        auVar50[8] = ~(byte)iVar53;
        auVar50[9] = ~(byte)((uint)iVar53 >> 8);
        auVar50[10] = ~(byte)((uint)iVar53 >> 0x10);
        auVar50[0xb] = ~(byte)((uint)iVar53 >> 0x18);
        auVar50[0xc] = ~(byte)iVar54;
        auVar50[0xd] = ~(byte)((uint)iVar54 >> 8);
        auVar50[0xe] = ~(byte)((uint)iVar54 >> 0x10);
        auVar50[0xf] = ~(byte)((uint)iVar54 >> 0x18);
        auVar64 = NEON_frecps(auVar42,auVar31,4);
        auVar57._0_4_ = auVar31._0_4_ * auVar64._0_4_;
        auVar57._4_4_ = auVar31._4_4_ * auVar64._4_4_;
        auVar57._8_4_ = auVar31._8_4_ * auVar64._8_4_;
        auVar57._12_4_ = auVar31._12_4_ * auVar64._12_4_;
        auVar31 = NEON_frecps(auVar42,auVar57,4);
        auVar58._0_4_ = auVar57._0_4_ * auVar31._0_4_;
        auVar58._4_4_ = auVar57._4_4_ * auVar31._4_4_;
        auVar58._8_4_ = auVar57._8_4_ * auVar31._8_4_;
        auVar58._12_4_ = auVar57._12_4_ * auVar31._12_4_;
        auVar51._8_4_ = 0x7f7fffee;
        auVar51._0_8_ = 0x7f7fffee7f7fffee;
        auVar51._12_4_ = 0x7f7fffee;
        auVar51 = auVar51 ^ (auVar51 ^ auVar58) & auVar50;
        local_710 = 0;
        uStack_708 = 0;
        local_700 = 0;
        uStack_6f8 = 0;
        local_788 = &local_6e0;
        uStack_748 = auVar42._8_8_;
        uStack_738 = auVar51._8_8_;
        uStack_740 = auVar51._0_8_;
        local_718 = 0x7f7fffee;
        uStack_758 = CONCAT44(param_3[3] + fStack_664,fVar34);
        local_760 = CONCAT44(fVar32,fVar33);
        local_790 = *param_2;
        if (local_790 == 0) {
          local_790 = *(long *)(param_1 + 0x8e8);
        }
        local_780 = (undefined2)param_2[2];
        local_77c = (undefined4)*(ulong *)((long)param_2 + 0x14);
        uStack_778 = *(ulong *)((long)param_2 + 0x14) >> 0x20;
        local_728 = CONCAT44(0x100,(param_3[0x17] + 0.1) - param_3[0x18]);
        local_720 = param_2[7];
        local_730 = CONCAT44(param_3[0x18],0x3a83126f);
        local_770 = 0xf30801;
        local_650 = 0x5f7ffff05f7ffff0;
        local_654 = 0;
        local_648 = 0;
        local_630 = 0;
        uStack_628 = 0;
        local_640 = 0;
        uStack_638 = 0;
        local_620 = 0x7f7fffee;
        local_610 = 0xffffff;
        local_5e8 = 0xffffff;
        local_608 = 0xffffffff;
        local_618 = 0xffffffffffffffff;
        local_604 = 0xf;
        local_600 = 0xffff;
        local_5fc = 0;
        local_5f0 = 0xffffffffffffffff;
        uStack_5f8._4_4_ = 0;
        local_5e0 = 0xffffffff;
        local_5dc = 0xf;
        local_5d8 = 0xffff;
        local_5d4 = 0;
        uStack_5d0._4_4_ = 0;
        local_5c8 = 0;
        local_5c0 = local_590;
        local_5b8 = (float)local_588;
        uStack_5f8 = 0;
        uStack_5d0 = 0;
        local_750 = auVar40._0_8_;
        local_6f0 = fVar49;
        fStack_6ec = fVar45;
        fStack_6e8 = fVar47;
        fStack_6e4 = fVar44;
        if ((fVar30 == 0.0) && ((iVar23 != 0 || (*(char *)(param_3 + 0x1b) == '\0')))) {
          local_6c0 = local_590;
          local_6b8 = (float)local_588;
          if ((0 < (int)(float)local_588) &&
             ((*(undefined1 *)((long)local_590 + 0x4c) = 1, (float)local_588 != 1.4013e-45 &&
              (*(undefined1 *)((long)local_590 + 0x9c) = 1, 2 < (int)(float)local_588)))) {
            lVar27 = 0xec;
            lVar10 = 2;
            do {
              *(undefined1 *)((long)local_590 + lVar27) = 1;
              lVar10 = lVar10 + 1;
              lVar27 = lVar27 + 0x50;
            } while (lVar10 < (int)(float)local_588);
          }
          uVar1 = uStack_5f8._4_4_;
          uVar5 = uStack_5d0._4_4_;
          uVar28 = uStack_5f8;
          uStack_5f8._4_4_ = uVar1;
          uVar38 = uStack_5d0;
          uStack_5d0._4_4_ = uVar5;
          FUN_030e990c(param_1,&local_790,&local_6a0,&local_660,0);
          uVar55 = uStack_5d0;
          uVar38 = uStack_5f8;
          fVar30 = fStack_9b4;
          uVar12 = local_588;
          uVar1 = uStack_5f8._4_4_;
          uVar5 = uStack_5d0._4_4_;
joined_r0x030433f8:
          uStack_5d0 = uVar55;
          uStack_5f8 = uVar38;
          local_588 = uVar12;
          if (local_654 == 0) {
            local_670 = fVar49 + local_670;
            fStack_66c = fVar45 + fStack_66c;
            fStack_668 = fVar47 + fStack_668;
            fStack_664 = fVar44 + fStack_664;
            fStack_9b4 = fVar68;
            uVar38 = uStack_5f8;
            uVar55 = uStack_5d0;
            if (fVar36 == (float)local_a00) break;
          }
          else {
            local_588._4_4_ = (uint)(uVar12 >> 0x20);
            local_588._0_4_ = (float)uVar12;
            iVar43 = (int)(float)local_588;
            iVar35 = (int)(float)local_588 + 1;
            uVar9 = (int)(float)local_588 - uVar24;
            bVar7 = (int)(local_588._4_4_ & 0x3fffffff) <= (int)(float)local_588;
            fStack_9b4 = fVar30;
            if (bVar7) {
              uVar28 = uStack_5f8;
              uStack_5f8._4_4_ = uVar1;
              uVar38 = uStack_5d0;
              uStack_5d0._4_4_ = uVar5;
              local_590 = (undefined **)
                          FUN_03043e60(puVar4,iVar35,local_590,uVar12 & 0xffffffff,
                                       (ulong)&local_590 | 0xc);
              uVar5 = uStack_5d0._4_4_;
              uVar1 = uStack_5f8._4_4_;
            }
            uStack_5d0._4_4_ = uVar5;
            uStack_5f8._4_4_ = uVar1;
            uVar5 = uStack_5d0._4_4_;
            uVar38 = uStack_5d0;
            uVar1 = uStack_5f8._4_4_;
            uVar28 = uStack_5f8;
            ppuVar13 = local_590 + (long)(int)uVar24 * 10;
            lVar10 = (long)(int)uVar24;
            uStack_5f8._4_4_ = uVar1;
            uStack_5d0._4_4_ = uVar5;
            if ((uVar9 != 0) && (0 < (int)uVar9)) {
              uVar18 = uVar9 & 3;
              ppuVar19 = ppuVar13 + (long)(int)(uVar9 - 1) * 10 + 10;
              if (iVar43 + ~uVar24 < 3) {
                ppuVar16 = ppuVar13 + (long)(int)(uVar9 - 1) * 10;
              }
              else {
                iVar43 = (uVar24 + uVar18) - iVar43;
                do {
                  ppuVar16 = ppuVar19;
                  iVar43 = iVar43 + 4;
                  ppuVar16[6] = ppuVar16[-4];
                  ppuVar16[7] = ppuVar16[-3];
                  ppuVar16[8] = ppuVar16[-2];
                  ppuVar16[9] = ppuVar16[-1];
                  ppuVar16[2] = ppuVar16[-8];
                  ppuVar16[3] = ppuVar16[-7];
                  ppuVar16[4] = ppuVar16[-6];
                  ppuVar16[5] = ppuVar16[-5];
                  *ppuVar16 = ppuVar16[-10];
                  ppuVar16[1] = ppuVar16[-9];
                  ppuVar16[-4] = ppuVar16[-0xe];
                  ppuVar16[-3] = ppuVar16[-0xd];
                  ppuVar16[-2] = ppuVar16[-0xc];
                  ppuVar16[-1] = ppuVar16[-0xb];
                  ppuVar16[-8] = ppuVar16[-0x12];
                  ppuVar16[-7] = ppuVar16[-0x11];
                  ppuVar16[-6] = ppuVar16[-0x10];
                  ppuVar16[-5] = ppuVar16[-0xf];
                  ppuVar16[-10] = ppuVar16[-0x14];
                  ppuVar16[-9] = ppuVar16[-0x13];
                  ppuVar16[-0xe] = ppuVar16[-0x18];
                  ppuVar16[-0xd] = ppuVar16[-0x17];
                  ppuVar16[-0xc] = ppuVar16[-0x16];
                  ppuVar16[-0xb] = ppuVar16[-0x15];
                  ppuVar16[-0x12] = ppuVar16[-0x1c];
                  ppuVar16[-0x11] = ppuVar16[-0x1b];
                  ppuVar16[-0x10] = ppuVar16[-0x1a];
                  ppuVar16[-0xf] = ppuVar16[-0x19];
                  ppuVar16[-0x14] = ppuVar16[-0x1e];
                  ppuVar16[-0x13] = ppuVar16[-0x1d];
                  ppuVar19 = ppuVar16 + -0x28;
                  ppuVar16[-0x18] = ppuVar16[-0x22];
                  ppuVar16[-0x17] = ppuVar16[-0x21];
                  ppuVar16[-0x16] = ppuVar16[-0x20];
                  ppuVar16[-0x15] = ppuVar16[-0x1f];
                  ppuVar16[-0x1c] = ppuVar16[-0x26];
                  ppuVar16[-0x1b] = ppuVar16[-0x25];
                  ppuVar16[-0x1a] = ppuVar16[-0x24];
                  ppuVar16[-0x19] = ppuVar16[-0x23];
                  ppuVar16[-0x1e] = *ppuVar19;
                  ppuVar16[-0x1d] = ppuVar16[-0x27];
                } while (iVar43 != 0);
                ppuVar16 = ppuVar16 + -0x32;
              }
              for (; uVar18 != 0; uVar18 = uVar18 - 1) {
                puVar20 = ppuVar16[9];
                ppuVar19[7] = ppuVar16[7];
                ppuVar19[9] = puVar20;
                puVar20 = ppuVar16[5];
                ppuVar19[3] = ppuVar16[3];
                ppuVar19[5] = puVar20;
                ppuVar19[1] = ppuVar16[1];
                *ppuVar19 = *ppuVar16;
                puVar20 = ppuVar16[2];
                ppuVar19[4] = ppuVar16[4];
                ppuVar19[2] = puVar20;
                puVar20 = ppuVar16[6];
                ppuVar19[8] = ppuVar16[8];
                ppuVar19[6] = puVar20;
                ppuVar19 = ppuVar19 + -10;
                ppuVar16 = ppuVar16 + -10;
              }
            }
            *(undefined2 *)(local_590 + lVar10 * 10 + 7) = 0xffff;
            *(undefined4 *)((long)local_590 + lVar10 * 0x50 + 0x3c) = 0;
            local_590[lVar10 * 10 + 8] = (undefined *)0x0;
            local_588 = CONCAT44(local_588._4_4_,iVar35);
            uVar1 = uStack_5f8._4_4_;
            uStack_5f8 = uVar28;
            uVar5 = uStack_5d0._4_4_;
            uStack_5d0 = uVar38;
            uVar28 = uStack_5f8;
            uStack_5f8._4_4_ = uVar1;
            uVar38 = uStack_5d0;
            uStack_5d0._4_4_ = uVar5;
            FUN_03044334(param_3[0x18] - param_3[0x17],param_3[0x18],ppuVar13,&local_640,&local_670,
                         &local_6f0);
            uVar5 = uStack_5d0._4_4_;
            uVar1 = uStack_5f8._4_4_;
            iVar35 = *(int *)(param_4 + 9);
            lVar27 = param_4[8];
            iVar43 = iVar35;
            if ((int)(*(uint *)((long)param_4 + 0x4c) & 0x3fffffff) <= iVar35) {
              uVar28 = uStack_5f8;
              uStack_5f8._4_4_ = uVar1;
              uVar38 = uStack_5d0;
              uStack_5d0._4_4_ = uVar5;
              lVar27 = FUN_030440ac(puVar4,iVar35 + 1,lVar27,iVar35,(long)param_4 + 0x4c);
              uVar5 = uStack_5d0._4_4_;
              uVar1 = uStack_5f8._4_4_;
              iVar43 = *(int *)(param_4 + 9);
              param_4[8] = lVar27;
            }
            uStack_5d0._4_4_ = uVar5;
            uStack_5f8._4_4_ = uVar1;
            uVar5 = uStack_5d0._4_4_;
            uVar1 = uStack_5f8._4_4_;
            puVar11 = (undefined8 *)(lVar27 + (long)iVar43 * 0x90);
            *(int *)(param_4 + 9) = iVar35 + 1;
            *(undefined2 *)(puVar11 + 3) = 0xffff;
            *(undefined4 *)((long)puVar11 + 0x1c) = 0;
            puVar11[4] = 0;
            *(undefined2 *)(puVar11 + 8) = 0xffff;
            *(undefined4 *)((long)puVar11 + 0x44) = 0;
            puVar11[9] = 0;
            *(undefined4 *)(puVar11 + 1) = local_610;
            *puVar11 = local_618;
            *(undefined4 *)(puVar11 + 2) = local_608;
            *(undefined1 *)((long)puVar11 + 0x14) = local_604;
            *(undefined2 *)(puVar11 + 3) = local_600;
            *(undefined4 *)((long)puVar11 + 0x24) = uVar1;
            *(ulong *)((long)puVar11 + 0x1c) = CONCAT84(uStack_5f8,local_5fc);
            *(undefined4 *)(puVar11 + 6) = local_5e8;
            puVar11[5] = local_5f0;
            *(undefined4 *)(puVar11 + 7) = local_5e0;
            *(undefined1 *)((long)puVar11 + 0x3c) = local_5dc;
            *(undefined2 *)(puVar11 + 8) = local_5d8;
            *(undefined4 *)((long)puVar11 + 0x4c) = uVar5;
            *(ulong *)((long)puVar11 + 0x44) = CONCAT84(uStack_5d0,local_5d4);
            puVar11[0xb] = uStack_638;
            puVar11[10] = local_640;
            puVar11[0xd] = uStack_628;
            puVar11[0xc] = local_630;
            puVar11[0xf] = CONCAT44(fVar68,fVar67);
            puVar11[0xe] = CONCAT44(fVar66,fVar65);
            if ((int)uVar24 < (int)(float)local_588) {
              lVar14 = 0;
              ppuVar13 = local_590 + lVar10 * 10;
              uVar9 = 0xffffffff;
              do {
                fVar30 = fVar65 * *(float *)ppuVar13;
                fVar32 = fVar66 * *(float *)((long)ppuVar13 + 4);
                fVar34 = fVar67 * *(float *)(ppuVar13 + 1);
                fVar36 = local_670 * *(float *)ppuVar13;
                fVar49 = fStack_66c * *(float *)((long)ppuVar13 + 4);
                fVar52 = fStack_668 * *(float *)(ppuVar13 + 1);
                fVar33 = -(fVar30 + fVar32 + fVar34);
                fVar30 = -(fVar30 + fVar32 + fVar34);
                fVar32 = *(float *)((long)ppuVar13 + 0xc) + fVar52 + fVar36 + fVar49;
                fVar34 = (float)uVar39 * fVar33;
                bVar7 = false;
                if ((1.1920929e-07 <= fVar33) && (bVar7 = false, !NAN(fVar32) && !NAN(fVar34))) {
                  bVar7 = fVar32 < fVar34;
                }
                if (bVar7) {
                  uVar39 = NEON_frecpe(CONCAT44(fVar30,fVar33),4);
                  uVar28 = NEON_frecps(CONCAT44(fVar30,fVar33),uVar39,4);
                  fVar34 = (float)uVar39 * (float)uVar28;
                  fVar44 = (float)((ulong)uVar39 >> 0x20) * (float)((ulong)uVar28 >> 0x20);
                  uVar39 = NEON_frecps(CONCAT44(fVar30,fVar33),CONCAT44(fVar44,fVar34),4);
                  uVar39 = NEON_fmax(CONCAT44((*(float *)((long)ppuVar13 + 0xc) +
                                              fVar52 + fVar36 + fVar49) *
                                              fVar44 * (float)((ulong)uVar39 >> 0x20),
                                              fVar32 * fVar34 * (float)uVar39),0,4);
                  uVar9 = uVar24 + (int)lVar14;
                }
                lVar14 = lVar14 + 1;
                ppuVar13 = ppuVar13 + 10;
              } while ((int)(float)local_588 - lVar10 != lVar14);
              if ((int)uVar9 < 0) {
              }
              else {
                if (uVar9 != uVar24) {
                  uVar28 = uStack_5f8;
                  uStack_5f8._4_4_ = uVar1;
                  uVar38 = uStack_5d0;
                  uStack_5d0._4_4_ = uVar5;
                  FUN_03044250(local_590 + (long)(int)uVar9 * 10,local_590 + lVar10 * 10);
                  uVar5 = uStack_5d0._4_4_;
                  uVar1 = uStack_5f8._4_4_;
                }
                uStack_5d0._4_4_ = uVar5;
                uStack_5f8._4_4_ = uVar1;
                uVar5 = uStack_5d0._4_4_;
                uVar1 = uStack_5f8._4_4_;
                uVar24 = uVar24 + 1;
              }
            }
            else {
            }
            uStack_5d0._4_4_ = uVar5;
            uStack_5f8._4_4_ = uVar1;
            uVar5 = uStack_5d0._4_4_;
            uVar1 = uStack_5f8._4_4_;
            fVar30 = (float)((ulong)uVar39 >> 0x20);
            lVar27 = lVar27 + (long)iVar35 * 0x90;
            local_670 = local_670 + fVar65 * (float)uVar39;
            fStack_66c = fStack_66c + fVar66 * fVar30;
            fStack_668 = fStack_668 + fVar67 * (float)uVar39;
            fStack_664 = fStack_664 + fVar68 * fVar30;
            uVar38 = *(undefined8 *)(param_3 + 2);
            uVar28 = *(undefined8 *)param_3;
            *(float *)(lVar27 + 0x88) = fStack_668 + (float)uVar38;
            *(float *)(lVar27 + 0x8c) = fStack_664 + (float)((ulong)uVar38 >> 0x20);
            *(float *)(lVar27 + 0x80) = local_670 + (float)uVar28;
            *(float *)(lVar27 + 0x84) = fStack_66c + (float)((ulong)uVar28 >> 0x20);
            fVar30 = fStack_9b4;
          }
          uStack_5d0._4_4_ = uVar5;
          uStack_5f8._4_4_ = uVar1;
          fStack_9b4 = fVar30;
          uVar5 = uStack_5d0._4_4_;
          uVar1 = uStack_5f8._4_4_;
          uVar28 = CONCAT44((float)((ulong)local_a00 >> 0x20) - (float)((ulong)uVar39 >> 0x20),
                            (float)local_a00 - (float)uVar39);
          local_a00 = uVar28;
          uVar38 = uStack_5f8;
          uVar55 = uStack_5d0;
          uStack_5f8._4_4_ = uVar1;
          uStack_5d0._4_4_ = uVar5;
        }
        else {
          fStack_9b8 = (float)local_588;
          if (0 < (int)(float)local_588) {
            *(undefined1 *)((long)local_590 + 0x4c) = 0;
            if ((float)local_588 == 1.4013e-45) {
              fStack_9b8 = 1.4013e-45;
            }
            else {
              *(undefined1 *)((long)local_590 + 0x9c) = 0;
              if (2 < (int)(float)local_588) {
                lVar27 = 0xec;
                lVar10 = 2;
                do {
                  *(undefined1 *)((long)local_590 + lVar27) = 0;
                  lVar10 = lVar10 + 1;
                  lVar27 = lVar27 + 0x50;
                } while (lVar10 < (int)(float)local_588);
              }
            }
          }
          local_9e0 = &PTR_LAB_042b2550;
          local_9a4 = 0x80000020;
          local_6c0 = (undefined **)0x0;
          local_6b8 = 0.0;
          local_9d8 = local_9d8 & 0xffffff00;
          local_9d4 = 0;
          local_9d0 = 0x5f7ffff05f7ffff0;
          uStack_9c8 = uStack_9c8 & 0xffffffffffffff00;
          local_9a8 = 0;
          local_9c0 = local_590;
          local_9b0 = local_9a0;
          local_7a0 = uVar25;
          uVar1 = uStack_5f8._4_4_;
          uVar5 = uStack_5d0._4_4_;
          uVar38 = uStack_5f8;
          uStack_5f8._4_4_ = uVar1;
          uVar55 = uStack_5d0;
          uStack_5d0._4_4_ = uVar5;
          FUN_030e990c(param_1,&local_790,&local_6a0,&local_660,&local_9e0);
          uVar55 = uStack_5d0;
          uVar38 = uStack_5f8;
          uVar9 = 0;
          if ((iVar23 == 0) && (*(char *)(param_3 + 0x1b) != '\0')) {
            uVar12 = (ulong)local_9a8;
            if ((int)local_9a8 < 1) {
              fVar30 = 0.0;
              fVar33 = 0.0;
              fVar32 = 0.0;
              fVar34 = 0.0;
              uVar9 = 0;
            }
            else {
              fVar52 = param_3[0x17] - param_3[0x18];
              fVar30 = 0.0;
              fVar33 = 0.0;
              fVar32 = 0.0;
              fVar34 = 0.0;
              uVar18 = 0;
              uVar9 = 0;
              pfVar17 = local_9b0;
              uVar15 = uVar12;
              do {
                fVar46 = pfVar17[3];
                auVar59._0_4_ = fVar30 * *pfVar17;
                auVar59._4_4_ = fVar33 * pfVar17[1];
                auVar59._8_4_ = fVar32 * pfVar17[2];
                auVar59._12_4_ = fVar34 * fVar46;
                auVar31 = NEON_ext(auVar59,auVar59,8,1);
                fVar29 = auVar31._0_4_ + fVar46;
                fVar48 = auVar59._0_4_ + auVar59._4_4_ + fVar29;
                if (fVar48 < fVar52) {
                  fVar29 = fVar52 - (auVar59._0_4_ + auVar59._4_4_ + fVar29);
                  if (fVar48 < 0.0) {
                    uVar9 = 1;
                  }
                  uVar22 = (uint)(fVar48 < 0.0);
                  uVar18 = uVar18 | uVar22;
                  fVar30 = fVar30 + *pfVar17 * (fVar52 - fVar48);
                  fVar33 = fVar33 + pfVar17[1] * fVar29;
                  fVar32 = fVar32 + pfVar17[2] * (fVar52 - fVar48);
                  fVar34 = fVar34 + fVar46 * fVar29;
                  fVar26 = (float)((int)fVar26 + uVar22);
                }
                uVar15 = uVar15 - 1;
                pfVar17 = pfVar17 + 4;
              } while (uVar15 != 0);
              if (uVar18 != 0) {
                uVar18 = 0;
                pfVar17 = local_9b0;
                uVar15 = uVar12;
                do {
                  fVar46 = pfVar17[3];
                  auVar60._0_4_ = fVar30 * *pfVar17;
                  auVar60._4_4_ = fVar33 * pfVar17[1];
                  auVar60._8_4_ = fVar32 * pfVar17[2];
                  auVar60._12_4_ = fVar34 * fVar46;
                  auVar31 = NEON_ext(auVar60,auVar60,8,1);
                  fVar29 = auVar31._0_4_ + fVar46;
                  fVar48 = auVar60._0_4_ + auVar60._4_4_ + fVar29;
                  if (fVar48 < fVar52) {
                    fVar29 = fVar52 - (auVar60._0_4_ + auVar60._4_4_ + fVar29);
                    if (fVar48 < 0.0) {
                      uVar9 = 1;
                    }
                    uVar22 = (uint)(fVar48 < 0.0);
                    uVar18 = uVar18 | uVar22;
                    fVar30 = fVar30 + *pfVar17 * (fVar52 - fVar48);
                    fVar33 = fVar33 + pfVar17[1] * fVar29;
                    fVar32 = fVar32 + pfVar17[2] * (fVar52 - fVar48);
                    fVar34 = fVar34 + fVar46 * fVar29;
                    fVar26 = (float)((int)fVar26 + uVar22);
                  }
                  uVar15 = uVar15 - 1;
                  pfVar17 = pfVar17 + 4;
                } while (uVar15 != 0);
                if (uVar18 != 0) {
                  uVar18 = 0;
                  pfVar17 = local_9b0;
                  uVar15 = uVar12;
                  do {
                    fVar46 = pfVar17[3];
                    auVar61._0_4_ = fVar30 * *pfVar17;
                    auVar61._4_4_ = fVar33 * pfVar17[1];
                    auVar61._8_4_ = fVar32 * pfVar17[2];
                    auVar61._12_4_ = fVar34 * fVar46;
                    auVar31 = NEON_ext(auVar61,auVar61,8,1);
                    fVar29 = auVar31._0_4_ + fVar46;
                    fVar48 = auVar61._0_4_ + auVar61._4_4_ + fVar29;
                    if (fVar48 < fVar52) {
                      fVar29 = fVar52 - (auVar61._0_4_ + auVar61._4_4_ + fVar29);
                      if (fVar48 < 0.0) {
                        uVar9 = 1;
                      }
                      uVar22 = (uint)(fVar48 < 0.0);
                      uVar18 = uVar18 | uVar22;
                      fVar30 = fVar30 + *pfVar17 * (fVar52 - fVar48);
                      fVar33 = fVar33 + pfVar17[1] * fVar29;
                      fVar32 = fVar32 + pfVar17[2] * (fVar52 - fVar48);
                      fVar34 = fVar34 + fVar46 * fVar29;
                      fVar26 = (float)((int)fVar26 + uVar22);
                    }
                    uVar15 = uVar15 - 1;
                    pfVar17 = pfVar17 + 4;
                  } while (uVar15 != 0);
                  if (uVar18 != 0) {
                    uVar18 = 0;
                    pfVar17 = local_9b0;
                    uVar15 = uVar12;
                    do {
                      fVar46 = pfVar17[3];
                      auVar62._0_4_ = fVar30 * *pfVar17;
                      auVar62._4_4_ = fVar33 * pfVar17[1];
                      auVar62._8_4_ = fVar32 * pfVar17[2];
                      auVar62._12_4_ = fVar34 * fVar46;
                      auVar31 = NEON_ext(auVar62,auVar62,8,1);
                      fVar29 = auVar31._0_4_ + fVar46;
                      fVar48 = auVar62._0_4_ + auVar62._4_4_ + fVar29;
                      if (fVar48 < fVar52) {
                        fVar29 = fVar52 - (auVar62._0_4_ + auVar62._4_4_ + fVar29);
                        if (fVar48 < 0.0) {
                          uVar9 = 1;
                        }
                        uVar22 = (uint)(fVar48 < 0.0);
                        uVar18 = uVar18 | uVar22;
                        fVar30 = fVar30 + *pfVar17 * (fVar52 - fVar48);
                        fVar33 = fVar33 + pfVar17[1] * fVar29;
                        fVar32 = fVar32 + pfVar17[2] * (fVar52 - fVar48);
                        fVar34 = fVar34 + fVar46 * fVar29;
                        fVar26 = (float)((int)fVar26 + uVar22);
                      }
                      uVar15 = uVar15 - 1;
                      pfVar17 = pfVar17 + 4;
                    } while (uVar15 != 0);
                    pfVar17 = local_9b0;
                    if (uVar18 != 0) {
                      do {
                        fVar46 = pfVar17[3];
                        auVar63._0_4_ = fVar30 * *pfVar17;
                        auVar63._4_4_ = fVar33 * pfVar17[1];
                        auVar63._8_4_ = fVar32 * pfVar17[2];
                        auVar63._12_4_ = fVar34 * fVar46;
                        auVar31 = NEON_ext(auVar63,auVar63,8,1);
                        fVar29 = auVar31._0_4_ + fVar46;
                        fVar48 = auVar63._0_4_ + auVar63._4_4_ + fVar29;
                        if (fVar48 < fVar52) {
                          fVar29 = fVar52 - (auVar63._0_4_ + auVar63._4_4_ + fVar29);
                          if (fVar48 < 0.0) {
                            uVar9 = 1;
                          }
                          fVar30 = fVar30 + *pfVar17 * (fVar52 - fVar48);
                          fVar33 = fVar33 + pfVar17[1] * fVar29;
                          fVar32 = fVar32 + pfVar17[2] * (fVar52 - fVar48);
                          fVar34 = fVar34 + fVar46 * fVar29;
                          fVar26 = (float)((int)fVar26 + (uint)(fVar48 < 0.0));
                        }
                        uVar12 = uVar12 - 1;
                        pfVar17 = pfVar17 + 4;
                      } while (uVar12 != 0);
                    }
                  }
                }
              }
            }
            local_670 = fVar30 + local_670;
            fStack_66c = fVar33 + fStack_66c;
            fStack_668 = fVar32 + fStack_668;
            fStack_664 = fVar34 + fStack_664;
          }
          if ((int)(float)local_588 < 1) {
            uVar18 = 0;
            bVar6 = false;
            bVar8 = (float)local_588 == 0.0;
            bVar7 = false;
            uVar22 = (uint)(float)local_588;
            if (-1 < (int)(float)local_588) goto LAB_03043330;
LAB_030432f4:
            uStack_5d0 = uVar55;
            uStack_5f8 = uVar38;
            uVar5 = uStack_5d0._4_4_;
            uVar55 = uStack_5d0;
            uVar1 = uStack_5f8._4_4_;
            uVar38 = uStack_5f8;
            lVar10 = (long)(int)uVar18 * 0x50 + (long)(int)uVar22 * -0x50;
            local_588 = CONCAT44(local_588._4_4_,uVar18);
            ppuVar13 = local_590 + (long)(int)uVar22 * 10 + 8;
            uStack_5f8._4_4_ = uVar1;
            uStack_5d0._4_4_ = uVar5;
            do {
              *(undefined2 *)(ppuVar13 + -1) = 0xffff;
              lVar10 = lVar10 + -0x50;
              *(undefined4 *)((long)ppuVar13 + -4) = 0;
              *ppuVar13 = (undefined *)0x0;
              ppuVar13 = ppuVar13 + 10;
              uVar1 = uStack_5f8._4_4_;
              uVar5 = uStack_5d0._4_4_;
            } while (lVar10 != 0);
          }
          else {
            lVar10 = 0;
            uVar12 = 0;
            uVar18 = 0;
            do {
              puVar11 = (undefined8 *)((long)local_590 + lVar10);
              if (*(char *)((long)puVar11 + 0x4c) == '\0') {
                uVar9 = uVar9 | (long)uVar12 < (long)(int)uVar24;
                uVar24 = uVar24 - ((long)uVar12 < (long)(int)uVar24);
              }
              else {
                if (uVar12 != uVar18) {
                  puVar20 = (undefined *)*puVar11;
                  ppuVar13 = local_590 + (long)(int)uVar18 * 10;
                  ppuVar13[1] = (undefined *)puVar11[1];
                  *ppuVar13 = puVar20;
                  auVar31 = *(undefined1 (*) [16])(puVar11 + 2);
                  ppuVar13[3] = auVar31._8_8_;
                  ppuVar13[2] = auVar31._0_8_;
                  puVar20 = (undefined *)puVar11[4];
                  *(undefined4 *)(ppuVar13 + 5) = *(undefined4 *)(puVar11 + 5);
                  ppuVar13[4] = puVar20;
                  *(undefined4 *)(ppuVar13 + 6) = *(undefined4 *)(puVar11 + 6);
                  *(undefined1 *)((long)ppuVar13 + 0x34) = *(undefined1 *)((long)puVar11 + 0x34);
                  *(undefined2 *)(ppuVar13 + 7) = *(undefined2 *)(puVar11 + 7);
                  uVar21 = *(undefined8 *)((long)puVar11 + 0x3c);
                  *(undefined4 *)((long)ppuVar13 + 0x44) = *(undefined4 *)((long)puVar11 + 0x44);
                  *(undefined8 *)((long)ppuVar13 + 0x3c) = uVar21;
                  uVar1 = *(undefined4 *)(puVar11 + 9);
                  *(undefined1 *)((long)ppuVar13 + 0x4c) = *(undefined1 *)((long)puVar11 + 0x4c);
                  *(undefined4 *)(ppuVar13 + 9) = uVar1;
                }
                uVar18 = uVar18 + 1;
              }
              uVar12 = uVar12 + 1;
              lVar10 = lVar10 + 0x50;
            } while ((long)uVar12 < (long)(int)(float)local_588);
            if ((int)(local_588._4_4_ & 0x3fffffff) < (int)uVar18) {
              uVar1 = uStack_5f8._4_4_;
              uStack_5f8 = uVar38;
              uVar5 = uStack_5d0._4_4_;
              uStack_5d0 = uVar55;
              uVar38 = uStack_5f8;
              uStack_5f8._4_4_ = uVar1;
              uVar55 = uStack_5d0;
              uStack_5d0._4_4_ = uVar5;
              local_590 = (undefined **)
                          FUN_03043e60(puVar4,uVar18,local_590,local_588 & 0xffffffff,
                                       (ulong)&local_590 | 0xc);
              uVar1 = uStack_5d0._4_4_;
              uVar38 = uStack_5f8;
              uVar55 = uStack_5d0;
              uStack_5d0._4_4_ = uVar1;
            }
            uStack_5d0 = uVar55;
            uStack_5f8 = uVar38;
            uVar5 = uStack_5d0._4_4_;
            uVar1 = uStack_5f8._4_4_;
            bVar6 = SBORROW4((int)(float)local_588,uVar18);
            bVar7 = (int)((int)(float)local_588 - uVar18) < 0;
            bVar8 = (float)local_588 == (float)uVar18;
            uVar38 = uStack_5f8;
            uVar55 = uStack_5d0;
            uVar22 = (uint)(float)local_588;
            uStack_5f8._4_4_ = uVar1;
            uStack_5d0._4_4_ = uVar5;
            if ((int)(float)local_588 < (int)uVar18) goto LAB_030432f4;
LAB_03043330:
            uStack_5d0 = uVar55;
            uStack_5f8 = uVar38;
            uVar5 = uStack_5d0._4_4_;
            uVar1 = uStack_5f8._4_4_;
            uVar38 = uStack_5f8;
            uVar55 = uStack_5d0;
            if (!bVar8 && bVar7 == bVar6) {
              local_588 = CONCAT44(local_588._4_4_,uVar18);
            }
          }
          uStack_5d0._4_4_ = uVar5;
          uStack_5f8._4_4_ = uVar1;
          uStack_5d0 = uVar55;
          uStack_5f8 = uVar38;
          uVar5 = uStack_5d0._4_4_;
          uVar1 = uStack_5f8._4_4_;
          local_9e0 = &PTR_LAB_042b2550;
          local_9a8 = 0;
          uVar38 = uStack_5f8;
          uVar55 = uStack_5d0;
          if ((-1 < (int)local_9a4) && (local_9b0 != (float *)0x0)) {
            uStack_5f8._4_4_ = uVar1;
            uStack_5d0._4_4_ = uVar5;
            (**(code **)(*(long *)puVar4 + 0x18))
                      (puVar4,local_9b0,((ulong)local_9a4 & 0x3fffffff) << 4);
            uVar38 = uStack_5f8;
            uVar55 = uStack_5d0;
          }
          uStack_5f8._4_4_ = (undefined4)((ulong)uVar38 >> 0x20);
          uStack_5d0._4_4_ = (undefined4)((ulong)uVar55 >> 0x20);
          fVar30 = fStack_9b4;
          uVar12 = local_588;
          uVar1 = uStack_5f8._4_4_;
          uVar5 = uStack_5d0._4_4_;
          if (uVar9 == 0) goto joined_r0x030433f8;
        }
        uStack_5d0 = uVar55;
        uStack_5f8 = uVar38;
        uVar5 = uStack_5d0._4_4_;
        uVar1 = uStack_5f8._4_4_;
        local_9e0 = local_590;
        uStack_9c8 = SUB168(*(undefined1 (*) [16])(param_3 + 0x10),8);
        local_9d0 = SUB168(*(undefined1 (*) [16])(param_3 + 0x10),0);
        local_9d8 = uVar24;
        uVar39 = uStack_5f8;
        uStack_5f8._4_4_ = uVar1;
        uVar38 = uStack_5d0;
        uStack_5d0._4_4_ = uVar5;
        FUN_030443b0(&local_9e0);
        uVar55 = uStack_5d0;
        uVar38 = uStack_5f8;
        if ((int)local_9d8 < (int)uVar24) {
          uVar15 = (ulong)(int)local_9d8;
          uVar12 = uVar15;
          if ((uVar24 - local_9d8 & 1) != 0) {
            uVar12 = uVar15 + 1;
            *(float *)((long)local_590 + uVar15 * 0x50 + 0xc) =
                 param_3[0x17] * 0.1 + *(float *)((long)local_590 + uVar15 * 0x50 + 0xc);
          }
          if (~uVar15 + (long)(int)uVar24 != 0) {
            lVar10 = (long)(int)uVar24 - uVar12;
            lVar27 = uVar12 * 0x50;
            do {
              lVar10 = lVar10 + -2;
              *(float *)((long)local_590 + lVar27 + 0xc) =
                   param_3[0x17] * 0.1 + *(float *)((long)local_590 + lVar27 + 0xc);
              *(float *)((long)local_590 + lVar27 + 0x5c) =
                   param_3[0x17] * 0.1 + *(float *)((long)local_590 + lVar27 + 0x5c);
              lVar27 = lVar27 + 0xa0;
            } while (lVar10 != 0);
          }
        }
        iVar23 = iVar23 + 1;
        fVar65 = SUB84(local_9c0,0);
        fVar66 = (float)((ulong)local_9c0 >> 0x20);
        fVar67 = fStack_9b8;
        uVar1 = uStack_5f8._4_4_;
        uVar5 = uStack_5d0._4_4_;
        if ((int)fVar26 <= iVar23) break;
        fVar68 = fStack_9b4;
        uVar24 = local_9d8;
      } while (1.1920929e-07 < (float)local_a00);
      uStack_5d0._4_4_ = uVar5;
      uStack_5f8._4_4_ = uVar1;
      uStack_5d0 = uVar55;
      uStack_5f8 = uVar38;
      uVar5 = uStack_5d0._4_4_;
      uVar1 = uStack_5f8._4_4_;
      fVar68 = fStack_9b4;
      uVar37 = uStack_5f8;
      uVar39 = uStack_5d0;
      uStack_5f8._4_4_ = uVar1;
      uStack_5d0._4_4_ = uVar5;
    }
  }
  uStack_5d0 = uVar39;
  uStack_5f8 = uVar37;
  uVar5 = uStack_5d0._4_4_;
  uVar1 = uStack_5f8._4_4_;
  uVar39 = *(undefined8 *)(param_3 + 2);
  uVar37 = *(undefined8 *)param_3;
  param_4[3] = CONCAT44(fVar68,fVar67);
  param_4[2] = CONCAT44(fVar66,fVar65);
  *(float *)(param_4 + 5) = fStack_668;
  *(float *)((long)param_4 + 0x2c) = fStack_664;
  *(float *)(param_4 + 4) = local_670;
  *(float *)((long)param_4 + 0x24) = fStack_66c;
  param_4[1] = CONCAT44(fStack_664 + (float)((ulong)uVar39 >> 0x20),fStack_668 + (float)uVar39);
  *param_4 = CONCAT44(fStack_66c + (float)((ulong)uVar37 >> 0x20),local_670 + (float)uVar37);
  param_4[6] = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x14) >> 0x20) -
                        (float)((ulong)local_a00 >> 0x20),
                        (float)*(undefined8 *)(param_3 + 0x14) - (float)local_a00);
  uVar37 = uStack_5f8;
  uVar39 = uStack_5d0;
  if (local_598 != 0) {
    uStack_5f8._4_4_ = uVar1;
    uStack_5d0._4_4_ = uVar5;
    FUN_032d5b34(local_598,&DAT_0390f40e);
    uVar39 = uStack_5d0;
    uVar37 = uStack_5f8;
    uVar1 = uStack_5f8._4_4_;
    uVar5 = uStack_5d0._4_4_;
  }
  uStack_5d0._4_4_ = uVar5;
  uStack_5f8._4_4_ = uVar1;
  uStack_5d0 = uVar39;
  uStack_5f8 = uVar37;
  uVar12 = local_588;
  uVar5 = uStack_5d0._4_4_;
  uVar1 = uStack_5f8._4_4_;
  uVar15 = (ulong)local_588._4_4_;
  local_588 = (ulong)local_588._4_4_ << 0x20;
  if ((-1 < (long)uVar12) && (local_590 != (undefined **)0x0)) {
    uVar37 = uStack_5f8;
    uStack_5f8._4_4_ = uVar1;
    uVar39 = uStack_5d0;
    uStack_5d0._4_4_ = uVar5;
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_590,(uVar15 & 0x3fffffff) * 0x50);
  }
  return;
}


