/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f8588; name: FUN_001f8588
 */


undefined8 * FUN_001f8588(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)FUN_002044c4(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_2;
    puVar1[1] = 0;
    if (param_1 != (undefined8 *)0x0) {
      puVar3 = param_1;
      do {
        puVar2 = puVar3;
        puVar3 = (undefined8 *)puVar2[1];
      } while (puVar3 != (undefined8 *)0x0);
      puVar2[1] = puVar1;
      puVar1 = param_1;
    }
  }
  return puVar1;
}


