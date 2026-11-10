/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c41480; name: FUN_02c41480
 */


void FUN_02c41480(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_18;
  
  lVar6 = *(long *)(param_1 + 0x3d8);
  FUN_02bba5e0(&local_18,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x58) + 0x58) + 0x78));
  plVar5 = *(long **)(lVar6 + 0x68);
  *(undefined8 *)(lVar6 + 0x68) = 0;
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
  *(undefined8 *)(lVar6 + 0x68) = local_18;
  return;
}


