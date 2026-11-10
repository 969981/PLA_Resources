/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00167680; name: FUN_00167680
 */


ulong FUN_00167680(undefined8 param_1,int param_2,int param_3)

{
  ulong uVar1;
  
  if (param_3 < 0x40000) {
    uVar1 = FUN_001674a0(param_1,param_2 << 6 | param_3 << 0xe | 1);
    return uVar1;
  }
  uVar1 = FUN_001674a0(param_1,param_2 << 6 | 2);
  FUN_001674a0(param_1,param_3 << 6 | 0x2e);
  return uVar1 & 0xffffffff;
}


