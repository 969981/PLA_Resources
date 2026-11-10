/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f86a8; name: FUN_001f86a8
 */


void FUN_001f86a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    do {
      puVar1 = (undefined8 *)param_1[1];
      FUN_002044d4(*param_1);
      *param_1 = 0;
      FUN_002044d4(param_1);
      param_1 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


