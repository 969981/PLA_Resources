/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ebea0; name: FUN_002ebea0
 */


void FUN_002ebea0(undefined8 param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  char *__s;
  char *pcVar3;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 *local_f0;
  undefined1 **ppuStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined1 **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  char acStack_90 [64];
  
  local_110 = param_5;
  uStack_108 = param_6;
  local_100 = param_7;
  uStack_f8 = param_8;
  iVar1 = FUN_002ec180(param_3);
  if (iVar1 != 0) {
    puStack_c0 = &local_110;
    ppuStack_c8 = &local_f0;
    uStack_b8 = 0xffffff80ffffffe0;
    local_d0 = (undefined1 *)register0x00000008;
    uVar2 = vsnprintf(acStack_90,0x40,param_4,&local_d0);
    if ((int)uVar2 < 0) {
      pcVar3 = (char *)0x0;
      __s = (char *)0x0;
    }
    else if (uVar2 < 0x40) {
      __s = (char *)0x0;
      pcVar3 = acStack_90;
    }
    else {
      __s = (char *)FUN_002ebd50((long)(int)uVar2 + 1);
      puStack_e0 = &local_110;
      ppuStack_e8 = &local_f0;
      uStack_d8 = 0xffffff80ffffffe0;
      local_f0 = (undefined1 *)register0x00000008;
      vsnprintf(__s,(long)(int)(uVar2 + 1),param_4,&local_f0);
      pcVar3 = __s;
    }
    FUN_002ec1a0(param_1,param_2,param_3,pcVar3);
    free(__s);
  }
  return;
}


