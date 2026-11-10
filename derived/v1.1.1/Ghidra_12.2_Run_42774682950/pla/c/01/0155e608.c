/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0155e608; name: FUN_0155e608
 */


void FUN_0155e608(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  plVar7 = *(long **)(*(long *)(param_1 + 0x3b0) + 0x1c0);
  do {
    if (plVar7 == (long *)0x0) {
      return;
    }
    lVar8 = plVar7[3];
    if (*(long *)(lVar8 + 0x238) != 0) {
      puVar9 = *(undefined8 **)(lVar8 + 0x230);
      do {
        plVar6 = (long *)*puVar9;
        if (plVar6 == (long *)0x0) {
          DAT_000000c8 = 1;
        }
        else {
          lVar10 = plVar6[0xb];
          if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_0155e770:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar10 + 0x10) == 0) {
            uVar5 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
            *(undefined8 *)(lVar10 + 0x10) = uVar5;
          }
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar10 = plVar6[0xb];
          if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0155e770;
          if (*(long *)(lVar10 + 0x10) == 0) {
            uVar5 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
            *(undefined8 *)(lVar10 + 0x10) = uVar5;
          }
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar10 = plVar6[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          *(undefined1 *)(plVar6 + 0x19) = 1;
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
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))(plVar6);
          }
          lVar10 = plVar6[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
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
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))(plVar6);
          }
        }
        puVar9 = puVar9 + 1;
      } while (puVar9 != (undefined8 *)(*(long *)(lVar8 + 0x230) + *(long *)(lVar8 + 0x238) * 8));
    }
    plVar7 = (long *)*plVar7;
  } while( true );
}


