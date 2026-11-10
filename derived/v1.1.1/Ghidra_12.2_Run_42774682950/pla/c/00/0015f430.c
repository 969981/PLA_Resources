/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015f430; name: FUN_0015f430
 */


void FUN_0015f430(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  char *__filename;
  undefined8 *puVar2;
  FILE *pFVar3;
  int *piVar4;
  char *pcVar5;
  long lVar6;
  
  iVar1 = FUN_00150310(param_1,1);
  if (0 < iVar1) {
    __filename = (char *)FUN_00150da0(param_1,1,0);
    if (__filename == (char *)0x0) {
      lVar6 = FUN_001545d0(param_1,1,"FILE*");
      if (*(long *)(lVar6 + 8) == 0) {
        FUN_00154110(param_1,"attempt to use a closed file");
      }
      FUN_00150260(param_1,1);
    }
    else {
      puVar2 = (undefined8 *)FUN_00153520(param_1,0x10);
      puVar2[1] = 0;
      FUN_00154500(param_1,"FILE*");
      *puVar2 = 0;
      puVar2[1] = &LAB_0015f560;
      pFVar3 = fopen(__filename,param_3);
      *puVar2 = pFVar3;
      if (pFVar3 == (FILE *)0x0) {
        piVar4 = __errno_location();
        pcVar5 = strerror(*piVar4);
        FUN_00154110(param_1,"cannot open file \'%s\' (%s)",__filename,pcVar5);
      }
    }
    FUN_00152550(param_1,0xfff0b9d8,param_2);
  }
  FUN_00151a70(param_1,0xfff0b9d8,param_2);
  return;
}


