/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f110c; name: FUN_007f110c
 */


void FUN_007f110c(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong local_18;
  
  uVar1 = (param_2 & 0xff00ff00ff00ff00) >> 8 | (param_2 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  local_18 = uVar1 >> 0x20 | uVar1 << 0x20;
  memcpy((void *)(param_1 + 8),&DAT_03a720a1,8);
  memcpy((void *)(param_1 + 0x10),&local_18,8);
  return;
}


