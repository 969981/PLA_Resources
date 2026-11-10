/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0159bea0; name: FUN_0159bea0
 */


void FUN_0159bea0(long param_1,undefined8 *param_2,uint param_3)

{
  *param_2 = **(undefined8 **)(param_1 + 0x90);
  if ((param_3 & 1) != 0) {
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 8;
  }
  return;
}


