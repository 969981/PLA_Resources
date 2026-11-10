/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5c6dc; name: FUN_00d5c6dc
 */


void FUN_00d5c6dc(long *param_1,uint param_2)

{
  (**(code **)(*param_1 + 0x178))(param_1,param_2 & 1);
  if (((int)param_1[200] != 0) && (*(int *)((long)param_1 + 0x644) != 0)) {
    FUN_00d5c748(param_1,0);
  }
  if (((int)param_1[0xd4] == 0) || (*(int *)((long)param_1 + 0x6a4) == 0)) {
    return;
  }
  FUN_00d5c748(param_1,1);
  return;
}


