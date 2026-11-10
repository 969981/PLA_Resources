/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00435070; name: FUN_00435070
 */


bool FUN_00435070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  FUN_0040e090(param_5);
  lVar3 = FUN_0040e240(param_5);
  if ((lVar3 == 0) || (iVar2 = FUN_004348d0(lVar3,param_3,param_4,param_5), iVar2 == 0)) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_00434750(param_1,param_2,lVar3,param_4,param_5);
    bVar1 = iVar2 != 0;
  }
  FUN_0040e1b0(param_5);
  return bVar1;
}


