/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018dae04; name: FUN_018dae04
 */


void FUN_018dae04(long *param_1,ulong param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *local_80;
  undefined8 uStack_78;
  long *local_70;
  long local_68;
  
  *(undefined4 *)(param_1 + 0xe2) = 1;
  if ((param_2 & 1) != 0) {
    FUN_018db3cc(param_1);
    return;
  }
  *(undefined1 *)((long)param_1 + 0x75c) = 1;
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_00ac3fa4(&local_80,param_1 + 0x49);
  if (local_80 == (long *)0x0) {
    local_70 = (long *)0x0;
  }
  else {
    FUN_00bd915c(&local_70);
    plVar2 = local_80;
    if (local_80 != (long *)0x0) {
      plVar16 = local_80 + 1;
      do {
        iVar11 = (int)*plVar16 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *(int *)plVar16 = iVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 == 0) {
        local_80[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_68 = *plVar2;
        FUN_02a44274(lVar14 + 0xd8,&local_68);
      }
    }
  }
  if (local_70 != (long *)0x0) {
    FUN_01a82160(&local_80);
    plVar2 = local_80;
    puVar10 = PTR_DAT_0437a3d0;
    puVar9 = PTR_DAT_0437a3c8;
    puVar8 = PTR_DAT_043795e0;
    puVar7 = PTR_DAT_043794d0;
    if (local_80 != (long *)0x0) {
      if (*(int *)((long)local_80 + 0xc) != 0) {
        piVar1 = (int *)((long)local_80 + 0xc);
        iVar11 = *(int *)((long)local_80 + 0xc);
        do {
          plVar16 = (long *)plVar2[2];
          if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar12 != 0)) {
              if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
                uVar13 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar13;
                __cxa_guard_release(puVar7);
              }
              *(undefined **)puVar8 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)puVar10 = puVar8;
            __cxa_guard_release(puVar9);
          }
          while( true ) {
            if (plVar16 == (long *)0x0) goto LAB_018db328;
            if (plVar16 == (long *)puVar10) break;
            plVar16 = (long *)*plVar16;
          }
          iVar12 = *piVar1;
          if (iVar12 == iVar11) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar14 = plVar2[3];
              plVar2 = (long *)0x0;
              plVar16 = local_80;
              if (lVar14 != 0) {
                plVar2 = (long *)(lVar14 + -0x50);
              }
              goto joined_r0x018db248;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar12;
        } while (iVar12 != 0);
      }
LAB_018db328:
      plVar2 = (long *)0x0;
      plVar16 = local_80;
joined_r0x018db248:
      local_80 = plVar16;
      if (plVar16 != (long *)0x0) {
        plVar3 = plVar16 + 1;
        do {
          iVar11 = (int)*plVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *(int *)plVar3 = iVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 == 0) {
          plVar16[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_68 = *plVar16;
          FUN_02a44274(lVar14 + 0xd8,&local_68);
        }
      }
      if (plVar2 != (long *)0x0) {
        FUN_01a56fa4(plVar2,0);
        FUN_01a5728c(plVar2,0);
        lVar14 = plVar2[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar2 + 0x20))(plVar2);
        }
      }
    }
    if (local_70 != (long *)0x0) {
      lVar14 = local_70[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_70 + 0x20))();
      }
    }
  }
  plVar2 = param_1 + 0xef;
  lVar15 = *plVar2;
  lVar14 = nn::os::GetCurrentThread();
  if (lVar14 == lVar15) {
    bVar5 = false;
    plVar16 = (long *)0x0;
  }
  else {
    plVar16 = param_1 + 0xed;
    lVar14 = nn::os::GetCurrentThread();
    do {
      if (*plVar2 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)param_1 + 0x76c));
          while (*plVar2 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar14;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_018daf20;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar14;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_018daf20:
    bVar5 = true;
  }
  FUN_016c24d0(&local_80,param_1 + 0xe9);
  if ((local_80 != (long *)0x0) && (FUN_015916d0(local_80,0,0x10000,0), local_80 != (long *)0x0)) {
    lVar14 = local_80[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
      *(undefined1 *)(param_1 + 0xf0) = 0;
      goto joined_r0x018daf70;
    }
  }
  *(undefined1 *)(param_1 + 0xf0) = 0;
joined_r0x018daf70:
  if (bVar5) {
    plVar16[2] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar16 + 4));
  }
  (**(code **)(*param_1 + 0xf0))(param_1,0);
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_00ac3fa4(&local_80,param_1 + 0x49);
  FUN_0099c748(&local_70,&local_80);
  plVar2 = local_80;
  if (local_80 != (long *)0x0) {
    plVar16 = local_80 + 1;
    do {
      iVar11 = (int)*plVar16 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *(int *)plVar16 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_68 = *plVar2;
      FUN_02a44274(lVar14 + 0xd8,&local_68);
    }
  }
  if (local_70 != (long *)0x0) {
    FUN_01a8c91c();
    FUN_01a87278(local_70);
    (**(code **)(*local_70 + 0x200))(0);
    FUN_01a8b7b8(local_70);
    if (local_70 != (long *)0x0) {
      lVar14 = local_70[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_70 + 0x20))();
      }
    }
  }
  return;
}


