/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040f180; name: FUN_0040f180
 */


uint FUN_0040f180(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  
  if (param_3 == 0) {
    return 0xffffffff;
  }
  uVar3 = FUN_0040bfd0(param_3);
  if ((uVar3 != 0x20) && ((uint)(1 << (ulong)(uVar3 & 0x1f)) < param_1)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(i == BN_BITS2) || (h <= (BN_ULONG)1 << i)","external/openssl/crypto/bn/bn_asm.c"
                  ,0xd8,"nnopenssl_bn_div_words");
  }
  uVar5 = 0x20 - uVar3;
  uVar1 = 0;
  if (param_3 <= param_1) {
    uVar1 = param_3;
  }
  param_1 = param_1 - uVar1;
  if (uVar5 != 0) {
    param_3 = param_3 << (ulong)(uVar5 & 0x1f);
    param_1 = param_1 << (ulong)(uVar5 & 0x1f) | param_2 >> (ulong)(uVar3 & 0x1f);
    param_2 = param_2 << (ulong)(uVar5 & 0x1f);
  }
  uVar10 = (ulong)param_2;
  uVar1 = param_3 >> 0x10;
  uVar3 = 0;
  iVar4 = 2;
  if (uVar1 != param_1 >> 0x10) goto LAB_0040f208;
  do {
    uVar5 = 0xffff;
LAB_0040f20c:
    iVar6 = uVar5 * uVar1;
    uVar8 = param_1 - iVar6;
    uVar7 = uVar5 * (param_3 & 0xffff);
    if (uVar8 >> 0x10 == 0) {
      uVar9 = param_1 * 0x10000 - uVar1 * 0x10000 * uVar5;
      do {
        if (uVar7 <= (uVar9 | (uint)(uVar10 >> 0x10))) break;
        uVar8 = uVar8 + uVar1;
        uVar5 = uVar5 - 1;
        iVar6 = iVar6 - uVar1;
        uVar7 = uVar7 - (param_3 & 0xffff);
        uVar9 = uVar9 + uVar1 * 0x10000;
      } while (uVar8 < 0x10000);
    }
    uVar8 = iVar6 + (uVar7 >> 0x10);
    uVar9 = (uint)uVar10;
    if (uVar9 < uVar7 * 0x10000) {
      uVar8 = uVar8 + 1;
    }
    iVar4 = iVar4 + -1;
    uVar5 = uVar5 - (param_1 < uVar8);
    if (iVar4 == 0) {
      return uVar5 | uVar3;
    }
    uVar2 = param_3;
    if (uVar8 <= param_1) {
      uVar2 = 0;
    }
    uVar3 = uVar5 * 0x10000;
    param_1 = (uint)(CONCAT44((param_1 - uVar8) + uVar2,uVar9 + uVar7 * -0x10000) >> 0x10);
    uVar10 = (ulong)(uVar9 * 0x10000);
  } while (uVar1 == param_1 >> 0x10);
LAB_0040f208:
  uVar5 = 0;
  if ((param_3 & 0xffff0000) != 0) {
    uVar5 = param_1 / uVar1;
  }
  goto LAB_0040f20c;
}


