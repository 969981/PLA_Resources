/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022d1c0; name: FUN_0022d1c0
 */


void FUN_0022d1c0(undefined8 param_1,long param_2,undefined4 *param_3,undefined4 *param_4)

{
  *(undefined4 *)(param_2 + 0x210) = *param_4;
  *(undefined4 *)(param_2 + 0x214) = param_4[1];
  *(undefined4 *)(param_2 + 0x218) = *param_3;
  *(undefined4 *)(param_2 + 0x21c) = param_3[1];
  FUN_0022d810(param_1,param_2 + 0x40);
  return;
}


