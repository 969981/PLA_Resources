/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02624854; name: FUN_02624854
 */


uint FUN_02624854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_02624ac8(param_2);
  uVar1 = FUN_02624a98(param_1,uVar2,param_3);
  return uVar1 & 1;
}


