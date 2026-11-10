/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2f768; name: FUN_00d2f768
 */


void FUN_00d2f768(long param_1,undefined1 param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_28;
  
  FUN_0283d118(*(undefined8 *)(param_1 + 0x148));
  local_50 = 0x24fa34ca021df923;
  pcStack_48 = "work_common_cursor";
  local_40 = 0x12;
  uStack_38 = 0;
  FUN_0283c824(&local_28,*(undefined8 *)(param_1 + 0x148),&local_50);
  if (local_28 != (long *)0x0) {
    *(undefined1 *)((long)local_28 + 0x3d1) = param_2;
    *(char *)((long)local_28 + 0x3d2) = param_3 + '\x02';
    if (local_28[0x7b] != 0) {
      *(uint *)(local_28[0x7b] + 0x90) = (uint)CONCAT11(param_2,param_3 + '\x02');
    }
    lVar5 = local_28[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
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
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  local_50 = 0x545010440a0870a9;
  pcStack_48 = "work_context_00";
  local_40 = 0xf;
  uStack_38 = 0;
  FUN_0283c824(&local_28,*(undefined8 *)(param_1 + 0x148),&local_50);
  if (local_28 != (long *)0x0) {
    *(undefined1 *)((long)local_28 + 0x3d1) = param_2;
    *(char *)((long)local_28 + 0x3d2) = param_3 + '\x01';
    if (local_28[0x7b] != 0) {
      *(uint *)(local_28[0x7b] + 0x90) = (uint)CONCAT11(param_2,param_3 + '\x01');
    }
    lVar5 = local_28[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
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
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


