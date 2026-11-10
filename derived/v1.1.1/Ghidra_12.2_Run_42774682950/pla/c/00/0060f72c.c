/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060f72c; name: FUN_0060f72c
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0060f72c(byte *param_1,undefined8 *param_2)

{
  size_t __n;
  byte bVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  byte *pbVar5;
  
  sVar3 = strlen(PTR_DAT_043753a0);
  bVar1 = *param_1;
  __n = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  if (sVar3 == __n) {
    if (sVar3 != 0) {
      if (sVar3 == 0xffffffffffffffff) {
                    /* try { // try from 0060f9a8 to 0060f9af has its CatchHandler @ 0060f9ec */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar5 = *(byte **)(param_1 + 0x10);
      if ((bVar1 & 1) == 0) {
        pbVar5 = param_1 + 1;
      }
      iVar2 = memcmp(pbVar5,PTR_DAT_043753a0,sVar3);
      if (iVar2 != 0) goto LAB_0060f794;
    }
    uVar4 = FUN_0044ebb0();
    iVar2 = FUN_0041ccc0();
    goto joined_r0x0060f9a0;
  }
LAB_0060f794:
  sVar3 = strlen(PTR_s_sha_1_04375368);
  if (sVar3 == __n) {
    if (__n != 0) {
      if (__n == 0xffffffffffffffff) {
                    /* try { // try from 0060f9b0 to 0060f9b7 has its CatchHandler @ 0060f9e8 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar5 = *(byte **)(param_1 + 0x10);
      if ((bVar1 & 1) == 0) {
        pbVar5 = param_1 + 1;
      }
      iVar2 = memcmp(pbVar5,PTR_s_sha_1_04375368,__n);
      if (iVar2 != 0) goto LAB_0060f7d4;
    }
    uVar4 = FUN_0044f830();
    iVar2 = FUN_0041ccc0();
    goto joined_r0x0060f9a0;
  }
LAB_0060f7d4:
  sVar3 = strlen(PTR_s_sha_224_043753b8);
  if (sVar3 == __n) {
    if (__n != 0) {
      if (__n == 0xffffffffffffffff) {
                    /* try { // try from 0060f9b8 to 0060f9bf has its CatchHandler @ 0060f9e4 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar5 = *(byte **)(param_1 + 0x10);
      if ((bVar1 & 1) == 0) {
        pbVar5 = param_1 + 1;
      }
      iVar2 = memcmp(pbVar5,PTR_s_sha_224_043753b8,__n);
      if (iVar2 != 0) goto LAB_0060f814;
    }
    uVar4 = FUN_0044f840();
    iVar2 = FUN_0041ccc0();
    goto joined_r0x0060f9a0;
  }
LAB_0060f814:
  sVar3 = strlen(PTR_s_sha_256_043753c0);
  if (sVar3 == __n) {
    if (__n != 0) {
      if (__n == 0xffffffffffffffff) {
                    /* try { // try from 0060f9c0 to 0060f9c7 has its CatchHandler @ 0060f9e0 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar5 = *(byte **)(param_1 + 0x10);
      if ((bVar1 & 1) == 0) {
        pbVar5 = param_1 + 1;
      }
      iVar2 = memcmp(pbVar5,PTR_s_sha_256_043753c0,__n);
      if (iVar2 != 0) goto LAB_0060f854;
    }
    uVar4 = FUN_0044f850();
    iVar2 = FUN_0041ccc0();
    goto joined_r0x0060f9a0;
  }
LAB_0060f854:
  sVar3 = strlen(PTR_s_sha_384_043753c8);
  if (sVar3 == __n) {
    if (__n != 0) {
      if (__n == 0xffffffffffffffff) {
                    /* try { // try from 0060f9c8 to 0060f9cf has its CatchHandler @ 0060f9dc */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar5 = *(byte **)(param_1 + 0x10);
      if ((bVar1 & 1) == 0) {
        pbVar5 = param_1 + 1;
      }
      iVar2 = memcmp(pbVar5,PTR_s_sha_384_043753c8,__n);
      if (iVar2 != 0) goto LAB_0060f894;
    }
    uVar4 = FUN_0044f880();
    iVar2 = FUN_0041ccc0();
  }
  else {
LAB_0060f894:
    sVar3 = strlen(PTR_s_sha_512_043753d0);
    if (sVar3 != __n) {
      return 0;
    }
    if (__n != 0) {
      if (__n == 0xffffffffffffffff) {
                    /* try { // try from 0060f9d0 to 0060f9d7 has its CatchHandler @ 0060f9d8 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar5 = *(byte **)(param_1 + 0x10);
      if ((bVar1 & 1) == 0) {
        pbVar5 = param_1 + 1;
      }
      iVar2 = memcmp(pbVar5,PTR_s_sha_512_043753d0,__n);
      if (iVar2 != 0) {
        return 0;
      }
    }
    uVar4 = FUN_0044f890();
    iVar2 = FUN_0041ccc0();
  }
joined_r0x0060f9a0:
  if (iVar2 < 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_00607c30("external/webrtc/rtc_base/openssldigest.cc",0x4e,"nnopenssl_EVP_MD_size(md) >= 16",
                 PTR_DAT_043752a0);
  }
  *param_2 = uVar4;
  return 1;
}


