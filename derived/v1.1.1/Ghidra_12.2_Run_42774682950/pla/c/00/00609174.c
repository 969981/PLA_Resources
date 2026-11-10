/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00609174; name: FUN_00609174
 */


long * FUN_00609174(long *param_1,char *param_2,size_t param_3)

{
  ulong uVar1;
  long lVar2;
  size_t sVar3;
  size_t sVar4;
  
  uVar1 = param_1[2];
  lVar2 = param_1[1] - uVar1;
  if ((ulong)param_1[1] < uVar1 || lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00607c30("external/webrtc\\api/array_view.h",0xef,"idx < this->size()",PTR_DAT_043752e0);
  }
  if (*param_1 == 0) {
LAB_00609218:
                    /* WARNING: Subroutine does not return */
    FUN_00607c30("external/webrtc\\api/array_view.h",0xf0,"this->data()",PTR_DAT_043752a0);
  }
  sVar3 = FUN_006094b0(*param_1 + uVar1,lVar2,param_2,param_3);
  uVar1 = param_1[2] + sVar3;
  param_1[2] = uVar1;
  sVar4 = param_3;
  if (param_3 == 0xffffffffffffffff) {
    sVar4 = strlen(param_2);
  }
  if (sVar3 != sVar4) {
    if (param_3 == 0xffffffffffffffff) {
      param_3 = strlen(param_2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00607c30("external/webrtc/rtc_base/strings/string_builder.cc",0x70,
                 "chars_added == length == SIZE_UNKNOWN ? nn::npln::gnp::std::strlen(str) : length",
                 PTR_DAT_043752e8,sVar3,param_3,"Buffer size was insufficient");
  }
  if (uVar1 <= param_1[1] - 1U) {
    if ((ulong)param_1[1] <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00607c30("external/webrtc\\api/array_view.h",0xef,"idx < this->size()",PTR_DAT_043752e0,
                   uVar1);
    }
    if (*param_1 == 0) goto LAB_00609218;
    if (*(char *)(*param_1 + uVar1) == '\0') {
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00607c30("external/webrtc/rtc_base/strings/string_builder.cc",0x72,"IsConsistent()",
               PTR_DAT_043752a0);
}


