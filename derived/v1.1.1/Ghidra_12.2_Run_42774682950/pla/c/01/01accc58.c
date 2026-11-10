/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01accc58; name: FUN_01accc58
 */


void FUN_01accc58(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 in_q3 [16];
  long lVar12;
  long *local_50;
  undefined8 uStack_48;
  long *local_40;
  long *local_38;
  
  lVar12 = in_q3._8_8_;
  lVar10 = in_q3._0_8_;
  if ((*(long *)(param_1 + 0x810) != 0) && (FUN_009b3e90(&local_40), local_40 != (long *)0x0)) {
    if ((local_40[0x68] != 0) && (uVar9 = FUN_02a43a8c(), (uVar9 & 1) == 0)) {
      local_50 = (long *)0x0;
      uStack_48 = 0;
      FUN_009ab200(&local_50,local_40 + 0x68);
      plVar6 = local_50;
      if (local_50 != (long *)0x0) {
        if (*(int *)((long)local_50 + 0xc) != 0) {
          piVar1 = (int *)((long)local_50 + 0xc);
          iVar8 = *(int *)((long)local_50 + 0xc);
          while (uVar9 = FUN_009b4090(plVar6[2]), (uVar9 & 1) != 0) {
            iVar3 = *piVar1;
            if (iVar3 == iVar8) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar8 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar11 = plVar6[3];
                plVar6 = (long *)0x0;
                plVar7 = local_50;
                if (lVar11 != 0) {
                  plVar6 = (long *)(lVar11 + -0x50);
                }
                goto joined_r0x01accd58;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar8 = iVar3;
            if (iVar3 == 0) break;
          }
        }
        plVar6 = (long *)0x0;
        plVar7 = local_50;
joined_r0x01accd58:
        local_50 = plVar7;
        if (plVar7 != (long *)0x0) {
          plVar2 = plVar7 + 1;
          do {
            iVar8 = (int)*plVar2 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 == 0) {
            plVar7[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_38 = (long *)*plVar7;
            FUN_02a44274(lVar11 + 0xd8,&local_38);
          }
        }
        if (plVar6 != (long *)0x0) {
          FUN_009c69bc(&local_50,plVar6);
          plVar7 = local_50;
          FUN_009c69bc(&local_38,param_1);
          (**(code **)(*local_38 + 0x40))();
          *(undefined1 *)(plVar7 + 0x1c) = 1;
          plVar7[0x1b] = lVar12;
          plVar7[0x1a] = lVar10;
          if (local_38 != (long *)0x0) {
            lVar10 = local_38[0xb];
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*local_38 + 0x20))();
            }
          }
          if (local_50 != (long *)0x0) {
            lVar10 = local_50[0xb];
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*local_50 + 0x20))();
            }
          }
          lVar10 = plVar6[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))(plVar6);
          }
        }
      }
    }
    if (local_40 != (long *)0x0) {
      lVar10 = local_40[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
      }
    }
  }
  return;
}


