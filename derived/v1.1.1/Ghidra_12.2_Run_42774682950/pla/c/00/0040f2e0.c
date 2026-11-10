/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040f2e0; name: FUN_0040f2e0
 */


ulong FUN_0040f2e0(undefined4 *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((int)param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("n >= 0","external/openssl/crypto/bn/bn_asm.c",0x115,"nnopenssl_bn_add_words");
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_4 < 4) {
    uVar3 = 0;
    uVar4 = param_4;
  }
  else {
    uVar3 = 0;
    uVar4 = param_4;
    do {
      uVar3 = uVar3 + *param_2 + (ulong)*param_3;
      *param_1 = (int)uVar3;
      uVar3 = (ulong)param_3[1] + (ulong)param_2[1] + (uVar3 >> 0x20);
      param_1[1] = (int)uVar3;
      uVar3 = (ulong)param_3[2] + (ulong)param_2[2] + (uVar3 >> 0x20);
      param_1[2] = (int)uVar3;
      puVar1 = param_3 + 3;
      param_3 = param_3 + 4;
      uVar3 = (ulong)*puVar1 + (ulong)param_2[3] + (uVar3 >> 0x20);
      uVar4 = uVar4 - 4;
      param_2 = param_2 + 4;
      param_1[3] = (int)uVar3;
      uVar3 = uVar3 >> 0x20;
      param_1 = param_1 + 4;
    } while (3 < uVar4);
    uVar4 = param_4 & 3;
    if (uVar4 == 0) {
      return uVar3;
    }
  }
  uVar5 = uVar4;
  if ((param_4 & 1) != 0) {
    uVar3 = uVar3 + *param_2 + (ulong)*param_3;
    *param_1 = (int)uVar3;
    uVar3 = uVar3 >> 0x20;
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
    uVar5 = uVar4 - 1;
    param_1 = param_1 + 1;
  }
  if (uVar4 != 1) {
    do {
      uVar3 = uVar3 + *param_2 + (ulong)*param_3;
      *param_1 = (int)uVar3;
      puVar1 = param_3 + 1;
      param_3 = param_3 + 2;
      uVar2 = (ulong)param_2[1] + (uVar3 >> 0x20) + (ulong)*puVar1;
      uVar5 = uVar5 - 2;
      param_2 = param_2 + 2;
      uVar3 = uVar2 >> 0x20;
      param_1[1] = (int)uVar2;
      param_1 = param_1 + 2;
    } while (uVar5 != 0);
  }
  return uVar3;
}


