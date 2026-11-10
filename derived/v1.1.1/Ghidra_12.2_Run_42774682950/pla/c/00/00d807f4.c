/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d807f4; name: FUN_00d807f4
 */


void FUN_00d807f4(long *param_1,long *param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78 [2];
  long local_68;
  
  puVar6 = PTR_DAT_0437a880;
  lVar10 = param_1[0x40];
  plVar1 = param_1 + 0x40;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
    piVar2 = (int *)(lVar10 + 0xc);
    iVar7 = *(int *)(lVar10 + 0xc);
    do {
      plVar12 = *(long **)(lVar10 + 0x10);
      if (((*PTR_DAT_0437a878 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a878), iVar8 != 0)) {
        if (((*PTR_DAT_043795d8 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar8 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
            uVar9 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar9;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043795d8);
        }
        *(undefined **)puVar6 = PTR_DAT_043795e0;
        __cxa_guard_release(PTR_DAT_0437a878);
      }
      while( true ) {
        if (plVar12 == (long *)0x0) goto LAB_00d80830;
        if (plVar12 == (long *)puVar6) break;
        plVar12 = (long *)*plVar12;
      }
      iVar8 = *piVar2;
      if (iVar8 == iVar7) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00d80d50;
        lVar10 = *(long *)(lVar10 + 0x18);
        if (lVar10 != 0) {
          plVar12 = (long *)(lVar10 + -0x50);
          FUN_00d7f54c(param_1);
          local_80 = param_1;
          if (param_1 == (long *)0x0) {
            FUN_00d7f7d8(plVar12,&local_80);
          }
          else {
            lVar11 = param_1[0xb];
            if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_00d80f1c;
            if (*(long *)(lVar11 + 0x10) == 0) {
              uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
              *(undefined8 *)(lVar11 + 0x10) = uVar9;
            }
            plVar3 = local_80;
            piVar2 = (int *)(lVar11 + 0xc);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = *piVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            FUN_00d7f7d8(plVar12,&local_80);
            if (plVar3 != (long *)0x0) {
              lVar11 = plVar3[0xb];
              piVar2 = (int *)(lVar11 + 0xc);
              do {
                iVar7 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = iVar7 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar7 + -1 == 0) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*plVar3 + 0x20))(plVar3);
              }
            }
          }
          puVar13 = (undefined8 *)*plVar1;
          *plVar1 = 0;
          if (puVar13 != (undefined8 *)0x0) {
            piVar2 = (int *)(puVar13 + 1);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar7 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 + -1 == 0) {
              puVar13[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar11 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar11;
              local_78[0] = (long *)*puVar13;
              FUN_02a44274(lVar11 + 0xd8,local_78);
            }
          }
          param_1[0x41] = 0;
          puVar13 = (undefined8 *)param_1[0x3e];
          param_1[0x3e] = 0;
          if (puVar13 != (undefined8 *)0x0) {
            piVar2 = (int *)(puVar13 + 1);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar7 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 + -1 == 0) {
              puVar13[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar11 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar11;
              local_78[0] = (long *)*puVar13;
              FUN_02a44274(lVar11 + 0xd8,local_78);
            }
          }
          param_1[0x3f] = 0;
          lVar10 = *(long *)(lVar10 + 8);
          piVar2 = (int *)(lVar10 + 0xc);
          do {
            iVar7 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 + -1 != 0) break;
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar12 + 0x20))(plVar12);
          lVar10 = *param_2;
          if (lVar10 == 0) {
            return;
          }
          goto LAB_00d80838;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_00d80d50:
      iVar7 = iVar8;
    } while (iVar8 != 0);
  }
LAB_00d80830:
  lVar10 = *param_2;
  if (lVar10 != 0) {
LAB_00d80838:
    if (*(char *)(lVar10 + 0x1ec) != '\0') {
      return;
    }
    FUN_009c69bc(local_78);
    if (local_78[0] == (long *)0x0) {
      return;
    }
    lVar10 = local_78[0][0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_78[0] + 0x20))();
    }
    plVar12 = (long *)*param_2;
    local_88 = plVar12;
    if (plVar12 == (long *)0x0) {
      FUN_00d8105c(param_1,&local_88,param_3,param_4 & 1);
    }
    else {
      lVar10 = plVar12[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00d80f1c;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar9;
      }
      piVar2 = (int *)(lVar10 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_00d8105c(param_1,&local_88,param_3,param_4 & 1);
      lVar10 = plVar12[0xb];
      piVar2 = (int *)(lVar10 + 0xc);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
    }
    lVar10 = *param_2;
    local_90 = param_1;
    if (param_1 == (long *)0x0) {
      FUN_00d7ffc8(lVar10,&local_90);
    }
    else {
      lVar11 = param_1[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_00d80f1c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar9;
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
      FUN_00d7ffc8(lVar10,&local_90);
      lVar10 = param_1[0xb];
      piVar2 = (int *)(lVar10 + 0xc);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*param_1 + 0x20))(param_1);
      }
    }
    FUN_009c69bc(&local_a8,*param_2);
    (**(code **)(*local_a8 + 0x18))(local_78);
    local_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    FUN_0087f944(&local_a0,local_78);
    plVar12 = local_78[0];
    if (local_78[0] != (long *)0x0) {
      plVar3 = local_78[0] + 1;
      do {
        iVar7 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        local_78[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_68 = *plVar12;
        FUN_02a44274(lVar10 + 0xd8,&local_68);
      }
    }
    FUN_0087fcf0(param_1 + 0x3e,&local_a0);
    puVar13 = local_a0;
    if (local_a0 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_a0 + 1);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        local_a0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_78[0] = (long *)*puVar13;
        FUN_02a44274(lVar10 + 0xd8,local_78);
      }
    }
    if (local_a8 != (long *)0x0) {
      lVar10 = local_a8[0xb];
      piVar2 = (int *)(lVar10 + 0xc);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_a8 + 0x20))();
      }
    }
    (**(code **)(*(long *)*param_2 + 0x10))(local_78);
    local_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    FUN_00bd84b0(&local_a0,local_78);
    plVar12 = local_78[0];
    if (local_78[0] != (long *)0x0) {
      plVar3 = local_78[0] + 1;
      do {
        iVar7 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        local_78[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_68 = *plVar12;
        FUN_02a44274(lVar10 + 0xd8,&local_68);
      }
    }
    FUN_00bd8d00(plVar1,&local_a0);
    puVar13 = local_a0;
    if (local_a0 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_a0 + 1);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        local_a0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_78[0] = (long *)*puVar13;
        FUN_02a44274(lVar10 + 0xd8,local_78);
      }
    }
  }
  return;
}


