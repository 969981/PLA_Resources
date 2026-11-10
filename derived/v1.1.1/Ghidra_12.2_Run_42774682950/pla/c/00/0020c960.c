/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020c960; name: FUN_0020c960
 */


void FUN_0020c960(undefined8 *param_1,undefined1 param_2,undefined8 *param_3)

{
  *param_1 = 8;
  *(undefined1 *)((long)param_1 + 0xc) = 6;
  *(undefined1 *)((long)param_1 + 0xd) = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  if (param_3 == (undefined8 *)0x0) {
    param_1[2] = 0;
    return;
  }
  param_1[2] = *param_3;
  return;
}


