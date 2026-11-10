/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018f62b4; name: FUN_018f62b4
 */


void FUN_018f62b4(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *local_70;
  long *local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  FUN_00956dac(&local_68,param_2);
  if (local_68 == (long *)0x0) {
LAB_018f6844:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  plVar8 = (long *)FUN_009bce88(local_68 + 0x1e,&local_50);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x10))(&local_50);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_00d07698(&local_60,&local_50);
    puVar6 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_50 + 1);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        local_50[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_38 = *puVar6;
        FUN_02a44274(lVar10 + 0xd8,&local_38);
      }
    }
    FUN_00d07998(param_1 + 0x150,&local_60);
    puVar6 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_50 = (undefined8 *)*puVar6;
        FUN_02a44274(lVar10 + 0xd8,&local_50);
      }
    }
  }
  lVar10 = FUN_009aff90(local_68 + 0x1e,&local_50);
  if (lVar10 != 0) {
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_008802f0(&local_50,lVar10 + 0x58);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_00880560(&local_60,&local_50);
    puVar6 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_50 + 1);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        local_50[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_38 = *puVar6;
        FUN_02a44274(lVar10 + 0xd8,&local_38);
      }
    }
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_00b5f91c(&local_50,&local_60);
    puVar6 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_38 = *puVar6;
        FUN_02a44274(lVar10 + 0xd8,&local_38);
      }
    }
    FUN_00b5fc1c(param_1 + 0x160,&local_50);
    puVar6 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_50 + 1);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        local_50[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_60 = (undefined8 *)*puVar6;
        FUN_02a44274(lVar10 + 0xd8,&local_60);
      }
    }
  }
  uVar9 = 0;
  if ((undefined8 *)*param_2 != (undefined8 *)0x0) {
    uVar9 = *(undefined8 *)*param_2;
  }
  *(undefined8 *)(param_1 + 0x170) = uVar9;
  puVar5 = PTR_DAT_0437a1e8;
  lVar10 = *(long *)(param_1 + 0xc0);
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
    piVar1 = (int *)(lVar10 + 0xc);
    iVar7 = *(int *)(lVar10 + 0xc);
    do {
      plVar8 = *(long **)(lVar10 + 0x10);
      FUN_01900910();
      while( true ) {
        if (plVar8 == (long *)0x0) goto LAB_018f656c;
        if (plVar8 == (long *)puVar5) break;
        plVar8 = (long *)*plVar8;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_018f6740;
        lVar10 = *(long *)(lVar10 + 0x18);
        if (lVar10 != 0) {
          local_70 = local_68;
          if (local_68 == (long *)0x0) goto LAB_018f67cc;
          lVar11 = local_68[0xb];
          if (*(undefined8 **)(lVar11 + 0x18) != (undefined8 *)0x0) {
            if (*(long *)(lVar11 + 0x10) == 0) {
              uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
              *(undefined8 *)(lVar11 + 0x10) = uVar9;
            }
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
LAB_018f67cc:
            plVar8 = (long *)(lVar10 + -0x50);
            FUN_01a4ad9c(plVar8,&local_70);
            if (local_70 != (long *)0x0) {
              lVar11 = local_70[0xb];
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                iVar7 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar7 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar7 + -1 == 0) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*local_70 + 0x20))();
              }
            }
            lVar10 = *(long *)(lVar10 + 8);
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              iVar7 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar7 + -1 != 0) break;
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar8 + 0x20))(plVar8);
            if (local_68 == (long *)0x0) {
              return;
            }
            goto LAB_018f6574;
          }
          goto LAB_018f6844;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_018f6740:
      iVar7 = iVar2;
    } while (iVar2 != 0);
  }
LAB_018f656c:
  if (local_68 != (long *)0x0) {
LAB_018f6574:
    lVar10 = local_68[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return;
}


