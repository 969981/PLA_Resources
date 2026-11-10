/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00844598; name: FUN_00844598
 */


long * FUN_00844598(long *param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x19) = *param_2;
  (**(code **)(*param_1 + 0x78))();
  return param_1 + 0x1b;
}


