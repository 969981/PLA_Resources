/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b9bc08; name: FUN_01b9bc08
 */


void FUN_01b9bc08(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *local_18;
  
  local_18 = (long *)*param_2;
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_01b38d60(param_1,&local_18);
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 10;
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
      (**(code **)(*local_18 + 0x10))();
    }
  }
  param_1[0xc6] = &PTR_LAB_04243280;
  param_1[199] = &PTR_LAB_042432e0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined1 *)((long)param_1 + 0x644) = 0;
  FUN_0177e8a8(param_1 + 0xc9);
  *param_1 = &PTR_LAB_04242f38;
  param_1[9] = &PTR_LAB_04243080;
  param_1[10] = &PTR_LAB_04243160;
  param_1[0xc6] = &PTR_LAB_04243188;
  param_1[199] = &PTR_LAB_042431e8;
  param_1[0xc9] = &PTR_LAB_04243230;
  return;
}


