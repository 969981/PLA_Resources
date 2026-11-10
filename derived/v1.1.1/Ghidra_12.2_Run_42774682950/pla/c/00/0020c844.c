/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020c844; name: FUN_0020c844
 */


void FUN_0020c844(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                 undefined4 param_5)

{
  *param_1 = param_2;
  *(undefined1 *)((long)param_1 + 0xc) = param_3;
  *(undefined1 *)((long)param_1 + 0xd) = param_4;
  *(undefined4 *)(param_1 + 1) = param_5;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  return;
}


