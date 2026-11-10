/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d9976c; name: FUN_02d9976c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02d9976c(undefined8 *param_1,long param_2,byte param_3)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined1 *local_200;
  code *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  long *aplStack_1e0 [13];
  undefined8 local_178;
  char *pcStack_170;
  undefined8 local_168;
  long *local_160;
  long *local_158;
  long *local_150;
  undefined8 *local_148;
  char *local_140;
  undefined8 local_138;
  long *local_130;
  undefined8 local_128;
  undefined8 local_120;
  long *local_118;
  long *local_110;
  code *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  long *plStack_f0;
  long local_e8;
  undefined8 local_e0;
  long *local_d8;
  byte local_d0;
  long local_90;
  char *pcStack_88;
  long local_80;
  long *local_78;
  long *local_70 [2];
  
  if (((*(long *)(param_2 + 0x1f8) == 0) || (*(long **)(param_2 + 0x200) == (long *)0x0)) ||
     (uVar10 = (**(code **)(**(long **)(param_2 + 0x200) + 0x48))(), (uVar10 & 1) == 0)) {
    *param_1 = 0;
    return;
  }
  plVar12 = *(long **)(param_2 + 0x1f8);
  if (plVar12 != (long *)0x0) {
    lVar13 = plVar12[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02d9a8a4;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar14 = *(long **)(param_2 + 0x200);
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02d9a8a4;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  (**(code **)(*plVar14 + 0x50))(plVar14);
  local_178 = 0xdd5166043a538723;
  pcStack_170 = "CancelCurrentRunning";
  local_168 = 0x14;
  local_160 = (long *)0x0;
  if (plVar14 == (long *)0x0) {
    aplStack_1e0[0] = (long *)0x0;
  }
  else {
    lVar13 = plVar14[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02d9a8a4;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_1e8 = (undefined1 *)0x0;
    local_200 = (undefined1 *)0x0;
    local_1f8 = (code *)0x0;
    local_1f0 = (undefined1 *)0x0;
    lVar13 = plVar14[0xb];
    aplStack_1e0[0] = plVar14;
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02d9a8a4;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_200 = &LAB_02d9a9fc;
  local_1f8 = FUN_02d9aa80;
  local_1f0 = &LAB_02d9aab8;
  local_1e8 = &LAB_02d9ab2c;
  FUN_0276d964(&local_158,&local_178,&local_200);
  plVar7 = local_158;
  if (plVar12 != (long *)0x0) {
    lVar13 = plVar12[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02d9a8a4;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_148 = (undefined8 *)0xc51cd822df8e33bd;
  local_140 = "CleanupSession";
  local_138 = 0xe;
  local_130 = (long *)0x0;
  FUN_013b1c3c(&local_110,plVar7);
  if (local_110 == (long *)0x0) {
    local_118 = (long *)0x0;
  }
  else {
    FUN_013b20c8(&local_118);
    plVar3 = local_110;
    if (local_110 != (long *)0x0) {
      plVar2 = local_110 + 1;
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        local_110[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_90 = *plVar3;
        FUN_02a44274(lVar13 + 0xd8,&local_90);
      }
    }
  }
  FUN_00ae29ec(local_70,&local_148);
  plVar3 = local_70[0];
  if (local_70[0] == (long *)0x0) {
    local_90 = *(long *)PTR_DAT_04379c88;
LAB_02d9a88c:
    pcStack_88 = *(char **)PTR_PTR_04379d00;
    if (local_70[0] != (long *)0x0) goto LAB_02d99a7c;
LAB_02d9a89c:
    local_80 = 0;
  }
  else {
    local_90 = local_70[0][0xb];
    if (local_70[0] == (long *)0x0) goto LAB_02d9a88c;
    pcStack_88 = (char *)local_70[0][0xc];
    if (local_70[0] == (long *)0x0) goto LAB_02d9a89c;
LAB_02d99a7c:
    local_80 = local_70[0][0xd];
  }
  local_78 = (long *)0x0;
  if (local_70[0] != (long *)0x0) {
    (**(code **)(*local_70[0] + 0x18))(local_70[0]);
  }
  plVar2 = local_118;
  local_78 = plVar3;
  local_128 = (undefined8 *)((ulong)local_128._4_4_ << 0x20);
  local_120 = 0x2000;
  if (local_118 != (long *)0x0) {
    lVar13 = local_118[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02d9a8a4;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar12 != (long *)0x0) {
    lVar13 = plVar12[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02d9a8a4;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_f8 = (undefined1 *)0x0;
  plStack_f0 = plVar2;
  local_110 = (long *)0x0;
  local_108 = (code *)0x0;
  local_100 = (undefined1 *)0x0;
  if (plVar2 != (long *)0x0) {
    lVar13 = plVar2[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02d9a8a4;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_e8 = CONCAT44(local_e8._4_4_,1);
  local_e0 = 0x2000;
  local_d8 = plVar12;
  if (plVar12 != (long *)0x0) {
    lVar13 = plVar12[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02d9a8a4;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_d0 = param_3 & 1;
  local_110 = (long *)&LAB_02d9aba0;
  local_108 = FUN_02d9b528;
  local_100 = &LAB_02d9c018;
  local_f8 = &LAB_02d9c0f8;
  FUN_013b1d1c(&local_150,&local_90,&local_128,&local_110);
  pcVar6 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (undefined1 *)0x0;
    local_f8 = (undefined1 *)0x0;
    local_110 = (long *)0x0;
    local_108 = (code *)0x0;
    (*pcVar6)(&plStack_f0);
  }
  if (plVar12 != (long *)0x0) {
    lVar13 = plVar12[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  if (plVar2 != (long *)0x0) {
    lVar13 = plVar2[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar2 + 0x20))(plVar2);
    }
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_70[0] != (long *)0x0) {
    (**(code **)(*local_70[0] + 0x20))();
  }
  plVar3 = local_150;
  FUN_013b1c3c(&local_128,plVar7);
  local_110 = (long *)0x0;
  local_108 = (code *)0x0;
  FUN_013b8954(&local_110,&local_128);
  FUN_013b1d7c(plVar3,&local_110);
  plVar7 = local_110;
  if (local_110 != (long *)0x0) {
    plVar3 = local_110 + 1;
    do {
      iVar9 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      local_110[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_70[0] = (long *)*plVar7;
      FUN_02a44274(lVar13 + 0xd8,local_70);
    }
  }
  puVar8 = local_128;
  if (local_128 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_128 + 1);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      local_128[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_70[0] = (long *)*puVar8;
      FUN_02a44274(lVar13 + 0xd8,local_70);
    }
  }
  if (local_118 != (long *)0x0) {
    lVar13 = local_118[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_118 + 0x20))();
    }
  }
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  plVar7 = local_150;
  FUN_013b1c3c(&local_110,local_150);
  if (local_110 == (long *)0x0) {
    local_70[0] = (long *)0x0;
  }
  else {
    FUN_013b20c8(local_70);
    plVar3 = local_110;
    if (local_110 != (long *)0x0) {
      plVar2 = local_110 + 1;
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        local_110[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_90 = *plVar3;
        FUN_02a44274(lVar13 + 0xd8,&local_90);
      }
    }
  }
  plVar3 = local_70[0];
  local_148 = (undefined8 *)((ulong)local_148 & 0xffffffff00000000);
  local_90 = -0x69e9ed7aa86513e3;
  pcStack_88 = "StopBeaconError";
  local_80 = 0xf;
  local_78 = (long *)0x0;
  local_140 = (char *)0x2000;
  if (local_70[0] == (long *)0x0) {
    plStack_f0 = (long *)0x0;
  }
  else {
    lVar13 = local_70[0][0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02d9a8a4;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_f8 = (undefined1 *)0x0;
    plStack_f0 = plVar3;
    local_110 = (long *)0x0;
    local_108 = (code *)0x0;
    local_100 = (undefined1 *)0x0;
    lVar13 = plVar3[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02d9a8a4;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_e0 = CONCAT44(local_e0._4_4_,1);
  local_d8 = (long *)0x2000;
  local_110 = (long *)&LAB_02d9c1d8;
  local_108 = FUN_02d9c7c4;
  local_100 = &LAB_02d9cc00;
  local_f8 = &LAB_02d9cc9c;
  local_e8 = param_2;
  FUN_013b1d1c(&local_118,&local_90,&local_148,&local_110);
  pcVar6 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (undefined1 *)0x0;
    local_f8 = (undefined1 *)0x0;
    local_110 = (long *)0x0;
    local_108 = (code *)0x0;
    (*pcVar6)(&plStack_f0);
  }
  if (plVar3 != (long *)0x0) {
    lVar13 = plVar3[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar3 + 0x20))(plVar3);
    }
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  plVar3 = local_118;
  FUN_013b1c3c(&local_148,plVar7);
  local_110 = (long *)0x0;
  local_108 = (code *)0x0;
  FUN_013b8954(&local_110,&local_148);
  FUN_013b1d7c(plVar3,&local_110);
  plVar7 = local_110;
  if (local_110 != (long *)0x0) {
    plVar3 = local_110 + 1;
    do {
      iVar9 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      local_110[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_128 = (undefined8 *)*plVar7;
      FUN_02a44274(lVar13 + 0xd8,&local_128);
    }
  }
  puVar8 = local_148;
  if (local_148 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_148 + 1);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      local_148[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_128 = (undefined8 *)*puVar8;
      FUN_02a44274(lVar13 + 0xd8,&local_128);
    }
  }
  if (local_70[0] != (long *)0x0) {
    lVar13 = local_70[0][0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_70[0] + 0x20))();
    }
  }
  plVar7 = local_118;
  FUN_013b1c3c(&local_110,local_118);
  if (local_110 == (long *)0x0) {
    local_70[0] = (long *)0x0;
  }
  else {
    FUN_013b20c8(local_70);
    plVar3 = local_110;
    if (local_110 != (long *)0x0) {
      plVar2 = local_110 + 1;
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        local_110[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_90 = *plVar3;
        FUN_02a44274(lVar13 + 0xd8,&local_90);
      }
    }
  }
  plVar3 = local_70[0];
  local_148 = (undefined8 *)((ulong)local_148 & 0xffffffff00000000);
  local_90 = -0x2a0fb79d3c030029;
  pcStack_88 = "StopBeaconCancel";
  local_80 = 0x10;
  local_78 = (long *)0x0;
  local_140 = (char *)0x2000;
  if (local_70[0] != (long *)0x0) {
    lVar13 = local_70[0][0xb];
    if (*(undefined8 **)(lVar13 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      local_f8 = (undefined1 *)0x0;
      plStack_f0 = plVar3;
      local_110 = (long *)0x0;
      local_108 = (code *)0x0;
      local_100 = (undefined1 *)0x0;
      lVar13 = plVar3[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar13 + 0x10) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
          *(undefined8 *)(lVar13 + 0x10) = uVar11;
        }
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        goto LAB_02d9a1fc;
      }
    }
LAB_02d9a8a4:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  plStack_f0 = (long *)0x0;
LAB_02d9a1fc:
  local_e0 = CONCAT44(local_e0._4_4_,1);
  local_d8 = (long *)0x2000;
  local_110 = (long *)&LAB_02d9cd38;
  local_108 = FUN_02d9d260;
  local_100 = &LAB_02d9d57c;
  local_f8 = &LAB_02d9d618;
  local_e8 = param_2;
  FUN_013b1d1c(param_1,&local_90,&local_148,&local_110);
  pcVar6 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (undefined1 *)0x0;
    local_f8 = (undefined1 *)0x0;
    local_110 = (long *)0x0;
    local_108 = (code *)0x0;
    (*pcVar6)(&plStack_f0);
  }
  if (plVar3 != (long *)0x0) {
    lVar13 = plVar3[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar3 + 0x20))(plVar3);
    }
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  uVar11 = *param_1;
  FUN_013b1c3c(&local_148,plVar7);
  local_110 = (long *)0x0;
  local_108 = (code *)0x0;
  FUN_013b8954(&local_110,&local_148);
  FUN_013b1d7c(uVar11,&local_110);
  plVar7 = local_110;
  if (local_110 != (long *)0x0) {
    plVar3 = local_110 + 1;
    do {
      iVar9 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      local_110[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_128 = (undefined8 *)*plVar7;
      FUN_02a44274(lVar13 + 0xd8,&local_128);
    }
  }
  puVar8 = local_148;
  if (local_148 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_148 + 1);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      local_148[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_128 = (undefined8 *)*puVar8;
      FUN_02a44274(lVar13 + 0xd8,&local_128);
    }
  }
  if (local_70[0] != (long *)0x0) {
    lVar13 = local_70[0][0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_70[0] + 0x20))();
    }
  }
  if (local_118 != (long *)0x0) {
    lVar13 = local_118[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_118 + 0x20))();
    }
  }
  if (local_150 != (long *)0x0) {
    lVar13 = local_150[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_150 + 0x20))();
    }
  }
  if (plVar12 != (long *)0x0) {
    lVar13 = plVar12[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar6 = local_1f8;
  if (local_158 != (long *)0x0) {
    lVar13 = local_158[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_158 + 0x20))();
      pcVar6 = local_1f8;
    }
  }
  local_1f8 = pcVar6;
  if (pcVar6 != (code *)0x0) {
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (undefined1 *)0x0;
    local_200 = (undefined1 *)0x0;
    local_1f8 = (code *)0x0;
    (*pcVar6)(aplStack_1e0);
  }
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  if (local_160 != (long *)0x0) {
    (**(code **)(*local_160 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  if (plVar12 != (long *)0x0) {
    lVar13 = plVar12[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  return;
}


