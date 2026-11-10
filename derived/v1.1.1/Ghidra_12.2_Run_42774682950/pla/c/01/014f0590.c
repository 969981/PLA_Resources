/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014f0590; name: FUN_014f0590
 */


void FUN_014f0590(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_0283b1e8(*(undefined8 *)(param_1 + 8),param_1 + 0xf0);
  uVar1 = *(undefined8 *)(param_1 + 8);
  iVar2 = FUN_01090c00(*(undefined8 *)(param_1 + 0x10));
  FUN_0283b748((float)iVar2,uVar1,param_1 + 0xf0);
  return;
}


