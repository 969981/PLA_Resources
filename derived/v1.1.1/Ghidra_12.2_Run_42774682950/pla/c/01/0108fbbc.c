/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108fbbc; name: FUN_0108fbbc
 */


bool FUN_0108fbbc(undefined8 param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_02c5be58();
  if (param_2 < (uVar2 & 0xff)) {
    uVar2 = FUN_02c601d4(param_1,param_2);
    uVar3 = FUN_02c602a0(param_1,param_2);
    bVar1 = uVar2 < uVar3;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


