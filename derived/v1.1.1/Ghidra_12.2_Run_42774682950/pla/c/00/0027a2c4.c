/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027a2c4; name: FUN_0027a2c4
 */


undefined8 FUN_0027a2c4(undefined1 *param_1,long param_2,uint param_3)

{
  *(undefined8 *)(param_1 + 8) =
       *(undefined8 *)(*(long *)(param_2 + *(long *)(PTR_DAT_04372850 + (ulong)param_3 * 8)) + 0x68)
  ;
  *param_1 = 1;
  return 1;
}


