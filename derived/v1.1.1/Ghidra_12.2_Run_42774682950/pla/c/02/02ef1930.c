/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef1930; name: FUN_02ef1930
 */


void FUN_02ef1930(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  
  puVar1 = param_1;
  if ((ulong *)*param_1 != param_2) {
    puVar1 = param_3;
  }
  *puVar1 = *param_2;
  if ((ulong *)param_1[1] == param_2) {
    param_1[1] = (ulong)param_3;
  }
  if ((param_2 < (ulong *)param_1[3]) ||
     ((ulong *)param_1[3] + (ulong)(uint)param_1[4] * 2 <= param_2)) {
    (*DAT_0442d150)(0);
  }
  else {
    *param_2 = param_1[2];
    param_1[2] = (ulong)param_2;
  }
  *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + -1;
  return;
}


