/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040f430; name: FUN_0040f430
 */


uint FUN_0040f430(int *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if ((int)param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("n >= 0","external/openssl/crypto/bn/bn_asm.c",0x179,"nnopenssl_bn_sub_words");
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_4 < 4) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar5 = param_4;
    do {
      uVar1 = *param_2;
      uVar2 = *param_3;
      *param_1 = (uVar1 - uVar7) - uVar2;
      uVar3 = param_2[1];
      uVar4 = param_3[1];
      if (uVar1 != uVar2) {
        uVar7 = (uint)(uVar1 < uVar2);
      }
      iVar6 = uVar3 - uVar4;
      param_1[1] = iVar6 - uVar7;
      uVar1 = param_2[2];
      uVar2 = param_3[2];
      if (iVar6 != 0) {
        uVar7 = (uint)(uVar3 < uVar4);
      }
      iVar6 = uVar1 - uVar2;
      param_1[2] = iVar6 - uVar7;
      if (iVar6 != 0) {
        uVar7 = (uint)(uVar1 < uVar2);
      }
      uVar1 = param_2[3];
      uVar2 = param_3[3];
      param_3 = param_3 + 4;
      iVar6 = uVar1 - uVar2;
      uVar5 = uVar5 - 4;
      param_1[3] = iVar6 - uVar7;
      if (iVar6 != 0) {
        uVar7 = (uint)(uVar1 < uVar2);
      }
      param_2 = param_2 + 4;
      param_1 = param_1 + 4;
    } while (3 < uVar5);
    param_4 = param_4 & 3;
    if (param_4 == 0) {
      return uVar7;
    }
  }
  do {
    uVar5 = *param_2;
    iVar6 = uVar5 - uVar7;
    uVar1 = *param_3;
    if (uVar5 != uVar1) {
      uVar7 = (uint)(uVar5 < uVar1);
    }
    param_4 = param_4 - 1;
    *param_1 = iVar6 - uVar1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
  } while (param_4 != 0);
  return uVar7;
}


