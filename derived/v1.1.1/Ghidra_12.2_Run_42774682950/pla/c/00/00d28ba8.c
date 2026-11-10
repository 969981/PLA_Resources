/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d28ba8; name: FUN_00d28ba8
 */


void FUN_00d28ba8(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,
                 undefined4 param_5,long *param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long **pplVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  long *local_160;
  undefined8 uStack_158;
  long *local_150;
  long *local_148;
  undefined8 local_140;
  long *local_138;
  long *local_130;
  undefined8 local_128;
  long *local_118;
  long *local_100;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulong uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  ulong local_b0;
  undefined8 local_a8;
  ulong uStack_a0;
  ulong local_98;
  long local_90 [3];
  long *local_78;
  long *local_70 [2];
  
  pplVar12 = &local_160;
  local_78 = param_6;
  if (param_6 == (long *)0x0) {
    local_78 = *(long **)(param_2 + 8);
  }
  lVar10 = nn::os::GetCurrentThread();
  plVar14 = (long *)(param_2 + 0x150);
  do {
    if (*plVar14 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x144));
        while (*plVar14 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *plVar14 = lVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00d28c2c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar5) {
      *plVar14 = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00d28c2c:
  local_b0 = *(ulong *)(param_2 + 0x78);
  uVar15 = *(ulong *)(param_4 + 8);
  if ((local_b0 & local_b0 - 1) == 0) {
    uVar15 = local_b0 - 1 & uVar15;
  }
  else if (local_b0 <= uVar15) {
    uVar6 = 0;
    if (local_b0 != 0) {
      uVar6 = uVar15 / local_b0;
    }
    uVar15 = uVar15 - uVar6 * local_b0;
  }
  puVar13 = *(undefined8 **)(*(long *)(param_2 + 0x70) + uVar15 * 8);
  local_a8 = 0;
  if (puVar13 != (undefined8 *)0x0) {
    local_a8 = *puVar13;
  }
  local_c0 = 0;
  uStack_b8 = uVar15;
  uStack_a0 = uVar15;
  local_98 = local_b0;
  FUN_00d296b0(local_90,&local_a8,&local_c0,param_4,&local_78);
  puVar7 = PTR_DAT_04379d28;
  if (local_90[0] == 0) {
    FUN_00d29770(&local_138,*(undefined8 *)(param_2 + 8),param_4,&local_78);
    plVar14 = local_138;
    local_e0 = *(undefined8 *)(param_2 + 0x78);
    puVar13 = *(undefined8 **)(*(long *)(param_2 + 0x70) + uVar15 * 8);
    local_d8 = 0;
    if (puVar13 != (undefined8 *)0x0) {
      local_d8 = *puVar13;
    }
    local_f0 = 0;
    uStack_e8 = uVar15;
    uStack_d0 = uVar15;
    local_c8 = local_e0;
    FUN_00d29800(local_90,&local_d8,&local_f0,param_4);
    if (local_90[0] == 0) {
      (**(code **)(*plVar14 + 0x10))(&local_138,plVar14);
      local_160 = (long *)0x0;
      uStack_158 = 0;
      FUN_0093bcac(&local_160,&local_138);
      plVar2 = local_138;
      if (local_138 != (long *)0x0) {
        plVar1 = local_138 + 1;
        do {
          iVar8 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 == 0) {
          local_138[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_150 = (long *)*plVar2;
          FUN_02a44274(lVar10 + 0xd8,&local_150);
        }
      }
      local_150 = local_78;
      local_148 = (long *)0x0;
      local_140 = 0;
      FUN_0093b3f4(&local_148,&local_160);
      FUN_00d29e4c(&local_138,param_4,&local_150);
      FUN_00d29a50((long *)(param_2 + 0x70),&local_138);
      if (local_100 != (long *)0x0) {
        plVar2 = local_100 + 1;
        do {
          iVar8 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 == 0) {
          local_100[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_70[0] = (long *)*local_100;
          FUN_02a44274(lVar10 + 0xd8,local_70);
        }
      }
      if (local_118 != (long *)0x0) {
        (**(code **)(*local_118 + 0x20))();
      }
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x20))();
      }
      plVar2 = local_148;
      if (local_148 != (long *)0x0) {
        plVar1 = local_148 + 1;
        do {
          iVar8 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 == 0) {
          local_148[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_70[0] = (long *)*plVar2;
          FUN_02a44274(lVar10 + 0xd8,local_70);
        }
      }
      plVar2 = local_160;
      if (local_160 == (long *)0x0) goto LAB_00d28ed8;
      plVar1 = local_160 + 1;
      do {
        iVar8 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != 0) goto LAB_00d28ed8;
      local_160[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_70[0] = (long *)*plVar2;
      lVar10 = lVar10 + 0xd8;
      pplVar12 = local_70;
    }
    else {
      (**(code **)(*plVar14 + 0x10))(&local_138,plVar14);
      local_150 = (long *)0x0;
      local_148 = (long *)0x0;
      FUN_0093bcac(&local_150,&local_138);
      if (local_138 != (long *)0x0) {
        plVar2 = local_138 + 1;
        do {
          iVar8 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 == 0) {
          local_138[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_160 = (long *)*local_138;
          FUN_02a44274(lVar10 + 0xd8,&local_160);
        }
      }
      local_138 = local_78;
      local_130 = (long *)0x0;
      local_128 = 0;
      FUN_0093b3f4(&local_130,&local_150);
      *(long **)(local_90[0] + 0x40) = local_138;
      FUN_0093b3f4(local_90[0] + 0x48,&local_130);
      plVar2 = local_130;
      if (local_130 != (long *)0x0) {
        plVar1 = local_130 + 1;
        do {
          iVar8 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 == 0) {
          local_130[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_160 = (long *)*plVar2;
          FUN_02a44274(lVar10 + 0xd8,&local_160);
        }
      }
      plVar2 = local_150;
      if (local_150 == (long *)0x0) goto LAB_00d28ed8;
      plVar1 = local_150 + 1;
      do {
        iVar8 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != 0) goto LAB_00d28ed8;
      local_150[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_160 = (long *)*plVar2;
      lVar10 = lVar10 + 0xd8;
    }
  }
  else {
    lVar10 = *(long *)(local_90[0] + 0x48);
    if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
      piVar3 = (int *)(lVar10 + 0xc);
      iVar8 = *(int *)(lVar10 + 0xc);
      do {
        plVar14 = *(long **)(lVar10 + 0x10);
        if (((*PTR_DAT_04379d20 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379d20), iVar9 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar11;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar7 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_04379d20);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_00d28f9c;
          if (plVar14 == (long *)puVar7) break;
          plVar14 = (long *)*plVar14;
        }
        iVar9 = *piVar3;
        if (iVar9 == iVar8) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = iVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            if (*(long *)(lVar10 + 0x18) != 0) {
              plVar14 = (long *)(*(long *)(lVar10 + 0x18) + -0x50);
              goto LAB_00d28ed8;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar9;
      } while (iVar9 != 0);
    }
LAB_00d28f9c:
    FUN_00d29770(&local_138,*(undefined8 *)(param_2 + 8),param_4,&local_78);
    plVar14 = local_138;
    (**(code **)(*local_138 + 0x10))(&local_138,local_138);
    local_150 = (long *)0x0;
    local_148 = (long *)0x0;
    FUN_0093bcac(&local_150,&local_138);
    plVar2 = local_138;
    if (local_138 != (long *)0x0) {
      plVar1 = local_138 + 1;
      do {
        iVar8 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        local_138[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_160 = (long *)*plVar2;
        FUN_02a44274(lVar10 + 0xd8,&local_160);
      }
    }
    FUN_0093b3f4(local_90[0] + 0x48,&local_150);
    plVar2 = local_150;
    if (local_150 == (long *)0x0) goto LAB_00d28ed8;
    plVar1 = local_150 + 1;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 != 0) goto LAB_00d28ed8;
    local_150[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar10 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar10;
    local_138 = (long *)*plVar2;
    lVar10 = lVar10 + 0xd8;
    pplVar12 = &local_138;
  }
  FUN_02a44274(lVar10,pplVar12);
LAB_00d28ed8:
  if (*(char *)(param_2 + 0x16b) != '\0') {
    param_7 = 0;
  }
  FUN_02a763dc(plVar14,param_7);
  *(undefined8 *)(param_2 + 0x150) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x144));
  FUN_02a8f764(*(undefined8 *)(param_2 + 0x158),plVar14,param_5);
  *param_1 = plVar14;
  if (plVar14 != (long *)0x0) {
    lVar10 = plVar14[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar3 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = *piVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar10 = plVar14[0xb];
    piVar3 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  return;
}


