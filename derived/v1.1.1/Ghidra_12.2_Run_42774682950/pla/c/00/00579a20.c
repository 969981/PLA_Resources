/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00579a20; name: FUN_00579a20
 */


void FUN_00579a20(void *param_1,undefined4 param_2,undefined8 param_3)

{
  memset(param_1,0,0x1028);
  *(undefined4 *)((long)param_1 + 4) = param_2;
  *(undefined8 *)((long)param_1 + 8) = param_3;
  *(undefined8 *)((long)param_1 + 0x1028) = 2;
  return;
}


