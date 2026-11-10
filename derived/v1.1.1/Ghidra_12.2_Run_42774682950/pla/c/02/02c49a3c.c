/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c49a3c; name: FUN_02c49a3c
 */


void FUN_02c49a3c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (3 < *(uint *)(param_2 + 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b62030();
  }
  plVar5 = *(long **)(*param_2 + (long)(int)*(uint *)(param_2 + 1) * 8);
  (**(code **)(*plVar5 + 0x28))(&local_40,plVar5,param_2[2],param_2[3]);
  plVar5 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = local_40;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0x68) = local_38;
  *(undefined8 *)(param_1 + 0x70) = local_30;
  *(undefined8 *)(param_1 + 0x78) = local_28;
  if (*(long **)(param_1 + 0x68) != (long *)0x0) {
    lVar6 = (**(code **)(**(long **)(param_1 + 0x68) + 0x68))();
    if (((*(long **)(param_1 + 0x68) != (long *)0x0) &&
        (lVar7 = (**(code **)(**(long **)(param_1 + 0x68) + 0x70))(), lVar6 != 0)) && (lVar7 != 0))
    {
      FUN_00876eb0(param_1 + 0x80,lVar6,lVar7);
    }
  }
  return;
}


