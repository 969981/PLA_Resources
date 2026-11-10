/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01196838; name: FUN_01196838
 */


undefined8 FUN_01196838(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_011945c8();
  uVar2 = FUN_0118ff80();
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_0119047c(uVar1,param_2);
    return uVar1;
  }
  return 0;
}


