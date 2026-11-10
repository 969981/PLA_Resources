/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022d778; name: FUN_0022d778
 */


void FUN_0022d778(long param_1,undefined8 param_2)

{
  FUN_008779b0(param_2,1,param_1 + 0xf8,*(undefined8 *)(param_1 + 0x150));
  FUN_00878230(param_2,0,1,param_1 + 0x130);
  FUN_00878160(param_2,0,1,param_1 + 0x100);
  if (*(long *)(param_1 + 0x158) != 0) {
    FUN_0087782c(param_2);
  }
  if (*(long *)(param_1 + 0x160) == 0) {
    return;
  }
  FUN_0087768c(param_2);
  return;
}


