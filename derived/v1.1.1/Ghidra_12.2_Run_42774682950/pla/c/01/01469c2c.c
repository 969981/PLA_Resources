/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01469c2c; name: FUN_01469c2c
 */


void FUN_01469c2c(long param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_48;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x6f8));
  (**(code **)(**(long **)(param_1 + 0x368) + 0x10))(&local_70);
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_01160f90(&local_80,&local_70);
  puVar6 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_70 + 1);
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
      local_70[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_48 = *puVar6;
      FUN_02a44274(lVar9 + 0xd8,&local_48);
    }
  }
  lVar9 = FUN_0146bbc0(&local_80);
  puVar6 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_80 + 1);
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
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_70 = (undefined8 *)*puVar6;
      FUN_02a44274(lVar10 + 0xd8,&local_70);
    }
  }
  if (lVar9 != 0) {
    local_70 = (undefined8 *)0xf672161083533659;
    pcStack_68 = "LevelUpView";
    local_60 = 0xb;
    local_58 = (long *)0x0;
    lVar10 = FUN_01470a94(*(undefined8 *)(param_1 + 0x4c8),&local_70);
    if ((lVar10 != 0) &&
       (lVar8 = FUN_01467f18(*(undefined8 *)(param_1 + 0x4c8),"ItemChangeView"), lVar8 != 0)) {
      if (param_2 == (long *)0x0) {
        *(undefined1 *)(lVar9 + 0x1f0) = 0;
      }
      else {
        if (*(char *)(lVar9 + 0x1f0) == '\0') {
          plVar11 = (long *)*param_2;
          local_88 = plVar11;
          if (plVar11 == (long *)0x0) {
            FUN_0147777c(lVar10,&local_88,param_2,lVar9);
          }
          else {
            plVar1 = plVar11 + 10;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *(int *)plVar1 = (int)*plVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            FUN_0147777c(lVar10,&local_88,param_2,lVar9);
            if (plVar11 != (long *)0x0) {
              plVar1 = plVar11 + 10;
              do {
                iVar7 = (int)*plVar1 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *(int *)plVar1 = iVar7;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar7 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          *(undefined1 *)(lVar9 + 0x1f0) = 1;
          lVar12 = *param_2;
          if (lVar12 != 0) {
            piVar2 = (int *)(lVar12 + 0x50);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = *piVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          plVar11 = *(long **)(lVar9 + 0x1a0);
          *(long *)(lVar9 + 0x1a0) = lVar12;
          if (plVar11 != (long *)0x0) {
            plVar1 = plVar11 + 10;
            do {
              iVar7 = (int)*plVar1 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *(int *)plVar1 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar11 + 0x10))();
            }
          }
          *(long *)(lVar9 + 0x1a8) = param_2[1];
          lVar12 = param_2[2];
          lVar3 = param_2[3];
          lVar13 = param_2[5];
          *(long *)(lVar9 + 0x1c0) = param_2[4];
          *(long *)(lVar9 + 0x1c8) = lVar13;
          *(long *)(lVar9 + 0x1b0) = lVar12;
          *(long *)(lVar9 + 0x1b8) = lVar3;
          lVar13 = param_2[8];
          lVar12 = param_2[6];
          lVar3 = param_2[7];
          *(int *)(lVar9 + 0x1e8) = (int)param_2[9];
          *(long *)(lVar9 + 0x1d8) = lVar3;
          *(long *)(lVar9 + 0x1e0) = lVar13;
          *(long *)(lVar9 + 0x1d0) = lVar12;
          FUN_0147129c(lVar9);
          FUN_0257b998(lVar8);
          FUN_0257c070(lVar8);
          FUN_0257c2d8(lVar8);
          FUN_02579ebc(lVar8);
          FUN_01477284(lVar10);
          local_70 = (undefined8 *)0x9104efa44142b95e;
          pcStack_68 = "GuideView";
          local_60 = 9;
          local_58 = (long *)0x0;
          lVar9 = FUN_0147071c(*(undefined8 *)(param_1 + 0x4c8),&local_70);
          if (local_58 != (long *)0x0) {
            (**(code **)(*local_58 + 0x20))();
          }
          if (lVar9 != 0) {
            *(undefined1 *)(*(long *)(lVar9 + 0x5b0) + 0x243) = 1;
            local_70 = (undefined8 *)0x9104efa44142b95e;
            pcStack_68 = "GuideView";
            local_60 = 9;
            local_58 = (long *)0x0;
            lVar9 = FUN_0147071c(*(undefined8 *)(param_1 + 0x4c8),&local_70);
            if (local_58 != (long *)0x0) {
              (**(code **)(*local_58 + 0x20))();
            }
            if (lVar9 != 0) {
              FUN_014757a4(lVar9);
              goto LAB_01469f3c;
            }
          }
          goto LAB_0146a04c;
        }
        FUN_014710c0(lVar9,param_2);
        FUN_0257b998(lVar8);
        FUN_0257c070(lVar8);
        FUN_0257c2d8(lVar8);
        FUN_02579ebc(lVar8);
      }
LAB_01469f3c:
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x6f8));
      return;
    }
  }
LAB_0146a04c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


