/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ded6ec; name: FUN_02ded6ec
 */


void FUN_02ded6ec(long *param_1)

{
  FUN_02dee1b0(param_1 + 0xd);
  (**(code **)(*param_1 + 0x18))(param_1);
  if (param_1[0x1f] != 0) {
    FUN_02f59e60(5);
    param_1[0x1f] = 0;
  }
  if (param_1[0x23] != 0) {
    FUN_02f59e70(5);
    param_1[0x23] = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  FUN_02f1fb58(param_1);
  return;
}


