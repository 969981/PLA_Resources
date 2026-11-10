/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080f4b4; name: FUN_0080f4b4
 */


void FUN_0080f4b4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x11d8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_0081a800(puVar1);
    *(undefined8 *)(param_1 + 0x11d8) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x11d0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_0081a800(puVar1);
    *(undefined8 *)(param_1 + 0x11d0) = 0;
  }
  FUN_007f5270(param_1);
  return;
}


