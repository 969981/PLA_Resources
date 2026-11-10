/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0155e2f8; name: FUN_0155e2f8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0155e2f8(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  
  FUN_0155e608();
  plVar9 = *(long **)(*(long *)(param_1 + 0x3b0) + 0x1c0);
  do {
    while( true ) {
      if (plVar9 == (long *)0x0) {
        return;
      }
      lVar10 = plVar9[3];
      if (*(long *)(lVar10 + 0x238) != 0) break;
LAB_0155e348:
      plVar9 = (long *)*plVar9;
    }
    puVar11 = *(undefined8 **)(lVar10 + 0x230);
LAB_0155e360:
    plVar7 = (long *)*puVar11;
    cVar3 = DAT_000000c6;
    if (plVar7 != (long *)0x0) {
      lVar8 = plVar7[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_0155e5f0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar8 = plVar7[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      cVar3 = *(char *)((long)plVar7 + 0xc6);
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
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))(plVar7);
      }
    }
    if (cVar3 != '\0') {
      puVar11 = puVar11 + 1;
      if (puVar11 == (undefined8 *)(*(long *)(lVar10 + 0x230) + *(long *)(lVar10 + 0x238) * 8))
      goto LAB_0155e348;
      goto LAB_0155e360;
    }
    lVar10 = *(long *)(param_1 + 0x3b0);
    plVar9 = *(long **)(lVar10 + 0x1c0);
    if (plVar9 != (long *)0x0) {
      do {
        lVar10 = plVar9[3];
        if (*(long *)(lVar10 + 0x238) != 0) {
          puVar11 = *(undefined8 **)(lVar10 + 0x230);
          do {
            plVar7 = (long *)*puVar11;
            if (plVar7 == (long *)0x0) {
              if ((DAT_000000c8 != '\0') && (FUN_01514928(0), DAT_000000c5 != '\0')) {
                DAT_000000c6 = '\x01';
              }
            }
            else {
              lVar8 = plVar7[0xb];
              if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_0155e5f0;
              if (*(long *)(lVar8 + 0x10) == 0) {
                uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
                *(undefined8 *)(lVar8 + 0x10) = uVar6;
              }
              piVar1 = (int *)(lVar8 + 0xc);
              do {
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              lVar8 = plVar7[0xb];
              if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_0155e5f0;
              if (*(long *)(lVar8 + 0x10) == 0) {
                uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
                *(undefined8 *)(lVar8 + 0x10) = uVar6;
              }
              piVar1 = (int *)(lVar8 + 0xc);
              do {
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (((char)plVar7[0x19] != '\0') &&
                 (FUN_01514928(plVar7), *(char *)((long)plVar7 + 0xc5) != '\0')) {
                *(undefined1 *)((long)plVar7 + 0xc6) = 1;
              }
              lVar8 = plVar7[0xb];
              piVar1 = (int *)(lVar8 + 0xc);
              do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar2 + -1 == 0) {
                *(undefined8 *)(lVar8 + 0x18) = 0;
                (**(code **)(*plVar7 + 0x20))(plVar7);
              }
              lVar8 = plVar7[0xb];
              piVar1 = (int *)(lVar8 + 0xc);
              do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar2 + -1 == 0) {
                *(undefined8 *)(lVar8 + 0x18) = 0;
                (**(code **)(*plVar7 + 0x20))(plVar7);
              }
            }
            puVar11 = puVar11 + 1;
          } while (puVar11 !=
                   (undefined8 *)(*(long *)(lVar10 + 0x230) + *(long *)(lVar10 + 0x238) * 8));
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
      lVar10 = *(long *)(param_1 + 0x3b0);
    }
    if ((((*(undefined1 **)(lVar10 + 0x7f0) == &DAT_cbf29ce484222645) &&
         (*(undefined1 **)(lVar10 + 0x7f8) == &DAT_cbf29ce484222645)) &&
        (*(undefined1 **)(lVar10 + 0x800) == &DAT_cbf29ce484222645)) &&
       ((*(undefined1 **)(lVar10 + 0x808) == &DAT_cbf29ce484222645 &&
        (*(undefined1 **)(lVar10 + 0x810) == &DAT_cbf29ce484222645)))) {
      if (*(int *)(lVar10 + 0x7ec) < 0) {
        *(undefined4 *)(lVar10 + 0x7ec) = 0;
      }
      else {
        *(int *)(lVar10 + 0x7ec) = *(int *)(lVar10 + 0x7ec) + 2;
      }
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0x3b0) + 0x1c0);
  } while( true );
}


