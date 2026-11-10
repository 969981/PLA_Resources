/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f08264; name: FUN_02f08264
 */


void FUN_02f08264(long *param_1)

{
  long lVar1;
  
  if (param_1[2] == 0) {
    lVar1 = param_1[4];
  }
  else {
    *(undefined4 *)(param_1 + 3) = 0;
    FUN_02f59e60(0);
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
    lVar1 = param_1[4];
  }
  if (lVar1 == 0) {
    lVar1 = *param_1;
  }
  else {
    *(undefined4 *)(param_1 + 5) = 0;
    FUN_02f59e60(0);
    param_1[4] = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_02f59e60(0);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return;
}


