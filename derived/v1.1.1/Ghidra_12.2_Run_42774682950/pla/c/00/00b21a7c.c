/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b21a7c; name: FUN_00b21a7c
 */


void FUN_00b21a7c(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  long **pplVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
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
  
  pplVar14 = &local_160;
  local_78 = *(long **)(param_2 + 8);
  lVar12 = nn::os::GetCurrentThread();
  plVar17 = (long *)(param_2 + 0x150);
  do {
    if (*plVar17 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x144));
        while (*plVar17 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00b21af8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00b21af8:
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
  puVar15 = *(undefined8 **)(*(long *)(param_2 + 0x70) + uVar16 * 8);
  local_a8 = 0;
  if (puVar15 != (undefined8 *)0x0) {
    local_a8 = *puVar15;
  }
  local_c0 = 0;
  uStack_b8 = uVar16;
  uStack_a0 = uVar16;
  local_98 = local_b0;
  FUN_00b22550(local_90,&local_a8,&local_c0,param_3,&local_78);
  puVar9 = PTR_DAT_04379d28;
  puVar8 = PTR_DAT_04379d20;
  puVar7 = PTR_DAT_043794d0;
  if (local_90[0] == 0) {
    FUN_00b22610(&local_138,*(undefined8 *)(param_2 + 8),param_3,&local_78);
    plVar17 = local_138;
    local_e0 = *(undefined8 *)(param_2 + 0x78);
    puVar15 = *(undefined8 **)(*(long *)(param_2 + 0x70) + uVar16 * 8);
    local_d8 = 0;
    if (puVar15 != (undefined8 *)0x0) {
      local_d8 = *puVar15;
    }
    local_f0 = 0;
    uStack_e8 = uVar16;
    uStack_d0 = uVar16;
    local_c8 = local_e0;
    FUN_00b22690(local_90,&local_d8,&local_f0,param_3);
    if (local_90[0] == 0) {
      (**(code **)(*plVar17 + 0x10))(&local_138,plVar17);
      local_160 = (long *)0x0;
      uStack_158 = 0;
      FUN_0093bcac(&local_160,&local_138);
      plVar2 = local_138;
      if (local_138 != (long *)0x0) {
        plVar1 = local_138 + 1;
        do {
          iVar10 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 == 0) {
          local_138[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_150 = (long *)*plVar2;
          FUN_02a44274(lVar12 + 0xd8,&local_150);
        }
      }
      local_150 = local_78;
      local_148 = (long *)0x0;
      local_140 = 0;
      FUN_0093b3f4(&local_148,&local_160);
      FUN_00b22cd8(&local_138,param_3,&local_150);
      FUN_00b228dc((long *)(param_2 + 0x70),&local_138);
      if (local_100 != (long *)0x0) {
        plVar2 = local_100 + 1;
        do {
          iVar10 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 == 0) {
          local_100[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_70[0] = (long *)*local_100;
          FUN_02a44274(lVar12 + 0xd8,local_70);
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
          iVar10 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 == 0) {
          local_148[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_70[0] = (long *)*plVar2;
          FUN_02a44274(lVar12 + 0xd8,local_70);
        }
      }
      plVar2 = local_160;
      if (local_160 == (long *)0x0) goto LAB_00b21dac;
      plVar1 = local_160 + 1;
      do {
        iVar10 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != 0) goto LAB_00b21dac;
      local_160[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_70[0] = (long *)*plVar2;
      lVar12 = lVar12 + 0xd8;
      pplVar14 = local_70;
    }
    else {
      (**(code **)(*plVar17 + 0x10))(&local_138,plVar17);
      local_150 = (long *)0x0;
      local_148 = (long *)0x0;
      FUN_0093bcac(&local_150,&local_138);
      if (local_138 != (long *)0x0) {
        plVar2 = local_138 + 1;
        do {
          iVar10 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 == 0) {
          local_138[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_160 = (long *)*local_138;
          FUN_02a44274(lVar12 + 0xd8,&local_160);
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
          iVar10 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 == 0) {
          local_130[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_160 = (long *)*plVar2;
          FUN_02a44274(lVar12 + 0xd8,&local_160);
        }
      }
      plVar2 = local_150;
      if (local_150 == (long *)0x0) goto LAB_00b21dac;
      plVar1 = local_150 + 1;
      do {
        iVar10 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != 0) goto LAB_00b21dac;
      local_150[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_160 = (long *)*plVar2;
      lVar12 = lVar12 + 0xd8;
    }
  }
  else {
    lVar12 = *(long *)(local_90[0] + 0x48);
    if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
      piVar3 = (int *)(lVar12 + 0xc);
      iVar10 = *(int *)(lVar12 + 0xc);
      do {
        plVar17 = *(long **)(lVar12 + 0x10);
        if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar13;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar9 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar17 == (long *)0x0) goto LAB_00b21e5c;
          if (plVar17 == (long *)puVar9) break;
          plVar17 = (long *)*plVar17;
        }
        iVar11 = *piVar3;
        if (iVar11 == iVar10) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = iVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            if (*(long *)(lVar12 + 0x18) != 0) {
              plVar17 = (long *)(*(long *)(lVar12 + 0x18) + -0x50);
              goto LAB_00b21dac;
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
LAB_00b21e5c:
    FUN_00b22610(&local_138,*(undefined8 *)(param_2 + 8),param_3,&local_78);
    plVar17 = local_138;
    (**(code **)(*local_138 + 0x10))(&local_138,local_138);
    local_150 = (long *)0x0;
    local_148 = (long *)0x0;
    FUN_0093bcac(&local_150,&local_138);
    plVar2 = local_138;
    if (local_138 != (long *)0x0) {
      plVar1 = local_138 + 1;
      do {
        iVar10 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 == 0) {
        local_138[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_160 = (long *)*plVar2;
        FUN_02a44274(lVar12 + 0xd8,&local_160);
      }
    }
    FUN_0093b3f4(local_90[0] + 0x48,&local_150);
    plVar2 = local_150;
    if (local_150 == (long *)0x0) goto LAB_00b21dac;
    plVar1 = local_150 + 1;
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 != 0) goto LAB_00b21dac;
    local_150[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar12 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar12;
    local_138 = (long *)*plVar2;
    lVar12 = lVar12 + 0xd8;
    pplVar14 = &local_138;
  }
  FUN_02a44274(lVar12,pplVar14);
LAB_00b21dac:
  FUN_02a763dc(plVar17,0);
  *(undefined8 *)(param_2 + 0x150) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x144));
  FUN_02a8f764(*(undefined8 *)(param_2 + 0x158),plVar17,0);
  *param_1 = plVar17;
  if (plVar17 != (long *)0x0) {
    lVar12 = plVar17[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar13;
    }
    piVar3 = (int *)(lVar12 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = *piVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar12 = plVar17[0xb];
    piVar3 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  return;
}


