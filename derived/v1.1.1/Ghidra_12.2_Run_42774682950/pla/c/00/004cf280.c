/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cf280; name: FUN_004cf280
 */


undefined8 FUN_004cf280(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte abStack_c0 [128];
  
  if ((0x40 < param_3) || (uVar7 = *(ulong *)(param_2 + 0x10), uVar7 < param_3)) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: rec->orig_len >= md_size && md_size <= EVP_MAX_MD_SIZE",
                 "external/openssl/ssl/record/ssl3_record.c",0x612);
  }
  uVar8 = *(ulong *)(param_2 + 8);
  uVar9 = 0;
  if (param_3 + 0x100 <= uVar7) {
    uVar9 = uVar7 - (param_3 + 0x100);
  }
  memset(abStack_c0,0,param_3);
  uVar1 = 0;
  if (uVar9 < uVar7) {
    lVar3 = *(long *)(param_2 + 0x20);
    uVar2 = 0;
    uVar1 = 0;
    uVar4 = 0;
    do {
      uVar5 = uVar9 ^ uVar8 - param_3;
      uVar6 = (long)(uVar5 - 1 & (uVar5 ^ 0xffffffffffffffff)) >> 0x3f;
      uVar2 = (uVar6 | uVar2) & (long)((uVar9 - uVar8 ^ uVar8 | uVar9 ^ uVar8) ^ uVar9) >> 0x3f;
      uVar5 = uVar4 + 1;
      abStack_c0[uVar4] = abStack_c0[uVar4] | *(byte *)(lVar3 + uVar9) & (byte)uVar2;
      uVar1 = uVar6 & uVar4 | uVar1;
      uVar4 = uVar5 & (long)((uVar5 - param_3 ^ param_3 | uVar5 ^ param_3) ^ uVar5) >> 0x3f;
      uVar9 = uVar9 + 1;
    } while (uVar7 != uVar9);
  }
  if (param_3 != 0) {
    uVar7 = 0;
    do {
      uVar9 = uVar1 + 1;
      *(byte *)(param_1 + uVar7) = abStack_c0[uVar1];
      uVar7 = uVar7 + 1;
      uVar1 = uVar9 & (long)((uVar9 - param_3 ^ param_3 | uVar9 ^ param_3) ^ uVar9) >> 0x3f;
    } while (param_3 != uVar7);
  }
  return 1;
}


