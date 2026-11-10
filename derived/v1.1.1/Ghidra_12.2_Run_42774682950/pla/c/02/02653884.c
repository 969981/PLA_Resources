/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02653884; name: FUN_02653884
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_02653884(long param_1,undefined1 (*param_2) [16],float *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [12];
  float fVar33;
  undefined1 auVar25 [16];
  float fVar35;
  undefined1 auVar26 [16];
  float fVar34;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 *local_140;
  undefined8 uStack_138;
  ulong local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined2 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined2 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  fVar23 = 0.0 - *param_3;
  fVar35 = 0.0 - param_3[2];
  fVar34 = 0.0 - param_3[3];
  auVar38._0_4_ = fVar23 * fVar23;
  auVar38._4_4_ = 0;
  auVar38._8_4_ = fVar35 * fVar35;
  auVar38._12_4_ = fVar34 * fVar34;
  auVar36 = NEON_ext(auVar38,auVar38,8,1);
  fVar22 = auVar36._0_4_ + auVar38._0_4_;
  fVar33 = auVar36._4_4_ + 0.0;
  fVar21 = fVar22 + fVar33;
  fVar22 = fVar22 + fVar33;
  auVar36._4_4_ = fVar22;
  auVar36._0_4_ = fVar21;
  if (fVar21 != 0.0) {
    local_140 = (undefined8 *)0x0;
    uStack_138 = 0;
    FUN_00cf98c8(&local_140,param_1 + 0x260);
    puVar19 = local_140;
    puVar10 = PTR_DAT_0437a668;
    puVar9 = PTR_DAT_0437a660;
    puVar8 = PTR_DAT_043794d8;
    puVar7 = PTR_DAT_043794d0;
    if (local_140 != (undefined8 *)0x0) {
      if (*(int *)((long)local_140 + 0xc) != 0) {
        piVar1 = (int *)((long)local_140 + 0xc);
        iVar13 = *(int *)((long)local_140 + 0xc);
        do {
          plVar20 = (long *)puVar19[2];
          if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar10), iVar12 != 0)) {
            if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
              uVar16 = FUN_0087f8f0();
              *(undefined8 *)puVar8 = uVar16;
              __cxa_guard_release(puVar7);
            }
            *(undefined **)puVar9 = puVar8;
            __cxa_guard_release(puVar10);
          }
          while( true ) {
            if (plVar20 == (long *)0x0) goto LAB_02653dfc;
            if (plVar20 == (long *)puVar9) break;
            plVar20 = (long *)*plVar20;
          }
          iVar12 = *piVar1;
          if (iVar12 == iVar13) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar17 = puVar19[3];
              plVar20 = (long *)0x0;
              puVar19 = local_140;
              if (lVar17 != 0) {
                plVar20 = (long *)(lVar17 + -0x50);
              }
              goto joined_r0x02653998;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar13 = iVar12;
        } while (iVar12 != 0);
      }
LAB_02653dfc:
      plVar20 = (long *)0x0;
      puVar19 = local_140;
