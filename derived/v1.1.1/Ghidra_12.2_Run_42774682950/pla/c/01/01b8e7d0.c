/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b8e7d0; name: FUN_01b8e7d0
 */


void FUN_01b8e7d0(int *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 *local_40 [2];
  undefined8 local_28;
  
  if (*param_1 - 2U < 2) {
    FUN_01b91d38(param_1);
    return;
  }
  if (*param_1 == 1) {
    lVar8 = *(long *)(param_1 + 0x7c);
    if (lVar8 == 0) {
      *param_1 = 0;
    }
    *(undefined1 *)(param_1 + 0x80) = 1;
    if (*(char *)(lVar8 + 0x68) != '\0') {
      plVar9 = *(long **)(lVar8 + 0x70);
      if (plVar9 != (long *)0x0) {
        lVar8 = plVar9[0xb];
        if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar8 + 0x10) == 0) {
          uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
          *(undefined8 *)(lVar8 + 0x10) = uVar6;
        }
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar7 = (long *)FUN_01b93540(plVar9 + 0x1e);
        if (plVar7 != (long *)0x0) {
          local_50 = (undefined8 *)0x0;
          uStack_48 = 0;
          FUN_008c4b3c(&local_50,*(long *)(param_1 + 2) + 0x260);
          FUN_01b7436c(plVar7,&local_50,*(long *)(param_1 + 2) + 0x270,0);
          puVar4 = local_50;
          if (local_50 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_50 + 1);
            do {
              iVar5 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar5 + -1 == 0) {
              local_50[2] = 0;
              if ((*PTR_DAT_04379498 & 1) == 0) {
                iVar5 = __cxa_guard_acquire(PTR_DAT_04379498);
                if (iVar5 != 0) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
              }
              lVar8 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar8;
              local_40[0] = (undefined8 *)*puVar4;
              FUN_02a44274(lVar8 + 0xd8,local_40);
            }
          }
          (**(code **)(*plVar7 + 0x18))(local_40,plVar7);
          local_60 = (undefined8 *)0x0;
          uStack_58 = 0;
          FUN_01b7bc64(&local_60,local_40);
          puVar4 = local_40[0];
          if (local_40[0] != (undefined8 *)0x0) {
            piVar1 = (int *)(local_40[0] + 1);
            do {
              iVar5 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar5 + -1 == 0) {
              local_40[0][2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar8 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar8;
              local_28 = *puVar4;
              FUN_02a44274(lVar8 + 0xd8,&local_28);
            }
          }
          FUN_01b824c0(param_1 + 0x78,&local_60);
          puVar4 = local_60;
          if (local_60 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_60 + 1);
            do {
              iVar5 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar5 + -1 == 0) {
              local_60[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar8 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar8;
              local_40[0] = (undefined8 *)*puVar4;
              FUN_02a44274(lVar8 + 0xd8,local_40);
            }
          }
        }
        lVar8 = plVar9[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
      }
      plVar9 = *(long **)(param_1 + 0x7c);
      param_1[0x7c] = 0;
      param_1[0x7d] = 0;
      if (plVar9 != (long *)0x0) {
        lVar8 = plVar9[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*plVar9 + 0x20))();
        }
      }
      *param_1 = 2;
      FUN_01b91d38(param_1);
    }
  }
  return;
}


