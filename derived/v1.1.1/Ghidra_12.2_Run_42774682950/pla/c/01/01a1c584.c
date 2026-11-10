/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a1c584; name: FUN_01a1c584
 */


void FUN_01a1c584(undefined8 param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  
  puVar4 = PTR_DAT_0437f968;
  lVar7 = *(long *)(param_2 + 0xef10);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0xc) != 0)) {
    lVar7 = *(long *)(param_2 + 0xef10);
    if ((lVar7 == 0) || (*(int *)(lVar7 + 0xc) == 0)) {
LAB_01a1c5c0:
      plVar11 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar7 + 0xc);
      puVar8 = (undefined8 *)PTR_DAT_0437f970;
      iVar9 = *(int *)(lVar7 + 0xc);
      do {
        puVar10 = *(undefined8 **)(lVar7 + 0x10);
        if ((*puVar4 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(puVar4);
          puVar8 = (undefined8 *)PTR_DAT_0437f970;
          if (iVar5 != 0) {
            uVar6 = FUN_0151c598();
            *(undefined8 *)PTR_DAT_0437f970 = uVar6;
            __cxa_guard_release(puVar4);
            puVar8 = (undefined8 *)PTR_DAT_0437f970;
          }
        }
        if (puVar10 == (undefined8 *)0x0) goto LAB_01a1c5c0;
        while (puVar10 != puVar8) {
          puVar10 = (undefined8 *)*puVar10;
          plVar11 = (long *)0x0;
          if (puVar10 == (undefined8 *)0x0) goto LAB_01a1c5c4;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar9) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar11 = (long *)0x0;
            if (*(long *)(lVar7 + 0x18) != 0) {
              plVar11 = (long *)(*(long *)(lVar7 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar11 = (long *)0x0;
        iVar9 = iVar5;
      } while (iVar5 != 0);
    }
LAB_01a1c5c4:
    FUN_028b55bc(plVar11 + 0x40);
    FUN_028bcbe4(param_1);
    if (plVar11 != (long *)0x0) {
      lVar7 = plVar11[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01a1c628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar11 + 0x20))(plVar11);
        return;
      }
    }
  }
  return;
}


