/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02be27b8; name: FUN_02be27b8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be27b8(undefined4 param_1,undefined1 param_2 [16],undefined1 param_3 [16],long param_4,
                 long param_5)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  float extraout_s0;
  undefined8 uVar16;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar17;
  undefined8 uVar18;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  undefined1 auVar23 [16];
  float fVar27;
  float fVar35;
  float fVar36;
  float fVar38;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar37;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar39;
  undefined8 uVar41;
  float fVar56;
  float fVar53;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar40;
  float fVar54;
  float fVar57;
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar47 [16];
  float fVar55;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  byte bVar58;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar74;
  float fVar71;
  byte bVar72;
  byte bVar73;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar81;
  byte bVar82;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  byte bVar83;
  float fVar80;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined8 uVar84;
  float fVar96;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar97;
  undefined1 auVar90 [16];
  undefined1 auVar89 [16];
  undefined1 auVar88 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  undefined1 uVar107;
  undefined1 uVar108;
  undefined8 uVar109;
  float fVar112;
  float fVar113;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  float fVar114;
  undefined8 uVar115;
  float fVar129;
  undefined1 auVar116 [16];
  undefined1 auVar120 [16];
  undefined1 auVar119 [16];
  undefined1 auVar118 [16];
  undefined1 auVar117 [16];
  undefined1 auVar124 [16];
  undefined1 auVar123 [16];
  undefined1 auVar122 [16];
  undefined1 auVar121 [16];
  float fVar128;
  float fVar130;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar131 [16];
  float fVar132;
  undefined8 uVar133;
  undefined8 uVar134;
  undefined8 uVar135;
  undefined8 uVar136;
  float fVar137;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  long local_60;
  long *local_58;
  long *local_50;
  undefined8 local_48;
  
  if (*(char *)(param_4 + 0x80) == '\0') {
LAB_02be2e74:
    cVar3 = *(char *)(param_4 + 800);
  }
  else {
    fVar27 = *(float *)(param_4 + 0xa0);
    fVar35 = *(float *)(param_4 + 0xa4);
    fVar36 = *(float *)(param_4 + 0xa8);
    fVar38 = *(float *)(param_4 + 0xac);
    auVar60._0_4_ = fVar27 * fVar27;
    auVar60._4_4_ = fVar35 * fVar35;
    auVar60._8_4_ = fVar36 * fVar36;
    auVar60._12_4_ = fVar38 * fVar38;
    auVar59 = NEON_ext(auVar60,auVar60,8,1);
    fVar132 = *(float *)PTR_FloatQuaternionEpsilon_0437a118;
    fVar39 = auVar59._0_4_ + auVar60._0_4_;
    fVar53 = auVar59._4_4_ + auVar60._4_4_;
    fVar12 = fVar39 + fVar53;
    fVar39 = fVar39 + fVar53;
    uVar16 = NEON_fmov(0x3f800000,4);
    fVar55 = (float)uVar16;
    auVar42._8_8_ = CONCAT44(fVar39,fVar12);
    auVar42._0_8_ = CONCAT44(fVar39,fVar12);
    auVar60 = NEON_frsqrte(auVar42,4);
    iVar15 = -(uint)(fVar12 < fVar132);
    iVar24 = -(uint)(fVar39 < fVar132);
    iVar25 = -(uint)(fVar12 < fVar132);
    iVar26 = -(uint)(fVar39 < fVar132);
    auVar85._0_4_ = auVar60._0_4_ * fVar12;
    auVar85._4_4_ = auVar60._4_4_ * fVar39;
    auVar85._8_4_ = auVar60._8_4_ * fVar12;
    auVar85._12_4_ = auVar60._12_4_ * fVar39;
    auVar59 = NEON_frsqrts(auVar60,auVar85,4);
    auVar61._0_4_ = auVar60._0_4_ * auVar59._0_4_;
    auVar61._4_4_ = auVar60._4_4_ * auVar59._4_4_;
    auVar61._8_4_ = auVar60._8_4_ * auVar59._8_4_;
    auVar61._12_4_ = auVar60._12_4_ * auVar59._12_4_;
    auVar86._0_4_ = fVar12 * auVar61._0_4_;
    auVar86._4_4_ = fVar39 * auVar61._4_4_;
    auVar86._8_4_ = fVar12 * auVar61._8_4_;
    auVar86._12_4_ = fVar39 * auVar61._12_4_;
    auVar59 = NEON_frsqrts(auVar61,auVar86,4);
    auVar60 = *(undefined1 (*) [16])(param_4 + 0x90);
    fVar27 = fVar27 * auVar61._0_4_ * auVar59._0_4_;
    fVar35 = fVar35 * auVar61._4_4_ * auVar59._4_4_;
    fVar36 = fVar36 * auVar61._8_4_ * auVar59._8_4_;
    fVar38 = fVar38 * auVar61._12_4_ * auVar59._12_4_;
    auVar19._8_8_ = _UNK_0388a138;
    auVar19._0_8_ = _DAT_0388a130;
    bVar58 = (byte)((uint)iVar15 >> 8);
    bVar67 = (byte)((uint)iVar15 >> 0x10);
    bVar68 = (byte)((uint)iVar15 >> 0x18);
    auVar28[0] = SUB41(fVar27,0) & ~(byte)iVar15;
    auVar28[1] = (byte)((uint)fVar27 >> 8) & ~bVar58;
    auVar28[2] = (byte)((uint)fVar27 >> 0x10) & ~bVar67;
    auVar28[3] = (byte)((uint)fVar27 >> 0x18) & ~bVar68;
    auVar28[4] = SUB41(fVar35,0) & ~(byte)iVar24;
    auVar28[5] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar24 >> 8);
    auVar28[6] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10);
    auVar28[7] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18);
    auVar28[8] = SUB41(fVar36,0) & ~(byte)iVar25;
    auVar28[9] = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar25 >> 8);
    auVar28[10] = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
    auVar28[0xb] = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
    auVar28[0xc] = SUB41(fVar38,0) & ~(byte)iVar26;
    auVar28[0xd] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar26 >> 8);
    auVar28[0xe] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
    auVar28[0xf] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
    param_3 = ZEXT816(0);
    iVar15 = -(uint)((float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~bVar68,
                                     CONCAT12((byte)((uint)fVar12 >> 0x10) & ~bVar67,
                                              CONCAT11((byte)((uint)fVar12 >> 8) & ~bVar58,
                                                       SUB41(fVar12,0) & ~(byte)iVar15))) == 0.0);
    auVar59._0_4_ =
         CONCAT13(~(byte)((uint)iVar15 >> 0x18),
                  CONCAT12(~(byte)((uint)iVar15 >> 0x10),
                           CONCAT11(~(byte)((uint)iVar15 >> 8),~(byte)iVar15)));
    auVar59._4_4_ = auVar59._0_4_;
    auVar59._8_4_ = auVar59._0_4_;
    auVar59._12_4_ = auVar59._0_4_;
    auVar19 = auVar19 ^ (auVar19 ^ auVar28) & auVar59;
    auVar28 = NEON_ext(auVar60,auVar60,8,1);
    fVar36 = auVar19._0_4_;
    auVar29._0_4_ = fVar36 + fVar36;
    fVar12 = auVar19._4_4_;
    auVar29._4_4_ = fVar12 + fVar12;
    auVar29._8_4_ = auVar19._8_4_ + auVar19._8_4_;
    fVar39 = auVar19._12_4_;
    auVar29._12_4_ = fVar39 + fVar39;
    fVar96 = auVar29._8_4_ * fVar12;
    fVar132 = auVar29._0_4_ * fVar39;
    fVar27 = auVar29._8_4_ * fVar39;
    auVar59 = NEON_ext(auVar19,auVar19,8,1);
    auVar19 = NEON_ext(auVar29,auVar29,8,1);
    fVar38 = auVar59._0_4_ * auVar19._0_4_;
    auVar116._4_4_ = fVar27;
    auVar116._0_4_ = fVar27;
    auVar116._8_8_ = 0;
    auVar87._4_4_ = fVar96;
    auVar87._0_4_ = fVar96;
    auVar87._8_8_ = 0;
    fVar53 = fVar55 - (auVar29._0_4_ * fVar36 + auVar29._4_4_ * fVar12);
    param_2._0_4_ = fVar96 - fVar132;
    param_2._4_4_ = fVar96 - fVar132;
    param_2._8_8_ = 0;
    fVar37 = 0.0;
    fVar71 = 0.0;
    uVar16 = CONCAT44(param_2._0_4_,auVar29._8_4_ * fVar36 + auVar29._4_4_ * fVar39);
    fVar35 = fVar53;
    lVar10 = nn::os::GetCurrentThread();
    plVar11 = (long *)(param_5 + 0x10);
    do {
      if (*plVar11 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_5 + 4));
          while (*plVar11 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = lVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_02be2954;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_02be2954:
    lVar10 = *(long *)(param_4 + 0xd0);
    *(ulong *)(lVar10 + 0x68) = (ulong)(uint)(auVar29._8_4_ * fVar36 - auVar29._4_4_ * fVar39);
    *(ulong *)(lVar10 + 0x60) =
         CONCAT44(auVar29._4_4_ * fVar36 + fVar27,fVar55 - (auVar29._4_4_ * fVar12 + fVar38));
    *(ulong *)(lVar10 + 0x78) = (ulong)(uint)(fVar96 + fVar132);
    *(ulong *)(lVar10 + 0x70) =
         CONCAT44(fVar55 - (auVar29._0_4_ * fVar36 + fVar38),auVar29._4_4_ * fVar36 - fVar27);
    *(ulong *)(lVar10 + 0x88) = (ulong)(uint)fVar53;
    *(undefined8 *)(lVar10 + 0x80) = uVar16;
    *(ulong *)(lVar10 + 0x98) = (ulong)auVar28._0_4_;
    *(long *)(lVar10 + 0x90) = auVar60._0_8_;
    *(undefined8 *)(param_5 + 0x10) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_5 + 4));
    local_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    FUN_008c4b3c(&local_70,param_4 + 0x68);
    FUN_00956dac(&local_50,&local_70);
    puVar9 = (undefined8 *)CONCAT44(uStack_6c,local_70);
    if (puVar9 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar9 + 1);
      do {
        iVar15 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 + -1 == 0) {
        puVar9[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_48 = *puVar9;
        FUN_02a44274(lVar10 + 0xd8,&local_48);
      }
    }
    plVar11 = local_50;
    if (local_50 != (long *)0x0) {
      uVar16 = *(undefined8 *)(param_4 + 0x90);
      uVar8 = *(undefined8 *)(param_4 + 0x98);
      auVar66 = *(undefined1 (*) [16])(param_4 + 0xa0);
      local_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      FUN_0095aa3c(&local_70,local_50 + 0x4e);
      local_60 = plVar11[0x50];
      FUN_02bd4a68(&local_58,&local_70);
      puVar9 = (undefined8 *)CONCAT44(uStack_6c,local_70);
      if (puVar9 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar9 + 1);
        do {
          iVar15 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 + -1 == 0) {
          puVar9[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_48 = *puVar9;
          FUN_02a44274(lVar10 + 0xd8,&local_48);
        }
      }
      fVar132 = (float)uVar16;
      fVar27 = (float)((ulong)uVar16 >> 0x20);
      fVar36 = (float)uVar8;
      if (local_58 == (long *)0x0) {
        fVar35 = (float)((ulong)uVar8 >> 0x20);
        local_58 = (long *)0x0;
      }
      else {
        auVar60 = (**(code **)(*local_58 + 0x40))();
        fVar38 = auVar60._0_4_;
        auVar117._4_12_ = auVar116._4_12_;
        auVar117._0_4_ = fVar38;
        fVar39 = auVar60._4_4_;
        auVar119._12_4_ = auVar116._12_4_;
        auVar119._0_8_ = auVar117._0_8_;
        auVar119._8_4_ = fVar39;
        fVar13 = param_3._0_4_;
        auVar118._8_8_ = auVar119._8_8_;
        auVar118._4_4_ = fVar13;
        auVar118._0_4_ = fVar38;
        fVar80 = param_3._4_4_;
        auVar120._0_12_ = auVar118._0_12_;
        auVar120._12_4_ = fVar80;
        fVar96 = auVar60._8_4_;
        fVar14 = param_3._8_4_;
        fVar12 = param_2._0_4_;
        fVar53 = param_2._4_4_;
        fVar55 = param_2._8_4_;
        if (*(char *)(param_4 + 800) == '\0') {
          auVar88._4_12_ = auVar87._4_12_;
          auVar88._0_4_ = fVar38;
          auVar90._12_4_ = auVar87._12_4_;
          auVar90._0_8_ = auVar88._0_8_;
          auVar90._8_4_ = fVar13;
          auVar89._8_8_ = auVar90._8_8_;
          auVar89._4_4_ = fVar12;
          auVar89._0_4_ = fVar38;
          auVar91._0_12_ = auVar89._0_12_;
          auVar91._12_4_ = 0;
          auVar22._4_4_ = fVar53;
          auVar22._0_4_ = fVar39;
          auVar22._8_4_ = fVar80;
          auVar22._12_4_ = 0;
          auVar44._4_12_ = param_3._4_12_;
          auVar44._0_4_ = fVar96;
          auVar46._0_8_ = auVar44._0_8_;
          auVar46._8_4_ = fVar14;
          auVar46._12_4_ = param_3._12_4_;
          auVar45._8_8_ = auVar46._8_8_;
          auVar45._4_4_ = fVar55;
          auVar45._0_4_ = fVar96;
          auVar47._0_12_ = auVar45._0_12_;
          auVar47._12_4_ = 0;
          auVar31._0_4_ = 0.0 - (fVar38 * fVar35 + fVar39 * fVar37 + fVar96 * fVar71);
          auVar31._4_4_ = 0.0 - (fVar12 * fVar35 + fVar53 * fVar37 + fVar55 * fVar71);
          auVar31._8_4_ = 0.0 - (fVar13 * fVar35 + fVar80 * fVar37 + fVar14 * fVar71);
          auVar31._12_4_ = 0.0 - (fVar35 * 0.0 + fVar37 * 0.0 + fVar71 * 0.0);
        }
        else {
          uVar16 = a64_TBL(ZEXT816(0),param_2,DAT_0388a880);
          uVar8 = a64_TBL(ZEXT816(0),param_2,DAT_0388a6f0);
          uVar133 = a64_TBL(ZEXT816(0),param_3,DAT_0388a6d8);
          uVar18 = a64_TBL(ZEXT816(0),param_3,DAT_0388a680);
          uVar134 = a64_TBL(ZEXT816(0),param_2,DAT_0388a6d8);
          uVar17 = a64_TBL(ZEXT816(0),param_2,DAT_0388a680);
          uVar84 = a64_TBL(ZEXT816(0),param_3,DAT_0388a880);
          uVar41 = a64_TBL(ZEXT816(0),param_3,DAT_0388a6f0);
          auVar20._0_4_ =
               fVar38 * (float)uVar16 * (float)uVar18 - fVar38 * (float)uVar17 * (float)uVar84;
          auVar20._4_4_ =
               fVar39 * (float)((ulong)uVar16 >> 0x20) * (float)((ulong)uVar18 >> 0x20) -
               fVar39 * (float)((ulong)uVar17 >> 0x20) * (float)((ulong)uVar84 >> 0x20);
          auVar20._8_4_ =
               fVar96 * (float)uVar8 * (float)uVar133 - fVar96 * (float)uVar134 * (float)uVar41;
          auVar20._12_4_ =
               auVar60._12_4_ * (float)((ulong)uVar8 >> 0x20) * (float)((ulong)uVar133 >> 0x20) -
               auVar60._12_4_ * (float)((ulong)uVar134 >> 0x20) * (float)((ulong)uVar41 >> 0x20);
          auVar60 = NEON_ext(auVar20,auVar20,8,1);
          auVar21._0_4_ = auVar20._0_4_ + auVar20._4_4_ + auVar60._0_4_ + auVar60._4_4_;
          auVar21._4_4_ = auVar21._0_4_;
          auVar21._8_4_ = auVar21._0_4_;
          auVar21._12_4_ = auVar21._0_4_;
          auVar60 = NEON_frecpe(auVar21,4);
          auVar59 = NEON_frecps(auVar60,auVar21,4);
          auVar43._0_4_ = auVar60._0_4_ * auVar59._0_4_;
          auVar43._4_4_ = auVar60._4_4_ * auVar59._4_4_;
          auVar43._8_4_ = auVar60._8_4_ * auVar59._8_4_;
          auVar43._12_4_ = auVar60._12_4_ * auVar59._12_4_;
          auVar60 = NEON_frecps(auVar43,auVar21,4);
          iVar15 = -(uint)(auVar21._0_4_ == 0.0);
          iVar24 = -(uint)(auVar21._0_4_ == 0.0);
          iVar25 = -(uint)(auVar21._0_4_ == 0.0);
          iVar26 = -(uint)(auVar21._0_4_ == 0.0);
          fVar40 = auVar43._0_4_ * auVar60._0_4_;
          fVar54 = auVar43._4_4_ * auVar60._4_4_;
          fVar56 = auVar43._8_4_ * auVar60._8_4_;
          fVar57 = auVar43._12_4_ * auVar60._12_4_;
          auVar131._4_4_ = fVar12;
          auVar131._0_4_ = fVar38;
          auVar131._8_4_ = fVar13;
          auVar131._12_4_ = 0;
          auVar121._4_12_ = auVar120._4_12_;
          auVar121._0_4_ = fVar39;
          auVar123._0_8_ = auVar121._0_8_;
          auVar123._8_4_ = fVar80;
          auVar123._12_4_ = fVar80;
          auVar122._8_8_ = auVar123._8_8_;
          auVar122._4_4_ = fVar53;
          auVar122._0_4_ = fVar39;
          auVar124._0_12_ = auVar122._0_12_;
          auVar124._12_4_ = 0;
          auVar30._4_4_ = fVar55;
          auVar30._0_4_ = fVar96;
          auVar30._8_4_ = fVar14;
          auVar30._12_4_ = 0;
          uVar109 = a64_TBL(ZEXT816(0),auVar124,DAT_0388a880);
          uVar17 = a64_TBL(ZEXT816(0),auVar124,DAT_0388a6f0);
          uVar135 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a6d8);
          uVar84 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a680);
          fVar12 = (float)((ulong)uVar84 >> 0x20);
          uVar136 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a880);
          uVar41 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a6f0);
          uVar134 = a64_TBL(ZEXT816(0),auVar131,DAT_0388a880);
          fVar53 = (float)((ulong)uVar135 >> 0x20);
          uVar16 = a64_TBL(ZEXT816(0),auVar131,DAT_0388a6f0);
          uVar133 = a64_TBL(ZEXT816(0),auVar124,DAT_0388a680);
          uVar115 = a64_TBL(ZEXT816(0),auVar124,DAT_0388a6d8);
          uVar8 = a64_TBL(ZEXT816(0),auVar131,DAT_0388a680);
          uVar18 = a64_TBL(ZEXT816(0),auVar131,DAT_0388a6d8);
          fVar112 = (float)((ulong)uVar109 >> 0x20);
          fVar113 = (float)((ulong)uVar17 >> 0x20);
          fVar13 = (float)((ulong)uVar133 >> 0x20);
          fVar39 = (float)((ulong)uVar136 >> 0x20);
          fVar80 = (float)((ulong)uVar115 >> 0x20);
          fVar137 = (float)((ulong)uVar41 >> 0x20);
          fVar96 = (float)((ulong)uVar8 >> 0x20);
          fVar55 = (float)((ulong)uVar18 >> 0x20);
          fVar14 = (float)((ulong)uVar134 >> 0x20);
          fVar97 = (float)((ulong)uVar16 >> 0x20);
          fVar114 = fVar40 * ((float)uVar109 * (float)uVar84 - (float)uVar136 * (float)uVar133);
          fVar128 = fVar54 * (fVar112 * fVar12 - fVar39 * fVar13);
          fVar129 = fVar56 * ((float)uVar17 * (float)uVar135 - (float)uVar41 * (float)uVar115);
          fVar130 = fVar57 * (fVar113 * fVar53 - fVar137 * fVar80);
          fVar38 = fVar40 * ((float)uVar136 * (float)uVar8 - (float)uVar134 * (float)uVar84);
          fVar12 = fVar54 * (fVar39 * fVar96 - fVar14 * fVar12);
          fVar39 = fVar56 * ((float)uVar41 * (float)uVar18 - (float)uVar16 * (float)uVar135);
          fVar53 = fVar57 * (fVar137 * fVar55 - fVar97 * fVar53);
          fVar40 = fVar40 * ((float)uVar133 * (float)uVar134 - (float)uVar109 * (float)uVar8);
          fVar54 = fVar54 * (fVar13 * fVar14 - fVar112 * fVar96);
          fVar56 = fVar56 * ((float)uVar115 * (float)uVar16 - (float)uVar17 * (float)uVar18);
          fVar57 = fVar57 * (fVar80 * fVar97 - fVar113 * fVar55);
          fVar96 = (-(fVar114 * fVar35) - fVar38 * fVar37) - fVar40 * fVar71;
          fVar55 = (-(fVar128 * fVar35) - fVar12 * fVar37) - fVar54 * fVar71;
          fVar13 = (-(fVar129 * fVar35) - fVar39 * fVar37) - fVar56 * fVar71;
          fVar35 = (-(fVar130 * fVar35) - fVar53 * fVar37) - fVar57 * fVar71;
          bVar58 = ~(byte)iVar15;
          bVar67 = ~(byte)((uint)iVar15 >> 8);
          bVar68 = ~(byte)((uint)iVar15 >> 0x10);
          bVar69 = ~(byte)((uint)iVar15 >> 0x18);
          bVar70 = ~(byte)iVar24;
          bVar72 = ~(byte)((uint)iVar24 >> 8);
          bVar73 = ~(byte)((uint)iVar24 >> 0x10);
          bVar74 = ~(byte)((uint)iVar24 >> 0x18);
          bVar75 = ~(byte)iVar25;
          bVar76 = ~(byte)((uint)iVar25 >> 8);
          bVar77 = ~(byte)((uint)iVar25 >> 0x10);
          bVar78 = ~(byte)((uint)iVar25 >> 0x18);
          bVar79 = ~(byte)iVar26;
          bVar81 = ~(byte)((uint)iVar26 >> 8);
          bVar82 = ~(byte)((uint)iVar26 >> 0x10);
          bVar83 = ~(byte)((uint)iVar26 >> 0x18);
          auVar91[0] = SUB41(fVar114,0) & bVar58;
          auVar91[1] = (byte)((uint)fVar114 >> 8) & bVar67;
          auVar91[2] = (byte)((uint)fVar114 >> 0x10) & bVar68;
          auVar91[3] = (byte)((uint)fVar114 >> 0x18) & bVar69;
          auVar91[4] = SUB41(fVar128,0) & bVar70;
          auVar91[5] = (byte)((uint)fVar128 >> 8) & bVar72;
          auVar91[6] = (byte)((uint)fVar128 >> 0x10) & bVar73;
          auVar91[7] = (byte)((uint)fVar128 >> 0x18) & bVar74;
          auVar91[8] = SUB41(fVar129,0) & bVar75;
          auVar91[9] = (byte)((uint)fVar129 >> 8) & bVar76;
          auVar91[10] = (byte)((uint)fVar129 >> 0x10) & bVar77;
          auVar91[0xb] = (byte)((uint)fVar129 >> 0x18) & bVar78;
          auVar91[0xc] = SUB41(fVar130,0) & bVar79;
          auVar91[0xd] = (byte)((uint)fVar130 >> 8) & bVar81;
          auVar91[0xe] = (byte)((uint)fVar130 >> 0x10) & bVar82;
          auVar91[0xf] = (byte)((uint)fVar130 >> 0x18) & bVar83;
          auVar22[0] = SUB41(fVar38,0) & bVar58;
          auVar22[1] = (byte)((uint)fVar38 >> 8) & bVar67;
          auVar22[2] = (byte)((uint)fVar38 >> 0x10) & bVar68;
          auVar22[3] = (byte)((uint)fVar38 >> 0x18) & bVar69;
          auVar22[4] = SUB41(fVar12,0) & bVar70;
          auVar22[5] = (byte)((uint)fVar12 >> 8) & bVar72;
          auVar22[6] = (byte)((uint)fVar12 >> 0x10) & bVar73;
          auVar22[7] = (byte)((uint)fVar12 >> 0x18) & bVar74;
          auVar22[8] = SUB41(fVar39,0) & bVar75;
          auVar22[9] = (byte)((uint)fVar39 >> 8) & bVar76;
          auVar22[10] = (byte)((uint)fVar39 >> 0x10) & bVar77;
          auVar22[0xb] = (byte)((uint)fVar39 >> 0x18) & bVar78;
          auVar22[0xc] = SUB41(fVar53,0) & bVar79;
          auVar22[0xd] = (byte)((uint)fVar53 >> 8) & bVar81;
          auVar22[0xe] = (byte)((uint)fVar53 >> 0x10) & bVar82;
          auVar22[0xf] = (byte)((uint)fVar53 >> 0x18) & bVar83;
          auVar47[0] = SUB41(fVar40,0) & bVar58;
          auVar47[1] = (byte)((uint)fVar40 >> 8) & bVar67;
          auVar47[2] = (byte)((uint)fVar40 >> 0x10) & bVar68;
          auVar47[3] = (byte)((uint)fVar40 >> 0x18) & bVar69;
          auVar47[4] = SUB41(fVar54,0) & bVar70;
          auVar47[5] = (byte)((uint)fVar54 >> 8) & bVar72;
          auVar47[6] = (byte)((uint)fVar54 >> 0x10) & bVar73;
          auVar47[7] = (byte)((uint)fVar54 >> 0x18) & bVar74;
          auVar47[8] = SUB41(fVar56,0) & bVar75;
          auVar47[9] = (byte)((uint)fVar56 >> 8) & bVar76;
          auVar47[10] = (byte)((uint)fVar56 >> 0x10) & bVar77;
          auVar47[0xb] = (byte)((uint)fVar56 >> 0x18) & bVar78;
          auVar47[0xc] = SUB41(fVar57,0) & bVar79;
          auVar47[0xd] = (byte)((uint)fVar57 >> 8) & bVar81;
          auVar47[0xe] = (byte)((uint)fVar57 >> 0x10) & bVar82;
          auVar47[0xf] = (byte)((uint)fVar57 >> 0x18) & bVar83;
          auVar31[0] = SUB41(fVar96,0) & bVar58;
          auVar31[1] = (byte)((uint)fVar96 >> 8) & bVar67;
          auVar31[2] = (byte)((uint)fVar96 >> 0x10) & bVar68;
          auVar31[3] = (byte)((uint)fVar96 >> 0x18) & bVar69;
          auVar31[4] = SUB41(fVar55,0) & bVar70;
          auVar31[5] = (byte)((uint)fVar55 >> 8) & bVar72;
          auVar31[6] = (byte)((uint)fVar55 >> 0x10) & bVar73;
          auVar31[7] = (byte)((uint)fVar55 >> 0x18) & bVar74;
          auVar31[8] = SUB41(fVar13,0) & bVar75;
          auVar31[9] = (byte)((uint)fVar13 >> 8) & bVar76;
          auVar31[10] = (byte)((uint)fVar13 >> 0x10) & bVar77;
          auVar31[0xb] = (byte)((uint)fVar13 >> 0x18) & bVar78;
          auVar31[0xc] = SUB41(fVar35,0) & bVar79;
          auVar31[0xd] = (byte)((uint)fVar35 >> 8) & bVar81;
          auVar31[0xe] = (byte)((uint)fVar35 >> 0x10) & bVar82;
          auVar31[0xf] = (byte)((uint)fVar35 >> 0x18) & bVar83;
        }
        fVar14 = auVar91._0_4_;
        fVar71 = auVar91._4_4_ * fVar132;
        fVar96 = auVar91._8_4_ * fVar132;
        fVar80 = auVar91._12_4_ * fVar132;
        fVar39 = auVar22._0_4_;
        fVar53 = auVar22._4_4_;
        fVar37 = auVar22._8_4_;
        fVar35 = fVar37 * fVar27;
        fVar38 = auVar22._12_4_ * fVar27;
        fVar55 = auVar47._4_4_;
        fVar13 = auVar47._8_4_;
        fVar12 = auVar47._12_4_ * fVar36;
        fVar132 = fVar14 * fVar132 + fVar39 * fVar27 + auVar47._0_4_ * fVar36 + auVar31._0_4_;
        fVar27 = fVar71 + fVar53 * fVar27 + fVar55 * fVar36 + auVar31._4_4_;
        fVar36 = fVar96 + fVar35 + fVar13 * fVar36 + auVar31._8_4_;
        fVar35 = fVar80 + fVar38 + fVar12 + auVar31._12_4_;
        auVar60 = NEON_fmov(0x3f800000,4);
        fVar12 = (float)_DAT_03889820 * fVar14 + (float)_DAT_0388a450 * fVar53 +
                 (float)_DAT_03889eb0 * fVar13 + auVar60._0_4_;
        fVar71 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar14 +
                 (float)((ulong)_DAT_0388a450 >> 0x20) * fVar53 +
                 (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar13 + auVar60._4_4_;
        fVar96 = (float)_UNK_03889828 * fVar14 + (float)_UNK_0388a458 * fVar53 +
                 (float)_UNK_03889eb8 * fVar13 + auVar60._8_4_;
        fVar53 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar14 +
                 (float)((ulong)_UNK_0388a458 >> 0x20) * fVar53 +
                 (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar13 + auVar60._12_4_;
        uVar16 = NEON_ext(auVar91._0_8_,auVar47._0_8_,4,1);
        auVar60 = NEON_ext(auVar91,auVar91,8,1);
        auVar48._0_4_ = (float)uVar16 + fVar39;
        fVar38 = (float)((ulong)uVar16 >> 0x20);
        auVar48._4_4_ = fVar38 + auVar60._0_4_;
        auVar48._8_4_ = fVar37 + fVar55;
        auVar48._12_4_ = 0;
        auVar62._0_4_ = (float)uVar16 - fVar39;
        auVar62._4_4_ = fVar38 - auVar60._0_4_;
        auVar62._8_4_ = fVar37 - fVar55;
        auVar62._12_4_ = 0;
        uVar84 = a64_TBL(ZEXT816(0),auVar48,auVar62,DAT_0388a888);
        uVar98 = (undefined1)((ulong)uVar84 >> 0x20);
        uVar99 = (undefined1)((ulong)uVar84 >> 0x28);
        uVar100 = (undefined1)((ulong)uVar84 >> 0x30);
        uVar101 = (undefined1)((ulong)uVar84 >> 0x38);
        uVar17 = a64_TBL(ZEXT816(0),auVar48,auVar62,DAT_0388a710);
        uVar102 = (undefined1)((ulong)uVar17 >> 8);
        uVar103 = (undefined1)((ulong)uVar17 >> 0x10);
        uVar104 = (undefined1)((ulong)uVar17 >> 0x18);
        uVar105 = (undefined1)((ulong)uVar17 >> 0x20);
        uVar106 = (undefined1)((ulong)uVar17 >> 0x28);
        uVar107 = (undefined1)((ulong)uVar17 >> 0x30);
        uVar108 = (undefined1)((ulong)uVar17 >> 0x38);
        uVar18 = a64_TBL(ZEXT816(0),auVar48,auVar62,DAT_0388a758);
        uVar16 = a64_TBL(ZEXT816(0),auVar48,auVar62,DAT_0388a880);
        uVar8 = a64_TBL(ZEXT816(0),auVar48,auVar62,DAT_0388a640);
        auVar92._0_4_ = (undefined4)uVar84;
        auVar92._4_4_ = fVar71;
        auVar92._8_8_ = uVar18;
        uVar18 = a64_TBL(ZEXT816(0),auVar48,auVar62,DAT_0388a700);
        uVar84 = a64_TBL(ZEXT816(0),auVar48,auVar62,DAT_0388a590);
        auVar63._4_4_ = fVar71;
        auVar63._0_4_ = fVar71;
        auVar63._8_4_ = fVar71;
        auVar63._12_4_ = fVar71;
        auVar126._4_4_ = fVar12;
        auVar126._0_4_ = fVar12;
        auVar126._8_4_ = fVar12;
        auVar126._12_4_ = fVar12;
        auVar110._0_8_ = CONCAT44(-(uint)(fVar12 <= fVar71),-(uint)(fVar12 <= fVar71));
        auVar110._8_4_ = -(uint)(fVar12 <= fVar71);
        auVar110._12_4_ = -(uint)(fVar12 <= fVar71);
        auVar125._8_8_ = auVar110._8_8_;
        auVar125._0_8_ = auVar110._0_8_;
        auVar5[4] = uVar98;
        auVar5._0_4_ = fVar12;
        auVar5[5] = uVar99;
        auVar5[6] = uVar100;
        auVar5[7] = uVar101;
        auVar5[8] = (char)uVar17;
        auVar5[9] = uVar102;
        auVar5[10] = uVar103;
        auVar5[0xb] = uVar104;
        auVar5[0xc] = uVar105;
        auVar5[0xd] = uVar106;
        auVar5[0xe] = uVar107;
        auVar5[0xf] = uVar108;
        auVar111[4] = uVar98;
        auVar111._0_4_ = fVar12;
        auVar111[5] = uVar99;
        auVar111[6] = uVar100;
        auVar111[7] = uVar101;
        auVar111[8] = (char)uVar17;
        auVar111[9] = uVar102;
        auVar111[10] = uVar103;
        auVar111[0xb] = uVar104;
        auVar111[0xc] = uVar105;
        auVar111[0xd] = uVar106;
        auVar111[0xe] = uVar107;
        auVar111[0xf] = uVar108;
        auVar111 = auVar111 ^ (auVar5 ^ auVar92) & auVar110;
        auVar126 = auVar126 ^ (auVar126 ^ auVar63) & auVar125;
        auVar49._4_4_ = fVar96;
        auVar49._0_4_ = fVar96;
        auVar49._8_4_ = fVar96;
        auVar49._12_4_ = fVar96;
        auVar64._0_8_ =
             CONCAT44(-(uint)(auVar126._4_4_ <= fVar96),-(uint)(auVar126._0_4_ <= fVar96));
        auVar64._8_4_ = -(uint)(auVar126._8_4_ <= fVar96);
        auVar64._12_4_ = -(uint)(auVar126._12_4_ <= fVar96);
        auVar93._8_8_ = auVar64._8_8_;
        auVar93._0_8_ = auVar64._0_8_;
        auVar6[8] = SUB41(fVar96,0);
        auVar6._0_8_ = uVar16;
        auVar6[9] = (char)((uint)fVar96 >> 8);
        auVar6[10] = (char)((uint)fVar96 >> 0x10);
        auVar6[0xb] = (char)((uint)fVar96 >> 0x18);
        auVar6[0xc] = (char)((ulong)uVar8 >> 0x20);
        auVar6[0xd] = (char)((ulong)uVar8 >> 0x28);
        auVar6[0xe] = (char)((ulong)uVar8 >> 0x30);
        auVar6[0xf] = (char)((ulong)uVar8 >> 0x38);
        auVar111 = auVar111 ^ (auVar111 ^ auVar6) & auVar64;
        auVar126 = auVar126 ^ (auVar126 ^ auVar49) & auVar93;
        auVar32._0_4_ = -(uint)(auVar126._0_4_ <= fVar53);
        auVar32._4_4_ = -(uint)(auVar126._4_4_ <= fVar53);
        auVar32._8_4_ = -(uint)(auVar126._8_4_ <= fVar53);
        auVar32._12_4_ = -(uint)(auVar126._12_4_ <= fVar53);
        auVar7._8_4_ = (int)uVar84;
        auVar7._0_8_ = uVar18;
        auVar7._12_4_ = fVar53;
        auVar111 = auVar111 ^ (auVar111 ^ auVar7) & auVar32;
        fVar39 = auVar111._0_4_;
        auVar50._0_4_ = fVar39 * fVar39;
        fVar53 = auVar111._4_4_;
        auVar50._4_4_ = fVar53 * fVar53;
        fVar37 = auVar111._8_4_;
        auVar50._8_4_ = fVar37 * fVar37;
        fVar71 = auVar111._12_4_;
        auVar50._12_4_ = fVar71 * fVar71;
        auVar60 = NEON_ext(auVar50,auVar50,8,1);
        fVar12 = auVar60._0_4_ + auVar50._0_4_;
        fVar96 = auVar60._4_4_ + auVar50._4_4_;
        fVar38 = fVar12 + fVar96;
        fVar12 = fVar12 + fVar96;
        auVar51._8_8_ = CONCAT44(fVar12,fVar38);
        auVar51._0_8_ = CONCAT44(fVar12,fVar38);
        auVar60 = NEON_frsqrte(auVar51,4);
        auVar94._0_4_ = auVar60._0_4_ * fVar38;
        auVar94._4_4_ = auVar60._4_4_ * fVar12;
        auVar94._8_4_ = auVar60._8_4_ * fVar38;
        auVar94._12_4_ = auVar60._12_4_ * fVar12;
        auVar59 = NEON_frsqrts(auVar60,auVar94,4);
        auVar65._0_4_ = auVar60._0_4_ * auVar59._0_4_;
        auVar65._4_4_ = auVar60._4_4_ * auVar59._4_4_;
        auVar65._8_4_ = auVar60._8_4_ * auVar59._8_4_;
        auVar65._12_4_ = auVar60._12_4_ * auVar59._12_4_;
        auVar95._0_4_ = fVar38 * auVar65._0_4_;
        auVar95._4_4_ = fVar12 * auVar65._4_4_;
        auVar95._8_4_ = fVar38 * auVar65._8_4_;
        auVar95._12_4_ = fVar12 * auVar65._12_4_;
        iVar15 = -(uint)(fVar38 == 0.0);
        iVar24 = -(uint)(fVar12 == 0.0);
        iVar25 = -(uint)(fVar38 == 0.0);
        iVar26 = -(uint)(fVar12 == 0.0);
        auVar60 = NEON_frsqrts(auVar65,auVar95,4);
        fVar39 = auVar65._0_4_ * auVar60._0_4_ * fVar39;
        fVar53 = auVar65._4_4_ * auVar60._4_4_ * fVar53;
        fVar37 = auVar65._8_4_ * auVar60._8_4_ * fVar37;
        fVar71 = auVar65._12_4_ * auVar60._12_4_ * fVar71;
        uVar8 = a64_TBL(ZEXT816(0),auVar66,DAT_0388a6c8);
        fVar39 = (float)CONCAT13((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                                 CONCAT12((byte)((uint)fVar39 >> 0x10) &
                                          ~(byte)((uint)iVar15 >> 0x10),
                                          CONCAT11((byte)((uint)fVar39 >> 8) &
                                                   ~(byte)((uint)iVar15 >> 8),
                                                   SUB41(fVar39,0) & ~(byte)iVar15)));
        auVar33._0_8_ =
             CONCAT17((byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                      CONCAT16((byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                               CONCAT15((byte)((uint)fVar53 >> 8) & ~(byte)((uint)iVar24 >> 8),
                                        CONCAT14(SUB41(fVar53,0) & ~(byte)iVar24,fVar39))));
        auVar33[8] = SUB41(fVar37,0) & ~(byte)iVar25;
        auVar33[9] = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar25 >> 8);
        auVar33[10] = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
        auVar33[0xb] = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
        auVar33[0xc] = SUB41(fVar71,0) & ~(byte)iVar26;
        auVar33[0xd] = (byte)((uint)fVar71 >> 8) & ~(byte)((uint)iVar26 >> 8);
        auVar33[0xe] = (byte)((uint)fVar71 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
        auVar33[0xf] = (byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
        uVar16 = a64_TBL(ZEXT816(0),auVar33,DAT_0388a680);
        uVar41 = a64_TBL(ZEXT816(0),auVar66,DAT_0388a680);
        uVar84 = a64_TBL(ZEXT816(0),auVar33,DAT_0388a580);
        uVar18 = a64_TBL(ZEXT816(0),auVar66,DAT_0388a580);
        fVar53 = (float)uVar16 * (float)uVar8;
        fVar38 = (float)((ulong)uVar16 >> 0x20);
        fVar12 = fVar38 * (float)((ulong)uVar8 >> 0x20);
        param_3._0_4_ = fVar39 * (float)uVar18;
        fVar37 = (float)((ulong)auVar33._0_8_ >> 0x20);
        param_3._4_4_ = fVar37 * (float)((ulong)uVar18 >> 0x20);
        uVar18 = a64_TBL(ZEXT816(0),auVar33,DAT_0388a880);
        fVar96 = (float)((ulong)uVar18 >> 0x20);
        uVar17 = a64_TBL(ZEXT816(0),auVar66,DAT_0388a880);
        uVar8 = CONCAT17((char)((uint)fVar12 >> 0x18),
                         CONCAT16((char)((uint)fVar12 >> 0x10),
                                  CONCAT15((char)((uint)fVar12 >> 8),
                                           CONCAT14(SUB41(fVar12,0),fVar53))));
        param_3._8_8_ = uVar8;
        uVar133 = a64_TBL(ZEXT816(0),auVar66,DAT_0388a790);
        fVar71 = (float)((ulong)uVar84 >> 0x20);
        fVar55 = auVar66._4_4_;
        fVar13 = auVar66._8_4_;
        fVar80 = auVar66._12_4_;
        auVar127._8_8_ = auVar66._0_8_;
        auVar127._0_8_ = auVar66._0_8_;
        uVar134 = a64_TBL(ZEXT816(0),auVar127,DAT_0388a648);
        param_2._0_4_ = fVar39 * (float)uVar134;
        param_2._4_4_ = fVar37 * (float)((ulong)uVar134 >> 0x20);
        param_2._8_8_ = 0;
        fVar12 = (float)((ulong)_DAT_03889ad0 >> 0x20);
        fVar39 = (float)((ulong)_UNK_03889ad8 >> 0x20);
        auVar66._0_4_ =
             (auVar66._0_4_ * (float)uVar84 + (float)_DAT_03889ad0 * param_3._0_4_ +
             (float)_DAT_03889ad0 * (float)uVar18 * (float)uVar41) - (float)uVar16 * (float)uVar17;
        auVar66._4_4_ =
             (fVar55 * fVar71 + fVar12 * param_3._4_4_ +
             fVar12 * fVar96 * (float)((ulong)uVar41 >> 0x20)) -
             fVar38 * (float)((ulong)uVar17 >> 0x20);
        auVar66._8_4_ =
             (fVar13 * (float)uVar84 + (float)_UNK_03889ad8 * fVar53 +
             (float)_UNK_03889ad8 * param_2._0_4_) - (float)uVar18 * (float)uVar133;
        auVar66._12_4_ =
             (fVar80 * fVar71 + fVar39 * (float)((ulong)uVar8 >> 0x20) + fVar39 * param_2._4_4_) -
             fVar96 * (float)((ulong)uVar133 >> 0x20);
      }
      *(undefined1 *)(local_50 + 0x1c) = 1;
      local_50[0x19] = auVar66._8_8_;
      local_50[0x18] = auVar66._0_8_;
      local_50[0x1b] = CONCAT44(fVar35,fVar36);
      local_50[0x1a] = CONCAT44(fVar27,fVar132);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x18))(local_58);
      }
      *(undefined1 *)(param_4 + 0x80) = 0;
      if (local_50 != (long *)0x0) {
        lVar10 = local_50[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar15 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_50 + 0x20))();
          cVar3 = *(char *)(param_4 + 800);
          goto joined_r0x02be2e78;
        }
      }
      goto LAB_02be2e74;
    }
    *(undefined1 *)(param_4 + 0x80) = 0;
    cVar3 = *(char *)(param_4 + 800);
  }
