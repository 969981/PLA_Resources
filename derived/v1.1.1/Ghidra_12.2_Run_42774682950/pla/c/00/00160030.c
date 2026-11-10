/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00160030; name: FUN_00160030
 */


undefined8 FUN_00160030(undefined8 param_1,FILE *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  void *__ptr;
  size_t sVar5;
  double param2;
  size_t local_48;
  
  iVar2 = FUN_0014fef0();
  if (iVar2 != param_3) {
    bVar1 = true;
    do {
      while (iVar3 = FUN_00150310(param_1,param_3), iVar3 == 3) {
        iVar3 = FUN_001504d0(param_1,param_3);
        if (iVar3 == 0) {
          param2 = (double)FUN_00150a90(param_1,param_3,0);
          iVar3 = fprintf(param_2,"%.14g",param2);
        }
        else {
          uVar4 = FUN_00150ba0(param_1,param_3,0);
          iVar3 = fprintf(param_2,"%lld",uVar4);
        }
        bVar1 = (bool)(bVar1 & 0 < iVar3);
LAB_001600ac:
        param_3 = param_3 + 1;
        if (iVar2 == param_3) goto LAB_0016013c;
      }
      __ptr = (void *)FUN_00154910(param_1,param_3,&local_48);
      if (!bVar1) goto LAB_001600ac;
      sVar5 = fwrite(__ptr,1,local_48,param_2);
      bVar1 = sVar5 == local_48;
      param_3 = param_3 + 1;
    } while (iVar2 != param_3);
LAB_0016013c:
    if (!bVar1) {
      uVar4 = FUN_001543b0(param_1,0,0);
      return uVar4;
    }
  }
  return 1;
}


