/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010cae4c; name: FUN_010cae4c
 */


void FUN_010cae4c(undefined8 *param_1)

{
  FUN_010caeb4();
  *param_1 = &PTR_LAB_041f0430;
  param_1[9] = &PTR_LAB_041f0460;
  *(undefined4 *)(param_1 + 0xd) = 1;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  param_1[0xe] = &DAT_cbf29ce484222645;
  param_1[0xc] = 0;
  return;
}


