/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e6548; name: FUN_032e6548
 */


undefined4 FUN_032e6548(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = FUN_032e225c(*(undefined8 *)(param_2 + 8),param_1[1]);
  if ((uVar2 & 1) == 0) {
    uVar1 = 0x80040200;
  }
  else {
    uVar1 = (**(code **)(*(long *)(param_1[2] & 0xfffffffffffffffe) + 0x48))
                      ((long *)(param_1[2] & 0xfffffffffffffffe),*param_1,param_1[1],param_2);
  }
  return uVar1;
}