joined_r0x02be2e78:
  if (cVar3 != '\0') {
    local_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    FUN_008c4b3c(&local_70,param_4 + 0x68);
    FUN_00956dac(&local_50,&local_70);
    puVar9 = (undefined8 *)CONCAT44(uStack_6c,local_70);
    if (puVar9 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar9 + 1);
      do {
        iVar15 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 + -1 == 0) {
        puVar9[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_48 = *puVar9;
        FUN_02a44274(lVar10 + 0xd8,&local_48);
      }
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x40))();
      auVar23._0_4_ = extraout_s0 * extraout_s0;
      auVar23._4_4_ = extraout_var * extraout_var;
      auVar23._8_4_ = extraout_var_00 * extraout_var_00;
      auVar23._12_4_ = extraout_var_01 * extraout_var_01;
      auVar34._0_4_ = param_2._0_4_ * param_2._0_4_;
      auVar34._4_4_ = param_2._4_4_ * param_2._4_4_;
      auVar34._8_4_ = param_2._8_4_ * param_2._8_4_;
      auVar34._12_4_ = param_2._12_4_ * param_2._12_4_;
      *(undefined1 *)(param_4 + 0x321) = 1;
      auVar52._0_4_ = param_3._0_4_ * param_3._0_4_;
      auVar52._4_4_ = param_3._4_4_ * param_3._4_4_;
      auVar52._8_4_ = param_3._8_4_ * param_3._8_4_;
      auVar52._12_4_ = param_3._12_4_ * param_3._12_4_;
      auVar60 = NEON_ext(auVar23,auVar23,8,1);
      auVar59 = NEON_ext(auVar34,auVar34,8,1);
      auVar19 = NEON_ext(auVar52,auVar52,8,1);
      *(ulong *)(param_4 + 0x318) =
           (ulong)(uint)SQRT(auVar19._0_4_ + auVar52._0_4_ + auVar19._4_4_ + auVar52._4_4_);
      *(ulong *)(param_4 + 0x310) =
           CONCAT44(SQRT(auVar59._0_4_ + auVar34._0_4_ + auVar59._4_4_ + auVar34._4_4_),
                    SQRT(auVar60._0_4_ + auVar23._0_4_ + auVar60._4_4_ + auVar23._4_4_));
      if (local_50 != (long *)0x0) {
        lVar10 = local_50[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar15 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_50 + 0x20))();
          cVar3 = *(char *)(param_4 + 0x321);
          goto joined_r0x02be3094;
        }
      }
    }
  }
  cVar3 = *(char *)(param_4 + 0x321);
joined_r0x02be3094:
  if (cVar3 != '\0') {
    if (*(long *)(param_4 + 0x300) != 0) {
      auVar60 = *(undefined1 (*) [16])(param_4 + 0x310);
      auVar59 = NEON_ext(auVar60,auVar60,8,1);
      uStack_68 = auVar59._0_4_;
      uStack_64 = 0;
      local_70 = auVar60._0_4_;
      uStack_6c = auVar60._4_4_;
      FUN_02fe4fa0(*(long *)(param_4 + 0x300),&local_70,1);
    }
    *(undefined1 *)(param_4 + 0x321) = 0;
  }
  uStack_6c = 0;
  uStack_68 = 1;
  plVar11 = *(long **)(param_4 + 200);
  local_70 = param_1;
  if (plVar11 == (long *)0x0) {
    FUN_02be3150(param_4,&local_70);
  }
  else {
    if (plVar11[1] != 0) {
      plVar2 = plVar11 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_02be3150(param_4,&local_70);
    if (plVar11[1] != 0) {
      plVar2 = plVar11 + 2;
      do {
        lVar10 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
  }
  return;
}


