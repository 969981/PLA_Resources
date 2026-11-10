/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00550b30; name: FUN_00550b30
 */


void FUN_00550b30(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  char *__s;
  int iVar4;
  undefined1 auStack_530 [8];
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined1 *local_4f0;
  undefined1 **ppuStack_4e8;
  undefined1 *puStack_4e0;
  undefined8 uStack_4d8;
  undefined1 *local_4b0;
  undefined1 **ppuStack_4a8;
  undefined1 *puStack_4a0;
  undefined8 uStack_498;
  undefined1 *local_490;
  undefined1 **ppuStack_488;
  undefined1 *puStack_480;
  undefined8 uStack_478;
  undefined1 *local_470;
  undefined1 **ppuStack_468;
  undefined1 *puStack_460;
  undefined8 uStack_458;
  char acStack_450 [1024];
  
  param_1[2] = 0;
  puStack_4e0 = auStack_530;
  ppuStack_4e8 = &local_4f0;
  *param_1 = 0;
  param_1[1] = 0;
  uStack_4d8 = 0xffffff80ffffffc8;
  uStack_458 = 0xffffff80ffffffc8;
  uStack_478 = 0xffffff80ffffffc8;
  local_528 = param_3;
  uStack_520 = param_4;
  local_518 = param_5;
  uStack_510 = param_6;
  local_508 = param_7;
  uStack_500 = param_8;
  local_4f8 = param_9;
  local_4f0 = (undefined1 *)register0x00000008;
  local_490 = (undefined1 *)register0x00000008;
  ppuStack_488 = ppuStack_4e8;
  puStack_480 = puStack_4e0;
  local_470 = (undefined1 *)register0x00000008;
  ppuStack_468 = ppuStack_4e8;
  puStack_460 = puStack_4e0;
  uVar3 = vsnprintf(acStack_450,0x400,param_2,&local_490);
  puVar2 = PTR_LAB_04373088;
  puVar1 = PTR_FUN_04373078;
  if (uVar3 < 0x400) {
                    /* try { // try from 00550bd0 to 00550c6b has its CatchHandler @ 00550ca4 */
    FUN_002e4094(param_1,acStack_450,(long)(int)uVar3);
  }
  else {
    iVar4 = 0x400;
    while( true ) {
      iVar4 = iVar4 << 1;
      if (-1 < (int)uVar3) {
        iVar4 = uVar3 + 1;
      }
      __s = (char *)FUN_002e2ec0(puVar1,(long)iVar4);
      ppuStack_468 = ppuStack_4e8;
      local_470 = local_4f0;
      uStack_458 = uStack_4d8;
      puStack_460 = puStack_4e0;
      ppuStack_4a8 = ppuStack_4e8;
      local_4b0 = local_4f0;
      uStack_498 = uStack_4d8;
      puStack_4a0 = puStack_4e0;
      uVar3 = vsnprintf(__s,(long)iVar4,param_2,&local_4b0);
      if ((-1 < (int)uVar3) && ((int)uVar3 < iVar4)) break;
      if (__s != (char *)0x0) {
        FUN_002e2f10(__s);
        FUN_002e2ef0(puVar2,__s);
      }
    }
    FUN_002e4094(param_1,__s,(long)(int)uVar3);
    if (__s != (char *)0x0) {
      FUN_002e2f10(__s);
      FUN_002e2ef0(PTR_LAB_04373088,__s);
    }
  }
  return;
}


