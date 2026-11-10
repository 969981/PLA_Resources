/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283d878; name: FUN_0283d878
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0283d878(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (*(long *)(param_1 + 0xf8) != 0) {
    lVar8 = *(long *)(param_1 + 0xf0);
    lVar9 = lVar8 + *(long *)(param_1 + 0xf8) * 0x28;
    do {
      plVar6 = *(long **)(lVar8 + 0x18);
      if (plVar6 == (long *)0x0) {
        plVar7 = *(long **)(lVar8 + 0x20);
        if (plVar7 != (long *)0x0) goto LAB_0283d8bc;
LAB_0283d9c4:
        if (_DAT_00000088 != 0) {
          FUN_002350e8(_DAT_00000088,param_2);
        }
      }
      else {
        (**(code **)(*plVar6 + 0x18))(plVar6);
        plVar7 = *(long **)(lVar8 + 0x20);
        if (plVar7 == (long *)0x0) goto LAB_0283d9c4;
LAB_0283d8bc:
        lVar10 = plVar7[0xb];
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_0283da10:
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
        lVar10 = plVar7[0xb];
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0283da10;
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
        if (plVar7[0x11] != 0) {
          FUN_002350e8(plVar7[0x11],param_2);
        }
        lVar10 = plVar7[0xb];
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
          (**(code **)(*plVar7 + 0x20))(plVar7);
        }
        lVar10 = plVar7[0xb];
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
          (**(code **)(*plVar7 + 0x20))(plVar7);
        }
      }
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
      lVar8 = lVar8 + 0x28;
    } while (lVar8 != lVar9);
  }
  return;
}


