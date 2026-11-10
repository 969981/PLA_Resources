/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040c320; name: FUN_0040c320
 */


long * FUN_0040c320(long *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  void *__dest;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(int *)((long)param_1 + 0xc) < (int)param_2) {
    if ((int)param_2 < 0x1000000) {
      if ((*(uint *)((long)param_1 + 0x14) >> 1 & 1) == 0) {
        uVar2 = -(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_2 << 2;
        if ((*(uint *)((long)param_1 + 0x14) >> 3 & 1) == 0) {
          __dest = (void *)FUN_004002a0(uVar2,"external/openssl/crypto/bn/bn_lib.c",0xe0);
        }
        else {
          __dest = (void *)thunk_FUN_004002a0(uVar2,"external/openssl/crypto/bn/bn_lib.c",0xde);
        }
        if (__dest != (void *)0x0) {
          iVar1 = (int)param_1[1];
          if ((int)param_2 < iVar1) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("b->top <= words","external/openssl/crypto/bn/bn_lib.c",0xe6,
                          "bn_expand_internal");
          }
          if (0 < iVar1) {
            memcpy(__dest,(void *)*param_1,(long)iVar1 << 2);
          }
          if (*param_1 != 0) {
            FUN_004006a0(*param_1,(long)*(int *)((long)param_1 + 0xc) << 2);
            if ((*(byte *)((long)param_1 + 0x14) >> 3 & 1) == 0) {
              FUN_00400420(*param_1,"external/openssl/crypto/bn/bn_lib.c",0x96);
            }
            else {
              thunk_FUN_00400420(*param_1,"external/openssl/crypto/bn/bn_lib.c",0x94);
            }
          }
          *param_1 = (long)__dest;
          *(uint *)((long)param_1 + 0xc) = param_2;
          return param_1;
        }
        uVar3 = 0x41;
        uVar4 = 0xe2;
      }
      else {
        uVar3 = 0x69;
        uVar4 = 0xda;
      }
    }
    else {
      uVar3 = 0x72;
      uVar4 = 0xd6;
    }
    FUN_004014b0(3,0x78,uVar3,"external/openssl/crypto/bn/bn_lib.c",uVar4);
    param_1 = (long *)0x0;
  }
  return param_1;
}


