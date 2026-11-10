/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d25b30; name: FUN_02d25b30
 */


void FUN_02d25b30(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 *puVar8;
  code *pcVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 local_225;
  undefined8 local_21d;
  undefined4 local_215;
  undefined8 *local_210;
  long *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 *local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  char *pcStack_1d8;
  undefined8 local_1d0;
  long *local_1c8;
  undefined8 *local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0 [2];
  undefined8 local_1a8;
  undefined8 local_1a0;
  char *pcStack_198;
  undefined8 local_190;
  long *local_188;
  long *local_180;
  long *local_178;
  long *local_170;
  long *local_168;
  undefined8 local_15d;
  undefined8 local_155;
  undefined4 local_14d;
  undefined8 *local_148;
  char *local_140;
  undefined8 local_138;
  long *local_130;
  undefined3 local_128;
  undefined5 uStack_125;
  undefined3 uStack_120;
  undefined8 local_11d;
  undefined4 local_115;
  undefined8 local_110;
  undefined8 local_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  long *local_d8;
  long *plStack_d0;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined1 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  long local_70;
  char *local_68;
  long local_60;
  long *local_58;
  
  bVar4 = *(char *)(param_3 + 0x18) != '\0';
  if (bVar4) {
    local_15d = *(undefined8 *)(param_3 + 0x1c);
    local_155 = *(undefined8 *)(param_3 + 0x24);
    local_14d = *(undefined4 *)(param_3 + 0x2c);
  }
  local_1a0 = 0xe185f6f6b840a887;
  pcStack_198 = "InitializeLdn";
  local_190 = 0xd;
  local_188 = (long *)0x0;
  local_1b0[0] = 2;
  local_1a8 = 0x8000;
  FUN_02d2576c(&local_180,&local_1a0,local_1b0);
  plVar7 = local_180;
  local_f0 = (long *)0x0;
  local_e8 = (code *)0x0;
  FUN_008802f0(&local_f0,*(long *)(param_2 + 0x70) + 0x58);
  local_1c0 = (undefined8 *)0x0;
  uStack_1b8 = 0;
  FUN_02cd5d0c(&local_1c0,&local_f0);
  plVar3 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar1 = local_f0 + 1;
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      local_f0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_70 = *plVar3;
      FUN_02a44274(lVar13 + 0xd8,&local_70);
    }
  }
  local_f0 = (long *)0x5f3a9f86b611a6e;
  local_e8 = (code *)0x38cea8c;
  local_e0 = (undefined1 *)0xe;
  local_d8 = (long *)0x0;
  local_70 = CONCAT44(local_70._4_4_,1);
  local_68 = (char *)0x2000;
  local_148 = (undefined8 *)0x0;
  local_140 = (char *)0x0;
  FUN_02cd6d54(&local_148,&local_1c0);
  FUN_02d6e8c0(&local_178,plVar7,&local_f0,&local_70,&local_148,param_2 + 0x218);
  puVar8 = local_148;
  if (local_148 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_148 + 1);
    do {
      iVar10 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      local_148[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_128 = (undefined3)*puVar8;
      uStack_125 = (undefined5)((ulong)*puVar8 >> 0x18);
      FUN_02a44274(lVar13 + 0xd8,&local_128);
    }
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  plVar7 = local_178;
  local_1e0 = 0x4009dc70b1776ef1;
  pcStack_1d8 = "BrowseSession";
  local_1d0 = 0xd;
  local_1c8 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_e8 = (code *)0x0;
  FUN_008802f0(&local_f0,*(long *)(param_2 + 0x70) + 0x58);
  local_1f0 = (undefined8 *)0x0;
  uStack_1e8 = 0;
  FUN_02cd5d0c(&local_1f0,&local_f0);
  plVar3 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar1 = local_f0 + 1;
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      local_f0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_70 = *plVar3;
      FUN_02a44274(lVar13 + 0xd8,&local_70);
    }
  }
  FUN_02d273a8(&local_210,param_2,param_3);
  FUN_02d26af4(&local_170,plVar7,&local_1e0,&local_1f0,&local_210);
  plVar7 = local_170;
  if (bVar4) {
    local_225 = local_15d;
    local_21d = local_155;
    local_215 = local_14d;
  }
  local_148 = (undefined8 *)0x86ea4d83239ef7f8;
  local_140 = "PickSessionInfo";
  local_138 = 0xf;
  local_130 = (long *)0x0;
  FUN_013b1c3c(&local_f0,local_170);
  if (local_f0 == (long *)0x0) {
    local_f8 = (long *)0x0;
  }
  else {
    FUN_013b20c8(&local_f8);
    plVar3 = local_f0;
    if (local_f0 != (long *)0x0) {
      plVar1 = local_f0 + 1;
      do {
        iVar10 = (int)*plVar1 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 == 0) {
        local_f0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_70 = *plVar3;
        FUN_02a44274(lVar13 + 0xd8,&local_70);
      }
    }
  }
  FUN_00ae29ec(&local_100,&local_148);
  plVar3 = local_100;
  if (local_100 == (long *)0x0) {
    local_70 = *(long *)PTR_DAT_04379c88;
LAB_02d26ac4:
    local_68 = *(char **)PTR_PTR_04379d00;
    if (local_100 != (long *)0x0) goto LAB_02d25f00;
LAB_02d26ad4:
    local_60 = 0;
  }
  else {
    local_70 = local_100[0xb];
    if (local_100 == (long *)0x0) goto LAB_02d26ac4;
    local_68 = (char *)local_100[0xc];
    if (local_100 == (long *)0x0) goto LAB_02d26ad4;
LAB_02d25f00:
    local_60 = local_100[0xd];
  }
  local_58 = (long *)0x0;
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x18))(local_100);
  }
  plVar1 = local_f8;
  local_58 = plVar3;
  local_110 = (ulong)local_110._4_4_ << 0x20;
  local_108 = 0x2000;
  if (local_f8 != (long *)0x0) {
    lVar13 = local_f8[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02d26adc;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (bVar4) {
    uStack_125 = (undefined5)local_225;
    uStack_120 = (undefined3)((ulong)local_225 >> 0x28);
    local_11d = local_21d;
    local_115 = local_215;
  }
  local_d8 = (long *)0x0;
  plStack_d0 = plVar1;
  local_f0 = (long *)0x0;
  local_e8 = (code *)0x0;
  local_e0 = (undefined1 *)0x0;
  if (plVar1 != (long *)0x0) {
    lVar13 = plVar1[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02d26adc;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_c8 = CONCAT44(local_c8._4_4_,1);
  local_c0 = 0x2000;
  if (bVar4) {
    local_ac = CONCAT35(uStack_120,uStack_125);
    local_a4 = local_11d;
    local_9c = local_115;
  }
  local_f0 = (long *)&LAB_02d7e120;
  local_e8 = FUN_02d7ea3c;
  local_e0 = &LAB_02d8250c;
  local_d8 = (long *)&LAB_02d825d4;
  local_b8 = param_2;
  local_b0 = bVar4;
  FUN_013b1d1c(&local_168,&local_70,&local_110,&local_f0);
  pcVar9 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined1 *)0x0;
    local_d8 = (long *)0x0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar9)(&plStack_d0);
  }
  if (plVar1 != (long *)0x0) {
    lVar13 = plVar1[0xb];
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  plVar3 = local_168;
  FUN_013b1c3c(&local_128,plVar7);
  local_f0 = (long *)0x0;
  local_e8 = (code *)0x0;
  FUN_013b8954(&local_f0,&local_128);
  FUN_013b1d7c(plVar3,&local_f0);
  plVar7 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar3 = local_f0 + 1;
    do {
      iVar10 = (int)*plVar3 + -1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar4) {
        *(int *)plVar3 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      local_f0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_110 = *plVar7;
      FUN_02a44274(lVar13 + 0xd8,&local_110);
    }
  }
  plVar7 = (long *)CONCAT53(uStack_125,local_128);
  if (plVar7 != (long *)0x0) {
    plVar3 = plVar7 + 1;
    do {
      iVar10 = (int)*plVar3 + -1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar4) {
        *(int *)plVar3 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      plVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_110 = *plVar7;
      FUN_02a44274(lVar13 + 0xd8,&local_110);
    }
  }
  if (local_f8 != (long *)0x0) {
    lVar13 = local_f8[0xb];
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_f8 + 0x20))();
    }
  }
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  FUN_013b1c3c(&local_f0,local_168);
  if (local_f0 == (long *)0x0) {
    local_128 = 0;
    uStack_125 = 0;
  }
  else {
    FUN_013b20c8(&local_128);
    plVar7 = local_f0;
    if (local_f0 != (long *)0x0) {
      plVar3 = local_f0 + 1;
      do {
        iVar10 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar4) {
          *(int *)plVar3 = iVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 == 0) {
        local_f0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_70 = *plVar7;
        FUN_02a44274(lVar13 + 0xd8,&local_70);
      }
    }
  }
  plVar7 = (long *)CONCAT53(uStack_125,local_128);
  local_148 = (undefined8 *)((ulong)local_148 & 0xffffffff00000000);
  local_70 = -0x53e613a22cfa0cd5;
  local_68 = "RandomMatchingCancel";
  local_60 = 0x14;
  local_58 = (long *)0x0;
  local_140 = (char *)0x2000;
  if (plVar7 == (long *)0x0) {
    plStack_d0 = (long *)0x0;
  }
  else {
    lVar13 = plVar7[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_02d26adc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    local_d8 = (long *)0x0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    local_e0 = (undefined1 *)0x0;
    lVar13 = plVar7[0xb];
    plStack_d0 = plVar7;
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02d26adc;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_c0 = CONCAT44(local_c0._4_4_,1);
  local_b8 = 0x2000;
  local_f0 = (long *)&LAB_02d8269c;
  local_e8 = FUN_02d83714;
  local_e0 = &LAB_02d8a6c8;
  local_d8 = (long *)&LAB_02d8a764;
  local_c8 = param_2;
  FUN_013b1d1c(param_1,&local_70,&local_148,&local_f0);
  pcVar9 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined1 *)0x0;
    local_d8 = (long *)0x0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar9)(&plStack_d0);
  }
  if (plVar7 != (long *)0x0) {
    lVar13 = plVar7[0xb];
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  plVar7 = (long *)CONCAT53(uStack_125,local_128);
  if (plVar7 != (long *)0x0) {
    lVar13 = plVar7[0xb];
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  if (local_168 != (long *)0x0) {
    lVar13 = local_168[0xb];
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_168 + 0x20))();
    }
  }
  if (local_170 != (long *)0x0) {
    lVar13 = local_170[0xb];
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_170 + 0x20))();
    }
  }
  puVar8 = local_210;
  local_210 = (undefined8 *)0x0;
  if (puVar8 == (undefined8 *)0x0) goto LAB_02d26544;
  FUN_02bcbe58(&local_f0,0);
  (**(code **)*puVar8)(puVar8);
  uVar12 = (**(code **)(*local_208 + 0xc0))(local_208);
  lVar13 = tpidr_el0;
  if ((uVar12 & 1) == 0) {
LAB_02d264a8:
    (**(code **)(*local_208 + 0x18))(local_208,puVar8,uStack_200,local_1f8);
  }
  else {
    if (*(char *)(lVar13 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar13 + 0x38d488) = 1;
      *(undefined8 *)(lVar13 + 0x38d478) = 0;
      *(undefined8 *)(lVar13 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_02d264a8;
    FUN_02bcc824(local_208,puVar8,uStack_200,local_1f8);
  }
  if (*(char *)(lVar13 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar13 + 0x38d488) = 1;
    *(undefined8 *)(lVar13 + 0x38d478) = 0;
    *(undefined8 *)(lVar13 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar10 = *(int *)(lVar13 + 0x38d480) + -1;
  *(int *)(lVar13 + 0x38d480) = iVar10;
  if (iVar10 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar13 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar13 + 0x38d488) = 1;
      *(undefined8 *)(lVar13 + 0x38d478) = 0;
      *(undefined8 *)(lVar13 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar13 + 0x38d484) = 0;
  }
LAB_02d26544:
  puVar8 = local_1f0;
  if (local_1f0 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_1f0 + 1);
    do {
      iVar10 = *piVar2;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      local_1f0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_f0 = (long *)*puVar8;
      FUN_02a44274(lVar13 + 0xd8,&local_f0);
    }
  }
  if (local_1c8 != (long *)0x0) {
    (**(code **)(*local_1c8 + 0x20))();
  }
  puVar8 = local_1c0;
  if (local_178 != (long *)0x0) {
    lVar13 = local_178[0xb];
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_178 + 0x20))();
      puVar8 = local_1c0;
    }
  }
  local_1c0 = puVar8;
  if (puVar8 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar8 + 1);
    do {
      iVar10 = *piVar2;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      puVar8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_f0 = (long *)*puVar8;
      FUN_02a44274(lVar13 + 0xd8,&local_f0);
    }
  }
  if (local_180 != (long *)0x0) {
    lVar13 = local_180[0xb];
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_180 + 0x20))();
    }
  }
  if (local_188 != (long *)0x0) {
    (**(code **)(*local_188 + 0x20))();
  }
  return;
}


