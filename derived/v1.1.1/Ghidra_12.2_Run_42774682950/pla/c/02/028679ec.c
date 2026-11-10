/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028679ec; name: FUN_028679ec
 */


void FUN_028679ec(long param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (*param_3 != 0) {
    lVar8 = param_1 + (param_2 & 0xff) * 0x120;
    *(undefined1 *)(lVar8 + 0x210) = 1;
    lVar9 = *param_3;
    if (lVar9 != 0) {
      lVar10 = *(long *)(lVar9 + 0x58);
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar2 = (int *)(lVar10 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar1 = (long *)(lVar8 + 0x108);
    plVar6 = (long *)*plVar1;
    *plVar1 = lVar9;
    if (plVar6 != (long *)0x0) {
      lVar8 = plVar6[0xb];
      piVar2 = (int *)(lVar8 + 0xc);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
      }
    }
    *(undefined4 *)(param_1 + (param_2 & 0xff) * 0x120 + 0x100) = 3;
  }
  return;
}


