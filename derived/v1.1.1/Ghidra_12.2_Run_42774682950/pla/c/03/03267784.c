/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03267784; name: FUN_03267784
 */


void FUN_03267784(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 2) = 0x3f860a92;
  FUN_03269eb8((long)param_1 + 0x14);
  FUN_0326a09c(param_1 + 10);
  return;
}


