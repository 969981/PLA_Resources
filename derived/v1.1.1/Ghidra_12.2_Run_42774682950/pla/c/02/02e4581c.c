/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4581c; name: FUN_02e4581c
 */


undefined8 FUN_02e4581c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_02e452b8(param_1,param_3);
  if (lVar1 == 0) {
    uVar2 = 0x34;
  }
  else {
    uVar2 = 1;
    FUN_02e45864(param_2,lVar1,1);
  }
  return uVar2;
}


