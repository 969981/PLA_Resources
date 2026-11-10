/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008a9b00; name: FUN_008a9b00
 */


void FUN_008a9b00(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x68) = *param_2;
  *(undefined8 *)(param_1 + 0x70) = param_2[3];
  *(undefined8 *)(param_1 + 0x78) = param_2[1];
  *(undefined8 *)(param_1 + 0x80) = param_2[2];
  return;
}


