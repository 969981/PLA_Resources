/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02565774; name: FUN_02565774
 */


void FUN_02565774(undefined8 *param_1,long param_2,long param_3,long *param_4,undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long **pplVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
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
  
  pplVar13 = &local_160;
  local_78 = param_4;
  if (param_4 == (long *)0x0) {
    local_78 = *(long **)(param_2 + 8);
  }
  lVar11 = nn::os::GetCurrentThread();
  plVar15 = (long *)(param_2 + 0x150);
  do {
    if (*plVar15 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x144));
        while (*plVar15 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar5) {
            *plVar15 = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_025657f4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar5) {
      *plVar15 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_025657f4:
  local_b0 = *(ulong *)(param_2 + 0x78);
  uVar16 = *(ulong *)(param_3 + 8);
  if ((local_b0 & local_b0 - 1) == 0) {
    uVar16 = local_b0 - 1 & uVar16;
  }
  else if (local_b0 <= uVar16) {
    uVar6 = 0;
    if (local_b0 != 0) {
      uVar6 = uVar16 / local_b0;
    }
    uVar16 = uVar16 - uVar6 * local_b0;
  }
  puVar14 = *(undefined8 **)(*(long *)(param_2 + 0x70) + uVar16 * 8);
  local_a8 = 0;
  if (puVar14 != (undefined8 *)0x0) {
    local_a8 = *puVar14;
  }
  local_c0 = 0;
  uStack_b8 = uVar16;
  uStack_a0 = uVar16;
  local_98 = local_b0;
  FUN_02566270(local_90,&local_a8,&local_c0,param_3,&local_78);
  puVar8 = PTR_DAT_04379d28;
  puVar7 = PTR_DAT_04379d20;
  if (local_90[0] == 0) {
    FUN_02566334(&local_138,*(undefined8 *)(param_2 + 8),param_3,&local_78);
    plVar15 = local_138;
    local_e0 = *(undefined8 *)(param_2 + 0x78);
    puVar14 = *(undefined8 **)(*(long *)(param_2 + 0x70) + uVar16 * 8);
    local_d8 = 0;
    if (puVar14 != (undefined8 *)0x0) {
      local_d8 = *puVar14;
    }
    local_f0 = 0;
    uStack_e8 = uVar16;
    uStack_d0 = uVar16;
    local_c8 = local_e0;
    FUN_025663b0(local_90,&local_d8,&local_f0,param_3);
    if (local_90[0] == 0) {
      (**(code **)(*plVar15 + 0x10))(&local_138,plVar15);
      local_160 = (long *)0x0;
      uStack_158 = 0;
      FUN_0093bcac(&local_160,&local_138);
      plVar2 = local_138;
      if (local_138 != (long *)0x0) {
        plVar1 = local_138 + 1;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 == 0) {
          local_138[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_150 = (long *)*plVar2;
          FUN_02a44274(lVar11 + 0xd8,&local_150);
        }
      }
      local_150 = local_78;
      local_148 = (long *)0x0;
      local_140 = 0;
      FUN_0093b3f4(&local_148,&local_160);
      FUN_02566b5c(&local_138,param_3,&local_150);
      FUN_02566760((long *)(param_2 + 0x70),&local_138);
      if (local_100 != (long *)0x0) {
        plVar2 = local_100 + 1;
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
          local_100[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_70[0] = (long *)*local_100;
          FUN_02a44274(lVar11 + 0xd8,local_70);
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
          iVar9 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 == 0) {
          local_148[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_70[0] = (long *)*plVar2;
          FUN_02a44274(lVar11 + 0xd8,local_70);
        }
      }
      plVar2 = local_160;
      if (local_160 == (long *)0x0) goto LAB_02565aa0;
      plVar1 = local_160 + 1;
      do {
        iVar9 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != 0) goto LAB_02565aa0;
      local_160[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_70[0] = (long *)*plVar2;
      lVar11 = lVar11 + 0xd8;
      pplVar13 = local_70;
    }
    else {
      (**(code **)(*plVar15 + 0x10))(&local_138,plVar15);
      local_150 = (long *)0x0;
      local_148 = (long *)0x0;
      FUN_0093bcac(&local_150,&local_138);
      if (local_138 != (long *)0x0) {
        plVar2 = local_138 + 1;
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
          local_138[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_160 = (long *)*local_138;
          FUN_02a44274(lVar11 + 0xd8,&local_160);
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
          iVar9 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 == 0) {
          local_130[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_160 = (long *)*plVar2;
          FUN_02a44274(lVar11 + 0xd8,&local_160);
        }
      }
      plVar2 = local_150;
      if (local_150 == (long *)0x0) goto LAB_02565aa0;
      plVar1 = local_150 + 1;
      do {
        iVar9 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != 0) goto LAB_02565aa0;
      local_150[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_160 = (long *)*plVar2;
      lVar11 = lVar11 + 0xd8;
    }
  }
  else {
    lVar11 = *(long *)(local_90[0] + 0x48);
    if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
      piVar3 = (int *)(lVar11 + 0xc);
      iVar9 = *(int *)(lVar11 + 0xc);
      do {
        plVar15 = *(long **)(lVar11 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar12;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar8 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_02565b74;
          if (plVar15 == (long *)puVar8) break;
          plVar15 = (long *)*plVar15;
        }
        iVar10 = *piVar3;
        if (iVar10 == iVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = iVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            if (*(long *)(lVar11 + 0x18) != 0) {
              plVar15 = (long *)(*(long *)(lVar11 + 0x18) + -0x50);
              goto LAB_02565aa0;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar10;
      } while (iVar10 != 0);
    }
LAB_02565b74:
    FUN_02566334(&local_138,*(undefined8 *)(param_2 + 8),param_3,&local_78);
    plVar15 = local_138;
    (**(code **)(*local_138 + 0x10))(&local_138,local_138);
    local_150 = (long *)0x0;
    local_148 = (long *)0x0;
    FUN_0093bcac(&local_150,&local_138);
    plVar2 = local_138;
    if (local_138 != (long *)0x0) {
      plVar1 = local_138 + 1;
      do {
        iVar9 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        local_138[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_160 = (long *)*plVar2;
        FUN_02a44274(lVar11 + 0xd8,&local_160);
      }
    }
    FUN_0093b3f4(local_90[0] + 0x48,&local_150);
    plVar2 = local_150;
    if (local_150 == (long *)0x0) goto LAB_02565aa0;
    plVar1 = local_150 + 1;
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 != 0) goto LAB_02565aa0;
    local_150[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar11 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar11;
    local_138 = (long *)*plVar2;
    lVar11 = lVar11 + 0xd8;
    pplVar13 = &local_138;
  }
  FUN_02a44274(lVar11,pplVar13);
LAB_02565aa0:
  if (*(char *)(param_2 + 0x16b) != '\0') {
    param_5 = 0;
  }
  FUN_02a763dc(plVar15,param_5);
  *(undefined8 *)(param_2 + 0x150) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x144));
  FUN_02a8f764(*(undefined8 *)(param_2 + 0x158),plVar15,0);
  *param_1 = plVar15;
  if (plVar15 != (long *)0x0) {
    lVar11 = plVar15[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar12;
    }
    piVar3 = (int *)(lVar11 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = *piVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar11 = plVar15[0xb];
    piVar3 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  return;
}


