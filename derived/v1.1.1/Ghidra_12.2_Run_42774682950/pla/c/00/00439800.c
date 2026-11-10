/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00439800; name: FUN_00439800
 */


ulong FUN_00439800(void *param_1,ulong param_2,undefined8 param_3,long *param_4,code *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulong local_40;
  void *local_38;
  ulong local_28;
  
  local_38 = (void *)0x0;
  local_28 = param_2;
  if (*(code **)(*param_4 + 0x48) == (code *)0x0) {
    uVar2 = 0x98;
    uVar3 = 0x87;
  }
  else {
    if (param_2 >> 0x1f == 0) {
      uVar1 = (**(code **)(*param_4 + 0x48))(&local_38,&local_40);
      pvVar4 = local_38;
      if ((int)uVar1 == 0) {
        return uVar1;
      }
      if (param_5 == (code *)0x0) {
        if (local_40 < param_2) {
          local_28 = local_40;
          param_2 = local_40;
        }
        memcpy(param_1,local_38,param_2);
      }
      else {
        (*param_5)(local_38,local_40,param_1,&local_28);
        pvVar4 = local_38;
      }
      FUN_00400620(pvVar4,local_40,"external/openssl/crypto/ec/ec_kmeth.c",0x97);
      return local_28 & 0xffffffff;
    }
    uVar2 = 0xa1;
    uVar3 = 0x8b;
  }
  FUN_004014b0(0x10,0xf6,uVar2,"external/openssl/crypto/ec/ec_kmeth.c",uVar3);
  return 0;
}


