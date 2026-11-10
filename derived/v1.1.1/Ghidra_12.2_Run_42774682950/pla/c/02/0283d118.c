/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283d118; name: FUN_0283d118
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0283d118(long param_1,undefined1 param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  *(undefined1 *)(param_1 + 0x1f5) = param_2;
  *(undefined1 *)(param_1 + 0x1f6) = param_3;
  if (*(long *)(param_1 + 0xf8) != 0) {
    lVar10 = *(long *)(param_1 + 0xf0);
    lVar11 = lVar10 + *(long *)(param_1 + 0xf8) * 0x28;
    do {
      plVar8 = *(long **)(lVar10 + 0x18);
      if (plVar8 == (long *)0x0) {
        plVar9 = *(long **)(lVar10 + 0x20);
        if (plVar9 != (long *)0x0) goto LAB_0283d170;
LAB_0283d238:
        DAT_000003d1 = *(undefined1 *)(param_1 + 0x1f5);
        DAT_000003d2 = *(undefined1 *)(param_1 + 0x1f6);
        if (_DAT_000003d8 != 0) {
          *(uint *)(_DAT_000003d8 + 0x90) = (uint)CONCAT11(DAT_000003d1,DAT_000003d2);
        }
      }
      else {
        (**(code **)(*plVar8 + 0x18))(plVar8);
        plVar9 = *(long **)(lVar10 + 0x20);
        if (plVar9 == (long *)0x0) goto LAB_0283d238;
LAB_0283d170:
        lVar12 = plVar9[0xb];
        if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar12 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
          *(undefined8 *)(lVar12 + 0x10) = uVar7;
        }
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar3 = *(undefined1 *)(param_1 + 0x1f5);
        uVar4 = *(undefined1 *)(param_1 + 0x1f6);
        *(undefined1 *)((long)plVar9 + 0x3d1) = uVar3;
        *(undefined1 *)((long)plVar9 + 0x3d2) = uVar4;
        if (plVar9[0x7b] != 0) {
          *(uint *)(plVar9[0x7b] + 0x90) = (uint)CONCAT11(uVar3,uVar4);
        }
        lVar12 = plVar9[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
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
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
      }
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
      lVar10 = lVar10 + 0x28;
    } while (lVar10 != lVar11);
  }
  return;
}


