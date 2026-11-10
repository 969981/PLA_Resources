/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283c244; name: FUN_0283c244
 */


void FUN_0283c244(long param_1,undefined8 *param_2,long *param_3,byte param_4)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  byte local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  local_70 = *param_2;
  local_68 = param_2[1];
  local_60 = param_2[2];
  local_58 = (long *)param_2[3];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  local_50 = (long *)*param_3;
  *param_3 = 0;
  uVar2 = *(ulong *)(param_1 + 0xa0);
  local_48 = param_4 & 1;
  if (uVar2 < *(ulong *)(param_1 + 0xa8)) {
    FUN_0283dafc(param_1 + 0x78,*(long *)(param_1 + 0x98) + uVar2 * 0x30,&local_70);
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
  }
  else {
    local_38 = *(long *)(param_1 + 0x98) + uVar2 * 0x30;
    FUN_0283e338(auStack_40,param_1 + 0x78,&local_38,1,&local_70);
  }
  if (local_50 != (long *)0x0) {
    plVar1 = local_50 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


