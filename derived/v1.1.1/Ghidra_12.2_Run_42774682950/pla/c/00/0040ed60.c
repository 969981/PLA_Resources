/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040ed60; name: FUN_0040ed60
 */


ulong FUN_0040ed60(uint *param_1,uint *param_2,uint param_3,ulong param_4)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("num >= 0","external/openssl/crypto/bn/bn_asm.c",0x16,"nnopenssl_bn_mul_add_words"
                 );
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 < 4) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = param_4 & 0xffffffff;
    uVar2 = param_3;
    do {
      uVar3 = uVar3 + *param_1 + *param_2 * uVar4;
      *param_1 = (uint)uVar3;
      uVar3 = (ulong)param_1[1] + param_2[1] * uVar4 + (uVar3 >> 0x20);
      param_1[1] = (uint)uVar3;
      uVar3 = (ulong)param_1[2] + param_2[2] * uVar4 + (uVar3 >> 0x20);
      param_1[2] = (uint)uVar3;
      puVar1 = param_2 + 3;
      param_2 = param_2 + 4;
      uVar3 = (ulong)param_1[3] + *puVar1 * uVar4 + (uVar3 >> 0x20);
      uVar2 = uVar2 - 4;
      param_1[3] = (uint)uVar3;
      uVar3 = uVar3 >> 0x20;
      param_1 = param_1 + 4;
    } while (3 < uVar2);
    param_3 = param_3 & 3;
    if (param_3 == 0) {
      return uVar3;
    }
  }
  do {
    param_3 = param_3 - 1;
    uVar3 = *param_1 + uVar3 + (ulong)*param_2 * (param_4 & 0xffffffff);
    *param_1 = (uint)uVar3;
    uVar3 = uVar3 >> 0x20;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (param_3 != 0);
  return uVar3;
}


