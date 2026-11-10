/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02851328; name: FUN_02851328
 */


void FUN_02851328(long param_1,undefined8 *param_2,uint param_3)

{
  *(undefined4 *)(param_1 + 0x88) = 1;
  *(undefined8 *)(param_1 + 0x98) = param_2[1];
  *(undefined8 *)(param_1 + 0x90) = *param_2;
  FUN_02850e64(param_1,param_3 & 1);
  return;
}


