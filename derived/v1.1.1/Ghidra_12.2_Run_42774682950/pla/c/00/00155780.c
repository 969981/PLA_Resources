/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00155780; name: FUN_00155780
 */


undefined8 FUN_00155780(undefined8 param_1)

{
  undefined8 uVar1;
  int local_24;
  
  FUN_00153430();
  uVar1 = FUN_00150ba0(param_1,0xffffffff,&local_24);
  if (local_24 == 0) {
    FUN_00154110(param_1,"object length is not an integer");
  }
  FUN_0014ff10(param_1,0xfffffffe);
  return uVar1;
}


