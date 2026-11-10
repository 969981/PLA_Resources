/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00410660; name: FUN_00410660
 */


undefined8 FUN_00410660(undefined8 *param_1,long *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  void *__s;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("n >= 0","external/openssl/crypto/bn/bn_shift.c",0x72,
                  "nnopenssl_bn_lshift_fixed_top");
  }
  uVar4 = param_3 >> 5;
  lVar7 = FUN_0040c660(param_1,uVar4 + 1 + (int)param_2[1]);
  uVar8 = 0;
  if (lVar7 != 0) {
    iVar11 = (int)param_2[1];
    if (iVar11 == 0) {
      __s = (void *)*param_1;
      *(undefined4 *)((long)__s + (ulong)uVar4 * 4) = 0;
    }
    else {
      lVar7 = *param_2;
      __s = (void *)*param_1;
      uVar2 = -param_3 & 0x1f;
      uVar5 = -uVar2;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar9 = *(uint *)(lVar7 + (long)(iVar11 + -1) * 4);
      puVar1 = (uint *)((long)__s + (ulong)uVar4 * 4);
      puVar1[iVar11] = uVar9 >> (ulong)(-param_3 & 0x1f) & uVar5;
      iVar11 = (int)param_2[1] + -1;
      uVar9 = uVar9 << (ulong)(param_3 & 0x1f);
      if (0 < iVar11) {
        lVar10 = (long)iVar11;
        iVar11 = (int)param_2[1] + -2;
        do {
          uVar3 = *(uint *)(lVar7 + (long)iVar11 * 4);
          iVar11 = iVar11 + -1;
          uVar6 = uVar3 >> (ulong)uVar2 & uVar5 | uVar9;
          uVar9 = uVar3 << (ulong)(param_3 & 0x1f);
          puVar1[lVar10] = uVar6;
          lVar10 = lVar10 + -1;
        } while (0 < lVar10);
      }
      *puVar1 = uVar9;
    }
    if (0x3e < param_3 + 0x1f) {
      memset(__s,0,(ulong)(uVar4 << 2));
    }
    *(int *)(param_1 + 2) = (int)param_2[2];
    uVar8 = 1;
    *(uint *)(param_1 + 1) = uVar4 + 1 + (int)param_2[1];
  }
  return uVar8;
}


