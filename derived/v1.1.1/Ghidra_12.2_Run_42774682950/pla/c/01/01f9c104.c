/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f9c104; name: FUN_01f9c104
 */


void FUN_01f9c104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *local_a8 [2];
  long *local_98;
  long *local_90;
  undefined8 uStack_88;
  long *local_80;
  long *local_78 [2];
  long local_68;
  
  lVar12 = FUN_01f9c63c();
  if ((lVar12 != 0) &&
     (FUN_01f9c89c(local_78), plVar5 = local_78[0], puVar9 = PTR_DAT_04380750,
     puVar8 = PTR_DAT_04380748, puVar7 = PTR_DAT_043794d8, puVar6 = PTR_DAT_043794d0,
     local_78[0] != (long *)0x0)) {
    if (*(int *)((long)local_78[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_78[0] + 0xc);
      iVar11 = *(int *)((long)local_78[0] + 0xc);
      do {
        plVar16 = (long *)plVar5[2];
        if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)puVar7 = uVar13;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar16 == (long *)0x0) goto LAB_01f9c51c;
          if (plVar16 == (long *)puVar9) break;
          plVar16 = (long *)*plVar16;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar14 = plVar5[3];
            plVar5 = (long *)0x0;
            plVar16 = local_78[0];
            if (lVar14 != 0) {
              plVar5 = (long *)(lVar14 + -0x50);
            }
            goto joined_r0x01f9c1e8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar10;
      } while (iVar10 != 0);
    }
LAB_01f9c51c:
    plVar5 = (long *)0x0;
    plVar16 = local_78[0];
joined_r0x01f9c1e8:
    local_78[0] = plVar16;
    if (plVar16 != (long *)0x0) {
      plVar2 = plVar16 + 1;
      do {
        iVar11 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        plVar16[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_a8[0] = (long *)*plVar16;
        FUN_02a44274(lVar14 + 0xd8,local_a8);
      }
    }
    if (plVar5 != (long *)0x0) {
      FUN_019c7bd4(&local_80,plVar5,8,0x4bd617d6d18ed661);
      if (local_80 != (long *)0x0) {
        FUN_00956dac(local_78,local_80 + 0x35);
        lVar14 = FUN_00b13c20(local_78[0] + 0x1e,local_a8);
        if (local_78[0] != (long *)0x0) {
          lVar15 = local_78[0][0xb];
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*local_78[0] + 0x20))();
          }
        }
        if (lVar14 != 0) {
          FUN_01a73650(local_a8,lVar12);
          FUN_00956dac(&local_98,local_a8);
          (**(code **)(*local_98 + 0x18))(local_78);
          local_90 = (long *)0x0;
          uStack_88 = 0;
          FUN_0087f944(&local_90,local_78);
          plVar16 = local_78[0];
          if (local_78[0] != (long *)0x0) {
            plVar2 = local_78[0] + 1;
            do {
              iVar11 = (int)*plVar2 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *(int *)plVar2 = iVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar11 == 0) {
              local_78[0][2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar12;
              local_68 = *plVar16;
              FUN_02a44274(lVar12 + 0xd8,&local_68);
            }
          }
          FUN_00d81464(lVar14,&local_90,param_3,1);
          plVar16 = local_90;
          if (local_90 != (long *)0x0) {
            plVar2 = local_90 + 1;
            do {
              iVar11 = (int)*plVar2 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *(int *)plVar2 = iVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar11 == 0) {
              local_90[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar12;
              local_78[0] = (long *)*plVar16;
              FUN_02a44274(lVar12 + 0xd8,local_78);
            }
          }
          plVar16 = local_a8[0];
          if (local_98 != (long *)0x0) {
            lVar12 = local_98[0xb];
            piVar1 = (int *)(lVar12 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*local_98 + 0x20))();
              plVar16 = local_a8[0];
            }
          }
          local_a8[0] = plVar16;
          if (plVar16 != (long *)0x0) {
            plVar2 = plVar16 + 1;
            do {
              iVar11 = (int)*plVar2 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *(int *)plVar2 = iVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar11 == 0) {
              plVar16[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar12;
              local_78[0] = (long *)*plVar16;
              FUN_02a44274(lVar12 + 0xd8,local_78);
            }
          }
        }
        if (local_80 != (long *)0x0) {
          lVar12 = local_80[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*local_80 + 0x20))();
          }
        }
      }
      lVar12 = plVar5[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
    }
  }
  return;
}


