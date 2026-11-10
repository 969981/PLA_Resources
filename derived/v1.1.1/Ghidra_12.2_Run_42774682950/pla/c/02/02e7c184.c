/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7c184; name: FUN_02e7c184
 */


undefined4 FUN_02e7c184(long *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x28))();
  uVar2 = 1;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  return uVar2;
}


