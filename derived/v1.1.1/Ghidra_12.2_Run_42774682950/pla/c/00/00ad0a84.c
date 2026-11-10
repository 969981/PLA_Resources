/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ad0a84; name: FUN_00ad0a84
 */


void FUN_00ad0a84(long param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  
  FUN_008c4b3c(param_1 + 0x330);
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x348) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_2 + 0x20);
  plVar4 = *(long **)(param_2 + 0x28);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar2 = *(long **)(param_1 + 0x358);
  *(long **)(param_1 + 0x358) = plVar4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar1 = *(undefined4 *)(param_2 + 0x5f);
  *(undefined8 *)(param_1 + 0x378) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x388) = uVar3;
  *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x360) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x38f) = uVar1;
  *(undefined1 *)(param_1 + 0x3a0) = 1;
  *(undefined8 *)(param_1 + 0x380) = uVar3;
  return;
}


