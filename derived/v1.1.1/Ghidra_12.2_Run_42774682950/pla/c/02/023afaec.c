/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023afaec; name: FUN_023afaec
 */


undefined8 FUN_023afaec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_023a6e90();
  uVar2 = FUN_023afa30(param_2,uVar1);
  uVar1 = param_1;
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_020bd79c();
    uVar2 = FUN_023afa30(param_2,uVar1);
    uVar1 = 0;
    if ((uVar2 & 1) == 0) {
      uVar1 = param_1;
    }
  }
  return uVar1;
}


