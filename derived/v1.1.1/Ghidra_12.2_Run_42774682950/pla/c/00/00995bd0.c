/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00995bd0; name: FUN_00995bd0
 */


void FUN_00995bd0(long param_1,undefined1 param_2,int param_3,uint param_4,uint param_5,uint param_6
                 )

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined2 uVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined1 extraout_b0;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_58;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  
  local_44[0] = param_2;
  if (param_3 == 0x14) {
    uVar13 = FUN_00934f94(*(undefined8 *)(*(long *)(param_1 + 0x330) + 0xd0));
    if ((uVar13 & 1) == 0) {
      param_3 = FUN_009938e4(param_1);
    }
    else {
      param_3 = 0;
    }
  }
  plVar11 = (long *)FUN_00994624(param_1 + 0x68,local_44);
  plVar12 = (long *)*plVar11;
  *plVar11 = 0;
  if (plVar12 != (long *)0x0) {
    lVar14 = plVar12[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))();
    }
  }
  *plVar11 = 0;
  *(int *)(plVar11 + 1) = param_3;
  *(undefined1 *)((long)plVar11 + 0xc) = 1;
  *(undefined2 *)((long)plVar11 + 0xd) = (undefined2)local_70;
  *(undefined1 *)((long)plVar11 + 0xf) = local_70._2_1_;
  plVar11[2] = 0x3f8000003f800000;
  *(bool *)(plVar11 + 3) = param_3 != 0;
  *(bool *)((long)plVar11 + 0x19) = param_3 != 0;
  lVar14 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x330) + 0xd0),local_44[0]);
  if (lVar14 != 0) {
    uVar15 = *(undefined8 *)(*(long *)(lVar14 + 0x70) + 0x60);
    lVar14 = param_1 + (long)param_3 * 0x20;
    uVar21 = *(undefined8 *)(lVar14 + 0x238);
    uVar19 = *(undefined8 *)(lVar14 + 0x230);
    uVar23 = (undefined1)*(undefined8 *)(lVar14 + 0x240);
    if ((param_6 & 1) != 0) {
      if (((*PTR_DAT_04379578 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379578);
      }
      *(undefined8 *)PTR_DAT_04379588 = *(undefined8 *)PTR_DAT_04379580;
      FUN_00954958(&local_70);
      FUN_009405ac(local_70);
      FUN_00923c30();
      local_48[0] = FUN_0092877c();
      if (local_70 != (long *)0x0) {
        plVar11 = local_70 + 10;
        do {
          iVar10 = (int)*plVar11 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *(int *)plVar11 = iVar10;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*local_70 + 0x10))();
        }
      }
      FUN_00995ec4(&local_58,param_1,local_48);
      if (local_58 != (long *)0x0) {
        fVar18 = (float)local_58[0x1a] - (float)uVar19;
        fVar20 = (float)local_58[0x1b] - (float)uVar21;
        fVar22 = (float)((ulong)local_58[0x1b] >> 0x20) - (float)((ulong)uVar21 >> 0x20);
        fVar17 = fVar18 * fVar18;
        fVar7 = fVar20 * fVar20;
        uVar23 = (undefined1)((uint)fVar7 >> 8);
        uVar24 = (undefined1)((uint)fVar7 >> 0x10);
        uVar25 = (undefined1)((uint)fVar7 >> 0x18);
        fVar16 = fVar22 * fVar22;
        uVar26 = (undefined1)((uint)fVar16 >> 8);
        uVar27 = (undefined1)((uint)fVar16 >> 0x10);
        uVar28 = (undefined1)((uint)fVar16 >> 0x18);
        auVar29._4_4_ = 0;
        auVar29._0_4_ = fVar17;
        auVar29[8] = SUB41(fVar7,0);
        auVar29[9] = uVar23;
        auVar29[10] = uVar24;
        auVar29[0xb] = uVar25;
        auVar29[0xc] = SUB41(fVar16,0);
        auVar29[0xd] = uVar26;
        auVar29[0xe] = uVar27;
        auVar29[0xf] = uVar28;
        auVar32._4_4_ = 0;
        auVar32._0_4_ = fVar17;
        auVar32[8] = SUB41(fVar7,0);
        auVar32[9] = uVar23;
        auVar32[10] = uVar24;
        auVar32[0xb] = uVar25;
        auVar32[0xc] = SUB41(fVar16,0);
        auVar32[0xd] = uVar26;
        auVar32[0xe] = uVar27;
        auVar32[0xf] = uVar28;
        auVar29 = NEON_ext(auVar29,auVar32,8,1);
        fVar17 = auVar29._0_4_ + fVar17;
        fVar7 = auVar29._4_4_ + 0.0;
        fVar16 = fVar17 + fVar7;
        fVar17 = fVar17 + fVar7;
        uVar23 = SUB41(fVar17,0);
        uVar24 = (undefined1)((uint)fVar17 >> 8);
        uVar25 = (undefined1)((uint)fVar17 >> 0x10);
        uVar26 = (undefined1)((uint)fVar17 >> 0x18);
        auVar4[4] = uVar23;
        auVar4._0_4_ = fVar16;
        auVar4[5] = uVar24;
        auVar4[6] = uVar25;
        auVar4[7] = uVar26;
        auVar4[8] = SUB41(fVar16,0);
        auVar4[9] = (char)((uint)fVar16 >> 8);
        auVar4[10] = (char)((uint)fVar16 >> 0x10);
        auVar4[0xb] = (char)((uint)fVar16 >> 0x18);
        auVar4[0xc] = uVar23;
        auVar4[0xd] = uVar24;
        auVar4[0xe] = uVar25;
        auVar4[0xf] = uVar26;
        auVar29 = NEON_frsqrte(auVar4,4);
        auVar31._0_4_ = auVar29._0_4_ * fVar16;
        auVar31._4_4_ = auVar29._4_4_ * fVar17;
        auVar31._8_4_ = auVar29._8_4_ * fVar16;
        uVar5 = (undefined2)(CONCAT15(uVar24,CONCAT14(uVar23,fVar16)) >> 0x20);
        auVar31._12_4_ = auVar29._12_4_ * (float)CONCAT13(uVar26,CONCAT12(uVar25,uVar5));
        auVar32 = NEON_frsqrts(auVar29,auVar31,4);
        auVar30._0_4_ = auVar29._0_4_ * auVar32._0_4_;
        auVar30._4_4_ = auVar29._4_4_ * auVar32._4_4_;
        auVar30._8_4_ = auVar29._8_4_ * auVar32._8_4_;
        auVar30._12_4_ = auVar29._12_4_ * auVar32._12_4_;
        auVar33._0_4_ = fVar16 * auVar30._0_4_;
        auVar33._4_4_ = fVar17 * auVar30._4_4_;
        auVar33._8_4_ = fVar16 * auVar30._8_4_;
        auVar33._12_4_ = (float)CONCAT13(uVar26,CONCAT12(uVar25,uVar5)) * auVar30._12_4_;
        iVar10 = -(uint)(fVar16 == 0.0);
        iVar6 = -(uint)(fVar17 == 0.0);
        iVar8 = -(uint)(fVar16 == 0.0);
        iVar9 = -(uint)((float)CONCAT13(uVar26,CONCAT12(uVar25,uVar5)) == 0.0);
        auVar29 = NEON_frsqrts(auVar30,auVar33,4);
        fVar18 = fVar18 * auVar30._0_4_ * auVar29._0_4_;
        fVar17 = auVar30._4_4_ * auVar29._4_4_ * 0.0;
        fVar20 = fVar20 * auVar30._8_4_ * auVar29._8_4_;
        fVar22 = fVar22 * auVar30._12_4_ * auVar29._12_4_;
        local_70 = (long *)CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18),
                                    CONCAT16((byte)((uint)fVar17 >> 0x10) &
                                             ~(byte)((uint)iVar6 >> 0x10),
                                             CONCAT15((byte)((uint)fVar17 >> 8) &
                                                      ~(byte)((uint)iVar6 >> 8),
                                                      CONCAT14(SUB41(fVar17,0) & ~(byte)iVar6,
                                                               CONCAT13((byte)((uint)fVar18 >> 0x18)
                                                                        & ~(byte)((uint)iVar10 >>
                                                                                 0x18),
                                                                        CONCAT12((byte)((uint)fVar18
                                                                                       >> 0x10) &
                                                                                 ~(byte)((uint)
                                                  iVar10 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar18 >> 8) &
                                                           ~(byte)((uint)iVar10 >> 8),
                                                           SUB41(fVar18,0) & ~(byte)iVar10)))))));
        uStack_68 = CONCAT17((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                             CONCAT16((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                                      CONCAT15((byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar9 >> 8)
                                               ,CONCAT14(SUB41(fVar22,0) & ~(byte)iVar9,
                                                         CONCAT13((byte)((uint)fVar20 >> 0x18) &
                                                                  ~(byte)((uint)iVar8 >> 0x18),
                                                                  CONCAT12((byte)((uint)fVar20 >>
                                                                                 0x10) &
                                                                           ~(byte)((uint)iVar8 >>
                                                                                  0x10),
                                                                           CONCAT11((byte)((uint)
                                                  fVar20 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                                  SUB41(fVar20,0) & ~(byte)iVar8)))))));
        FUN_009960a0(PTR_DAT_0437a0f8,&local_70,PTR_DAT_0437a100);
        lVar14 = local_58[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar23 = extraout_b0;
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))(local_58);
        }
      }
    }
    if (param_3 == 0) {
      FUN_00996460(param_1,local_44[0],uVar15);
    }
    else {
      FUN_00996f94(uVar19,uVar23,param_1,local_44[0],uVar15,param_4 & 1,param_5 & 1);
    }
  }
  return;
}


