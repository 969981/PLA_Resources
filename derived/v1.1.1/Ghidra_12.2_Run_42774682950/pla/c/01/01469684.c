/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01469684; name: FUN_01469684
 */


void FUN_01469684(long *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = 0x5e6b838ab8d8ec70;
  pcStack_48 = "QIconView";
  local_40 = 9;
  uStack_38 = 0;
  lVar6 = FUN_01470560(*(undefined8 *)(param_2 + 0x4c8),&local_50);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  plVar9 = (long *)(lVar6 + 0x5b0);
  while( true ) {
    lVar8 = *plVar9;
    *param_1 = lVar8;
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar7 = (long *)*param_1;
    uVar10 = plVar7[0x1a];
    if ((plVar7 != (long *)0x0) && ((uVar10 & 1) != 0)) {
      plVar2 = plVar7 + 10;
      do {
        iVar5 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    if ((uVar10 & 1) == 0) break;
    plVar9 = plVar9 + 1;
    if (plVar9 == (long *)(lVar6 + 0x650)) {
      *param_1 = 0;
      return;
    }
  }
  return;
}


