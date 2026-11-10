/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c5ea60; name: FUN_01c5ea60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c5ea60(long param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined1 in_q3 [16];
  undefined8 uVar17;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  long *local_120;
  char *pcStack_118;
  undefined8 local_110;
  long *local_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  long *local_d0;
  code *local_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar17 = in_q3._8_8_;
  uVar13 = in_q3._0_8_;
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x29c) = 1;
    return;
  }
  FUN_01c5f548(param_1);
  FUN_01c5f898(param_1,0);
  *(undefined4 *)(param_1 + 0x294) = 6;
  local_e0 = (undefined8 *)0x0;
  uStack_d8 = 0;
  FUN_00aeb228(&local_e0,param_1 + 0x3e0);
  FUN_01c5e5a0(param_1,&local_e0);
  puVar5 = local_e0;
  if (local_e0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_e0 + 1);
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
      local_e0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_d0 = (long *)*puVar5;
      FUN_02a44274(lVar14 + 0xd8,&local_d0);
    }
  }
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  FUN_00aeb228(&local_f0,param_1 + 0x3f0);
  FUN_01c5e5a0(param_1,&local_f0);
  puVar5 = local_f0;
  if (local_f0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_f0 + 1);
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
      local_f0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_d0 = (long *)*puVar5;
      FUN_02a44274(lVar14 + 0xd8,&local_d0);
    }
  }
  local_100 = (undefined8 *)0x0;
  uStack_f8 = 0;
  FUN_00aeb228(&local_100,param_1 + 0x420);
  FUN_01c5e5a0(param_1,&local_100);
  puVar5 = local_100;
  if (local_100 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_100 + 1);
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
      local_100[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_d0 = (long *)*puVar5;
      FUN_02a44274(lVar14 + 0xd8,&local_d0);
    }
  }
  puVar7 = PTR_DAT_0437a6e0;
  puVar6 = PTR_DAT_0437a6d8;
  lVar14 = *(long *)(param_1 + 0x400);
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar10 = *(int *)(lVar14 + 0xc);
    do {
      plVar16 = *(long **)(lVar14 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
        uVar12 = FUN_00ad3750();
        *(undefined8 *)puVar7 = uVar12;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) goto LAB_01c5ec1c;
        if (plVar16 == (long *)puVar7) break;
        plVar16 = (long *)*plVar16;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01c5f2d0;
        lVar14 = *(long *)(lVar14 + 0x18);
        if (lVar14 != 0) {
          plVar16 = (long *)(lVar14 + -0x50);
          FUN_02c90b50(plVar16,1);
          lVar14 = *(long *)(lVar14 + 8);
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
          if (iVar10 + -1 != 0) break;
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar16 + 0x20))(plVar16);
          lVar14 = *(long *)(param_1 + 0x410);
          pbVar4 = PTR_DAT_0437a6d8;
          puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
          goto joined_r0x01c5f364;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01c5f2d0:
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01c5ec1c:
  lVar14 = *(long *)(param_1 + 0x410);
  pbVar4 = PTR_DAT_0437a6d8;
  puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
joined_r0x01c5f364:
  PTR_DAT_0437a6d8 = pbVar4;
  PTR_DAT_0437a6e0 = (undefined *)puVar5;
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar10 = *(int *)(lVar14 + 0xc);
    do {
      plVar16 = *(long **)(lVar14 + 0x10);
      if (((*pbVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar4), iVar11 != 0)) {
        uVar12 = FUN_00ad3750();
        *puVar5 = uVar12;
        __cxa_guard_release(pbVar4);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) goto LAB_01c5ec24;
        if (plVar16 == puVar5) break;
        plVar16 = (long *)*plVar16;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01c5f3b0;
        lVar14 = *(long *)(lVar14 + 0x18);
        if (lVar14 != 0) {
          plVar16 = (long *)(lVar14 + -0x50);
          FUN_02c90b50(plVar16,1);
          lVar14 = *(long *)(lVar14 + 8);
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
          if (iVar10 + -1 != 0) break;
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar16 + 0x20))(plVar16);
          lVar14 = *(long *)(param_1 + 0x430);
          pbVar4 = PTR_DAT_0437a6d8;
          puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
          goto joined_r0x01c5f444;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01c5f3b0:
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01c5ec24:
  lVar14 = *(long *)(param_1 + 0x430);
  pbVar4 = PTR_DAT_0437a6d8;
  puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
