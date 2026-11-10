/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004648f0; name: FUN_004648f0
 */


undefined8 FUN_004648f0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00446bc0(param_1 + 0x88,param_1 + 0x20);
  if (iVar1 == 0) {
    uVar2 = FUN_00465e40(PTR_DAT_04374458,param_1 + 0x88,param_1 + 0x98,param_1,param_2);
    return uVar2;
  }
  return 0;
}


