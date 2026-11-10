/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f1280; name: FUN_004f1280
 */


undefined8 FUN_004f1280(long param_1,undefined4 param_2,void *param_3,size_t param_4)

{
  int iVar1;
  void *__dest;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((param_1 == 0) || (param_3 == (void *)0x0)) || (param_4 == 0)) {
    uVar2 = 0x43;
    uVar3 = 0x363;
  }
  else {
    iVar1 = FUN_004f13e0(param_2,param_3,param_4,0);
    if (iVar1 == 0) {
      uVar2 = 0x184;
      uVar3 = 0x368;
    }
    else if (**(long **)(param_1 + 0x140) == 0) {
      uVar2 = 0x44;
      uVar3 = 0x36c;
    }
    else {
      __dest = (void *)FUN_00400350(*(undefined8 *)(**(long **)(param_1 + 0x140) + 0x18),param_4,
                                    "external/openssl/ssl/ssl_rsa.c",0x370);
      if (__dest == (void *)0x0) {
        uVar2 = 0x41;
        uVar3 = 0x372;
      }
      else {
        *(void **)(**(long **)(param_1 + 0x140) + 0x18) = __dest;
        memcpy(__dest,param_3,param_4);
        *(size_t *)(**(long **)(param_1 + 0x140) + 0x20) = param_4;
        iVar1 = FUN_004f13e0(param_2,param_3,param_4,param_1);
        if (iVar1 != 0) {
          return 1;
        }
        uVar2 = 0x184;
        uVar3 = 0x37f;
      }
    }
  }
  FUN_004014b0(0x14,0x21f,uVar2,"external/openssl/ssl/ssl_rsa.c",uVar3);
  return 0;
}


