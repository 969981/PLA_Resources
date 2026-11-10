/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014624fc; name: FUN_014624fc
 */


void FUN_014624fc(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0xb8) = param_2[1];
  *(undefined8 *)(param_1 + 0xb0) = *param_2;
  FUN_014621d8();
  return;
}


