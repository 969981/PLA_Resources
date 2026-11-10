/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010fc128; name: FUN_010fc128
 */


void FUN_010fc128(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_2 + 0x10);
  lVar1 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,0x28,8);
  if (lVar1 == 0) {
    (**(code **)(*(long *)*puVar2 + 0xb8))((long *)*puVar2);
  }
  *param_1 = lVar1;
  param_1[1] = (long)puVar2;
  FUN_010fc1ac(puVar2,lVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


