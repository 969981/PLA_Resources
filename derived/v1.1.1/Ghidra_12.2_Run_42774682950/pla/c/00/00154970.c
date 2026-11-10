/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00154970; name: FUN_00154970
 */


void FUN_00154970(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00150310();
  if (iVar1 == param_3) {
    return;
  }
  uVar2 = FUN_001503f0(param_1,param_3);
  FUN_00154670(param_1,param_2,uVar2);
  return;
}


