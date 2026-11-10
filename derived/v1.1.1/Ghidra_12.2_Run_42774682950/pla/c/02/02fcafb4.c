/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fcafb4; name: FUN_02fcafb4
 */


void FUN_02fcafb4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[1] = 0x8000000000000000;
  if (*(int *)((long)param_2 + 0xc) < 0) {
    FUN_032bcf84(PTR_PTR_0434a080,param_2,4);
  }
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = param_2[2];
  return;
}


