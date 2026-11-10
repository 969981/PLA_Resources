/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e49144; name: FUN_01e49144
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e49144(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 long param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined3 uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  int iVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  float fVar26;
  float extraout_s0;
  undefined1 auVar28 [12];
  float extraout_var;
  float fVar27;
  float fVar35;
  float extraout_var_00;
  float fVar36;
  float extraout_var_01;
  float fVar37;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  byte bVar41;
  undefined1 uVar42;
  byte bVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined7 uVar56;
  undefined1 auVar57 [12];
  byte bVar61;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar62;
  float fVar63;
  float fVar74;
  int iVar76;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  int iVar75;
  int iVar77;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  int iVar86;
  undefined8 uVar78;
  int iVar87;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar88;
  undefined8 uVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar98;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined8 uVar99;
  undefined8 uVar100;
  undefined8 uVar101;
  float fVar107;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined8 uVar108;
  undefined8 uVar109;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined8 uVar116;
  undefined8 uVar117;
  float fVar118;
  undefined8 uVar119;
  undefined8 uVar120;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  long *local_70 [2];
  long *local_60;
  long *local_58;
  
  puVar17 = PTR_DAT_04379e80;
  puVar16 = PTR_DAT_04379e78;
  if (*(int *)(param_4 + 800) != 2) {
    return;
  }
  uVar38 = 0;
  uVar39 = 0;
  uVar40 = 0x80;
  uVar42 = 0x3f;
  uVar44 = 0;
  uVar45 = 0;
  uVar46 = 0;
  uVar47 = 0;
  uVar48 = 0;
  uVar49 = 0;
  uVar50 = 0;
  uVar51 = 0;
  uVar52 = 0;
  uVar53 = 0;
  uVar54 = 0;
  uVar55 = 0;
  if (*(float *)(param_4 + 0x328) <= 1.0) {
    lVar21 = *(long *)(param_4 + 0x300);
    if (lVar21 == 0) {
      return;
    }
    if (*(int *)(lVar21 + 0xc) == 0) {
      return;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    iVar18 = *(int *)(lVar21 + 0xc);
    do {
      plVar24 = *(long **)(lVar21 + 0x10);
      if (((*puVar16 & 1) == 0) && (iVar75 = __cxa_guard_acquire(puVar16), iVar75 != 0)) {
        uVar19 = FUN_0095a420();
        *(undefined8 *)puVar17 = uVar19;
        __cxa_guard_release(puVar16);
      }
      while( true ) {
        if (plVar24 == (long *)0x0) {
          return;
        }
        if (plVar24 == (long *)puVar17) break;
        plVar24 = (long *)*plVar24;
      }
      iVar75 = *piVar1;
      if (iVar75 == iVar18) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar18 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar21 = *(long *)(lVar21 + 0x18);
          if (lVar21 == 0) {
            return;
          }
          lVar23 = *(long *)(lVar21 + 0x1a0);
          plVar24 = (long *)(lVar21 + -0x50);
          if ((lVar23 == 0) || (*(int *)(lVar23 + 0xc) == 0)) goto LAB_01e49334;
          piVar1 = (int *)(lVar23 + 0xc);
          iVar18 = *(int *)(lVar23 + 0xc);
          goto LAB_01e49394;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar18 = iVar75;
      if (iVar75 == 0) {
        return;
      }
    } while( true );
  }
  FUN_02be88ac(local_70,param_4,0);
  FUN_00ab5ae0(&local_60,local_70);
  if (local_70[0] != (long *)0x0) {
    plVar24 = local_70[0] + 1;
    do {
      iVar18 = (int)*plVar24 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar3) {
        *(int *)plVar24 = iVar18;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar18 == 0) {
      local_70[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar21 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar21;
      local_58 = (long *)*local_70[0];
      FUN_02a44274(lVar21 + 0xd8,&local_58);
    }
  }
  if (local_60 == (long *)0x0) {
    return;
  }
  *(undefined1 *)(param_4 + 0x325) = 1;
  FUN_02bdb2c4(local_60,0);
  if (local_60 == (long *)0x0) {
    return;
  }
  lVar21 = local_60[0xb];
  piVar1 = (int *)(lVar21 + 0xc);
  do {
    iVar18 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar18 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar18 + -1 != 0) {
    return;
  }
  *(undefined8 *)(lVar21 + 0x18) = 0;
  pcVar22 = *(code **)(*local_60 + 0x20);
  plVar24 = local_60;
  goto LAB_01e49268;
  while (iVar18 = iVar75, iVar75 != 0) {
LAB_01e49394:
    plVar25 = *(long **)(lVar23 + 0x10);
    lVar20 = FUN_00a3edb8();
    while( true ) {
      if (plVar25 == (long *)0x0) goto LAB_01e49334;
      if (plVar25 == (long *)lVar20) break;
      plVar25 = (long *)*plVar25;
    }
    iVar75 = *piVar1;
    if (iVar75 == iVar18) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar18 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar23 = *(long *)(lVar23 + 0x18);
        if (lVar23 != 0) {
          plVar25 = (long *)(lVar23 + -0x50);
          FUN_009c69bc(local_70,plVar25);
          FUN_009c69bc(&local_58,param_4);
          (**(code **)(*local_58 + 0x40))();
          uVar19 = DAT_0388a880;
          auVar64._0_4_ = extraout_s0 * extraout_s0;
          auVar64._4_4_ = extraout_var * extraout_var;
          auVar64._8_4_ = extraout_var_00 * extraout_var_00;
          auVar64._12_4_ = extraout_var_01 * extraout_var_01;
          auVar79 = NEON_ext(auVar64,auVar64,8,1);
          fVar62 = auVar79._0_4_ + auVar64._0_4_;
          fVar74 = auVar79._4_4_ + auVar64._4_4_;
          fVar26 = fVar62 + fVar74;
          fVar62 = fVar62 + fVar74;
          auVar65._8_8_ = CONCAT44(fVar62,fVar26);
          auVar65._0_8_ = CONCAT44(fVar62,fVar26);
          auVar79 = NEON_frsqrte(auVar65,4);
          auVar90._0_4_ = auVar79._0_4_ * fVar26;
          auVar90._4_4_ = auVar79._4_4_ * fVar62;
          auVar90._8_4_ = auVar79._8_4_ * fVar26;
          auVar90._12_4_ = auVar79._12_4_ * fVar62;
          auVar91 = NEON_frsqrts(auVar79,auVar90,4);
          auVar80._0_4_ = auVar79._0_4_ * auVar91._0_4_;
          auVar80._4_4_ = auVar79._4_4_ * auVar91._4_4_;
          auVar80._8_4_ = auVar79._8_4_ * auVar91._8_4_;
          auVar80._12_4_ = auVar79._12_4_ * auVar91._12_4_;
          auVar92._0_4_ = fVar26 * auVar80._0_4_;
          auVar92._4_4_ = fVar62 * auVar80._4_4_;
          auVar92._8_4_ = fVar26 * auVar80._8_4_;
          auVar92._12_4_ = fVar62 * auVar80._12_4_;
          iVar18 = -(uint)(fVar26 == 0.0);
          iVar75 = -(uint)(fVar62 == 0.0);
          iVar76 = -(uint)(fVar26 == 0.0);
          iVar77 = -(uint)(fVar62 == 0.0);
          auVar79 = NEON_frsqrts(auVar80,auVar92,4);
          fVar26 = extraout_s0 * auVar80._0_4_ * auVar79._0_4_;
          fVar62 = extraout_var * auVar80._4_4_ * auVar79._4_4_;
          fVar74 = extraout_var_00 * auVar80._8_4_ * auVar79._8_4_;
          fVar37 = extraout_var_01 * auVar80._12_4_ * auVar79._12_4_;
          fVar63 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                                   CONCAT12((byte)((uint)fVar26 >> 0x10) &
                                            ~(byte)((uint)iVar18 >> 0x10),
                                            CONCAT11((byte)((uint)fVar26 >> 8) &
                                                     ~(byte)((uint)iVar18 >> 8),
                                                     SUB41(fVar26,0) & ~(byte)iVar18)));
          auVar66._0_8_ =
               CONCAT17((byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18),
                        CONCAT16((byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10),
                                 CONCAT15((byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar75 >> 8),
                                          CONCAT14(SUB41(fVar62,0) & ~(byte)iVar75,fVar63))));
          auVar66[8] = SUB41(fVar74,0) & ~(byte)iVar76;
          auVar66[9] = (byte)((uint)fVar74 >> 8) & ~(byte)((uint)iVar76 >> 8);
          auVar66[10] = (byte)((uint)fVar74 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10);
          auVar66[0xb] = (byte)((uint)fVar74 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18);
          auVar66[0xc] = SUB41(fVar37,0) & ~(byte)iVar77;
          auVar66[0xd] = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar77 >> 8);
          auVar66[0xe] = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10);
          auVar66[0xf] = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
          auVar81._0_4_ =
               (float)CONCAT13(uVar42,CONCAT12(uVar40,CONCAT11(uVar39,uVar38))) *
               (float)CONCAT13(uVar42,CONCAT12(uVar40,CONCAT11(uVar39,uVar38)));
          auVar81._4_4_ =
               (float)CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44))) *
               (float)CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44)));
          auVar81._8_4_ =
               (float)CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48))) *
               (float)CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48)));
          auVar81._12_4_ =
               (float)CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52))) *
               (float)CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52)));
          auVar79 = NEON_ext(auVar81,auVar81,8,1);
          fVar62 = auVar79._0_4_ + auVar81._0_4_;
          fVar74 = auVar79._4_4_ + auVar81._4_4_;
          fVar26 = fVar62 + fVar74;
          fVar62 = fVar62 + fVar74;
          auVar82._8_8_ = CONCAT44(fVar62,fVar26);
          auVar82._0_8_ = CONCAT44(fVar62,fVar26);
          auVar79 = NEON_frsqrte(auVar82,4);
          auVar102._0_4_ = auVar79._0_4_ * fVar26;
          auVar102._4_4_ = auVar79._4_4_ * fVar62;
          auVar102._8_4_ = auVar79._8_4_ * fVar26;
          auVar102._12_4_ = auVar79._12_4_ * fVar62;
          auVar91 = NEON_frsqrts(auVar79,auVar102,4);
          auVar93._0_4_ = auVar79._0_4_ * auVar91._0_4_;
          auVar93._4_4_ = auVar79._4_4_ * auVar91._4_4_;
          auVar93._8_4_ = auVar79._8_4_ * auVar91._8_4_;
          auVar93._12_4_ = auVar79._12_4_ * auVar91._12_4_;
          auVar103._0_4_ = fVar26 * auVar93._0_4_;
          auVar103._4_4_ = fVar62 * auVar93._4_4_;
          auVar103._8_4_ = fVar26 * auVar93._8_4_;
          auVar103._12_4_ = fVar62 * auVar93._12_4_;
          iVar77 = -(uint)(fVar26 == 0.0);
          iVar86 = -(uint)(fVar62 == 0.0);
          iVar87 = -(uint)(fVar26 == 0.0);
          auVar79 = NEON_frsqrts(auVar93,auVar103,4);
          fVar62 = (float)CONCAT13(uVar42,CONCAT12(uVar40,CONCAT11(uVar39,uVar38))) *
                   auVar93._0_4_ * auVar79._0_4_;
          fVar26 = (float)CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44))) *
                   auVar93._4_4_ * auVar79._4_4_;
          fVar74 = (float)CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48))) *
                   auVar93._8_4_ * auVar79._8_4_;
          bVar41 = (byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10);
          bVar43 = (byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
          fVar27 = param_3._0_4_;
          auVar94._0_4_ = fVar27 * fVar27;
          fVar35 = param_3._4_4_;
          auVar94._4_4_ = fVar35 * fVar35;
          fVar36 = param_3._8_4_;
          auVar94._8_4_ = fVar36 * fVar36;
          auVar94._12_4_ = param_3._12_4_ * param_3._12_4_;
          auVar79 = NEON_ext(auVar94,auVar94,8,1);
          fVar88 = auVar79._0_4_ + auVar94._0_4_;
          fVar98 = auVar79._4_4_ + auVar94._4_4_;
          fVar37 = fVar88 + fVar98;
          fVar88 = fVar88 + fVar98;
          auVar95._8_8_ = CONCAT44(fVar88,fVar37);
          auVar95._0_8_ = CONCAT44(fVar88,fVar37);
          auVar79 = NEON_frsqrte(auVar95,4);
          auVar110._0_4_ = auVar79._0_4_ * fVar37;
          auVar110._4_4_ = auVar79._4_4_ * fVar88;
          auVar110._8_4_ = auVar79._8_4_ * fVar37;
          auVar110._12_4_ = auVar79._12_4_ * fVar88;
          auVar91 = NEON_frsqrts(auVar79,auVar110,4);
          auVar104._0_4_ = auVar79._0_4_ * auVar91._0_4_;
          auVar104._4_4_ = auVar79._4_4_ * auVar91._4_4_;
          auVar104._8_4_ = auVar79._8_4_ * auVar91._8_4_;
          auVar104._12_4_ = auVar79._12_4_ * auVar91._12_4_;
          auVar111._0_4_ = fVar37 * auVar104._0_4_;
          auVar111._4_4_ = fVar88 * auVar104._4_4_;
          auVar111._8_4_ = fVar37 * auVar104._8_4_;
          auVar111._12_4_ = fVar88 * auVar104._12_4_;
          auVar79 = NEON_frsqrts(auVar104,auVar111,4);
          fVar27 = fVar27 * auVar104._0_4_ * auVar79._0_4_;
          fVar35 = fVar35 * auVar104._4_4_ * auVar79._4_4_;
          fVar36 = fVar36 * auVar104._8_4_ * auVar79._8_4_;
          iVar18 = -(uint)(fVar37 == 0.0);
          iVar75 = -(uint)(fVar88 == 0.0);
          iVar76 = -(uint)(fVar37 == 0.0);
          uVar56 = CONCAT16((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10),
                            CONCAT15((byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar75 >> 8),
                                     CONCAT14(SUB41(fVar35,0) & ~(byte)iVar75,
                                              CONCAT13((byte)((uint)fVar27 >> 0x18) &
                                                       ~(byte)((uint)iVar18 >> 0x18),
                                                       CONCAT12((byte)((uint)fVar27 >> 0x10) &
                                                                ~(byte)((uint)iVar18 >> 0x10),
                                                                CONCAT11((byte)((uint)fVar27 >> 8) &
                                                                         ~(byte)((uint)iVar18 >> 8),
                                                                         SUB41(fVar27,0) &
                                                                         ~(byte)iVar18))))));
          bVar61 = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18);
          auVar57._0_8_ = CONCAT17(bVar61,uVar56);
          auVar57[8] = SUB41(fVar36,0) & ~(byte)iVar76;
          auVar57[9] = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar76 >> 8);
          auVar57[10] = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10);
          auVar57[0xb] = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18);
          uVar99 = NEON_ext(auVar66._0_8_,auVar57._0_8_,4,1);
          auVar79 = NEON_ext(auVar66,auVar66,8,1);
          fVar26 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar86 >> 0x18),
                                   CONCAT12((byte)((uint)fVar26 >> 0x10) &
                                            ~(byte)((uint)iVar86 >> 0x10),
                                            CONCAT11((byte)((uint)fVar26 >> 8) &
                                                     ~(byte)((uint)iVar86 >> 8),
                                                     SUB41(fVar26,0) & ~(byte)iVar86)));
          fVar35 = auVar57._8_4_;
          auVar91 = NEON_fmov(0x3f800000,4);
          fVar37 = (float)_DAT_03889820 * fVar63 + (float)_DAT_0388a450 * fVar26 +
                   (float)_DAT_03889eb0 * fVar35 + auVar91._0_4_;
          fVar88 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar63 +
                   (float)((ulong)_DAT_0388a450 >> 0x20) * fVar26 +
                   (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar35 + auVar91._4_4_;
          fVar27 = (float)_UNK_03889828 * fVar63 + (float)_UNK_0388a458 * fVar26 +
                   (float)_UNK_03889eb8 * fVar35 + auVar91._8_4_;
          fVar35 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar63 +
                   (float)((ulong)_UNK_0388a458 >> 0x20) * fVar26 +
                   (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar35 + auVar91._12_4_;
          fVar26 = (float)CONCAT13((byte)((uint)fVar74 >> 0x18) & ~(byte)((uint)iVar87 >> 0x18),
                                   CONCAT12((byte)((uint)fVar74 >> 0x10) &
                                            ~(byte)((uint)iVar87 >> 0x10),
                                            CONCAT11((byte)((uint)fVar74 >> 8) &
                                                     ~(byte)((uint)iVar87 >> 8),
                                                     SUB41(fVar74,0) & ~(byte)iVar87)));
          uVar4 = CONCAT11((byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar77 >> 8),
                           SUB41(fVar62,0) & ~(byte)iVar77);
          auVar58._0_4_ = (float)uVar99 + (float)CONCAT13(bVar43,CONCAT12(bVar41,uVar4));
          fVar62 = (float)((ulong)uVar99 >> 0x20);
          auVar58._4_4_ = fVar62 + auVar79._0_4_;
          uVar14 = (undefined3)((uint7)uVar56 >> 0x20);
          auVar58._8_4_ = fVar26 + (float)CONCAT13(bVar61,uVar14);
          auVar58._12_4_ = 0;
          auVar67._0_4_ = (float)uVar99 - (float)CONCAT13(bVar43,CONCAT12(bVar41,uVar4));
          auVar67._4_4_ = fVar62 - auVar79._0_4_;
          auVar67._8_4_ = fVar26 - (float)CONCAT13(bVar61,uVar14);
          auVar67._12_4_ = 0;
          uVar15 = a64_TBL(ZEXT816(0),auVar58,auVar67,DAT_0388a888);
          uVar99 = a64_TBL(ZEXT816(0),auVar58,auVar67,DAT_0388a710);
          auVar96._8_8_ = uVar99;
          auVar96._0_8_ = uVar15 & 0xffffffff00000000;
          uVar78 = a64_TBL(ZEXT816(0),auVar58,auVar67,DAT_0388a758);
          uVar100 = a64_TBL(ZEXT816(0),auVar58,auVar67,DAT_0388a640);
          auVar113._4_12_ = auVar96._4_12_;
          auVar113._0_4_ = fVar37;
          auVar83._0_8_ = a64_TBL(ZEXT816(0),auVar58,auVar67,DAT_0388a880);
          auVar105._0_8_ = a64_TBL(ZEXT816(0),auVar58,auVar67,DAT_0388a700);
          uVar99 = a64_TBL(ZEXT816(0),auVar58,auVar67,DAT_0388a590);
          auVar68._4_4_ = fVar88;
          auVar68._0_4_ = fVar88;
          auVar68._8_4_ = fVar88;
          auVar68._12_4_ = fVar88;
          auVar83._12_4_ = (undefined4)((ulong)uVar100 >> 0x20);
          auVar83._8_4_ = fVar27;
          auVar105._8_8_ = uVar99;
          auVar115._4_4_ = fVar37;
          auVar115._0_4_ = fVar37;
          auVar115._8_4_ = fVar37;
          auVar115._12_4_ = fVar37;
          auVar112._0_8_ = CONCAT44(-(uint)(fVar37 <= fVar88),-(uint)(fVar37 <= fVar88));
          auVar112._8_4_ = -(uint)(fVar37 <= fVar88);
          auVar112._12_4_ = -(uint)(fVar37 <= fVar88);
          auVar114._8_8_ = auVar112._8_8_;
          auVar114._0_8_ = auVar112._0_8_;
          auVar79[4] = SUB41(fVar88,0);
          auVar79._0_4_ = (int)uVar15;
          auVar79[5] = (char)((uint)fVar88 >> 8);
          auVar79[6] = (char)((uint)fVar88 >> 0x10);
          auVar79[7] = (char)((uint)fVar88 >> 0x18);
          auVar79[8] = (char)uVar78;
          auVar79[9] = (char)((ulong)uVar78 >> 8);
          auVar79[10] = (char)((ulong)uVar78 >> 0x10);
          auVar79[0xb] = (char)((ulong)uVar78 >> 0x18);
          auVar79[0xc] = (char)((ulong)uVar78 >> 0x20);
          auVar79[0xd] = (char)((ulong)uVar78 >> 0x28);
          auVar79[0xe] = (char)((ulong)uVar78 >> 0x30);
          auVar79[0xf] = (char)((ulong)uVar78 >> 0x38);
          auVar113 = auVar113 ^ (auVar113 ^ auVar79) & auVar112;
          uVar38 = SUB41(fVar27,0);
          uVar39 = (undefined1)((uint)fVar27 >> 8);
          uVar40 = (undefined1)((uint)fVar27 >> 0x10);
          uVar42 = (undefined1)((uint)fVar27 >> 0x18);
          auVar106._0_12_ = auVar105._0_12_;
          auVar106._12_4_ = fVar35;
          auVar115 = auVar115 ^ (auVar115 ^ auVar68) & auVar114;
          auVar59._0_8_ =
               CONCAT44(-(uint)(auVar115._4_4_ <= fVar27),-(uint)(auVar115._0_4_ <= fVar27));
          auVar59._8_4_ = -(uint)(auVar115._8_4_ <= fVar27);
          auVar59._12_4_ = -(uint)(auVar115._12_4_ <= fVar27);
          auVar69._8_8_ = auVar59._8_8_;
          auVar69._0_8_ = auVar59._0_8_;
          auVar113 = auVar113 ^ (auVar113 ^ auVar83) & auVar59;
          auVar91[4] = uVar38;
          auVar91._0_4_ = fVar27;
          auVar91[5] = uVar39;
          auVar91[6] = uVar40;
          auVar91[7] = uVar42;
          auVar91[8] = uVar38;
          auVar91[9] = uVar39;
          auVar91[10] = uVar40;
          auVar91[0xb] = uVar42;
          auVar91[0xc] = uVar38;
          auVar91[0xd] = uVar39;
          auVar91[0xe] = uVar40;
          auVar91[0xf] = uVar42;
          auVar115 = auVar115 ^ (auVar115 ^ auVar91) & auVar69;
          auVar29._0_4_ = -(uint)(auVar115._0_4_ <= fVar35);
          auVar29._4_4_ = -(uint)(auVar115._4_4_ <= fVar35);
          auVar29._8_4_ = -(uint)(auVar115._8_4_ <= fVar35);
          auVar29._12_4_ = -(uint)(auVar115._12_4_ <= fVar35);
          auVar113 = auVar113 ^ (auVar113 ^ auVar106) & auVar29;
          fVar88 = auVar113._0_4_;
          fVar26 = fVar88 * fVar88;
          fVar27 = auVar113._4_4_;
          fVar62 = fVar27 * fVar27;
          uVar38 = (undefined1)((uint)fVar62 >> 8);
          uVar39 = (undefined1)((uint)fVar62 >> 0x10);
          uVar40 = (undefined1)((uint)fVar62 >> 0x18);
          fVar35 = auVar113._8_4_;
          fVar74 = fVar35 * fVar35;
          uVar42 = (undefined1)((uint)fVar74 >> 8);
          uVar44 = (undefined1)((uint)fVar74 >> 0x10);
          uVar45 = (undefined1)((uint)fVar74 >> 0x18);
          fVar36 = auVar113._12_4_;
          fVar37 = fVar36 * fVar36;
          uVar46 = (undefined1)((uint)fVar37 >> 8);
          uVar47 = (undefined1)((uint)fVar37 >> 0x10);
          uVar48 = (undefined1)((uint)fVar37 >> 0x18);
          auVar5[4] = SUB41(fVar62,0);
          auVar5._0_4_ = fVar26;
          auVar5[5] = uVar38;
          auVar5[6] = uVar39;
          auVar5[7] = uVar40;
          auVar5[8] = SUB41(fVar74,0);
          auVar5[9] = uVar42;
          auVar5[10] = uVar44;
          auVar5[0xb] = uVar45;
          auVar5[0xc] = SUB41(fVar37,0);
          auVar5[0xd] = uVar46;
          auVar5[0xe] = uVar47;
          auVar5[0xf] = uVar48;
          auVar6[4] = SUB41(fVar62,0);
          auVar6._0_4_ = fVar26;
          auVar6[5] = uVar38;
          auVar6[6] = uVar39;
          auVar6[7] = uVar40;
          auVar6[8] = SUB41(fVar74,0);
          auVar6[9] = uVar42;
          auVar6[10] = uVar44;
          auVar6[0xb] = uVar45;
          auVar6[0xc] = SUB41(fVar37,0);
          auVar6[0xd] = uVar46;
          auVar6[0xe] = uVar47;
          auVar6[0xf] = uVar48;
          auVar79 = NEON_ext(auVar5,auVar6,8,1);
          fVar26 = auVar79._0_4_ + fVar26;
          fVar62 = auVar79._4_4_ + fVar62;
          fVar74 = fVar26 + fVar62;
          fVar26 = fVar26 + fVar62;
          uVar38 = SUB41(fVar26,0);
          uVar39 = (undefined1)((uint)fVar26 >> 8);
          uVar40 = (undefined1)((uint)fVar26 >> 0x10);
          uVar42 = (undefined1)((uint)fVar26 >> 0x18);
          auVar7[4] = uVar38;
          auVar7._0_4_ = fVar74;
          auVar7[5] = uVar39;
          auVar7[6] = uVar40;
          auVar7[7] = uVar42;
          auVar7[8] = SUB41(fVar74,0);
          auVar7[9] = (char)((uint)fVar74 >> 8);
          auVar7[10] = (char)((uint)fVar74 >> 0x10);
          auVar7[0xb] = (char)((uint)fVar74 >> 0x18);
          auVar7[0xc] = uVar38;
          auVar7[0xd] = uVar39;
          auVar7[0xe] = uVar40;
          auVar7[0xf] = uVar42;
          auVar79 = NEON_frsqrte(auVar7,4);
          auVar70._0_4_ = auVar79._0_4_ * fVar74;
          auVar70._4_4_ = auVar79._4_4_ * fVar26;
          auVar70._8_4_ = auVar79._8_4_ * fVar74;
          uVar4 = (undefined2)(CONCAT15(uVar39,CONCAT14(uVar38,fVar74)) >> 0x20);
          auVar70._12_4_ = auVar79._12_4_ * (float)CONCAT13(uVar42,CONCAT12(uVar40,uVar4));
          auVar91 = NEON_frsqrts(auVar79,auVar70,4);
          auVar60._0_4_ = auVar79._0_4_ * auVar91._0_4_;
          auVar60._4_4_ = auVar79._4_4_ * auVar91._4_4_;
          auVar60._8_4_ = auVar79._8_4_ * auVar91._8_4_;
          auVar60._12_4_ = auVar79._12_4_ * auVar91._12_4_;
          auVar71._0_4_ = fVar74 * auVar60._0_4_;
          auVar71._4_4_ = fVar26 * auVar60._4_4_;
          auVar71._8_4_ = fVar74 * auVar60._8_4_;
          auVar71._12_4_ = (float)CONCAT13(uVar42,CONCAT12(uVar40,uVar4)) * auVar60._12_4_;
          iVar18 = -(uint)(fVar74 == 0.0);
          iVar75 = -(uint)(fVar26 == 0.0);
          iVar76 = -(uint)(fVar74 == 0.0);
          iVar77 = -(uint)((float)CONCAT13(uVar42,CONCAT12(uVar40,uVar4)) == 0.0);
          auVar79 = NEON_frsqrts(auVar60,auVar71,4);
          fVar88 = auVar60._0_4_ * auVar79._0_4_ * fVar88;
          fVar27 = auVar60._4_4_ * auVar79._4_4_ * fVar27;
          fVar35 = auVar60._8_4_ * auVar79._8_4_ * fVar35;
          fVar36 = auVar60._12_4_ * auVar79._12_4_ * fVar36;
          fVar26 = (float)CONCAT13((byte)((uint)fVar88 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                                   CONCAT12((byte)((uint)fVar88 >> 0x10) &
                                            ~(byte)((uint)iVar18 >> 0x10),
                                            CONCAT11((byte)((uint)fVar88 >> 8) &
                                                     ~(byte)((uint)iVar18 >> 8),
                                                     SUB41(fVar88,0) & ~(byte)iVar18)));
          auVar28._0_8_ =
               CONCAT17((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18),
                        CONCAT16((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10),
                                 CONCAT15((byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar75 >> 8),
                                          CONCAT14(SUB41(fVar27,0) & ~(byte)iVar75,fVar26))));
          auVar28[8] = SUB41(fVar35,0) & ~(byte)iVar76;
          auVar28[9] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar76 >> 8);
          auVar28[10] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10);
          auVar28[0xb] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18);
          auVar30[0xc] = SUB41(fVar36,0) & ~(byte)iVar77;
          auVar30._0_12_ = auVar28;
          auVar30[0xd] = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar77 >> 8);
          auVar30[0xe] = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10);
          auVar30[0xf] = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
          if (local_58 != (long *)0x0) {
            lVar20 = local_58[0xb];
            piVar1 = (int *)(lVar20 + 0xc);
            do {
              iVar18 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar18 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar18 + -1 == 0) {
              *(undefined8 *)(lVar20 + 0x18) = 0;
              (**(code **)(*local_58 + 0x20))();
            }
          }
          fStack_7c = (float)((ulong)auVar28._0_8_ >> 0x20);
          fStack_78 = auVar28._8_4_;
          fStack_74 = auVar30._12_4_;
          auVar34._0_4_ = fVar26 * (float)_DAT_03889ac0;
          fVar62 = (float)((ulong)_DAT_03889ac0 >> 0x20);
          auVar34._4_4_ = fStack_7c * fVar62;
          auVar34._8_4_ = fStack_78 * (float)_UNK_03889ac8;
          fVar74 = (float)((ulong)_UNK_03889ac8 >> 0x20);
          auVar34._12_4_ = fStack_74 * fVar74;
          auVar31._0_4_ = fVar26 * fVar26;
          auVar31._4_4_ = fStack_7c * fStack_7c;
          auVar31._8_4_ = fStack_78 * fStack_78;
          auVar31._12_4_ = fStack_74 * fStack_74;
          auVar79 = NEON_ext(auVar31,auVar31,8,1);
          fVar37 = auVar79._0_4_ + auVar31._0_4_;
          fVar88 = auVar79._4_4_ + auVar31._4_4_;
          fVar26 = fVar37 + fVar88;
          fVar37 = fVar37 + fVar88;
          auVar32._8_8_ = CONCAT44(fVar37,fVar26);
          auVar32._0_8_ = CONCAT44(fVar37,fVar26);
          auVar79 = NEON_frecpe(auVar32,4);
          auVar91 = NEON_frecps(auVar79,auVar32,4);
          auVar72._0_4_ = auVar79._0_4_ * auVar91._0_4_;
          auVar72._4_4_ = auVar79._4_4_ * auVar91._4_4_;
          auVar72._8_4_ = auVar79._8_4_ * auVar91._8_4_;
          auVar72._12_4_ = auVar79._12_4_ * auVar91._12_4_;
          auVar79 = NEON_frecps(auVar72,auVar32,4);
          iVar18 = -(uint)(fVar26 == 0.0);
          iVar75 = -(uint)(fVar37 == 0.0);
          iVar76 = -(uint)(fVar26 == 0.0);
          iVar77 = -(uint)(fVar37 == 0.0);
          auVar33[0] = ~(byte)iVar18;
          auVar33[1] = ~(byte)((uint)iVar18 >> 8);
          auVar33[2] = ~(byte)((uint)iVar18 >> 0x10);
          auVar33[3] = ~(byte)((uint)iVar18 >> 0x18);
          auVar33[4] = ~(byte)iVar75;
          auVar33[5] = ~(byte)((uint)iVar75 >> 8);
          auVar33[6] = ~(byte)((uint)iVar75 >> 0x10);
          auVar33[7] = ~(byte)((uint)iVar75 >> 0x18);
          auVar33[8] = ~(byte)iVar76;
          auVar33[9] = ~(byte)((uint)iVar76 >> 8);
          auVar33[10] = ~(byte)((uint)iVar76 >> 0x10);
          auVar33[0xb] = ~(byte)((uint)iVar76 >> 0x18);
          auVar33[0xc] = ~(byte)iVar77;
          auVar33[0xd] = ~(byte)((uint)iVar77 >> 8);
          auVar33[0xe] = ~(byte)((uint)iVar77 >> 0x10);
          auVar33[0xf] = ~(byte)((uint)iVar77 >> 0x18);
          auVar73._0_4_ = auVar34._0_4_ * auVar72._0_4_ * auVar79._0_4_;
          auVar73._4_4_ = auVar34._4_4_ * auVar72._4_4_ * auVar79._4_4_;
          auVar73._8_4_ = auVar34._8_4_ * auVar72._8_4_ * auVar79._8_4_;
          auVar73._12_4_ = auVar34._12_4_ * auVar72._12_4_ * auVar79._12_4_;
          auVar34 = auVar34 ^ (auVar34 ^ auVar73) & auVar33;
          auVar97._8_8_ = DAT_0388a148;
          auVar97._0_8_ = DAT_0388a140;
          fVar88 = auVar34._0_4_;
          fVar37 = fVar88 * (float)_DAT_03889ac0;
          fVar62 = auVar34._4_4_ * fVar62;
          auVar84._0_8_ = CONCAT44(fVar62,fVar37);
          auVar84._8_4_ = auVar34._8_4_ * (float)_UNK_03889ac8;
          auVar84._12_4_ = auVar34._12_4_ * fVar74;
          uVar99 = a64_TBL(ZEXT816(0),auVar97,DAT_0388a580);
          uVar108 = a64_TBL(ZEXT816(0),auVar84,DAT_0388a580);
          uVar101 = a64_TBL(ZEXT816(0),auVar97,DAT_0388a680);
          uVar116 = a64_TBL(ZEXT816(0),auVar84,DAT_0388a6c8);
          fVar26 = (float)((ulong)uVar99 >> 0x20);
          fVar118 = (float)((ulong)DAT_0388a7e8 >> 0x20);
          fVar107 = (float)((ulong)uVar101 >> 0x20);
          uVar117 = a64_TBL(ZEXT816(0),auVar84,DAT_0388a680);
          uVar119 = a64_TBL(ZEXT816(0),auVar84,uVar19);
          uVar120 = a64_TBL(ZEXT816(0),auVar84,DAT_0388a790);
          auVar85._8_8_ = auVar84._0_8_;
          auVar85._0_8_ = auVar84._0_8_;
          uVar78 = a64_TBL(ZEXT816(0),auVar85,DAT_0388a648);
          uVar100 = a64_TBL(ZEXT816(0),auVar97,uVar19);
          fVar98 = (float)((ulong)uVar100 >> 0x20);
          uVar89 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a580);
          fVar27 = (float)_DAT_03889ad0;
          fVar36 = (float)((ulong)_DAT_03889ad0 >> 0x20);
          fVar63 = (float)_UNK_03889ad8;
          fVar35 = (float)((ulong)_UNK_03889ad8 >> 0x20);
          uVar109 = a64_TBL(ZEXT816(0),auVar34,uVar19);
          fVar74 = ((float)uVar99 * fVar37 + fVar27 * (float)uVar108 * (float)DAT_0388a7e8 +
                   fVar27 * (float)uVar100 * (float)uVar117) - (float)uVar101 * (float)uVar119;
          fVar62 = (fVar26 * fVar62 + fVar36 * (float)((ulong)uVar108 >> 0x20) * fVar118 +
                   fVar36 * fVar98 * (float)((ulong)uVar117 >> 0x20)) -
                   fVar107 * (float)((ulong)uVar119 >> 0x20);
          uVar38 = SUB41(fVar62,0);
          uVar39 = (undefined1)((uint)fVar62 >> 8);
          uVar40 = (undefined1)((uint)fVar62 >> 0x10);
          uVar42 = (undefined1)((uint)fVar62 >> 0x18);
          fVar37 = ((float)uVar99 * auVar84._8_4_ + fVar63 * (float)uVar101 * (float)uVar116 +
                   fVar63 * (float)uVar78 * (float)DAT_0388a7e8) - (float)uVar100 * (float)uVar120;
          uVar44 = SUB41(fVar37,0);
          uVar45 = (undefined1)((uint)fVar37 >> 8);
          uVar46 = (undefined1)((uint)fVar37 >> 0x10);
          uVar47 = (undefined1)((uint)fVar37 >> 0x18);
          fVar26 = (fVar26 * auVar84._12_4_ + fVar35 * fVar107 * (float)((ulong)uVar116 >> 0x20) +
                   fVar35 * (float)((ulong)uVar78 >> 0x20) * fVar118) -
                   fVar98 * (float)((ulong)uVar120 >> 0x20);
          uVar48 = SUB41(fVar26,0);
          uVar49 = (undefined1)((uint)fVar26 >> 8);
          uVar50 = (undefined1)((uint)fVar26 >> 0x10);
          uVar51 = (undefined1)((uint)fVar26 >> 0x18);
          uVar101 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a680);
          auVar8[4] = uVar38;
          auVar8._0_4_ = fVar74;
          auVar8[5] = uVar39;
          auVar8[6] = uVar40;
          auVar8[7] = uVar42;
          auVar8[8] = uVar44;
          auVar8[9] = uVar45;
          auVar8[10] = uVar46;
          auVar8[0xb] = uVar47;
          auVar8[0xc] = uVar48;
          auVar8[0xd] = uVar49;
          auVar8[0xe] = uVar50;
          auVar8[0xf] = uVar51;
          uVar78 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a580);
          auVar9[4] = uVar38;
          auVar9._0_4_ = fVar74;
          auVar9[5] = uVar39;
          auVar9[6] = uVar40;
          auVar9[7] = uVar42;
          auVar9[8] = uVar44;
          auVar9[9] = uVar45;
          auVar9[10] = uVar46;
          auVar9[0xb] = uVar47;
          auVar9[0xc] = uVar48;
          auVar9[0xd] = uVar49;
          auVar9[0xe] = uVar50;
          auVar9[0xf] = uVar51;
          uVar108 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a6c8);
          auVar10[4] = uVar38;
          auVar10._0_4_ = fVar74;
          auVar10[5] = uVar39;
          auVar10[6] = uVar40;
          auVar10[7] = uVar42;
          auVar10[8] = uVar44;
          auVar10[9] = uVar45;
          auVar10[10] = uVar46;
          auVar10[0xb] = uVar47;
          auVar10[0xc] = uVar48;
          auVar10[0xd] = uVar49;
          auVar10[0xe] = uVar50;
          auVar10[0xf] = uVar51;
          uVar116 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a790);
          auVar11[4] = uVar38;
          auVar11._0_4_ = fVar74;
          auVar11[5] = uVar39;
          auVar11[6] = uVar40;
          auVar11[7] = uVar42;
          auVar11[8] = uVar44;
          auVar11[9] = uVar45;
          auVar11[10] = uVar46;
          auVar11[0xb] = uVar47;
          auVar11[0xc] = uVar48;
          auVar11[0xd] = uVar49;
          auVar11[0xe] = uVar50;
          auVar11[0xf] = uVar51;
          uVar99 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a680);
          auVar12[4] = uVar38;
          auVar12._0_4_ = fVar74;
          auVar12[5] = uVar39;
          auVar12[6] = uVar40;
          auVar12[7] = uVar42;
          auVar12[8] = uVar44;
          auVar12[9] = uVar45;
          auVar12[10] = uVar46;
          auVar12[0xb] = uVar47;
          auVar12[0xc] = uVar48;
          auVar12[0xd] = uVar49;
          auVar12[0xe] = uVar50;
          auVar12[0xf] = uVar51;
          uVar100 = a64_TBL(ZEXT816(0),auVar12,uVar19);
          auVar13[4] = uVar38;
          auVar13._0_4_ = fVar74;
          auVar13[5] = uVar39;
          auVar13[6] = uVar40;
          auVar13[7] = uVar42;
          auVar13[8] = SUB41(fVar74,0);
          auVar13[9] = (char)((uint)fVar74 >> 8);
          auVar13[10] = (char)((uint)fVar74 >> 0x10);
          auVar13[0xb] = (char)((uint)fVar74 >> 0x18);
          auVar13[0xc] = uVar38;
          auVar13[0xd] = uVar39;
          auVar13[0xe] = uVar40;
          auVar13[0xf] = uVar42;
          uVar19 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a648);
          fVar26 = (float)FUN_01e4a52c(param_4);
          puVar16 = PTR_PTR_0437a4c8;
          fVar26 = fVar26 * -0.5;
          fVar74 = (((float)uVar89 * fVar74 + fVar27 * fVar88 * (float)uVar78 +
                    fVar27 * (float)uVar109 * (float)uVar99) - (float)uVar101 * (float)uVar100) *
                   fVar26;
          fVar27 = (float)(**(code **)(PTR_PTR_0437a4c8 + 0x18))();
          fVar35 = (float)(**(code **)(puVar16 + 0x18))();
          fVar62 = fVar35 * (((float)((ulong)uVar89 >> 0x20) * fVar62 +
                              fVar36 * auVar34._4_4_ * (float)((ulong)uVar78 >> 0x20) +
                             fVar36 * (float)((ulong)uVar109 >> 0x20) *
                                      (float)((ulong)uVar99 >> 0x20)) -
                            (float)((ulong)uVar101 >> 0x20) * (float)((ulong)uVar100 >> 0x20)) *
                            fVar26 + 0.0;
          fVar35 = (float)(**(code **)(puVar16 + 0x18))
                                    (*(undefined4 *)(param_4 + 0x328),SUB41(fVar74,0));
          local_70[0][0x1b] =
               (ulong)(uint)(fVar35 * (((float)uVar89 * fVar37 +
                                        fVar63 * (float)uVar101 * (float)uVar108 +
                                       fVar63 * fVar88 * (float)uVar19) -
                                      (float)uVar109 * (float)uVar116) * fVar26 + 0.0);
          local_70[0][0x1a] =
               CONCAT17((char)((uint)fVar62 >> 0x18),
                        CONCAT16((char)((uint)fVar62 >> 0x10),
                                 CONCAT15((char)((uint)fVar62 >> 8),
                                          CONCAT14(SUB41(fVar62,0),fVar27 * fVar74 + 0.0))));
          *(undefined1 *)(local_70[0] + 0x1c) = 1;
          *(float *)(param_4 + 0x328) = *(float *)(param_4 + 0x328) + 0.016666668;
          if (local_70[0] != (long *)0x0) {
            lVar20 = local_70[0][0xb];
            piVar1 = (int *)(lVar20 + 0xc);
            do {
              iVar18 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar18 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar18 + -1 == 0) {
              *(undefined8 *)(lVar20 + 0x18) = 0;
              (**(code **)(*local_70[0] + 0x20))();
            }
          }
          lVar23 = *(long *)(lVar23 + 8);
          piVar1 = (int *)(lVar23 + 0xc);
          do {
            iVar18 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar18 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar18 + -1 == 0) {
            *(undefined8 *)(lVar23 + 0x18) = 0;
            (**(code **)(*plVar25 + 0x20))(plVar25);
          }
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
LAB_01e49334:
  lVar21 = *(long *)(lVar21 + 8);
  piVar1 = (int *)(lVar21 + 0xc);
  do {
    iVar18 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar18 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar18 + -1 != 0) {
    return;
  }
  *(undefined8 *)(lVar21 + 0x18) = 0;
  pcVar22 = *(code **)(*plVar24 + 0x20);
LAB_01e49268:
  (*pcVar22)(plVar24);
  return;
}


