/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a9a4d8; name: FUN_01a9a4d8
 */


void FUN_01a9a4d8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0xa80) + 0x10))
                             (*(long **)(param_1 + 0xa80),0x20,8);
  if (plVar1 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa80) + 0xb8))();
  }
  *plVar1 = 0;
  FUN_01aa8008((undefined8 *)(param_1 + 0xa80),plVar1 + 2,param_2);
  plVar1[1] = param_1 + 0xa68;
  lVar2 = *(long *)(param_1 + 0xa68);
  *plVar1 = lVar2;
  *(long **)(lVar2 + 8) = plVar1;
  *(long **)(param_1 + 0xa68) = plVar1;
  *(long *)(param_1 + 0xa78) = *(long *)(param_1 + 0xa78) + 1;
  return;
}


