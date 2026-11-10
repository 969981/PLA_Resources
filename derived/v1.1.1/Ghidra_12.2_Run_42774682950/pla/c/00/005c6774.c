/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c6774; name: FUN_005c6774
 */


void FUN_005c6774(void *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  *(undefined8 *)((long)param_1 + 0x88) = param_4;
  memcpy(param_1,param_2,param_3);
  *(int *)((long)param_1 + 0x80) = (int)param_3;
  return;
}


