/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fa51bc; name: FUN_01fa51bc
 */


void FUN_01fa51bc(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long local_80;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379678), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar13 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar13;
  plVar14 = *(long **)(lVar13 + 0xc0);
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_01fa5634:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
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
  local_68 = plVar14[0x18];
  local_80 = local_68 + plVar14[0x19] * 8;
  FUN_01faf9a0(&local_78,&local_68,&local_80);
  if (local_78 != (long *)(plVar14[0x18] + plVar14[0x19] * 8)) {
    plVar16 = (long *)*local_78;
    puVar12 = (undefined8 *)(**(code **)plVar16[10])(plVar16 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar10 != 0)) {
      uVar11 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar11;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar12 != (undefined8 *)0x0) {
LAB_01fa52b0:
      if (puVar12 != (undefined8 *)PTR_DAT_0437c680) goto LAB_01fa53ac;
      lVar13 = plVar16[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01fa5634;
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
        plVar15 = plVar16;
      } while (cVar4 != '\0');
LAB_01fa52f4:
      if (plVar15 == (long *)0x0) goto LAB_01fa5430;
      if (plVar15[0x1a] == 0) {
        local_78 = (long *)0x0;
        uStack_70 = 0;
LAB_01fa5318:
        *param_1 = 0;
        param_1[1] = 0;
      }
      else {
        local_78 = (long *)0x0;
        uStack_70 = 0;
        FUN_019d08dc(&local_78,plVar15[0x1a] + 0x1c0);
        plVar16 = local_78;
        puVar8 = PTR_DAT_0437c670;
        puVar7 = PTR_DAT_0437c668;
        puVar6 = PTR_DAT_043794d0;
        if (local_78 == (long *)0x0) goto LAB_01fa5318;
        if (*(int *)((long)local_78 + 0xc) == 0) {
LAB_01fa569c:
          plVar16 = (long *)0x0;
          plVar17 = local_78;
        }
        else {
          piVar1 = (int *)((long)local_78 + 0xc);
          iVar10 = *(int *)((long)local_78 + 0xc);
          while( true ) {
            plVar17 = (long *)plVar16[2];
            if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
              if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
                uVar11 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar11;
                __cxa_guard_release(puVar6);
              }
              *(undefined **)puVar8 = PTR_DAT_043794d8;
              __cxa_guard_release(puVar7);
            }
            while( true ) {
              if (plVar17 == (long *)0x0) goto LAB_01fa569c;
              if (plVar17 == (long *)puVar8) break;
              plVar17 = (long *)*plVar17;
            }
            iVar9 = *piVar1;
            if (iVar9 == iVar10) break;
            ClearExclusiveLocal();
LAB_01fa5474:
            iVar10 = iVar9;
            if (iVar9 == 0) goto LAB_01fa569c;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01fa5474;
          lVar13 = plVar16[3];
          plVar16 = (long *)0x0;
          plVar17 = local_78;
          if (lVar13 != 0) {
            plVar16 = (long *)(lVar13 + -0x50);
          }
        }
        local_78 = plVar17;
        if (plVar17 != (long *)0x0) {
          plVar2 = plVar17 + 1;
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
            plVar17[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_68 = *plVar17;
            FUN_02a44274(lVar13 + 0xd8,&local_68);
          }
        }
        if (plVar16 == (long *)0x0) goto LAB_01fa5318;
        plVar17 = (long *)plVar16[0xe];
        if (plVar17 != (long *)0x0) {
          lVar13 = plVar17[0xb];
          if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01fa5634;
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
        (**(code **)(*plVar17 + 0x10))(&local_78,plVar17);
        *param_1 = 0;
        param_1[1] = 0;
        FUN_0109c02c(param_1,&local_78);
        plVar2 = local_78;
        if (local_78 != (long *)0x0) {
          plVar3 = local_78 + 1;
          do {
            iVar10 = (int)*plVar3 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar5) {
              *(int *)plVar3 = iVar10;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 == 0) {
            local_78[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_68 = *plVar2;
            FUN_02a44274(lVar13 + 0xd8,&local_68);
          }
        }
        lVar13 = plVar17[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))(plVar17);
        }
        lVar13 = plVar16[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar16 + 0x20))(plVar16);
        }
      }
      lVar13 = plVar15[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      if (plVar14 == (long *)0x0) {
        return;
      }
      goto LAB_01fa533c;
    }
  }
LAB_01fa5430:
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar14 != (long *)0x0) {
LAB_01fa533c:
    lVar13 = plVar14[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  return;
LAB_01fa53ac:
  puVar12 = (undefined8 *)*puVar12;
  plVar15 = (long *)0x0;
  if (puVar12 == (undefined8 *)0x0) goto LAB_01fa52f4;
  goto LAB_01fa52b0;
}


