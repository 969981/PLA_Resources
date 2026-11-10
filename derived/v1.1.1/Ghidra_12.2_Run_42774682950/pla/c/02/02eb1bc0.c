/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb1bc0; name: FUN_02eb1bc0
 */


void FUN_02eb1bc0(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  *param_1 = 0;
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    FUN_02f59e60(0);
    param_1[1] = 0;
    *(undefined4 *)((long)param_1 + 0x14) = 0;
  }
  FUN_02f59e60(2,param_1);
  return;
}


