/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004278d0; name: FUN_004278d0
 */


undefined8 FUN_004278d0(long *param_1,void *param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((ulong)(param_1[4] - param_1[1]) < param_3) {
    uVar1 = 0x6a;
    uVar2 = 0x28a;
  }
  else {
    if (*param_1 != 0) {
      if (param_3 != 0) {
        memcpy((void *)(*param_1 + param_1[1]),param_2,param_3);
        param_1[1] = param_1[1] + param_3;
        param_1[5] = param_1[5] + param_4;
      }
      return 1;
    }
    uVar1 = 0x44;
    uVar2 = 0x28f;
  }
  FUN_004014b0(0x24,0x67,uVar1,"external/openssl/crypto/rand/rand_lib.c",uVar2);
  return 0;
}


