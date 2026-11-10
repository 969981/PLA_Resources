/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c99a0; name: FUN_004c99a0
 */


void FUN_004c99a0(long param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,
                 undefined4 param_6)

{
  FUN_004014b0(0x14,param_3,param_4,param_5,param_6);
  if ((*(int *)(param_1 + 100) == 0) || (*(int *)(param_1 + 0x48) != 1)) {
    *(undefined4 *)(param_1 + 100) = 1;
    *(undefined4 *)(param_1 + 0x48) = 1;
    if ((param_2 != -1) && (*(int *)(param_1 + 0x7c) != 1)) {
      FUN_004e6030(param_1,2,param_2);
      return;
    }
  }
  return;
}


