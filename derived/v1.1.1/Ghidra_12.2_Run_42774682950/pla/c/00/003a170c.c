/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a170c; name: FUN_003a170c
 */


undefined8 FUN_003a170c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_003a174c();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_0031e604(param_4,**(undefined8 **)(param_1 + 8));
  return uVar2;
}


