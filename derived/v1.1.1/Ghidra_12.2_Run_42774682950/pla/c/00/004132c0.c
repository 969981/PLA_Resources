/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004132c0; name: FUN_004132c0
 */


undefined8 FUN_004132c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00410400();
  if ((int)uVar2 != 0) {
    iVar1 = FUN_0040cc60(param_1,param_3);
    if (-1 < iVar1) {
      uVar2 = FUN_00411b00(param_1,param_1,param_3);
      return uVar2;
    }
    uVar2 = 1;
  }
  return uVar2;
}


