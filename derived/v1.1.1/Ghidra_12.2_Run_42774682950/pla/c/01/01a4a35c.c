/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a4a35c; name: FUN_01a4a35c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a4a35c(long *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar13 [16];
  undefined1 auVar17 [16];
  undefined1 *local_160;
  code *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  long *aplStack_140 [12];
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [104];
  undefined8 *local_58;
  undefined8 uStack_50;
  long *local_48;
  undefined8 uStack_40;
  long local_38;
  
  FUN_009c69bc(&local_48);
  lVar10 = FUN_013646a0(local_48 + 0x1e,&local_58);
  if (local_48 == (long *)0x0) {
LAB_01a4a3b4:
    if (lVar10 != 0) goto LAB_01a4a3b8;
LAB_01a4a4c4:
    FUN_009c69bc(&local_48,param_1);
    lVar10 = FUN_0134ee74(local_48,local_48[1],&DAT_0393acb9);
    if (local_48 != (long *)0x0) {
      lVar11 = local_48[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    local_48 = (long *)0x0;
    uStack_40 = 0;
    FUN_008802f0(&local_48,lVar10 + 0x58);
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_01520884(&local_58,&local_48);
    plVar8 = local_48;
    if (local_48 != (long *)0x0) {
      plVar2 = local_48 + 1;
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        local_48[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_38 = *plVar8;
        FUN_02a44274(lVar11 + 0xd8,&local_38);
      }
    }
    FUN_019002f0(param_1 + 0x5e,&local_58);
    puVar7 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_58 + 1);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        local_58[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_48 = (long *)*puVar7;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
    }
    fVar12 = *(float *)(lVar10 + 0x330) - *(float *)(lVar10 + 800);
    fVar14 = *(float *)(lVar10 + 0x334) - *(float *)(lVar10 + 0x324);
    fVar15 = *(float *)(lVar10 + 0x338) - *(float *)(lVar10 + 0x328);
    fVar16 = *(float *)(lVar10 + 0x33c) - *(float *)(lVar10 + 0x32c);
    auVar13._0_4_ = fVar12 * fVar12;
    auVar13._4_4_ = fVar14 * fVar14;
    auVar13._8_4_ = fVar15 * fVar15;
    auVar13._12_4_ = fVar16 * fVar16;
    auVar17 = NEON_ext(auVar13,auVar13,8,1);
    *(ulong *)(lVar10 + 0x380) = *(ulong *)(lVar10 + 0x380) & 0xffffffffffffffef | 3;
    *(float *)(lVar10 + 0x388) = SQRT(auVar17._0_4_ + auVar13._0_4_ + auVar17._4_4_ + auVar13._4_4_)
    ;
    (**(code **)(*(long *)(lVar10 + 0x200) + 0x10))(lVar10 + 0x200);
    (**(code **)(*(long *)(lVar10 + 0x200) + 0x18))(lVar10 + 0x200);
    *(undefined4 *)(lVar10 + 0x230) = 0;
    uVar5 = DAT_043d2580;
    *(undefined4 *)(lVar10 + 0x240) = 0x3fe38e39;
    *(undefined4 *)(lVar10 + 0x23c) = uVar5;
    *(undefined8 *)(lVar10 + 0x234) = 0x459c40003dcccccd;
    auVar17._8_8_ = _UNK_0388a2b8;
    auVar17._0_8_ = _DAT_0388a2b0;
    auVar13 = NEON_ext(auVar17,*(undefined1 (*) [16])(param_1 + 0x6a),8,1);
    auVar13 = NEON_ext(auVar13,auVar13,8,1);
    param_1[0x6b] = auVar13._8_8_;
    param_1[0x6a] = auVar13._0_8_;
    lVar10 = DAT_043d2578;
    param_1[0x68] = DAT_043d2570;
    param_1[0x69] = lVar10;
    *(undefined4 *)((long)param_1 + 0x36c) = uVar5;
  }
  else {
    lVar11 = local_48[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 != 0) goto LAB_01a4a3b4;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*local_48 + 0x20))();
    if (lVar10 == 0) goto LAB_01a4a4c4;
LAB_01a4a3b8:
    local_48 = (long *)0x0;
    uStack_40 = 0;
    FUN_008802f0(&local_48,lVar10 + 0x58);
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_01520884(&local_58,&local_48);
    plVar8 = local_48;
    if (local_48 != (long *)0x0) {
      plVar2 = local_48 + 1;
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        local_48[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_38 = *plVar8;
        FUN_02a44274(lVar10 + 0xd8,&local_38);
      }
    }
    FUN_019002f0(param_1 + 0x5e,&local_58);
    puVar7 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_58 + 1);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        local_58[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_48 = (long *)*puVar7;
        FUN_02a44274(lVar10 + 0xd8,&local_48);
        cVar3 = *(char *)((long)param_1 + 0x3e1);
        goto joined_r0x01a4a6bc;
      }
    }
  }
  cVar3 = *(char *)((long)param_1 + 0x3e1);
joined_r0x01a4a6bc:
  if (cVar3 != '\0') {
    *(undefined1 *)((long)param_1 + 0x3e1) = 0;
    (**(code **)(*param_1 + 0x120))(param_1);
  }
  local_160 = &LAB_01a4c700;
  local_158 = FUN_01a4c710;
  local_150 = &LAB_01a4c714;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  local_148 = &LAB_01a4c720;
  aplStack_140[0] = param_1;
  (**(code **)(*param_1 + 0xf0))(param_1,&local_e0,&local_160);
  pcVar6 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    local_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar6)(aplStack_140);
  }
  pcVar6 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar6)(auStack_c0);
  }
  return;
}


