/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00417620; name: FUN_00417620
 */


ulong FUN_00417620(ulong *param_1,ulong param_2)

{
  void *__dest;
  void *__s;
  size_t __n;
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_1;
  __n = uVar2 - param_2;
  if (uVar2 < param_2) {
    if (param_1[2] < param_2) {
      if (0x5ffffffc < param_2) {
        uVar1 = 0x80;
        goto LAB_0041776c;
      }
      uVar3 = (ulong)((int)param_2 + 3) * 0xaaaaaaab >> 0x1f & 0x1fffffffc;
      if ((param_1[3] & 1) == 0) {
        __dest = (void *)FUN_00400450(param_1[1],param_1[2],uVar3,
                                      "external/openssl/crypto/buffer/buffer.c",0x87);
LAB_00417720:
        if (__dest == (void *)0x0) {
          uVar1 = 0x89;
LAB_0041776c:
          FUN_004014b0(7,0x69,0x41,"external/openssl/crypto/buffer/buffer.c",uVar1);
          return 0;
        }
      }
      else {
        __dest = (void *)thunk_FUN_00400260(uVar3,"external/openssl/crypto/buffer/buffer.c",0x3e);
        if ((__dest == (void *)0x0) || ((void *)param_1[1] == (void *)0x0)) goto LAB_00417720;
        memcpy(__dest,(void *)param_1[1],*param_1);
        FUN_00406700(param_1[1],*param_1,"external/openssl/crypto/buffer/buffer.c",0x42);
        param_1[1] = 0;
      }
      uVar2 = *param_1;
      __s = (void *)((long)__dest + uVar2);
      param_1[1] = (ulong)__dest;
      param_1[2] = uVar3;
    }
    else {
      __s = (void *)(param_1[1] + uVar2);
    }
    __n = param_2 - uVar2;
  }
  else {
    if (param_1[1] == 0) goto LAB_0041773c;
    __s = (void *)(param_1[1] + param_2);
  }
  memset(__s,0,__n);
LAB_0041773c:
  *param_1 = param_2;
  return param_2;
}


