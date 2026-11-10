/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040a0c0; name: FUN_0040a0c0
 */


undefined8 FUN_0040a0c0(undefined8 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)*param_1;
  *puVar1 = 0;
  *param_1 = puVar1 + 1;
  return 2;
}


