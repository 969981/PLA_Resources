/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020c7ac; name: FUN_0020c7ac
 */


void FUN_0020c7ac(long param_1,int *param_2)

{
  FUN_00205718(param_1,*param_2 << 8);
  *(char *)(param_1 + 3) = (char)param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)((long)param_2 + 0xd);
  FUN_00205718(param_1 + 5,param_2[2]);
  return;
}


