/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008adf54; name: FUN_008adf54
 */


/* WARNING: Removing unreachable block (ram,0x008adf94) */
/* WARNING: Removing unreachable block (ram,0x008adf98) */
/* WARNING: Removing unreachable block (ram,0x008adfa0) */
/* WARNING: Removing unreachable block (ram,0x008adfa8) */
/* WARNING: Removing unreachable block (ram,0x008ae038) */

void FUN_008adf54(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_28;
  long *local_18;
  
  local_18 = (long *)*param_2;
  if (local_18 != (long *)0x0) {
    plVar5 = local_18 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *(int *)plVar5 = (int)*plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_008ae05c(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd8),&local_18);
  plVar5 = *(long **)(param_1 + 0xb60);
  *(undefined8 *)(param_1 + 0xb60) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  *(undefined8 *)(param_1 + 0xb60) = local_28;
  if (local_18 != (long *)0x0) {
    plVar5 = local_18 + 10;
    do {
      iVar2 = (int)*plVar5 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *(int *)plVar5 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*local_18 + 0x10))();
    }
  }
  return;
}


