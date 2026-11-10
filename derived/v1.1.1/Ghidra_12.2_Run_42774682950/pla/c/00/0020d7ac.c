/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020d7ac; name: FUN_0020d7ac
 */


void FUN_0020d7ac(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  lVar2 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = lVar2;
  *param_1 = lVar1;
  param_1[3] = *(long *)(*param_2 + 0x10);
  param_1[5] = *(long *)(*param_2 + 0x18);
  param_1[4] = *(long *)(param_2[1] + 0x10);
  param_1[6] = *(long *)(param_2[1] + 0x18);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)((long)param_2 + 0x14);
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  FUN_00210460(*param_1);
  FUN_00210460(param_1[1]);
  return;
}


