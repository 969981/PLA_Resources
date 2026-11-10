/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0155e908; name: FUN_0155e908
 */


undefined8 FUN_0155e908(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  
  plVar8 = *(long **)(*(long *)(param_1 + 0x3b0) + 0x1c0);
  do {
    if (plVar8 == (long *)0x0) {
      return 1;
    }
    lVar9 = plVar8[3];
    if (*(long *)(lVar9 + 0x238) != 0) {
      puVar10 = *(undefined8 **)(lVar9 + 0x230);
      do {
        plVar7 = (long *)*puVar10;
        cVar3 = DAT_000000c7;
        if (plVar7 != (long *)0x0) {
          lVar11 = plVar7[0xb];
          if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_0155ea70:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar11 + 0x10) == 0) {
            uVar6 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
            *(undefined8 *)(lVar11 + 0x10) = uVar6;
          }
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar11 = plVar7[0xb];
          if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_0155ea70;
          if (*(long *)(lVar11 + 0x10) == 0) {
            uVar6 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
            *(undefined8 *)(lVar11 + 0x10) = uVar6;
          }
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar11 = plVar7[0xb];
          piVar1 = (int *)(lVar11 + 0xc);
          cVar3 = *(char *)((long)plVar7 + 199);
          do {
            iVar2 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar2 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar7 + 0x20))(plVar7);
          }
          lVar11 = plVar7[0xb];
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar2 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar2 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar7 + 0x20))(plVar7);
          }
        }
        if (cVar3 == '\0') {
          return 0;
        }
        puVar10 = puVar10 + 1;
      } while (puVar10 != (undefined8 *)(*(long *)(lVar9 + 0x230) + *(long *)(lVar9 + 0x238) * 8));
    }
    plVar8 = (long *)*plVar8;
  } while( true );
}


