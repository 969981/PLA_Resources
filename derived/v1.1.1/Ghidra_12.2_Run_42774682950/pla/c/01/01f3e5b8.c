/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f3e5b8; name: FUN_01f3e5b8
 */


void FUN_01f3e5b8(long param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_043796e8;
  puVar7 = PTR_DAT_043796e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar12 = *(long *)(param_1 + 0x70);
  if ((lVar12 == 0) || (*(int *)(lVar12 + 0xc) == 0)) {
    return;
  }
  piVar1 = (int *)(lVar12 + 0xc);
  iVar10 = *(int *)(lVar12 + 0xc);
LAB_01f3e640:
  plVar15 = *(long **)(lVar12 + 0x10);
  if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
    if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
      uVar11 = FUN_0087f8f0();
      *(undefined8 *)puVar6 = uVar11;
      __cxa_guard_release(puVar5);
    }
    *(undefined **)puVar8 = puVar6;
    __cxa_guard_release(puVar7);
  }
  while( true ) {
    if (plVar15 == (long *)0x0) {
      return;
    }
    if (plVar15 == (long *)puVar8) break;
    plVar15 = (long *)*plVar15;
  }
  iVar9 = *piVar1;
  if (iVar9 == iVar10) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar10 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar12 = *(long *)(lVar12 + 0x18);
      if (lVar12 == 0) {
        return;
      }
      plVar15 = *(long **)(lVar12 + 0x48);
      if (plVar15 == (long *)0x0) goto LAB_01f3e754;
      lVar13 = plVar15[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      FUN_01aeb938(&local_78,plVar15);
      puVar7 = PTR_DAT_04379e70;
      lVar13 = CONCAT44(uStack_74,local_78);
      if (lVar13 != 0) {
        if (*(int *)(lVar13 + 0xc) == 0) {
LAB_01f3ea0c:
          plVar14 = (long *)0x0;
          puVar4 = (undefined8 *)CONCAT44(uStack_74,local_78);
        }
        else {
          piVar1 = (int *)(lVar13 + 0xc);
          iVar10 = *(int *)(lVar13 + 0xc);
          while ((plVar14 = *(long **)(lVar13 + 0x10), (*PTR_DAT_04379e68 & 1) != 0 ||
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379e68), iVar9 == 0))) {
            if (plVar14 == (long *)0x0) goto LAB_01f3e960;
LAB_01f3e924:
            while (plVar14 != (long *)puVar7) {
              plVar14 = (long *)*plVar14;
              if (plVar14 == (long *)0x0) {
                plVar14 = (long *)0x0;
                goto LAB_01f3e960;
              }
            }
            iVar9 = *piVar1;
            if (iVar9 == iVar10) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar10 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                plVar14 = (long *)0x0;
                if (*(long *)(lVar13 + 0x18) != 0) {
                  plVar14 = (long *)(*(long *)(lVar13 + 0x18) + -0x50);
                }
                goto LAB_01f3e960;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = iVar9;
            if (iVar9 == 0) goto LAB_01f3ea0c;
          }
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar9 != 0)) {
            if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
              uVar11 = FUN_0087f8f0();
              *(undefined8 *)puVar6 = uVar11;
              __cxa_guard_release(puVar5);
            }
            *(undefined **)PTR_DAT_043795e0 = puVar6;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar7 = PTR_DAT_043795e0;
          __cxa_guard_release(PTR_DAT_04379e68);
          if (plVar14 != (long *)0x0) goto LAB_01f3e924;
LAB_01f3e960:
          puVar4 = (undefined8 *)CONCAT44(uStack_74,local_78);
        }
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            puVar4[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_68 = *puVar4;
            FUN_02a44274(lVar13 + 0xd8,&local_68);
          }
        }
        if (plVar14 != (long *)0x0) {
          local_78 = 0;
          FUN_025eb1cc(plVar14,&local_78,param_2 & 1);
          lVar13 = plVar14[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
          }
        }
      }
      FUN_01aef8c8(&local_78,plVar15);
      if (CONCAT44(uStack_74,local_78) == 0) {
        local_80 = (long *)0x0;
      }
      else {
        FUN_0095dd00(&local_80);
        puVar4 = (undefined8 *)CONCAT44(uStack_74,local_78);
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            puVar4[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_68 = *puVar4;
            FUN_02a44274(lVar13 + 0xd8,&local_68);
          }
        }
      }
      if (local_80 != (long *)0x0) {
        local_78 = 0;
        FUN_025ff7c0(local_80,&local_78,param_2 & 1);
        if (local_80 != (long *)0x0) {
          lVar13 = local_80[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*local_80 + 0x20))();
          }
        }
      }
      FUN_01aef8a8(&local_78,plVar15);
      puVar7 = PTR_DAT_0437b0a0;
      lVar13 = CONCAT44(uStack_74,local_78);
      if (lVar13 != 0) {
        if (*(int *)(lVar13 + 0xc) == 0) {
LAB_01f3ec70:
          plVar14 = (long *)0x0;
          puVar4 = (undefined8 *)CONCAT44(uStack_74,local_78);
        }
        else {
          piVar1 = (int *)(lVar13 + 0xc);
          iVar10 = *(int *)(lVar13 + 0xc);
          while( true ) {
            plVar14 = *(long **)(lVar13 + 0x10);
            if (((*PTR_DAT_0437b098 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b098), iVar9 != 0)) {
              if (((*PTR_DAT_043795d8 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar9 != 0)) {
                if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
                  uVar11 = FUN_0087f8f0();
                  *(undefined8 *)puVar6 = uVar11;
                  __cxa_guard_release(puVar5);
                }
                *(undefined **)PTR_DAT_043795e0 = puVar6;
                __cxa_guard_release(PTR_DAT_043795d8);
              }
              *(undefined **)puVar7 = PTR_DAT_043795e0;
              __cxa_guard_release(PTR_DAT_0437b098);
              if (plVar14 != (long *)0x0) goto LAB_01f3eb08;
              goto LAB_01f3ec70;
            }
            while( true ) {
              if (plVar14 == (long *)0x0) goto LAB_01f3ec70;
LAB_01f3eb08:
              if (plVar14 == (long *)puVar7) break;
              plVar14 = (long *)*plVar14;
            }
            iVar9 = *piVar1;
            if (iVar9 == iVar10) break;
            ClearExclusiveLocal();
LAB_01f3eae8:
            iVar10 = iVar9;
            if (iVar9 == 0) goto LAB_01f3ec70;
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_01f3eae8;
          plVar14 = (long *)0x0;
          if (*(long *)(lVar13 + 0x18) != 0) {
            plVar14 = (long *)(*(long *)(lVar13 + 0x18) + -0x50);
          }
          puVar4 = (undefined8 *)CONCAT44(uStack_74,local_78);
        }
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            puVar4[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_68 = *puVar4;
            FUN_02a44274(lVar13 + 0xd8,&local_68);
          }
        }
        if (plVar14 != (long *)0x0) {
          FUN_025cc6c4(plVar14,param_2 & 1);
          lVar13 = plVar14[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
          }
        }
      }
      lVar13 = plVar15[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
LAB_01f3e754:
      lVar13 = *(long *)(lVar12 + 8);
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))();
        return;
      }
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar10 = iVar9;
  if (iVar9 == 0) {
    return;
  }
  goto LAB_01f3e640;
}


