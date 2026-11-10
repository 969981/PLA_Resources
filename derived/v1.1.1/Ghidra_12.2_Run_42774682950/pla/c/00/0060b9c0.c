/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060b9c0; name: FUN_0060b9c0
 */


undefined8 FUN_0060b9c0(long param_1,long param_2,int param_3,byte *param_4)

{
  int iVar1;
  byte *pbVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  byte *pbVar6;
  
  if ((*param_4 & 1) == 0) {
    param_4[0] = 0;
    param_4[1] = 0;
    iVar1 = 0;
    if (param_3 != 0) {
      iVar1 = 0x100 / param_3;
    }
  }
  else {
    **(undefined1 **)(param_4 + 0x10) = 0;
    param_4[8] = 0;
    param_4[9] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0;
    param_4[0xc] = 0;
    param_4[0xd] = 0;
    param_4[0xe] = 0;
    param_4[0xf] = 0;
    iVar1 = 0;
    if (param_3 != 0) {
      iVar1 = 0x100 / param_3;
    }
  }
  if (iVar1 * param_3 != 0x100) {
    FUN_00608800(PTR_DAT_04375348,"external/webrtc/rtc_base/helpers.cc",0x45c,
                 "Table size must divide 256 evenly!");
    return 0;
  }
  pbVar2 = (byte *)FUN_002e2ec0(PTR_FUN_04373078,param_1);
  if (((DAT_0439f3a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0439f3a8), iVar1 != 0)) {
    plVar4 = (long *)FUN_002e2e80(PTR_FUN_04373078,8);
    if (plVar4 != (long *)0x0) {
      *plVar4 = (long)(PTR_DAT_04375350 + 0x10);
    }
    DAT_0439f3a0 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,8);
    if (DAT_0439f3a0 != (undefined8 *)0x0) {
      *DAT_0439f3a0 = plVar4;
    }
    __cxa_guard_release(&DAT_0439f3a8);
  }
                    /* try { // try from 0060ba78 to 0060ba93 has its CatchHandler @ 0060bba0 */
  uVar3 = (**(code **)(*(long *)*DAT_0439f3a0 + 0x18))((long *)*DAT_0439f3a0,pbVar2,param_1);
  if ((uVar3 & 1) == 0) {
                    /* try { // try from 0060bac8 to 0060bae7 has its CatchHandler @ 0060bb94 */
    FUN_00608800(PTR_DAT_04375348,"external/webrtc/rtc_base/helpers.cc",0x484,
                 "Failed to generate random string!");
    uVar5 = 0;
  }
  else {
    FUN_0030ff7c(param_4,param_1);
    if (param_1 != 0) {
      pbVar6 = pbVar2;
      do {
        iVar1 = 0;
        if (param_3 != 0) {
          iVar1 = (int)(uint)*pbVar6 / param_3;
        }
                    /* try { // try from 0060baac to 0060bab3 has its CatchHandler @ 0060bbac */
        FUN_002e6a9c(param_4,*(undefined1 *)(param_2 + (ulong)((uint)*pbVar6 - iVar1 * param_3)));
        param_1 = param_1 + -1;
        pbVar6 = pbVar6 + 1;
      } while (param_1 != 0);
      uVar5 = 1;
      goto LAB_0060baf0;
    }
    uVar5 = 1;
  }
  if (pbVar2 == (byte *)0x0) {
    return uVar5;
  }
LAB_0060baf0:
  FUN_002e2f10(pbVar2);
  FUN_002e2ef0(PTR_LAB_04373088,pbVar2);
  return uVar5;
}


