/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01090780; name: FUN_01090780
 */


void FUN_01090780(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_02c5d92c(param_1,7);
  uVar2 = FUN_02c5d92c(param_1,4);
  uVar3 = FUN_02c5d92c(param_1,5);
  uVar4 = FUN_02c5d92c(param_1,6);
  FUN_02c82e7c(*(undefined8 *)(param_1 + 0x98),uVar1);
  FUN_02c81afc(*(undefined8 *)(param_1 + 0x98),uVar2 % 100);
  FUN_02c81e3c(*(undefined8 *)(param_1 + 0x98),uVar3);
  FUN_02c8217c(*(undefined8 *)(param_1 + 0x98),uVar4);
  return;
}


