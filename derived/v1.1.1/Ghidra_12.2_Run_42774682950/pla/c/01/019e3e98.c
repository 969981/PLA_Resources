/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019e3e98; name: FUN_019e3e98
 */


void FUN_019e3e98(long param_1,void *param_2)

{
  long *plVar1;
  long *plVar2;
  
  memcpy((void *)(param_1 + 0x1f0),param_2,0x8e);
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)((long)param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)((long)param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)((long)param_2 + 0xa0);
  plVar2 = *(long **)((long)param_2 + 0xa8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x298);
  *(long **)(param_1 + 0x298) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)((long)param_2 + 0xb0);
  return;
}


