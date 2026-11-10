/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f9330; name: FUN_032f9330
 */


void FUN_032f9330(undefined8 *param_1,undefined1 param_2,undefined2 param_3,undefined8 param_4,
                 undefined2 param_5,undefined8 param_6)

{
  *(undefined1 *)(param_1 + 1) = param_2;
  *(undefined2 *)((long)param_1 + 10) = param_5;
  *(undefined2 *)((long)param_1 + 0xc) = param_3;
  *param_1 = &PTR_LAB_0434d5a0;
  param_1[4] = param_4;
  param_1[2] = 0;
  param_1[3] = param_6;
  return;
}


