/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008134a4; name: FUN_008134a4
 */


void FUN_008134a4(long param_1)

{
  undefined1 auStack_20 [16];
  
  FUN_007e4488(param_1 + 0x1218);
  FUN_007e4488(param_1 + 0x1238);
  *(undefined2 *)(param_1 + 0x1210) = 0;
  *(undefined1 *)(param_1 + 0x1190) = 0;
  *(undefined8 *)(param_1 + 0x12c4) = 0x9c409c40c000c000;
  *(undefined4 *)(param_1 + 0x12cc) = 0x88b888b8;
  if (0 < *(int *)(param_1 + 0x11f8)) {
    FUN_007eb8b0(auStack_20,param_1 + 0x11f4);
  }
  if (0 < *(int *)(param_1 + 0x11e4)) {
    FUN_007eb8b0(auStack_20,param_1 + 0x11e0);
  }
  if (0 < *(int *)(param_1 + 0x11d0)) {
    FUN_007eb8b0(auStack_20,param_1 + 0x11cc);
  }
  return;
}


