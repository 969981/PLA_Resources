/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00154220; name: FUN_00154220
 */


undefined8 FUN_00154220(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  char *__s1;
  undefined8 uVar3;
  
  iVar1 = FUN_0014fef0();
  FUN_001594c0(param_1,&DAT_038b2be7,param_2);
  FUN_00151a70(param_1,0xfff0b9d8,"_LOADED");
  iVar2 = FUN_00155fc0(param_1,iVar1 + 1,2);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    __s1 = (char *)FUN_00150da0(param_1,0xffffffff,0);
    iVar2 = strncmp(__s1,"_G.",3);
    if (iVar2 == 0) {
      FUN_00151570(param_1,__s1 + 3);
      FUN_0014ff70(param_1,0xfffffffe,0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
    }
    FUN_001500d0(param_1,0xffffffff,iVar1 + 1);
    uVar3 = 1;
    iVar1 = -3;
  }
  FUN_0014ff10(param_1,iVar1);
  return uVar3;
}


