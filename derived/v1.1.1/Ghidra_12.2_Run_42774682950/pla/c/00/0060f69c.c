/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060f69c; name: FUN_0060f69c
 */


void FUN_0060f69c(long *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  
  param_1[1] = 0;
  *param_1 = (long)(PTR_DAT_043753b0 + 0x10);
  lVar1 = FUN_00444930();
  param_1[1] = lVar1;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00607c30("external/webrtc/rtc_base/openssldigest.cc",0x14,"ctx_ != nullptr",PTR_DAT_043752a0
                );
  }
  FUN_00444880();
  uVar2 = FUN_0060f72c(param_2,param_1 + 2);
  if ((uVar2 & 1) == 0) {
    param_1[2] = 0;
    return;
  }
  FUN_004449b0(param_1[1],param_1[2],0);
  return;
}


