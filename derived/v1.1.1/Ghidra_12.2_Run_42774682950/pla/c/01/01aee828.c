/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01aee828; name: FUN_01aee828
 */


void FUN_01aee828(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *local_a8;
  undefined8 uStack_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  
  FUN_01b00924(param_1 + 0xd1);
  if (*param_2 == 0) {
    local_90 = (long *)0x0;
  }
  else {
    FUN_0095dafc(&local_78);
    local_90 = local_78;
  }
  local_78 = (long *)0x0;
  (**(code **)(*param_1 + 0xf8))(param_1,&local_90);
  if (local_90 != (long *)0x0) {
    lVar15 = local_90[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  if (local_78 != (long *)0x0) {
    lVar15 = local_78[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  local_78 = (long *)0x0;
  uStack_70 = 0;
  FUN_01b00924(&local_78,param_1 + 0xd1);
  if (local_78 == (long *)0x0) {
    local_98 = (long *)0x0;
  }
  else {
    FUN_0095dafc(&local_98);
    plVar6 = local_78;
    if (local_78 != (long *)0x0) {
      plVar16 = local_78 + 1;
      do {
        iVar13 = (int)*plVar16 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *(int *)plVar16 = iVar13;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar13 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_88 = (long *)*plVar6;
        FUN_02a44274(lVar15 + 0xd8,&local_88);
      }
    }
  }
  if (local_98 != (long *)0x0) {
    local_78 = (long *)0x0;
    uStack_70 = 0;
    FUN_01a2bf84(&local_78,local_98 + 0xb9);
    plVar6 = local_78;
    puVar11 = PTR_DAT_0437a3d0;
    puVar10 = PTR_DAT_0437a3c8;
    puVar9 = PTR_DAT_043795e0;
    puVar8 = PTR_DAT_043794d8;
    puVar7 = PTR_DAT_043794d0;
    if (local_78 != (long *)0x0) {
      if (*(int *)((long)local_78 + 0xc) != 0) {
        piVar1 = (int *)((long)local_78 + 0xc);
        iVar13 = *(int *)((long)local_78 + 0xc);
        do {
          plVar16 = (long *)plVar6[2];
          if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar10), iVar12 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar12 != 0)) {
              if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
                uVar14 = FUN_0087f8f0();
                *(undefined8 *)puVar8 = uVar14;
                __cxa_guard_release(puVar7);
              }
              *(undefined **)puVar9 = puVar8;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)puVar11 = puVar9;
            __cxa_guard_release(puVar10);
          }
          while( true ) {
            if (plVar16 == (long *)0x0) goto LAB_01aeecb0;
            if (plVar16 == (long *)puVar11) break;
            plVar16 = (long *)*plVar16;
          }
          iVar12 = *piVar1;
          if (iVar12 == iVar13) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar15 = plVar6[3];
              plVar6 = (long *)0x0;
              plVar16 = local_78;
              if (lVar15 != 0) {
                plVar6 = (long *)(lVar15 + -0x50);
              }
              goto joined_r0x01aeeaec;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar13 = iVar12;
        } while (iVar12 != 0);
      }
LAB_01aeecb0:
      plVar6 = (long *)0x0;
      plVar16 = local_78;
joined_r0x01aeeaec:
      local_78 = plVar16;
      if (plVar16 != (long *)0x0) {
        plVar2 = plVar16 + 1;
        do {
          iVar13 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 == 0) {
          plVar16[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_88 = (long *)*plVar16;
          FUN_02a44274(lVar15 + 0xd8,&local_88);
        }
      }
      if (plVar6 != (long *)0x0) {
        (**(code **)(*(long *)plVar6[0x127] + 0x18))(&local_78);
        local_88 = (long *)0x0;
        uStack_80 = 0;
        FUN_01a9cf4c(&local_88,&local_78);
        plVar16 = local_78;
        if (local_78 != (long *)0x0) {
          plVar2 = local_78 + 1;
          do {
            iVar13 = (int)*plVar2 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar13 == 0) {
            local_78[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar15 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar15;
            local_68 = *plVar16;
            FUN_02a44274(lVar15 + 0xd8,&local_68);
          }
        }
        local_a8 = (long *)0x0;
        uStack_a0 = 0;
        FUN_01a9d24c(&local_a8,&local_88);
        plVar16 = local_88;
        if (local_88 != (long *)0x0) {
          plVar2 = local_88 + 1;
          do {
            iVar13 = (int)*plVar2 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar13 == 0) {
            local_88[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar15 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar15;
            local_78 = (long *)*plVar16;
            FUN_02a44274(lVar15 + 0xd8,&local_78);
          }
        }
        if (local_a8 != (long *)0x0) {
          FUN_01aa4648(&local_78);
          plVar2 = local_78;
          plVar16 = local_a8;
          if (local_a8 != (long *)0x0) {
            plVar3 = local_a8 + 1;
            do {
              iVar13 = (int)*plVar3 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar5) {
                *(int *)plVar3 = iVar13;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar13 == 0) {
              local_a8[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar15 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar15;
              local_78 = (long *)*plVar16;
              FUN_02a44274(lVar15 + 0xd8,&local_78);
            }
          }
          if (plVar2 != (long *)0x0) {
            lVar15 = 0;
            if (param_1[0x11f] != 0) {
              lVar15 = param_1[0x11f] + 0x68;
            }
            FUN_01a7d65c(plVar2,lVar15);
            lVar15 = plVar2[0xb];
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar13 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar15 + 0x18) = 0;
              (**(code **)(*plVar2 + 0x20))(plVar2);
            }
          }
        }
        lVar15 = plVar6[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*plVar6 + 0x20))(plVar6);
        }
      }
    }
    if (local_98 != (long *)0x0) {
      lVar15 = local_98[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_98 + 0x20))();
      }
    }
  }
  return;
}


