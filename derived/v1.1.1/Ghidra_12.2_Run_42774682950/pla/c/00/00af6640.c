/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00af6640; name: FUN_00af6640
 */


void FUN_00af6640(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                 undefined4 param_5)

{
  *(undefined1 *)(param_4 + 0x261) = 1;
  *(undefined4 *)(param_4 + 0x264) = param_1;
  *(undefined4 *)(param_4 + 0x268) = param_2;
  *(undefined4 *)(param_4 + 0x26c) = param_3;
  *(undefined4 *)(param_4 + 0x270) = 0;
  *(undefined4 *)(param_4 + 0x274) = param_5;
  return;
}


