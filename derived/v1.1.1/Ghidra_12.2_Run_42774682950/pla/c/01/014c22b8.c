/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c22b8; name: FUN_014c22b8
 */


void FUN_014c22b8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x5c8) + 0x10))();
  FUN_014c2324(param_1,uVar1);
  uVar2 = FUN_02c62900(uVar1,2);
  if ((uVar2 & 1) == 0) {
    FUN_014c2a7c(param_1,uVar1);
    FUN_014c2afc(param_1,uVar1);
  }
  FUN_014c38ac(param_1,uVar1);
  return;
}


