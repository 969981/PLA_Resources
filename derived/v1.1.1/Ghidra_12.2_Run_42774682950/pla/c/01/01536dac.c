/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01536dac; name: FUN_01536dac
 */


void FUN_01536dac(long param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  memcpy((void *)(param_2 + 0x100),*(void **)(param_2 + 0x90),0x100);
  FUN_01559fc0(&local_60,(void *)(param_2 + 0x100));
  plVar2 = *(long **)(param_1 + 0x480);
  *(undefined8 *)(param_1 + 0x480) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_60;
  local_60 = (long *)0x0;
  *(long **)(param_1 + 0x480) = plVar2;
  *(undefined8 *)(param_1 + 0x488) = local_58;
  *(undefined8 *)(param_1 + 0x490) = local_50;
  plVar2 = *(long **)(param_1 + 0x4a0);
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  *(undefined8 *)(param_1 + 0x498) = local_48;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_40;
  local_40 = 0;
  *(undefined8 *)(param_1 + 0x4a0) = uVar1;
  *(undefined4 *)(param_1 + 0x4a8) = local_38;
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  lVar3 = *(long *)(param_2 + 0x90);
  *(long *)(param_2 + 0x90) = lVar3 + 0x100;
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(lVar3 + 0x100);
  *(long *)(param_2 + 0x90) = *(long *)(param_2 + 0x90) + 4;
  return;
}


