/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e44b70; name: FUN_02e44b70
 */


void FUN_02e44b70(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  *(undefined1 *)((long)param_1 + 0x15) = *(undefined1 *)((long)param_2 + 0x15);
  FUN_02e44c8c(param_1 + 3,param_2 + 3);
  FUN_02e44cec(param_1 + 5,param_2 + 5);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  FUN_02e44bd8(param_1 + 8,param_2 + 8);
  return;
}


