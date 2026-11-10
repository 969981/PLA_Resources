/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03328dc8; name: FUN_03328dc8
 */


ulong FUN_03328dc8(undefined8 param_1,void *param_2,int param_3,int param_4)

{
  uint uVar1;
  ulong auStack_440 [128];
  
  if (0x7f < param_3) {
    param_3 = 0x80;
  }
  uVar1 = nn::diag::GetBacktrace(auStack_440,param_3);
  if (0 < (int)uVar1) {
    memcpy(param_2,auStack_440 + param_4,(ulong)uVar1 << 3);
  }
  return (ulong)uVar1;
}


