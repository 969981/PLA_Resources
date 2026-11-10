/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea50d8; name: FUN_02ea50d8
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_02ea50d8(ulong *param_1,ulong *param_2)

{
  if ((ulong *)*param_1 != param_2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_2;
  if ((ulong *)param_1[1] == param_2) {
    param_1[1] = 0;
  }
  if ((param_2 < (ulong *)param_1[3]) ||
     ((ulong *)param_1[3] + (ulong)(uint)param_1[4] * 4 <= param_2)) {
    (*DAT_0442d150)(0);
  }
  else {
    *param_2 = param_1[2];
    param_1[2] = (ulong)param_2;
  }
  *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + -1;
  return;
}


