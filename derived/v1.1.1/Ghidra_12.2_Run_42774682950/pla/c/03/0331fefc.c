/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331fefc; name: FUN_0331fefc
 */


void FUN_0331fefc(undefined8 *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  FUN_0332425c(param_1,0);
  *param_1 = &PTR_FUN_0434fca8;
  lVar2 = param_2 + param_3 + -0x40;
  FUN_033258f8(lVar2,param_2,param_3 + -0x40,1);
  lVar1 = param_1[1];
  if ((lVar1 == lVar2) || (param_1[1] = lVar2, lVar1 == 0)) {
    return;
  }
  FUN_032d647c();
  return;
}


