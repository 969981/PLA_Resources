/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d7e99c; name: FUN_00d7e99c
 */


void FUN_00d7e99c(long *param_1,long *param_2,uint param_3)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long *local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78 [2];
  long local_68;
  
  puVar7 = PTR_DAT_0437a880;
  puVar6 = PTR_DAT_0437a878;
  lVar11 = param_1[0x40];
  plVar1 = param_1 + 0x40;
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar2 = (int *)(lVar11 + 0xc);
    iVar8 = *(int *)(lVar11 + 0xc);
    do {
      plVar13 = *(long **)(lVar11 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
        if (((*PTR_DAT_043795d8 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar9 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
            uVar10 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar10;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043795d8);
        }
        *(undefined **)puVar7 = PTR_DAT_043795e0;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_00d7e9d4;
        if (plVar13 == (long *)puVar7) break;
        plVar13 = (long *)*plVar13;
      }
      iVar9 = *piVar2;
      if (iVar9 == iVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00d7ea60;
        lVar11 = *(long *)(lVar11 + 0x18);
        if (lVar11 != 0) {
          plVar13 = (long *)(lVar11 + -0x50);
          FUN_00d7f54c(param_1);
          local_80 = param_1;
          if (param_1 == (long *)0x0) {
            FUN_00d7f7d8(plVar13,&local_80);
          }
          else {
            lVar14 = param_1[0xb];
            if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_00d7f0b8;
            if (*(long *)(lVar14 + 0x10) == 0) {
              uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
              *(undefined8 *)(lVar14 + 0x10) = uVar10;
            }
            plVar3 = local_80;
            piVar2 = (int *)(lVar14 + 0xc);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = *piVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            FUN_00d7f7d8(plVar13,&local_80);
            if (plVar3 != (long *)0x0) {
              lVar14 = plVar3[0xb];
              piVar2 = (int *)(lVar14 + 0xc);
              do {
                iVar8 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = iVar8 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar8 + -1 == 0) {
                *(undefined8 *)(lVar14 + 0x18) = 0;
                (**(code **)(*plVar3 + 0x20))(plVar3);
              }
            }
          }
          puVar12 = (undefined8 *)*plVar1;
          *plVar1 = 0;
          if (puVar12 != (undefined8 *)0x0) {
            piVar2 = (int *)(puVar12 + 1);
            do {
              iVar8 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar8 + -1 == 0) {
              puVar12[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar14 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar14;
              local_78[0] = (long *)*puVar12;
              FUN_02a44274(lVar14 + 0xd8,local_78);
            }
          }
          param_1[0x41] = 0;
          puVar12 = (undefined8 *)param_1[0x3e];
          param_1[0x3e] = 0;
          if (puVar12 != (undefined8 *)0x0) {
            piVar2 = (int *)(puVar12 + 1);
            do {
              iVar8 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar8 + -1 == 0) {
              puVar12[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar14 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar14;
              local_78[0] = (long *)*puVar12;
              FUN_02a44274(lVar14 + 0xd8,local_78);
            }
          }
          param_1[0x3f] = 0;
          lVar11 = *(long *)(lVar11 + 8);
          piVar2 = (int *)(lVar11 + 0xc);
          do {
            iVar8 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 + -1 != 0) break;
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar13 + 0x20))(plVar13);
          lVar11 = *param_2;
          if (lVar11 == 0) {
            return;
          }
          goto LAB_00d7eba8;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_00d7ea60:
      iVar8 = iVar9;
    } while (iVar9 != 0);
  }
LAB_00d7e9d4:
  lVar11 = *param_2;
  if (lVar11 != 0) {
LAB_00d7eba8:
    if (*(char *)(lVar11 + 0x1ec) != '\0') {
      return;
    }
    FUN_009c69bc(local_78);
    if (local_78[0] == (long *)0x0) {
      return;
    }
    lVar11 = local_78[0][0xb];
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_78[0] + 0x20))();
    }
    plVar13 = (long *)*param_2;
    local_88 = plVar13;
    if (plVar13 == (long *)0x0) {
      FUN_00d7fc6c(param_1,&local_88,param_3 & 1);
    }
    else {
      lVar11 = plVar13[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_00d7f0b8;
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar10;
      }
      piVar2 = (int *)(lVar11 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_00d7fc6c(param_1,&local_88,param_3 & 1);
      lVar11 = plVar13[0xb];
      piVar2 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
    lVar11 = *param_2;
    local_90 = param_1;
    if (param_1 == (long *)0x0) {
      FUN_00d7ffc8(lVar11,&local_90);
    }
    else {
      lVar14 = param_1[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_00d7f0b8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar10;
      }
      piVar2 = (int *)(lVar14 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_00d7ffc8(lVar11,&local_90);
      lVar11 = param_1[0xb];
      piVar2 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*param_1 + 0x20))(param_1);
      }
    }
    FUN_009c69bc(&local_a8,*param_2);
    (**(code **)(*local_a8 + 0x18))(local_78);
    local_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    FUN_0087f944(&local_a0,local_78);
    plVar13 = local_78[0];
    if (local_78[0] != (long *)0x0) {
      plVar3 = local_78[0] + 1;
      do {
        iVar8 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        local_78[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_68 = *plVar13;
        FUN_02a44274(lVar11 + 0xd8,&local_68);
      }
    }
    FUN_0087fcf0(param_1 + 0x3e,&local_a0);
    puVar12 = local_a0;
    if (local_a0 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_a0 + 1);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        local_a0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_78[0] = (long *)*puVar12;
        FUN_02a44274(lVar11 + 0xd8,local_78);
      }
    }
    if (local_a8 != (long *)0x0) {
      lVar11 = local_a8[0xb];
      piVar2 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_a8 + 0x20))();
      }
    }
    (**(code **)(*(long *)*param_2 + 0x10))(local_78);
    local_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    FUN_00bd84b0(&local_a0,local_78);
    plVar13 = local_78[0];
    if (local_78[0] != (long *)0x0) {
      plVar3 = local_78[0] + 1;
      do {
        iVar8 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        local_78[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_68 = *plVar13;
        FUN_02a44274(lVar11 + 0xd8,&local_68);
      }
    }
    FUN_00bd8d00(plVar1,&local_a0);
    puVar12 = local_a0;
    if (local_a0 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_a0 + 1);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        local_a0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_78[0] = (long *)*puVar12;
        FUN_02a44274(lVar11 + 0xd8,local_78);
      }
    }
  }
  return;
}


