/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d30e34; name: FUN_01d30e34
 */


void FUN_01d30e34(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_2 + 0x38);
  puVar1 = (undefined8 *)(**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,0x20,8);
  if (puVar1 == (undefined8 *)0x0) {
    (**(code **)(*(long *)*puVar2 + 0xb8))();
  }
  *param_1 = puVar1;
  param_1[1] = puVar2;
  FUN_01d30ec8(puVar2,puVar1 + 2,param_4,param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  return;
}


