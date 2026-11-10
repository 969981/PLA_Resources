/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00851724; name: thunk_FUN_00840e8c
 */


void thunk_FUN_00840e8c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  *(undefined2 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_0081a800(puVar1);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}


