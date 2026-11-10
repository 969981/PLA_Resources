/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00153500; name: FUN_00153500
 */


undefined8 FUN_00153500(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
  }
  return **(undefined8 **)(param_1 + 0x18);
}


