/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0269fa70; name: FUN_0269fa70
 */


void FUN_0269fa70(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined1 auStack_90 [8];
  undefined8 *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  local_88 = (undefined8 *)0x0;
  pcStack_80 = (char *)0x0;
  FUN_00af7e30(&local_88,param_1 + 0x8a8);
  puVar4 = local_88;
  puVar6 = PTR_DAT_0437a558;
  puVar5 = PTR_DAT_0437a550;
  if (local_88 != (undefined8 *)0x0) {
    if (*(int *)((long)local_88 + 0xc) != 0) {
      piVar1 = (int *)((long)local_88 + 0xc);
      iVar11 = *(int *)((long)local_88 + 0xc);
      do {
        plVar15 = (long *)puVar4[2];
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
          uVar12 = FUN_00aa0310();
          *(undefined8 *)puVar6 = uVar12;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_0269fbe8;
          if (plVar15 == (long *)puVar6) break;
          plVar15 = (long *)*plVar15;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar11) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar13 = puVar4[3];
            plVar15 = (long *)0x0;
            puVar4 = local_88;
            if (lVar13 != 0) {
              plVar15 = (long *)(lVar13 + -0x50);
            }
            goto joined_r0x0269fb38;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar10;
      } while (iVar10 != 0);
    }
LAB_0269fbe8:
    plVar15 = (long *)0x0;
    puVar4 = local_88;
joined_r0x0269fb38:
    local_88 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_68 = (long *)*puVar4;
        FUN_02a44274(lVar13 + 0xd8,&local_68);
      }
    }
    if (plVar15 != (long *)0x0) {
      FUN_00a9ecd4(&local_88,plVar15);
      puVar4 = local_88;
      puVar9 = PTR_DAT_0437a130;
      puVar8 = PTR_DAT_0437a128;
      puVar7 = PTR_DAT_043795e0;
      puVar6 = PTR_DAT_043794d8;
      puVar5 = PTR_DAT_043794d0;
      if (local_88 != (undefined8 *)0x0) {
        if (*(int *)((long)local_88 + 0xc) != 0) {
          piVar1 = (int *)((long)local_88 + 0xc);
          iVar11 = *(int *)((long)local_88 + 0xc);
          do {
            plVar14 = (long *)puVar4[2];
            if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
              if (((*PTR_DAT_043795d8 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar10 != 0)) {
                if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
                  uVar12 = FUN_0087f8f0();
                  *(undefined8 *)puVar6 = uVar12;
                  __cxa_guard_release(puVar5);
                }
                *(undefined **)puVar7 = puVar6;
                __cxa_guard_release(PTR_DAT_043795d8);
              }
              *(undefined **)puVar9 = puVar7;
              __cxa_guard_release(puVar8);
            }
            while( true ) {
              if (plVar14 == (long *)0x0) goto LAB_0269ff04;
              if (plVar14 == (long *)puVar9) break;
              plVar14 = (long *)*plVar14;
            }
            iVar10 = *piVar1;
            if (iVar10 == iVar11) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                lVar13 = puVar4[3];
                plVar14 = (long *)0x0;
                puVar4 = local_88;
                if (lVar13 != 0) {
                  plVar14 = (long *)(lVar13 + -0x50);
                }
                goto joined_r0x0269fcf0;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar11 = iVar10;
          } while (iVar10 != 0);
        }
LAB_0269ff04:
        plVar14 = (long *)0x0;
        puVar4 = local_88;
joined_r0x0269fcf0:
        local_88 = puVar4;
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 + -1 == 0) {
            puVar4[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_68 = (long *)*puVar4;
            FUN_02a44274(lVar13 + 0xd8,&local_68);
          }
        }
        if (plVar14 != (long *)0x0) {
          local_88 = (undefined8 *)&DAT_afc4d6c05abef19e;
          pcStack_80 = "default";
          local_78 = 7;
          local_70 = (long *)0x0;
          lVar13 = FUN_0289e9f4(plVar14,&local_88);
          if (lVar13 == 0) {
            local_68 = (long *)0x0;
          }
          else {
            FUN_00aeb818(&local_68,lVar13,auStack_90);
          }
          if (local_70 != (long *)0x0) {
            (**(code **)(*local_70 + 0x20))();
          }
          local_88 = (undefined8 *)0x297fb9177976a94d;
          pcStack_80 = "Particle/TrajectoryParticleDisable";
          local_78 = 0x22;
          local_70 = (long *)0x0;
          FUN_028ba0ec(local_68,&local_88);
          if (local_70 != (long *)0x0) {
            (**(code **)(*local_70 + 0x20))();
          }
          local_88 = (undefined8 *)0x7fe8e46554a6a710;
          pcStack_80 = "Field/Ride/WhooguruTurnDisable";
          local_78 = 0x1e;
          local_70 = (long *)0x0;
          FUN_028ba0ec(local_68,&local_88);
          if (local_70 != (long *)0x0) {
            (**(code **)(*local_70 + 0x20))();
          }
          if (local_68 != (long *)0x0) {
            lVar13 = local_68[0xb];
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*local_68 + 0x20))();
            }
          }
          lVar13 = plVar14[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
          }
        }
      }
      lVar13 = plVar15[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
    }
  }
  return;
}


