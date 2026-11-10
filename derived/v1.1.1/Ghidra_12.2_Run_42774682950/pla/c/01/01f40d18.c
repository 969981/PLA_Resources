/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f40d18; name: FUN_01f40d18
 */


void FUN_01f40d18(long param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  plVar8 = *(long **)(param_1 + 0x138);
  if (plVar8 != (long *)0x0) {
    if ((param_2 & 1) == 0) {
      do {
        plVar6 = (long *)plVar8[3];
        if (plVar6 != (long *)0x0) {
          lVar7 = plVar6[0xb];
          if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
LAB_01f40ec0:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar7 + 0x10) == 0) {
            uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
            *(undefined8 *)(lVar7 + 0x10) = uVar5;
          }
          piVar1 = (int *)(lVar7 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lVar7 = plVar6[0xe];
        if (*(int *)(lVar7 + 0x220) == 6) {
          for (plVar9 = *(long **)(lVar7 + 0x2c0); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9)
          {
            *(uint *)(plVar9 + 3) = *(uint *)(plVar9 + 3) & 0xfffffdff;
            FUN_01839500(lVar7);
          }
        }
        if (plVar6 != (long *)0x0) {
          lVar7 = plVar6[0xb];
          piVar1 = (int *)(lVar7 + 0xc);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            *(undefined8 *)(lVar7 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))(plVar6);
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
    else {
      do {
        plVar6 = (long *)plVar8[3];
        if (plVar6 != (long *)0x0) {
          lVar7 = plVar6[0xb];
          if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_01f40ec0;
          if (*(long *)(lVar7 + 0x10) == 0) {
            uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
            *(undefined8 *)(lVar7 + 0x10) = uVar5;
          }
          piVar1 = (int *)(lVar7 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lVar7 = plVar6[0xe];
        if (*(int *)(lVar7 + 0x220) == 6) {
          for (plVar9 = *(long **)(lVar7 + 0x2c0); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9)
          {
            *(uint *)(plVar9 + 3) = *(uint *)(plVar9 + 3) | 0x200;
            FUN_01839500(lVar7);
          }
        }
        if (plVar6 != (long *)0x0) {
          lVar7 = plVar6[0xb];
          piVar1 = (int *)(lVar7 + 0xc);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            *(undefined8 *)(lVar7 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))(plVar6);
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  return;
}


