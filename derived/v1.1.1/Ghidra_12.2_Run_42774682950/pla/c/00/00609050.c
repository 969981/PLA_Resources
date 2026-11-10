/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00609050; name: FUN_00609050
 */


void FUN_00609050(long *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined1 *)0x0;
  if (param_3 != 0) {
    puVar1 = param_2;
  }
  *param_1 = (long)puVar1;
  param_1[1] = param_3;
  if ((param_3 == 0) != (puVar1 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00607c30("external/webrtc\\api/array_view.h",0x9f,"!this->data() == this->size() == 0",
                 PTR_DAT_043752d8,puVar1 == (undefined1 *)0x0,param_3 == 0);
  }
  param_1[2] = 0;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00607c30("external/webrtc\\api/array_view.h",0xef,"idx < this->size()",PTR_DAT_043752e0,0,0)
    ;
  }
  if (puVar1 == (undefined1 *)0x0) {
LAB_006090b4:
                    /* WARNING: Subroutine does not return */
    FUN_00607c30("external/webrtc\\api/array_view.h",0xf0,"this->data()",PTR_DAT_043752a0);
  }
  *puVar1 = 0;
  uVar2 = param_1[2];
  if (uVar2 <= param_1[1] - 1U) {
    if ((ulong)param_1[1] <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00607c30("external/webrtc\\api/array_view.h",0xef,"idx < this->size()",PTR_DAT_043752e0);
    }
    if (*param_1 == 0) goto LAB_006090b4;
    if (*(char *)(*param_1 + uVar2) == '\0') {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00607c30("external/webrtc/rtc_base/strings/string_builder.cc",0x18,"IsConsistent()",
               PTR_DAT_043752a0);
}


