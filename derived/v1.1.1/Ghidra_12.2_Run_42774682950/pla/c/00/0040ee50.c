/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040ee50; name: FUN_0040ee50
 */


ulong FUN_0040ee50(undefined4 *param_1,uint *param_2,uint param_3,ulong param_4)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("num >= 0","external/openssl/crypto/bn/bn_asm.c",0x33,"nnopenssl_bn_mul_words");
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 < 4) {
    uVar2 = 0;
    uVar4 = param_3;
  }
  else {
    uVar2 = 0;
    uVar3 = param_4 & 0xffffffff;
    uVar4 = param_3;
    do {
      uVar2 = uVar2 + *param_2 * uVar3;
      *param_1 = (int)uVar2;
      uVar2 = param_2[1] * uVar3 + (uVar2 >> 0x20);
      param_1[1] = (int)uVar2;
      uVar2 = param_2[2] * uVar3 + (uVar2 >> 0x20);
      param_1[2] = (int)uVar2;
      puVar1 = param_2 + 3;
      param_2 = param_2 + 4;
      uVar2 = *puVar1 * uVar3 + (uVar2 >> 0x20);
      uVar4 = uVar4 - 4;
      param_1[3] = (int)uVar2;
      uVar2 = uVar2 >> 0x20;
      param_1 = param_1 + 4;
    } while (3 < uVar4);
    uVar4 = param_3 & 3;
    if (uVar4 == 0) {
      return uVar2;
    }
  }
  uVar5 = uVar4;
  if ((param_3 & 1) != 0) {
    uVar2 = uVar2 + (ulong)*param_2 * (param_4 & 0xffffffff);
    *param_1 = (int)uVar2;
    uVar2 = uVar2 >> 0x20;
    param_2 = param_2 + 1;
    uVar5 = uVar4 - 1;
    param_1 = param_1 + 1;
  }
  if (uVar4 != 1) {
    do {
      uVar2 = (ulong)*param_2 * (param_4 & 0xffffffff) + uVar2;
      *param_1 = (int)uVar2;
      puVar1 = param_2 + 1;
      param_2 = param_2 + 2;
      uVar3 = (ulong)*puVar1 * (param_4 & 0xffffffff) + (uVar2 >> 0x20);
      uVar5 = uVar5 - 2;
      uVar2 = uVar3 >> 0x20;
      param_1[1] = (int)uVar3;
      param_1 = param_1 + 2;
    } while (uVar5 != 0);
  }
  return uVar2;
}


