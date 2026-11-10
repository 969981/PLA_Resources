/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112b060; name: FUN_0112b060
 */


void FUN_0112b060(long param_1)

{
  ulong uVar1;
  time_t local_f8;
  undefined1 auStack_f0 [208];
  undefined8 local_18;
  
  uVar1 = nn::time::IsInitialized();
  if ((uVar1 & 1) == 0) {
    nn::time::Initialize();
  }
  memset((void *)(param_1 + 0x118),0,0x134);
  local_18 = FUN_02a404f0();
  local_f8 = FUN_02a4056c(&local_18);
  localtime_r(&local_f8,(tm *)(param_1 + 0x120));
  *(time_t *)(param_1 + 0x160) = local_f8;
  FUN_02a401e0(auStack_f0);
  memcpy((void *)(param_1 + 0x178),auStack_f0,0xd0);
  return;
}


