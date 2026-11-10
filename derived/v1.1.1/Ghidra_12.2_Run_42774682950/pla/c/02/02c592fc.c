/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c592fc; name: FUN_02c592fc
 */


void FUN_02c592fc(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0xa8);
  plVar1 = (long *)(**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,0x20,8);
  if (plVar1 == (long *)0x0) {
    (**(code **)(*(long *)*puVar3 + 0xb8))();
  }
  *plVar1 = 0;
  FUN_02c59914(puVar3,plVar1 + 2,param_2);
  plVar1[1] = param_1 + 0x90;
  lVar2 = *(long *)(param_1 + 0x90);
  *plVar1 = lVar2;
  *(long **)(lVar2 + 8) = plVar1;
  *(long **)(param_1 + 0x90) = plVar1;
  *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
  return;
}


