/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060b82c; name: FUN_0060b82c
 */


void FUN_0060b82c(size_t *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  void *__dest;
  ulong uVar2;
  size_t sVar3;
  
  uVar1 = param_1[1];
  if ((param_1[2] == 0 && uVar1 != 0) || (uVar1 < *param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_00607c30("external/webrtc\\rtc_base/buffer.h",0x164,"IsConsistent()",PTR_DAT_043752a0);
  }
  if (uVar1 < param_2) {
    uVar2 = param_2;
    if (((param_3 & 1) != 0) && (uVar2 = uVar1 + (uVar1 >> 1), uVar2 <= param_2)) {
      uVar2 = param_2;
    }
    __dest = (void *)FUN_002e2ec0(PTR_FUN_04373078,uVar2);
    memcpy(__dest,(void *)param_1[2],*param_1);
    sVar3 = param_1[2];
    param_1[2] = (size_t)__dest;
    if (sVar3 != 0) {
      FUN_002e2f10(sVar3);
      FUN_002e2ef0(PTR_LAB_04373088,sVar3);
      __dest = (void *)param_1[2];
    }
    param_1[1] = uVar2;
    if (((uVar2 != 0) && (__dest == (void *)0x0)) || (uVar2 < *param_1)) {
                    /* WARNING: Subroutine does not return */
      FUN_00607c30("external/webrtc\\rtc_base/buffer.h",0x176,"IsConsistent()",PTR_DAT_043752a0);
    }
  }
  return;
}


