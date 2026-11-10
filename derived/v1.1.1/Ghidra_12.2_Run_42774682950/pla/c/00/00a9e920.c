/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a9e920; name: FUN_00a9e920
 */


void FUN_00a9e920(long param_1)

{
  int *piVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  long *local_30;
  undefined8 local_28;
  
  if (*(char *)(param_1 + 0xc3) != '\0') {
    *(undefined1 *)(param_1 + 0xc3) = 0;
    if (*(char *)(param_1 + 0xc5) != '\0') {
      FUN_00a9efe8(1,0);
      return;
    }
    if (((*PTR_DAT_04379578 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379578), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
    lVar8 = *(long *)PTR_DAT_04379580;
    *(long *)PTR_DAT_04379588 = lVar8;
    lVar8 = *(long *)(lVar8 + 200);
    uVar2 = *(ulong *)(lVar8 + 0xd8);
    plVar9 = (long *)**(long **)(lVar8 + 0xd0);
    if ((uVar2 & uVar2 - 1) == 0) {
      do {
        do {
          plVar9 = (long *)*plVar9;
        } while (plVar9[1] != 0);
      } while (*(int *)(plVar9 + 2) != 0);
    }
    else {
      do {
        do {
          plVar9 = (long *)*plVar9;
        } while (plVar9[1] != 0);
      } while ((int)plVar9[2] != 0);
    }
    plVar9 = (long *)plVar9[3];
    if (plVar9 != (long *)0x0) {
      lVar8 = plVar9[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar8 = FUN_009b807c(plVar9 + 0x1e,&local_40);
    if (lVar8 != 0) {
      local_40 = (undefined8 *)0x0;
      uStack_38 = 0;
      FUN_00ac3fa4(&local_40,lVar8 + 0x248);
      FUN_0099c748(&local_30,&local_40);
      puVar5 = local_40;
      if (local_40 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_40 + 1);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          local_40[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_28 = *puVar5;
          FUN_02a44274(lVar8 + 0xd8,&local_28);
        }
      }
      if (local_30 != (long *)0x0) {
        local_40 = (undefined8 *)0x0;
        uStack_38 = 0;
        FUN_01a2bf84(&local_40,local_30 + 0xb9);
        if (local_40 == (undefined8 *)0x0) {
          local_48 = (long *)0x0;
        }
        else {
          FUN_009cf990(&local_48);
          puVar5 = local_40;
          if (local_40 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_40 + 1);
            do {
              iVar6 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 + -1 == 0) {
              local_40[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar8 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar8;
              local_28 = *puVar5;
              FUN_02a44274(lVar8 + 0xd8,&local_28);
            }
          }
        }
        if ((local_48 != (long *)0x0) && (FUN_01bf381c(), local_48 != (long *)0x0)) {
          lVar8 = local_48[0xb];
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar6 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*local_48 + 0x20))();
          }
        }
        if (local_30 != (long *)0x0) {
          lVar8 = local_30[0xb];
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar6 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*local_30 + 0x20))();
          }
        }
      }
    }
    if (plVar9 != (long *)0x0) {
      lVar8 = plVar9[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
    }
  }
  return;
}


