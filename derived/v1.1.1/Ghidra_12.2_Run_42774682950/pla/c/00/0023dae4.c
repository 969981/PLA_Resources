/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023dae4; name: FUN_0023dae4
 */


void FUN_0023dae4(long param_1,undefined8 param_2)

{
  FUN_0023cf9c();
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_00232674();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  FUN_0023d944(param_1,param_2);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00232674();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if ((*(byte *)(param_1 + 0x49) >> 5 & 1) != 0) {
    FUN_00232674(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


