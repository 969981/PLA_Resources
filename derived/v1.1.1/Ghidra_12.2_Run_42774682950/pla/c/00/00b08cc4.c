/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b08cc4; name: FUN_00b08cc4
 */


undefined8 FUN_00b08cc4(long param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x228) + 0x1f8);
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x228) + 0x200);
  if (puVar4 == puVar3) {
    uVar11 = 1;
  }
  else {
    uVar11 = 1;
    for (; puVar3 != puVar4; puVar3 = puVar3 + 2) {
      plVar8 = (long *)*puVar3;
      if (plVar8 != (long *)0x0) {
        lVar9 = plVar8[0xb];
        if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar9 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
          *(undefined8 *)(lVar9 + 0x10) = uVar7;
        }
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar10 = (long *)puVar3[1];
      if (plVar10 == (long *)0x0) {
        if (plVar8 != (long *)0x0) goto LAB_00b08d40;
LAB_00b08dd4:
        uVar11 = 0;
      }
      else {
        (**(code **)(*plVar10 + 0x18))(plVar10);
        if (plVar8 == (long *)0x0) goto LAB_00b08dd4;
LAB_00b08d40:
        if ((plVar8[0xe] == 0) || (*(char *)(plVar8[0xe] + 0x1e1) == '\0')) goto LAB_00b08dd4;
      }
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      if (plVar8 != (long *)0x0) {
        lVar9 = plVar8[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar2 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))(plVar8);
        }
      }
    }
  }
  return uVar11;
}


