/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c43a0; name: FUN_004c43a0
 */


undefined8 FUN_004c43a0(long param_1,int param_2)

{
  if (param_2 != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 200) == 0) {
    return *(undefined8 *)(param_1 + 0x638);
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x508) + 0x228);
}


