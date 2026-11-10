/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c41570; name: FUN_02c41570
 */


/* WARNING: Removing unreachable block (ram,0x02c415d0) */
/* WARNING: Removing unreachable block (ram,0x02c415d4) */
/* WARNING: Removing unreachable block (ram,0x02c415dc) */
/* WARNING: Removing unreachable block (ram,0x02c415e4) */
/* WARNING: Removing unreachable block (ram,0x02c415e8) */

void FUN_02c41570(undefined8 param_1,long *param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0;
  local_50 = 0;
  local_78 = (long *)*param_2;
  if (local_78 != (long *)0x0) {
    plVar1 = local_78 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_70 = param_3;
  local_68 = param_4;
  local_60 = param_5;
  local_58 = param_6;
  FUN_02c4165c(param_1,&local_78);
  if (local_78 != (long *)0x0) {
    plVar1 = local_78 + 10;
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
      (**(code **)(*local_78 + 0x10))();
    }
  }
  return;
}


