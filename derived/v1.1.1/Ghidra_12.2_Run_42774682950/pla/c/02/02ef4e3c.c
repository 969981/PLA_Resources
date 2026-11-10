/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef4e3c; name: FUN_02ef4e3c
 */


void FUN_02ef4e3c(undefined8 *param_1)

{
  ushort uVar1;
  
  *param_1 = &PTR_FUN_042ab3a0;
  param_1[6] = &PTR_FUN_042ab6a0;
  uVar1 = *(ushort *)((long)param_1 + 0xd4);
  param_1[3] = &PTR_LAB_042ab608;
  if (((uVar1 & 0x7c) == 4) && (param_1[0x1b] != 0)) {
    FUN_02f59e60(0);
    param_1[0x1b] = 0;
    uVar1 = *(ushort *)((long)param_1 + 0xd4);
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x19] = 0xffffffff00000000;
  param_1[0x1b] = 0;
  *(ushort *)((long)param_1 + 0xd4) = uVar1 & 0xf800;
  FUN_02ecfe78();
  return;
}


