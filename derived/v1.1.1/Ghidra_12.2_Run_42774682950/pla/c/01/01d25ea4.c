/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d25ea4; name: FUN_01d25ea4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_01d25ea4(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  long *plVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  undefined4 uVar26;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar27;
  float extraout_var;
  float extraout_var_00;
  undefined4 uVar28;
  float extraout_var_01;
  float extraout_var_02;
  undefined4 uVar29;
  float extraout_var_03;
  undefined8 uVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar34;
  undefined8 uVar33;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  long *local_160;
  undefined8 *local_158;
  undefined8 uStack_150;
  long *local_148;
  undefined8 local_140;
  char *pcStack_138;
  undefined **local_130;
  long *local_128;
  undefined **local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined1 local_c0;
  undefined1 local_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined8 *local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70 [2];
  
  if (*(char *)(*(long *)(param_1 + 0x568) + 0xf8) == '\0') {
    uVar28 = (undefined4)_UNK_03889c08;
    uVar29 = (undefined4)((ulong)_UNK_03889c08 >> 0x20);
    uVar26 = (undefined4)_DAT_03889c00;
    uVar27 = (undefined4)((ulong)_DAT_03889c00 >> 0x20);
    uVar30 = _DAT_0388a130;
    uVar20 = _UNK_0388a138;
  }
  else {
    local_140 = 0x896c3582aa76b558;
    pcStack_138 = "npc_creater_config";
    local_130 = (undefined **)0x12;
    local_128 = (long *)0x0;
    local_90 = (undefined8 *)0xd3aba151622c1804;
    pcStack_88 = "LieDownAngle";
    local_80 = 0xc;
    local_78 = (long *)0x0;
    FUN_00aee408(&local_140,&local_90);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x20))();
    }
    fVar31 = *(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0;
    FUN_009a7ff4(fVar31 * extraout_var,fVar31 * extraout_s0,fVar31 * extraout_var_01);
    auVar10._8_8_ = _UNK_0388a138;
    auVar10._0_8_ = _DAT_0388a130;
    uVar32 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a580);
    auVar4._4_4_ = extraout_var_00;
    auVar4._0_4_ = extraout_s0_00;
    auVar4._8_4_ = extraout_var_02;
    auVar4._12_4_ = extraout_var_03;
    uVar30 = a64_TBL(ZEXT816(0),auVar4,DAT_0388a580);
    fVar34 = (float)((ulong)uVar32 >> 0x20);
    auVar11._8_8_ = _UNK_0388a138;
    auVar11._0_8_ = _DAT_0388a130;
    uVar35 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a680);
    auVar5._4_4_ = extraout_var_00;
    auVar5._0_4_ = extraout_s0_00;
    auVar5._8_4_ = extraout_var_02;
    auVar5._12_4_ = extraout_var_03;
    uVar33 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a680);
    auVar6._4_4_ = extraout_var_00;
    auVar6._0_4_ = extraout_s0_00;
    auVar6._8_4_ = extraout_var_02;
    auVar6._12_4_ = extraout_var_03;
    uVar37 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a6c8);
    fVar36 = (float)((ulong)uVar35 >> 0x20);
    auVar7._4_4_ = extraout_var_00;
    auVar7._0_4_ = extraout_s0_00;
    auVar7._8_4_ = extraout_var_02;
    auVar7._12_4_ = extraout_var_03;
    uVar40 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a880);
    auVar8._4_4_ = extraout_var_00;
    auVar8._0_4_ = extraout_s0_00;
    auVar8._8_4_ = extraout_var_02;
    auVar8._12_4_ = extraout_var_03;
    uVar41 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a790);
    auVar12._8_8_ = _UNK_0388a138;
    auVar12._0_8_ = _DAT_0388a130;
    uVar22 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a880);
    fVar31 = (float)((ulong)uVar22 >> 0x20);
    auVar9._4_4_ = extraout_var_00;
    auVar9._0_4_ = extraout_s0_00;
    auVar9._8_4_ = extraout_s0_00;
    auVar9._12_4_ = extraout_var_00;
    uVar20 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a648);
    fVar38 = (float)((ulong)_DAT_03889ad0 >> 0x20);
    fVar39 = (float)((ulong)_UNK_03889ad8 >> 0x20);
    uVar28 = (undefined4)_UNK_03889878;
    uVar29 = (undefined4)((ulong)_UNK_03889878 >> 0x20);
    uVar26 = (undefined4)_DAT_03889870;
    uVar27 = (undefined4)((ulong)_DAT_03889870 >> 0x20);
    uVar30 = CONCAT44((extraout_var_00 * fVar34 + fVar38 * (float)((ulong)uVar30 >> 0x20) * 0.0 +
                      fVar38 * fVar31 * (float)((ulong)uVar33 >> 0x20)) -
                      fVar36 * (float)((ulong)uVar40 >> 0x20),
                      (extraout_s0_00 * (float)uVar32 + (float)_DAT_03889ad0 * (float)uVar30 * 0.0 +
                      (float)_DAT_03889ad0 * (float)uVar22 * (float)uVar33) -
                      (float)uVar35 * (float)uVar40);
    uVar20 = CONCAT44((extraout_var_03 * fVar34 + fVar39 * fVar36 * (float)((ulong)uVar37 >> 0x20) +
                      fVar39 * (float)((ulong)uVar20 >> 0x20) * 0.0) -
                      fVar31 * (float)((ulong)uVar41 >> 0x20),
                      (extraout_var_02 * (float)uVar32 +
                       (float)_UNK_03889ad8 * (float)uVar35 * (float)uVar37 +
                      (float)_UNK_03889ad8 * (float)uVar20 * 0.0) - (float)uVar22 * (float)uVar41);
  }
  local_130 = &PTR_LAB_0424f2b8;
  local_140 = 0;
  local_128 = (long *)CONCAT44(local_128._4_4_,3);
  local_120 = &PTR_FUN_04287c30;
  local_c0 = 0;
  local_100 = *(undefined8 *)PTR_DAT_04379570;
  uStack_f8 = *(undefined8 *)(PTR_DAT_04379570 + 8);
  local_d0 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_a0 = 0;
  local_98 = 0;
  if (((*PTR_DAT_0437a648 & 1) == 0) &&
     (iVar19 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar19 != 0)) {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar23 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar23;
  local_140 = *(undefined8 *)(lVar23 + 0x230);
  uStack_108 = CONCAT44(uVar29,uVar28);
  local_110 = CONCAT44(uVar27,uVar26);
  local_f0 = 0x3f4000013eb33333;
  local_e0 = CONCAT44(local_e0._4_4_,4);
  if ((*(byte *)(*(long *)(param_1 + 0x568) + 0x100) & 1) != 0) {
    local_94 = 0;
    local_98 = 1;
  }
  local_148 = *(long **)(param_1 + 0x68);
  local_100 = uVar30;
  uStack_f8 = uVar20;
  if (local_148 != (long *)0x0) {
    lVar23 = local_148[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) goto LAB_01d2652c;
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar20 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar20;
    }
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_01d266e0(&local_90,param_1,&local_148,&local_140);
  plVar21 = *(long **)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = 0;
  if (plVar21 != (long *)0x0) {
    lVar23 = plVar21[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar19 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))();
    }
  }
  puVar17 = local_90;
  local_90 = (undefined8 *)0x0;
  *(undefined8 **)(param_1 + 0x160) = puVar17;
  if (local_148 != (long *)0x0) {
    lVar23 = local_148[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar19 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_148 + 0x20))();
    }
  }
  plVar21 = (long *)(param_1 + 0x120);
  (**(code **)(**(long **)(param_1 + 0x558) + 0x18))(&local_90);
  local_158 = (undefined8 *)0x0;
  uStack_150 = 0;
  FUN_00b6171c(&local_158,&local_90);
  puVar17 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_90 + 1);
    do {
      iVar19 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar19 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar19 + -1 == 0) {
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_70[0] = *puVar17;
      FUN_02a44274(lVar23 + 0xd8,local_70);
    }
  }
  local_90 = (undefined8 *)0x0;
  pcStack_88 = (char *)0x0;
  FUN_01d32104(&local_90,&local_158);
  FUN_01ccdbd0(plVar21,3,&local_90);
  puVar17 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_90 + 1);
    do {
      iVar19 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar19 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar19 + -1 == 0) {
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_70[0] = *puVar17;
      FUN_02a44274(lVar23 + 0xd8,local_70);
    }
  }
  puVar17 = local_158;
  if (local_158 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_158 + 1);
    do {
      iVar19 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar19 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar19 + -1 == 0) {
      local_158[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_70[0] = *puVar17;
      FUN_02a44274(lVar23 + 0xd8,local_70);
    }
  }
  puVar16 = PTR_DAT_043796e8;
  puVar15 = PTR_DAT_043796e0;
  puVar14 = PTR_DAT_043794d8;
  puVar13 = PTR_DAT_043794d0;
  lVar23 = *(long *)(param_1 + 0x90);
  if ((lVar23 != 0) && (*(int *)(lVar23 + 0xc) != 0)) {
    piVar1 = (int *)(lVar23 + 0xc);
    iVar19 = *(int *)(lVar23 + 0xc);
    do {
      plVar25 = *(long **)(lVar23 + 0x10);
      if (((*puVar15 & 1) == 0) && (iVar18 = __cxa_guard_acquire(puVar15), iVar18 != 0)) {
        if (((*puVar13 & 1) == 0) && (iVar18 = __cxa_guard_acquire(puVar13), iVar18 != 0)) {
          uVar20 = FUN_0087f8f0();
          *(undefined8 *)puVar14 = uVar20;
          __cxa_guard_release(puVar13);
        }
        *(undefined **)puVar16 = puVar14;
        __cxa_guard_release(puVar15);
      }
      while( true ) {
        if (plVar25 == (long *)0x0) goto LAB_01d261ac;
        if (plVar25 == (long *)puVar16) break;
        plVar25 = (long *)*plVar25;
      }
      iVar18 = *piVar1;
      if (iVar18 == iVar19) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar19 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar23 = *(long *)(lVar23 + 0x18);
          plVar25 = (long *)(lVar23 + -0x50);
          if (lVar23 != 0) {
            FUN_0199ce28(&local_90,plVar25);
            (**(code **)(*plVar21 + 0x40))(plVar21,&local_90);
            puVar17 = local_90;
            if (local_90 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_90 + 1);
              do {
                iVar19 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar19 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar19 + -1 == 0) {
                local_90[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar19 = __cxa_guard_acquire(PTR_DAT_04379498), iVar19 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar24 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar24;
                local_158 = (undefined8 *)*puVar17;
                FUN_02a44274(lVar24 + 0xd8,&local_158);
              }
            }
            lVar23 = *(long *)(lVar23 + 8);
            piVar1 = (int *)(lVar23 + 0xc);
            do {
              iVar19 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar19 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar19 + -1 == 0) {
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
      iVar19 = iVar18;
    } while (iVar18 != 0);
  }
LAB_01d261ac:
  uVar20 = *(undefined8 *)(param_1 + 0x558);
  local_160 = *(long **)(param_1 + 0x160);
  if (local_160 != (long *)0x0) {
    lVar23 = local_160[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) {
LAB_01d2652c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar22 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar22;
    }
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_01a71028(uVar20,&local_160);
  if (local_160 != (long *)0x0) {
    lVar23 = local_160[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar19 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_160 + 0x20))();
    }
  }
  return plVar21;
}


