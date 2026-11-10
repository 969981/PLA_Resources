/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0278c730; name: FUN_0278c730
 */


ulong FUN_0278c730(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((*(int *)(param_2 + 8) == 1) && (uVar1 = FUN_0278b3b0(param_2,2), (uVar1 & 1) != 0)) {
    FUN_02787bdc(param_1);
    uVar1 = (ulong)*(uint *)(param_2 + 0x50) << 0x20;
    uVar2 = 1;
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
  }
  return uVar2 | uVar1;
}