joined_r0x01c5f444:
  PTR_DAT_0437a6d8 = pbVar4;
  PTR_DAT_0437a6e0 = (undefined *)puVar5;
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar10 = *(int *)(lVar14 + 0xc);
    do {
      plVar16 = *(long **)(lVar14 + 0x10);
      if (((*pbVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar4), iVar11 != 0)) {
        uVar12 = FUN_00ad3750();
        *puVar5 = uVar12;
        __cxa_guard_release(pbVar4);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) goto LAB_01c5ec2c;
        if (plVar16 == puVar5) break;
        plVar16 = (long *)*plVar16;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x18);
          if (lVar14 != 0) {
            plVar16 = (long *)(lVar14 + -0x50);
            FUN_02c90b50(plVar16,1);
            lVar14 = *(long *)(lVar14 + 8);
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
              (**(code **)(*plVar16 + 0x20))(plVar16);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01c5ec2c:
  puVar6 = PTR_DAT_04379c28;
  if (((*PTR_DAT_04379c28 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  puVar8 = PTR_DAT_04379c38;
  puVar7 = PTR_DAT_04379c30;
  local_60 = 0;
  uStack_58 = 0;
  uVar12 = *(undefined8 *)PTR_DAT_04379c30;
  local_110 = 0x26;
  local_108 = (long *)0x0;
  local_70 = 0;
  uStack_68 = 0;
  local_120 = (long *)0xa9b920afe574069a;
  pcStack_118 = "STOP_STDISTORTION_LFE_PRE_REALIZE_LOOP";
  *(undefined8 *)PTR_DAT_04379c38 = uVar12;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_b8 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_c8 = (code *)0x0;
  FUN_02913338(uVar12,&local_120,&local_d0,0,0,0);
  pcVar9 = local_c8;
  if (local_c8 == (code *)0x0) {
    local_c8 = (code *)0x0;
  }
  else {
    local_c0 = 0;
    local_b8 = (long *)0x0;
    local_d0 = (long *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar9)(&local_b0);
  }
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x20))();
  }
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  uVar12 = *(undefined8 *)puVar7;
  local_110 = 0x21;
  local_108 = (long *)0x0;
  *(undefined8 *)puVar8 = uVar12;
  local_120 = (long *)0x779eac461217e642;
  pcStack_118 = "STOP_STDISTORTION_CRACK_SPARK_RND";
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_b8 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_c8 = (code *)0x0;
  FUN_02913338(uVar12,&local_120,&local_d0,0,0,0);
  pcVar9 = local_c8;
  if (local_c8 == (code *)0x0) {
    local_c8 = (code *)0x0;
  }
  else {
    local_c0 = 0;
    local_b8 = (long *)0x0;
    local_d0 = (long *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar9)(&local_b0);
  }
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x20))();
  }
  FUN_009c69bc(&local_d0,param_1);
  (**(code **)(*local_d0 + 0x40))();
  local_130 = uVar13;
  uStack_128 = uVar17;
  if (local_d0 != (long *)0x0) {
    lVar14 = local_d0[0xb];
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
      (**(code **)(*local_d0 + 0x20))();
    }
  }
  local_140 = CONCAT44((float)((ulong)local_130 >> 0x20) + (float)((ulong)_DAT_03889bf0 >> 0x20),
                       (float)local_130 + (float)_DAT_03889bf0);
  uStack_138 = CONCAT44((float)((ulong)uStack_128 >> 0x20) + (float)((ulong)_UNK_03889bf8 >> 0x20),
                        (float)uStack_128 + (float)_UNK_03889bf8);
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  uVar13 = *(undefined8 *)puVar7;
  local_110 = 0x21;
  local_108 = (long *)0x0;
  local_120 = (long *)0x39f03e49af103a57;
  pcStack_118 = "PLAY_STDISTORTION_CRACK_DISAPPEAR";
  *(undefined8 *)puVar8 = uVar13;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_b8 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_c8 = (code *)0x0;
  FUN_0291356c(uVar13,&local_120,&local_140,PTR_DAT_0437a0f8,PTR_DAT_0437a100,&local_d0,0,0);
  pcVar9 = local_c8;
  if (local_c8 == (code *)0x0) {
    local_c8 = (code *)0x0;
  }
  else {
    local_c0 = 0;
    local_b8 = (long *)0x0;
    local_d0 = (long *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar9)(&local_b0);
  }
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x20))();
  }
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  uVar13 = *(undefined8 *)puVar7;
  local_110 = 0x1b;
  local_108 = (long *)0x0;
  local_120 = (long *)&DAT_97e398d3773b7646;
  pcStack_118 = "PLAY_STDISTORTION_DISAPPEAR";
  *(undefined8 *)puVar8 = uVar13;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_b8 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_c8 = (code *)0x0;
  FUN_0291356c(uVar13,&local_120,&local_130,PTR_DAT_0437a0f8,PTR_DAT_0437a100,&local_d0,0,0);
  pcVar9 = local_c8;
  if (local_c8 == (code *)0x0) {
    local_c8 = (code *)0x0;
  }
  else {
    local_c0 = 0;
    local_b8 = (long *)0x0;
    local_d0 = (long *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar9)(&local_b0);
  }
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x20))();
  }
  if (*(long *)(param_1 + 0x390) == 0) {
    local_120 = (long *)0x0;
  }
  else {
    FUN_00bd9360(&local_120);
    if (local_120 != (long *)0x0) {
      local_d0 = (long *)0x65b89294bc203fb2;
      local_c8 = (code *)0x389072e;
      local_c0 = 0x26;
      local_b8 = (long *)0x0;
      FUN_0290b66c(local_120,&local_d0,0);
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x20))();
      }
      if (local_120 != (long *)0x0) {
        lVar14 = local_120[0xb];
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
          (**(code **)(*local_120 + 0x20))();
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x488) == 1) {
    uVar13 = 1;
LAB_01c5ef08:
    FUN_01c5b830(param_1,uVar13);
  }
  else if (*(int *)(param_1 + 0x488) == 2) {
    uVar13 = 0;
    goto LAB_01c5ef08;
  }
  FUN_016c24d0(&local_d0,param_1 + 0x490);
  plVar16 = local_d0;
  if (local_d0 != (long *)0x0) {
    plVar15 = (long *)local_d0[0x58];
    if (plVar15 != (long *)0x0) {
      do {
        *(uint *)(plVar15 + 3) = *(uint *)(plVar15 + 3) | 4;
        FUN_01839500(plVar16);
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
      if (local_d0 == (long *)0x0) goto LAB_01c5ef70;
    }
    lVar14 = local_d0[0xb];
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
      (**(code **)(*local_d0 + 0x20))(local_d0);
    }
  }
LAB_01c5ef70:
  local_d0 = (long *)0x385bd3948cacd87d;
  local_120 = (long *)0x385bd2948cacd6ca;
  FUN_01c5fc04(param_1,&local_d0,&local_120);
  return;
}


