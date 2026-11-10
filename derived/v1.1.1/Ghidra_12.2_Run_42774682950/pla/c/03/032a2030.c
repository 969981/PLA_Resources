/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a2030; name: FUN_032a2030
 */


void FUN_032a2030(long param_1,int param_2,long *param_3)

{
  *param_3 = *(long *)(param_1 + 0x1a0) + (long)*(int *)(param_1 + (long)param_2 * 4 + 0x11c);
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined8 *)((long)param_3 + 0xc) = *(undefined8 *)(param_1 + (long)param_2 * 8 + 0x18);
  return;
}


