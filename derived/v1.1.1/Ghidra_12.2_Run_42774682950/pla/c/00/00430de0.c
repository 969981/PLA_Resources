/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00430de0; name: FUN_00430de0
 */


long FUN_00430de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  
  FUN_004331c0();
  lVar2 = FUN_0042d990();
  if ((lVar2 != 0) && (iVar1 = FUN_0042e500(lVar2,param_1,param_2,param_3,param_4), iVar1 == 0)) {
    FUN_0042dbc0(lVar2);
    lVar2 = 0;
  }
  return lVar2;
}


