/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001551d0; name: FUN_001551d0
 */


undefined4 FUN_001551d0(undefined8 param_1,char *param_2,undefined8 param_3)

{
  FILE *__stream;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  int local_460 [2];
  FILE *local_458;
  undefined1 auStack_450 [1024];
  int local_44;
  
  iVar1 = FUN_0014fef0();
  iVar1 = iVar1 + 1;
  if (param_2 == (char *)0x0) {
    FUN_00151570(param_1,"=stdin");
    local_458 = *(FILE **)PTR_stdin_04372360;
  }
  else {
    FUN_00151650(param_1,&DAT_03917888,param_2);
    local_458 = fopen(param_2,"r");
    if (local_458 == (FILE *)0x0) {
      piVar4 = __errno_location();
      pcVar5 = strerror(*piVar4);
      lVar6 = FUN_00150da0(param_1,iVar1,0);
      lVar6 = lVar6 + 1;
      pcVar8 = "open";
      goto LAB_001553f8;
    }
  }
  iVar2 = FUN_00155450(local_460,&local_44);
  if (iVar2 != 0) {
    lVar6 = (long)local_460[0];
    local_460[0] = local_460[0] + 1;
    auStack_450[lVar6] = 10;
  }
  if ((param_2 != (char *)0x0) && (local_44 == 0x1b)) {
    local_458 = freopen(param_2,"rb",local_458);
    if (local_458 == (FILE *)0x0) {
      piVar4 = __errno_location();
      pcVar5 = strerror(*piVar4);
      lVar6 = FUN_00150da0(param_1,iVar1,0);
      lVar6 = lVar6 + 1;
      pcVar8 = "reopen";
      goto LAB_001553f8;
    }
    FUN_00155450(local_460,&local_44);
  }
  if (local_44 != -1) {
    lVar6 = (long)local_460[0];
    local_460[0] = local_460[0] + 1;
    auStack_450[lVar6] = (char)local_44;
  }
  uVar7 = FUN_00150da0(param_1,0xffffffff,0);
  uVar3 = FUN_00152fd0(param_1,&LAB_00155560,local_460,uVar7,param_3);
  __stream = local_458;
  iVar2 = ferror(local_458);
  if (param_2 != (char *)0x0) {
    fclose(__stream);
  }
  if (iVar2 == 0) {
    FUN_0014ff70(param_1,iVar1,0xffffffff);
    FUN_0014ff10(param_1,0xfffffffe);
    return uVar3;
  }
  FUN_0014ff10(param_1,iVar1);
  piVar4 = __errno_location();
  pcVar5 = strerror(*piVar4);
  lVar6 = FUN_00150da0(param_1,iVar1,0);
  lVar6 = lVar6 + 1;
  pcVar8 = "read";
LAB_001553f8:
  FUN_00151650(param_1,"cannot %s %s: %s",pcVar8,lVar6,pcVar5);
  FUN_0014ff70(param_1,iVar1,0xffffffff);
  FUN_0014ff10(param_1,0xfffffffe);
  return 7;
}


