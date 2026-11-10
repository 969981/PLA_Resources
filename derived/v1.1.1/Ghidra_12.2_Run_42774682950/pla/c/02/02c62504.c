/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c62504; name: FUN_02c62504
 */


undefined4 FUN_02c62504(long param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_02c6fc70(*(undefined8 *)(param_1 + 0x98));
  return *(undefined4 *)(&UNK_03a84fe8 + (ulong)param_2 * 4 + (uVar1 & 0xffffffff) * 0x18);
}


