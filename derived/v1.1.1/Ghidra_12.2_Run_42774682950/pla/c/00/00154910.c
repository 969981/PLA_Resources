/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00154910; name: FUN_00154910
 */


long FUN_00154910(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00150da0();
  if (lVar1 == 0) {
    uVar2 = FUN_001503f0(param_1,4);
    FUN_00154670(param_1,param_2,uVar2);
  }
  return lVar1;
}


