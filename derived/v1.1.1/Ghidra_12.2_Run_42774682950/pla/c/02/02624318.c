/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02624318; name: FUN_02624318
 */


uint FUN_02624318(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  FUN_02624358(param_1 + 0x68,*(undefined4 *)(param_1 + 0x78));
  uVar2 = FUN_026240f4();
  uVar1 = FUN_02624398(uVar2,param_2);
  return uVar1 & 1;
}


