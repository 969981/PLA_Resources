/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060930c; name: FUN_0060930c
 */


long * FUN_0060930c(long *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  size_t __maxlen;
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 **ppuStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  
  uVar2 = param_1[2];
  __maxlen = param_1[1] - uVar2;
  local_90 = param_3;
  uStack_88 = param_4;
  local_80 = param_5;
  uStack_78 = param_6;
  local_70 = param_7;
  uStack_68 = param_8;
  if ((ulong)param_1[1] < uVar2 || __maxlen == 0) {
LAB_00609404:
                    /* WARNING: Subroutine does not return */
    FUN_00607c30("external/webrtc\\api/array_view.h",0xef,"idx < this->size()",PTR_DAT_043752e0);
  }
  if (*param_1 == 0) {
LAB_00609424:
                    /* WARNING: Subroutine does not return */
    FUN_00607c30("external/webrtc\\api/array_view.h",0xf0,"this->data()",PTR_DAT_043752a0);
  }
  uStack_48 = 0xffffff80ffffffd0;
  local_60 = (undefined1 *)register0x00000008;
  ppuStack_58 = &local_60;
  local_50 = &local_90;
  uVar1 = vsnprintf((char *)(*param_1 + uVar2),__maxlen,param_2,&local_60);
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00607c30("external/webrtc/rtc_base/strings/string_builder.cc",99,"false",PTR_DAT_043752a0);
  }
  uVar2 = param_1[1] + ~param_1[2];
  uVar3 = uVar1;
  if (uVar2 <= uVar1) {
    uVar3 = (uint)uVar2;
  }
  uVar2 = (ulong)(int)uVar3;
  param_1[2] = param_1[2] + uVar2;
  if (uVar1 != uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00607c30("external/webrtc/rtc_base/strings/string_builder.cc",0x5f,"len == chars_added",
                 PTR_DAT_043752f0,uVar1,uVar2,"Buffer size was insufficient");
  }
  uVar2 = param_1[2];
  if (uVar2 <= param_1[1] - 1U) {
    if ((ulong)param_1[1] <= uVar2) goto LAB_00609404;
    if (*param_1 == 0) goto LAB_00609424;
    if (*(char *)(*param_1 + uVar2) == '\0') {
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00607c30("external/webrtc/rtc_base/strings/string_builder.cc",0x67,"IsConsistent()",
               PTR_DAT_043752a0);
}


