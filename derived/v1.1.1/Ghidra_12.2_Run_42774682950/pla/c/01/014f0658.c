/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014f0658; name: FUN_014f0658
 */


void FUN_014f0658(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN_02c628dc(*(undefined8 *)(param_1 + 0x10));
  FUN_0283b11c(uVar1,param_1 + 0x90,uVar2 & 1);
  return;
}


