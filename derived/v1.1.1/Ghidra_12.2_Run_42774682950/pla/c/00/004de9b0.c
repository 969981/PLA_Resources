/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004de9b0; name: FUN_004de9b0
 */


undefined8 FUN_004de9b0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *__dest;
  size_t __n;
  long local_a0;
  undefined1 auStack_98 [104];
  
  local_a0 = 0;
  uVar2 = FUN_00415400(param_2,0x3a,1,&LAB_004deab0,&local_a0);
  lVar1 = local_a0;
  if ((int)uVar2 != 0) {
    if (param_1 == 0) {
      uVar2 = 1;
    }
    else {
      __n = local_a0 << 1;
      __dest = (void *)FUN_00400260(__n,"external/openssl/ssl/t1_lib.c",0x7da);
      if (__dest == (void *)0x0) {
        FUN_004014b0(0x14,0x276,0x41,"external/openssl/ssl/t1_lib.c",0x7db);
        uVar2 = 0;
      }
      else {
        memcpy(__dest,auStack_98,__n);
        if (param_3 == 0) {
          FUN_00400420(*(undefined8 *)(param_1 + 0x198),"external/openssl/ssl/t1_lib.c",0x7e5);
          uVar2 = 1;
          *(void **)(param_1 + 0x198) = __dest;
          *(long *)(param_1 + 0x1a0) = lVar1;
        }
        else {
          FUN_00400420(*(undefined8 *)(param_1 + 0x1a8),"external/openssl/ssl/t1_lib.c",0x7e1);
          uVar2 = 1;
          *(void **)(param_1 + 0x1a8) = __dest;
          *(long *)(param_1 + 0x1b0) = lVar1;
        }
      }
    }
  }
  return uVar2;
}


