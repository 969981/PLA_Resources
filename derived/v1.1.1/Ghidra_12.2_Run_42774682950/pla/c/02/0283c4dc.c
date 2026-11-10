/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283c4dc; name: FUN_0283c4dc
 */


void FUN_0283c4dc(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  local_70 = *param_2;
  local_68 = param_2[1];
  local_60 = param_2[2];
  local_58 = (long *)param_2[3];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  uVar1 = *(ulong *)(param_1 + 0x150);
  local_50 = param_3;
  uStack_48 = param_4;
  if (uVar1 < *(ulong *)(param_1 + 0x158)) {
    FUN_0283dcf4(param_1 + 0x128,*(long *)(param_1 + 0x148) + uVar1 * 0x30,&local_70);
    *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x150) + 1;
  }
  else {
    local_38 = *(long *)(param_1 + 0x148) + uVar1 * 0x30;
    FUN_0283eaec(auStack_40,param_1 + 0x128,&local_38,1,&local_70);
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


