/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00162a50; name: FUN_00162a50
 */


void FUN_00162a50(undefined8 param_1,double *param_2)

{
  int iVar1;
  size_t sVar2;
  lconv *plVar3;
  double dVar4;
  long lVar5;
  long lVar6;
  char acStack_64 [52];
  
  if (*(int *)(param_2 + 1) == 0x13) {
    iVar1 = snprintf(acStack_64,0x32,"%lld",*param_2);
    lVar6 = (long)iVar1;
  }
  else {
    iVar1 = snprintf(acStack_64,0x32,"%.14g",*param_2);
    lVar5 = (long)iVar1;
    sVar2 = strspn(acStack_64,"-0123456789");
    lVar6 = lVar5;
    if (acStack_64[sVar2] == '\0') {
      plVar3 = localeconv();
      lVar6 = lVar5 + 2;
      acStack_64[lVar5] = *plVar3->decimal_point;
      acStack_64[lVar5 + 1] = '0';
    }
  }
  dVar4 = (double)FUN_0016d720(param_1,acStack_64,lVar6);
  *param_2 = dVar4;
  *(uint *)(param_2 + 1) = *(byte *)((long)dVar4 + 8) | 0x40;
  return;
}


