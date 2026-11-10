/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280b204; name: FUN_0280b204
 */


void FUN_0280b204(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x510) = param_4;
  *(undefined1 *)(param_1 + 0x701) = 0;
  *(undefined1 *)(param_1 + 0x6ff) = 0;
  *(undefined4 *)(param_1 + 0xf0) = param_3;
  FUN_0280a9e0();
  FUN_0280ace8(param_1);
  FUN_0280b258(param_1,param_2);
  *(undefined4 *)(param_1 + 0x500) = 1;
  *(undefined1 *)(param_1 + 0xa1) = 1;
  return;
}


