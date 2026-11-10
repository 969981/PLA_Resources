/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f407e8; name: FUN_01f407e8
 */


void FUN_01f407e8(long param_1,long *param_2,ulong param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  plVar9 = *(long **)(param_1 + 0x138);
  if (plVar9 != (long *)0x0) {
    if ((param_3 & 1) == 0) {
      do {
        plVar7 = (long *)plVar9[3];
        if (plVar7 != (long *)0x0) {
          lVar8 = plVar7[0xb];
          if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_01f409cc:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar8 + 0x10) == 0) {
            uVar4 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
            *(undefined8 *)(lVar8 + 0x10) = uVar4;
          }
          piVar6 = (int *)(lVar8 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
              *piVar6 = *piVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if ((int *)*param_2 != (int *)param_2[1]) {
          lVar8 = plVar7[0xe];
          piVar6 = (int *)*param_2;
LAB_01f40940:
          piVar5 = piVar6 + 1;
          if (*(int *)(lVar8 + 0x220) != *piVar6) goto code_r0x01f4094c;
          for (plVar10 = *(long **)(lVar8 + 0x2c0); plVar10 != (long *)0x0;
              plVar10 = (long *)*plVar10) {
            *(uint *)(plVar10 + 3) = *(uint *)(plVar10 + 3) & 0xfffffdff;
            FUN_01839500(lVar8);
          }
        }
LAB_01f40954:
        if (plVar7 != (long *)0x0) {
          lVar8 = plVar7[0xb];
          piVar6 = (int *)(lVar8 + 0xc);
          do {
            iVar1 = *piVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
              *piVar6 = iVar1 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar1 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*plVar7 + 0x20))(plVar7);
          }
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
    else {
      do {
        plVar7 = (long *)plVar9[3];
        if (plVar7 != (long *)0x0) {
          lVar8 = plVar7[0xb];
          if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_01f409cc;
          if (*(long *)(lVar8 + 0x10) == 0) {
            uVar4 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
            *(undefined8 *)(lVar8 + 0x10) = uVar4;
          }
          piVar6 = (int *)(lVar8 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
              *piVar6 = *piVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if ((int *)*param_2 != (int *)param_2[1]) {
          lVar8 = plVar7[0xe];
          piVar6 = (int *)*param_2;
LAB_01f4086c:
          piVar5 = piVar6 + 1;
          if (*(int *)(lVar8 + 0x220) != *piVar6) goto code_r0x01f40878;
          for (plVar10 = *(long **)(lVar8 + 0x2c0); plVar10 != (long *)0x0;
              plVar10 = (long *)*plVar10) {
            *(uint *)(plVar10 + 3) = *(uint *)(plVar10 + 3) | 0x200;
            FUN_01839500(lVar8);
          }
        }
LAB_01f40880:
        if (plVar7 != (long *)0x0) {
          lVar8 = plVar7[0xb];
          piVar6 = (int *)(lVar8 + 0xc);
          do {
            iVar1 = *piVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
              *piVar6 = iVar1 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar1 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*plVar7 + 0x20))(plVar7);
          }
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  return;
code_r0x01f40878:
  piVar6 = piVar5;
  if ((int *)param_2[1] == piVar5) goto LAB_01f40880;
  goto LAB_01f4086c;
code_r0x01f4094c:
  piVar6 = piVar5;
  if ((int *)param_2[1] == piVar5) goto LAB_01f40954;
  goto LAB_01f40940;
}


