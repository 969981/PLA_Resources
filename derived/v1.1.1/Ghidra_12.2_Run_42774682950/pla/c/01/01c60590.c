/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c60590; name: FUN_01c60590
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c60590(long param_1,ulong param_2,ulong param_3)

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
  undefined1 in_q3 [16];
  undefined8 uVar16;
  undefined8 *local_150;
  undefined8 uStack_148;
  undefined8 *local_140;
  undefined8 uStack_138;
  undefined8 *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long *local_100;
  char *pcStack_f8;
  undefined8 local_f0;
  long *local_e8;
  long *local_e0;
  code *local_d8;
  undefined8 local_d0;
  long *local_c8;
  long *local_c0;
  undefined8 uStack_b8;
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
  
  uVar16 = in_q3._8_8_;
  uVar13 = in_q3._0_8_;
  if ((param_2 & 1) == 0) {
    if (*(int *)(param_1 + 0x488) == 1) {
      FUN_01c601f8(param_1,3,1);
    }
    *(undefined4 *)(param_1 + 0x29c) = 3;
    return;
  }
  FUN_016c24d0(&local_e0,param_1 + 0x490);
  if ((local_e0 != (long *)0x0) && (FUN_015916d0(local_e0,0,8,0), local_e0 != (long *)0x0)) {
    lVar14 = local_e0[0xb];
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
      (**(code **)(*local_e0 + 0x20))();
    }
  }
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  *(undefined1 *)(param_1 + 0x4a5) = 1;
  FUN_01c6146c(param_1);
  puVar7 = PTR_DAT_0437a6e0;
  puVar6 = PTR_DAT_0437a6d8;
  lVar14 = *(long *)(param_1 + 0x3e0);
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar10 = *(int *)(lVar14 + 0xc);
    do {
      plVar15 = *(long **)(lVar14 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
        uVar12 = FUN_00ad3750();
        *(undefined8 *)puVar7 = uVar12;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_01c60620;
        if (plVar15 == (long *)puVar7) break;
        plVar15 = (long *)*plVar15;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01c611f4;
        lVar14 = *(long *)(lVar14 + 0x18);
        if (lVar14 != 0) {
          plVar15 = (long *)(lVar14 + -0x50);
          FUN_02c90b50(plVar15,1);
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
          (**(code **)(*plVar15 + 0x20))(plVar15);
          lVar14 = *(long *)(param_1 + 0x3f0);
          pbVar4 = PTR_DAT_0437a6d8;
          puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
          goto joined_r0x01c61288;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01c611f4:
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01c60620:
  lVar14 = *(long *)(param_1 + 0x3f0);
  pbVar4 = PTR_DAT_0437a6d8;
  puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
joined_r0x01c61288:
  PTR_DAT_0437a6d8 = pbVar4;
  PTR_DAT_0437a6e0 = (undefined *)puVar5;
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar10 = *(int *)(lVar14 + 0xc);
    do {
      plVar15 = *(long **)(lVar14 + 0x10);
      if (((*pbVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar4), iVar11 != 0)) {
        uVar12 = FUN_00ad3750();
        *puVar5 = uVar12;
        __cxa_guard_release(pbVar4);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_01c60628;
        if (plVar15 == puVar5) break;
        plVar15 = (long *)*plVar15;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01c612d4;
        lVar14 = *(long *)(lVar14 + 0x18);
        if (lVar14 != 0) {
          plVar15 = (long *)(lVar14 + -0x50);
          FUN_02c90b50(plVar15,1);
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
          (**(code **)(*plVar15 + 0x20))(plVar15);
          lVar14 = *(long *)(param_1 + 0x420);
          pbVar4 = PTR_DAT_0437a6d8;
          puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
          goto joined_r0x01c61368;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01c612d4:
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01c60628:
  lVar14 = *(long *)(param_1 + 0x420);
  pbVar4 = PTR_DAT_0437a6d8;
  puVar5 = (undefined8 *)PTR_DAT_0437a6e0;
joined_r0x01c61368:
  PTR_DAT_0437a6d8 = pbVar4;
  PTR_DAT_0437a6e0 = (undefined *)puVar5;
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar10 = *(int *)(lVar14 + 0xc);
    do {
      plVar15 = *(long **)(lVar14 + 0x10);
      if (((*pbVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar4), iVar11 != 0)) {
        uVar12 = FUN_00ad3750();
        *puVar5 = uVar12;
        __cxa_guard_release(pbVar4);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_01c60630;
        if (plVar15 == puVar5) break;
        plVar15 = (long *)*plVar15;
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
            plVar15 = (long *)(lVar14 + -0x50);
            FUN_02c90b50(plVar15,1);
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
              (**(code **)(*plVar15 + 0x20))(plVar15);
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
LAB_01c60630:
  puVar6 = PTR_DAT_04379c28;
  if (((*PTR_DAT_04379c28 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  puVar8 = PTR_DAT_04379c38;
  puVar7 = PTR_DAT_04379c30;
  local_70 = 0;
  uStack_68 = 0;
  uVar12 = *(undefined8 *)PTR_DAT_04379c30;
  local_f0 = 0x26;
  local_e8 = (long *)0x0;
  local_80 = 0;
  uStack_78 = 0;
  local_100 = (long *)0xa9b920afe574069a;
  pcStack_f8 = "STOP_STDISTORTION_LFE_PRE_REALIZE_LOOP";
  *(undefined8 *)PTR_DAT_04379c38 = uVar12;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = (long *)0x0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_d8 = (code *)0x0;
  FUN_02913338(uVar12,&local_100,&local_e0,0,0,0);
  pcVar9 = local_d8;
  if (local_d8 == (code *)0x0) {
    local_d8 = (code *)0x0;
  }
  else {
    local_d0 = 0;
    local_c8 = (long *)0x0;
    local_e0 = (long *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar9)(&local_c0);
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  uVar12 = *(undefined8 *)puVar7;
  local_f0 = 0x25;
  local_e8 = (long *)0x0;
  *(undefined8 *)puVar8 = uVar12;
  local_100 = (long *)0xf7234cb593848c90;
  pcStack_f8 = "STOP_STDISTORTION_CRACK_SPARK_PRE_RND";
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
  local_c0 = (long *)0x0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_d8 = (code *)0x0;
  FUN_02913338(uVar12,&local_100,&local_e0,0,0,0);
  pcVar9 = local_d8;
  if (local_d8 == (code *)0x0) {
    local_d8 = (code *)0x0;
  }
  else {
    local_d0 = 0;
    local_c8 = (long *)0x0;
    local_e0 = (long *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar9)(&local_c0);
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  FUN_009c69bc(&local_e0,param_1);
  (**(code **)(*local_e0 + 0x40))();
  local_110 = uVar13;
  uStack_108 = uVar16;
  if (local_e0 != (long *)0x0) {
    lVar14 = local_e0[0xb];
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
      (**(code **)(*local_e0 + 0x20))();
    }
  }
  local_120 = CONCAT44((float)((ulong)local_110 >> 0x20) + (float)((ulong)_DAT_03889bf0 >> 0x20),
                       (float)local_110 + (float)_DAT_03889bf0);
  uStack_118 = CONCAT44((float)((ulong)uStack_108 >> 0x20) + (float)((ulong)_UNK_03889bf8 >> 0x20),
                        (float)uStack_108 + (float)_UNK_03889bf8);
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  uVar13 = *(undefined8 *)puVar7;
  local_f0 = 0x21;
  local_e8 = (long *)0x0;
  local_100 = (long *)0xcd219c3c9e0f5788;
  pcStack_f8 = "PLAY_STDISTORTION_CRACK_SPARK_RND";
  *(undefined8 *)puVar8 = uVar13;
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
  local_c0 = (long *)0x0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_d8 = (code *)0x0;
  FUN_0291356c(uVar13,&local_100,&local_120,PTR_DAT_0437a0f8,PTR_DAT_0437a100,&local_e0,0,0);
  pcVar9 = local_d8;
  if (local_d8 == (code *)0x0) {
    local_d8 = (code *)0x0;
  }
  else {
    local_d0 = 0;
    local_c8 = (long *)0x0;
    local_e0 = (long *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar9)(&local_c0);
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  uVar13 = *(undefined8 *)puVar7;
  local_f0 = 0x1f;
  local_e8 = (long *)0x0;
  local_100 = (long *)0x25924adaa775d4f0;
  pcStack_f8 = "PLAY_STDISTORTION_CRACK_REALIZE";
  *(undefined8 *)puVar8 = uVar13;
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
  local_c0 = (long *)0x0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_d8 = (code *)0x0;
  FUN_0291356c(uVar13,&local_100,&local_120,PTR_DAT_0437a0f8,PTR_DAT_0437a100,&local_e0,0,0);
  pcVar9 = local_d8;
  if (local_d8 == (code *)0x0) {
    local_d8 = (code *)0x0;
  }
  else {
    local_d0 = 0;
    local_c8 = (long *)0x0;
    local_e0 = (long *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar9)(&local_c0);
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  uVar13 = *(undefined8 *)puVar7;
  local_f0 = 0x19;
  local_e8 = (long *)0x0;
  local_100 = (long *)&DAT_de7830ed2d5be839;
  pcStack_f8 = "PLAY_STDISTORTION_REALIZE";
  *(undefined8 *)puVar8 = uVar13;
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
  local_c0 = (long *)0x0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_d8 = (code *)0x0;
  FUN_0291356c(uVar13,&local_100,&local_110,PTR_DAT_0437a0f8,PTR_DAT_0437a100,&local_e0,0,0);
  pcVar9 = local_d8;
  if (local_d8 == (code *)0x0) {
    local_d8 = (code *)0x0;
  }
  else {
    local_d0 = 0;
    local_c8 = (long *)0x0;
    local_e0 = (long *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar9)(&local_c0);
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if (*(long *)(param_1 + 0x390) == 0) {
    local_100 = (long *)0x0;
  }
  else {
    FUN_00bd9360(&local_100);
    if (local_100 != (long *)0x0) {
      local_e0 = (long *)0xb6d4a9698914b8df;
      local_d8 = (code *)0x389c1ec;
      local_d0 = 0x22;
      local_c8 = (long *)0x0;
      FUN_0290b66c(local_100,&local_e0,0);
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      local_e0 = (long *)0x62b42b32e4803c60;
      local_d8 = (code *)0x3946073;
      local_d0 = 0x26;
      local_c8 = (long *)0x0;
      FUN_0290b66c(local_100,&local_e0,0);
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      if (local_100 != (long *)0x0) {
        lVar14 = local_100[0xb];
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
          (**(code **)(*local_100 + 0x20))();
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x488) == 2) {
    uVar13 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x488) != 1) goto LAB_01c609b0;
    uVar13 = 1;
  }
  FUN_01c5b830(param_1,uVar13);
LAB_01c609b0:
  if ((param_3 & 1) == 0) {
    local_130 = (undefined8 *)0x0;
    uStack_128 = 0;
    FUN_00aeb228(&local_130,param_1 + 0x3b0);
    FUN_01c5e5a0(param_1,&local_130);
    puVar5 = local_130;
    if (local_130 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_130 + 1);
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
        local_130[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_e0 = (long *)*puVar5;
        FUN_02a44274(lVar14 + 0xd8,&local_e0);
      }
    }
    local_140 = (undefined8 *)0x0;
    uStack_138 = 0;
    FUN_00aeb228(&local_140,param_1 + 0x3c0);
    FUN_01c5e5a0(param_1,&local_140);
    puVar5 = local_140;
    if (local_140 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_140 + 1);
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
        local_140[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_e0 = (long *)*puVar5;
        FUN_02a44274(lVar14 + 0xd8,&local_e0);
      }
    }
    local_150 = (undefined8 *)0x0;
    uStack_148 = 0;
    FUN_00aeb228(&local_150,param_1 + 0x3d0);
    FUN_01c5e5a0(param_1,&local_150);
    puVar5 = local_150;
    if (local_150 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_150 + 1);
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
        local_150[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_e0 = (long *)*puVar5;
        FUN_02a44274(lVar14 + 0xd8,&local_e0);
      }
    }
  }
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  uVar13 = *(undefined8 *)puVar7;
  local_f0 = 0x28;
  local_e8 = (long *)0x0;
  *(undefined8 *)puVar8 = uVar13;
  local_100 = (long *)0xe28436688ce2602c;
  pcStack_f8 = "SET_STATE_WORMHOLE_MATERIALIZATION_START";
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
  local_c0 = (long *)0x0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_d8 = (code *)0x0;
  FUN_02913338(uVar13,&local_100,&local_e0,0,0,0);
  pcVar9 = local_d8;
  if (local_d8 == (code *)0x0) {
    local_d8 = (code *)0x0;
  }
  else {
    local_d0 = 0;
    local_c8 = (long *)0x0;
    local_e0 = (long *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar9)(&local_c0);
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  puVar6 = PTR_DAT_04379e40;
  if (*(char *)(param_1 + 0x48c) != '\0') {
    local_100 = (long *)&DAT_8d81cfe451e0a778;
    pcStack_f8 = "WORMHOLE";
    local_f0 = 8;
    local_e8 = (long *)0x0;
    if (((*PTR_DAT_04379e40 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e40);
    }
    puVar8 = PTR_DAT_04379e50;
    puVar7 = PTR_DAT_04379e48;
    uVar13 = *(undefined8 *)PTR_DAT_04379e48;
    *(undefined8 *)PTR_DAT_04379e50 = uVar13;
    FUN_029278b4(&local_e0,uVar13,&local_100);
    local_100 = (long *)0xd83eb24ac9d94977;
    pcStack_f8 = "PLAY_BGM_HA_FI_CMN_WORMHOLE";
    local_f0 = 0x1b;
    local_e8 = (long *)0x0;
    if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e40);
    }
    uVar13 = *(undefined8 *)puVar7;
    *(undefined8 *)puVar8 = uVar13;
    FUN_02928520(uVar13,&local_d8,&local_100);
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e40);
    }
    uVar13 = *(undefined8 *)puVar7;
    *(undefined8 *)puVar8 = uVar13;
    FUN_02928980(uVar13,&local_d8,0,0);
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
  }
  if (*(int *)(param_1 + 0x488) == 1) {
    FUN_01c601f8(param_1,3,1);
  }
  local_e0 = (long *)0xaabf5a03ca909d0;
  local_100 = (long *)0xaabf6a03ca90b83;
  FUN_01c5fc04(param_1,&local_e0,&local_100);
  *(undefined4 *)(param_1 + 0x298) = 3;
  return;
}


