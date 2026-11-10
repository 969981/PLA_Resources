/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033b720; name: FUN_0033b720
 */


void FUN_0033b720(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  char *__s;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  char acStack_440 [1024];
  
  uStack_478 = param_3[1];
  local_480 = *param_3;
  uStack_468 = param_3[3];
  uStack_470 = param_3[2];
  local_460 = local_480;
  uStack_458 = uStack_478;
  uStack_450 = uStack_470;
  uStack_448 = uStack_468;
  iVar1 = vsnprintf(acStack_440,0x400,param_2,&local_480);
  if (iVar1 < 0x400) {
    if (-1 < iVar1) {
      FUN_002e4094(param_1,acStack_440,(long)iVar1);
    }
  }
  else {
    __s = (char *)FUN_002e2ec0(PTR_FUN_04373078,(long)(iVar1 + 1));
    uStack_498 = param_3[1];
    local_4a0 = *param_3;
    uStack_488 = param_3[3];
    uStack_490 = param_3[2];
    local_460 = local_4a0;
    uStack_458 = uStack_498;
    uStack_450 = uStack_490;
    uStack_448 = uStack_488;
    iVar2 = vsnprintf(__s,(long)(iVar1 + 1),param_2,&local_4a0);
    if ((-1 < iVar2) && (iVar2 <= iVar1)) {
      FUN_002e4094(param_1,__s,(long)iVar2);
    }
    if (__s != (char *)0x0) {
      FUN_002e2f10(__s);
      FUN_002e2ef0(PTR_LAB_04373088,__s);
    }
  }
  return;
}


