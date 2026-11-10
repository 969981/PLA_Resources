/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00160170; name: FUN_00160170
 */


void FUN_00160170(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_001545d0(param_1,1,"FILE*");
  if (puVar2[1] == 0) {
    FUN_00154110(param_1,"attempt to use a closed file");
  }
  iVar1 = fflush((FILE *)*puVar2);
  FUN_001543b0(param_1,iVar1 == 0,0);
  return;
}


