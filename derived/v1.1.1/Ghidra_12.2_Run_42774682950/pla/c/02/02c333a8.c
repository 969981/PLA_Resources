/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c333a8; name: FUN_02c333a8
 */


void FUN_02c333a8(long param_1,long param_2,undefined8 param_3)

{
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  FUN_02c33414(param_1,param_3);
  if (*(char *)(param_2 + 0x7c) != '\0') {
    **(undefined2 **)(param_2 + 0x58) = 0;
    *(undefined2 *)(param_2 + 0x7a) = 0;
  }
  FUN_02c338a4(param_1,param_2,param_3,0,0);
  return;
}