joined_r0x02653998:
      local_140 = puVar19;
      if (puVar19 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar19 + 1);
        do {
          iVar13 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 + -1 == 0) {
          puVar19[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_80 = *puVar19;
          FUN_02a44274(lVar17 + 0xd8,&local_80);
        }
      }
      if (plVar20 != (long *)0x0) {
        auVar36[8] = SUB41(fVar21,0);
        auVar36[9] = (char)((uint)fVar21 >> 8);
        auVar36[10] = (char)((uint)fVar21 >> 0x10);
        auVar36[0xb] = (char)((uint)fVar21 >> 0x18);
        auVar36[0xc] = SUB41(fVar22,0);
        auVar36[0xd] = (char)((uint)fVar22 >> 8);
        auVar36[0xe] = (char)((uint)fVar22 >> 0x10);
        auVar36[0xf] = (char)((uint)fVar22 >> 0x18);
        auVar36 = NEON_frsqrte(auVar36,4);
        auVar37._0_4_ = auVar36._0_4_ * fVar21;
        auVar37._4_4_ = auVar36._4_4_ * fVar22;
        auVar37._8_4_ = auVar36._8_4_ * fVar21;
        auVar37._12_4_ = auVar36._12_4_ * fVar22;
        uStack_158 = *(undefined8 *)(*param_2 + 8);
        local_160 = *(undefined8 **)*param_2;
        auVar38 = NEON_frsqrts(auVar36,auVar37,4);
        local_100 = 0;
        uStack_f8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_90 = 0;
        uStack_88 = 0;
        auVar25._0_4_ = auVar36._0_4_ * auVar38._0_4_;
        auVar25._4_4_ = auVar36._4_4_ * auVar38._4_4_;
        auVar25._8_4_ = auVar36._8_4_ * auVar38._8_4_;
        auVar25._12_4_ = auVar36._12_4_ * auVar38._12_4_;
        local_b8 = 0;
        uStack_b0 = 0xffffffffffffffff;
        auVar39._0_4_ = fVar21 * auVar25._0_4_;
        auVar39._4_4_ = fVar22 * auVar25._4_4_;
        auVar39._8_4_ = fVar21 * auVar25._8_4_;
        auVar39._12_4_ = fVar22 * auVar25._12_4_;
        iVar13 = -(uint)(fVar21 == 0.0);
        iVar12 = -(uint)(fVar22 == 0.0);
        iVar4 = -(uint)(fVar21 == 0.0);
        iVar5 = -(uint)(fVar22 == 0.0);
        auVar36 = NEON_frsqrts(auVar25,auVar39,4);
        auVar38 = NEON_fmov(0x3fc00000,4);
        fVar23 = fVar23 * auVar25._0_4_ * auVar36._0_4_;
        fVar21 = auVar25._4_4_ * auVar36._4_4_ * 0.0;
        fVar22 = fVar35 * auVar25._8_4_ * auVar36._8_4_;
        fVar35 = (float)(CONCAT17((char)((uint)fVar34 >> 0x18),
                                  CONCAT16((char)((uint)fVar34 >> 0x10),
                                           CONCAT15((char)((uint)fVar34 >> 8),
                                                    CONCAT14(SUB41(fVar34,0),fVar35)))) >> 0x20) *
                 auVar25._12_4_ * auVar36._12_4_;
        fVar23 = (float)CONCAT13((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                                 CONCAT12((byte)((uint)fVar23 >> 0x10) &
                                          ~(byte)((uint)iVar13 >> 0x10),
                                          CONCAT11((byte)((uint)fVar23 >> 8) &
                                                   ~(byte)((uint)iVar13 >> 8),
                                                   SUB41(fVar23,0) & ~(byte)iVar13)));
        auVar24._0_8_ =
             CONCAT17((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                      CONCAT16((byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                               CONCAT15((byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                        CONCAT14(SUB41(fVar21,0) & ~(byte)iVar12,fVar23))));
        auVar24[8] = SUB41(fVar22,0) & ~(byte)iVar4;
        auVar24[9] = (byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar4 >> 8);
        auVar24[10] = (byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10);
        auVar24[0xb] = (byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18);
        auVar26[0xc] = SUB41(fVar35,0) & ~(byte)iVar5;
        auVar26._0_12_ = auVar24;
        auVar26[0xd] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar5 >> 8);
        auVar26[0xe] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10);
        auVar26[0xf] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18);
        fVar35 = (float)((ulong)auVar24._0_8_ >> 0x20);
        fVar34 = auVar24._8_4_;
        fVar21 = auVar26._12_4_;
        local_110 = 0;
        fVar22 = (float)((ulong)local_160 >> 0x20);
        auVar27._0_8_ =
             CONCAT44(fVar35 * auVar38._4_4_ + fVar22,fVar23 * auVar38._0_4_ + SUB84(local_160,0));
        auVar27._8_4_ = fVar34 * auVar38._8_4_ + (float)uStack_158;
        auVar27._12_4_ = fVar21 * auVar38._12_4_ + (float)((ulong)uStack_158 >> 0x20);
        local_bc = 0;
        local_e0 = 0x7f7fffee;
        local_d8 = 0xffffffffffffffff;
        local_c8 = 0xffffffff;
        local_d0 = 0xffffff;
        local_c4 = 0xf;
        local_c0 = 0xffff;
        local_a0 = 0xffffffff;
        local_a8 = 0xffffff;
        local_9c = 0xf;
        local_98 = 0xffff;
        local_94 = 0;
        uStack_78 = auVar27._8_8_;
        local_80 = auVar27._0_8_;
        uVar14 = FUN_01a88f30(param_1,param_2,&local_80,&local_140);
        if ((uVar14 & 1) == 0) {
          local_150 = local_80;
          uVar16 = local_150;
          uStack_148 = uStack_78;
          uVar11 = uStack_148;
          local_150._0_4_ = (float)local_80;
          local_150._4_4_ = (float)((ulong)local_80 >> 0x20);
          uStack_148._0_4_ = (float)uStack_78;
          uStack_148._4_4_ = (float)((ulong)uStack_78 >> 0x20);
          auVar28._0_8_ =
               CONCAT44(local_150._4_4_ + (float)((ulong)_DAT_0388a0a0 >> 0x20),
                        (float)local_150 + (float)_DAT_0388a0a0);
          auVar28._8_4_ = (float)uStack_148 + (float)_UNK_0388a0a8;
          auVar28._12_4_ = uStack_148._4_4_ + (float)((ulong)_UNK_0388a0a8 >> 0x20);
          uStack_78 = auVar28._8_8_;
          local_150 = uVar16;
          uStack_148 = uVar11;
          local_80 = auVar28._0_8_;
          uVar14 = FUN_01a88f30(param_1,&local_150,&local_80,&local_140);
          if (((uVar14 & 1) != 0) && ((float)((ulong)local_140 >> 0x20) < fVar22)) {
            uStack_158 = uStack_138;
            local_160 = local_140;
          }
        }
        uVar14 = local_110;
        if ((local_110 & 1) != 0) {
          lVar17 = tpidr_el0;
          lVar18 = *(long *)(lVar17 + 0x38d490);
          if (lVar18 == 0) {
            lVar18 = FUN_0333d16c(0,1);
            *(long *)(lVar17 + 0x38d490) = lVar18;
          }
          plVar15 = *(long **)(*(long *)(lVar18 + 8) + 0x58);
          puVar19 = (undefined8 *)(uVar14 - 0x11);
          *puVar19 = 0;
          (**(code **)(*plVar15 + 0x18))(plVar15,puVar19,(long)*(int *)(uVar14 - 9) + 0x10);
        }
        auVar36 = NEON_fmov(0x40400000,4);
        auVar29._0_8_ =
             CONCAT44(fVar35 * auVar36._4_4_ + *(float *)(*param_2 + 4),
                      fVar23 * auVar36._0_4_ + *(float *)*param_2);
        auVar29._8_4_ = fVar34 * auVar36._8_4_ + *(float *)(*param_2 + 8);
        auVar29._12_4_ = fVar21 * auVar36._12_4_ + *(float *)(*param_2 + 0xc);
        local_110 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_e0 = 0x7f7fffee;
        local_d8 = 0xffffffffffffffff;
        local_c8 = 0xffffffff;
        local_d0 = 0xffffff;
        local_c4 = 0xf;
        local_c0 = 0xffff;
        local_bc = 0;
        local_a0 = 0xffffffff;
        local_a8 = 0xffffff;
        local_9c = 0xf;
        local_98 = 0xffff;
        local_94 = 0;
        local_b8 = 0;
        uStack_b0 = 0xffffffffffffffff;
        local_90 = 0;
        uStack_88 = 0;
        uStack_78 = auVar29._8_8_;
        local_80 = auVar29._0_8_;
        uVar14 = FUN_01a88f30(param_1,param_2,&local_80,&local_140);
        if ((uVar14 & 1) == 0) {
          local_150 = local_80;
          uVar16 = local_150;
          uStack_148 = uStack_78;
          uVar11 = uStack_148;
          local_150._0_4_ = (float)local_80;
          local_150._4_4_ = (float)((ulong)local_80 >> 0x20);
          uStack_148._0_4_ = (float)uStack_78;
          uStack_148._4_4_ = (float)((ulong)uStack_78 >> 0x20);
          auVar30._0_8_ =
               CONCAT44(local_150._4_4_ + (float)((ulong)_DAT_0388a0a0 >> 0x20),
                        (float)local_150 + (float)_DAT_0388a0a0);
          auVar30._8_4_ = (float)uStack_148 + (float)_UNK_0388a0a8;
          auVar30._12_4_ = uStack_148._4_4_ + (float)((ulong)_UNK_0388a0a8 >> 0x20);
          uStack_78 = auVar30._8_8_;
          local_150 = uVar16;
          uStack_148 = uVar11;
          local_80 = auVar30._0_8_;
          uVar14 = FUN_01a88f30(param_1,&local_150,&local_80,&local_140);
          if (((uVar14 & 1) != 0) &&
             ((float)((ulong)local_140 >> 0x20) < (float)((ulong)local_160 >> 0x20))) {
            uStack_158 = uStack_138;
            local_160 = local_140;
          }
        }
        uVar14 = local_110;
        if ((local_110 & 1) != 0) {
          lVar17 = tpidr_el0;
          lVar18 = *(long *)(lVar17 + 0x38d490);
          if (lVar18 == 0) {
            lVar18 = FUN_0333d16c(0,1);
            *(long *)(lVar17 + 0x38d490) = lVar18;
          }
          plVar15 = *(long **)(*(long *)(lVar18 + 8) + 0x58);
          puVar19 = (undefined8 *)(uVar14 - 0x11);
          *puVar19 = 0;
          (**(code **)(*plVar15 + 0x18))(plVar15,puVar19,(long)*(int *)(uVar14 - 9) + 0x10);
        }
        auVar38 = NEON_fmov(0x40900000,4);
        auVar36 = *param_2;
        local_110 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_b8 = 0;
        uStack_b0 = 0xffffffffffffffff;
        auVar31._0_8_ =
             CONCAT44(fVar35 * auVar38._4_4_ + auVar36._4_4_,fVar23 * auVar38._0_4_ + auVar36._0_4_)
        ;
        auVar31._8_4_ = fVar34 * auVar38._8_4_ + auVar36._8_4_;
        auVar31._12_4_ = fVar21 * auVar38._12_4_ + auVar36._12_4_;
        local_e0 = 0x7f7fffee;
        local_d8 = 0xffffffffffffffff;
        local_c8 = 0xffffffff;
        local_d0 = 0xffffff;
        local_c4 = 0xf;
        local_c0 = 0xffff;
        local_bc = 0;
        local_a0 = 0xffffffff;
        local_a8 = 0xffffff;
        local_9c = 0xf;
        local_98 = 0xffff;
        local_94 = 0;
        local_90 = 0;
        uStack_88 = 0;
        uStack_78 = auVar31._8_8_;
        local_80 = auVar31._0_8_;
        uVar14 = FUN_01a88f30(param_1,param_2,&local_80,&local_140);
        if ((uVar14 & 1) == 0) {
          local_150 = local_80;
          uVar16 = local_150;
          uStack_148 = uStack_78;
          uVar11 = uStack_148;
          local_150._0_4_ = (float)local_80;
          local_150._4_4_ = (float)((ulong)local_80 >> 0x20);
          uStack_148._0_4_ = (float)uStack_78;
          uStack_148._4_4_ = (float)((ulong)uStack_78 >> 0x20);
          auVar32._0_8_ =
               CONCAT44(local_150._4_4_ + (float)((ulong)_DAT_0388a0a0 >> 0x20),
                        (float)local_150 + (float)_DAT_0388a0a0);
          auVar32._8_4_ = (float)uStack_148 + (float)_UNK_0388a0a8;
          auVar32._12_4_ = uStack_148._4_4_ + (float)((ulong)_UNK_0388a0a8 >> 0x20);
          uStack_78 = auVar32._8_8_;
          local_150 = uVar16;
          uStack_148 = uVar11;
          local_80 = auVar32._0_8_;
          uVar14 = FUN_01a88f30(param_1,&local_150,&local_80,&local_140);
          if (((uVar14 & 1) != 0) &&
             ((float)((ulong)local_140 >> 0x20) < (float)((ulong)local_160 >> 0x20))) {
            uStack_158 = uStack_138;
            local_160 = local_140;
          }
        }
        uVar14 = local_110;
        if ((local_110 & 1) != 0) {
          lVar17 = tpidr_el0;
          lVar18 = *(long *)(lVar17 + 0x38d490);
          if (lVar18 == 0) {
            lVar18 = FUN_0333d16c(0,1);
            *(long *)(lVar17 + 0x38d490) = lVar18;
          }
          plVar15 = *(long **)(*(long *)(lVar18 + 8) + 0x58);
          puVar19 = (undefined8 *)(uVar14 - 0x11);
          *puVar19 = 0;
          (**(code **)(*plVar15 + 0x18))(plVar15,puVar19,(long)*(int *)(uVar14 - 9) + 0x10);
        }
        lVar17 = plVar20[0xb];
        piVar1 = (int *)(lVar17 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*plVar20 + 0x20))(plVar20);
        }
        auVar6._8_8_ = uStack_158;
        auVar6._0_8_ = local_160;
        return auVar6;
      }
    }
  }
  return *param_2;
}


