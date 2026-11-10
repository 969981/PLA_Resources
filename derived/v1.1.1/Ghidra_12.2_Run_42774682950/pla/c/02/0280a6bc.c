/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280a6bc; name: FUN_0280a6bc
 */


void FUN_0280a6bc(long param_1,uint param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x4a8) = 0;
  lVar1 = param_1 + (ulong)param_2;
  if (*(char *)(lVar1 + 0x6f8) == '\0') {
    return;
  }
  param_1 = param_1 + (ulong)param_2 * 0x20;
  *(undefined8 *)(param_1 + 0x538) = 0xc1a949029450238f;
  *(char **)(param_1 + 0x540) = "PLAY_UI_COMMON_DECIDE";
  *(undefined8 *)(param_1 + 0x548) = 0x15;
  *(undefined1 *)(lVar1 + 0x6f8) = 0;
  return;
}


