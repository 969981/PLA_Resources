/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283c120; name: FUN_0283c120
 */


void FUN_0283c120(long param_1,undefined8 *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long *local_48;
  long *local_40;
  undefined1 auStack_38 [8];
  long local_28;
  
  local_60 = *param_2;
  local_58 = param_2[1];
  local_50 = param_2[2];
  local_48 = (long *)param_2[3];
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  local_40 = (long *)*param_3;
  *param_3 = 0;
  uVar3 = *(ulong *)(param_1 + 0xf8);
  if (uVar3 < *(ulong *)(param_1 + 0x100)) {
    FUN_0283dbfc(param_1 + 0xd0,*(long *)(param_1 + 0xf0) + uVar3 * 0x28,&local_60);
    *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + 1;
  }
  else {
    local_28 = *(long *)(param_1 + 0xf0) + uVar3 * 0x28;
    FUN_0283dee8(auStack_38,param_1 + 0xd0,&local_28,1,&local_60);
  }
  if (local_40 != (long *)0x0) {
    lVar6 = local_40[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
    }
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


