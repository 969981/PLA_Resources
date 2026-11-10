/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ec82c; name: FUN_001ec82c
 */


void FUN_001ec82c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_002044d4(*puVar1);
  }
  FUN_002044d4(puVar1);
  *param_1 = 0;
  return;
}


