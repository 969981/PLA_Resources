/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3366c; name: FUN_02f3366c
 */


undefined4 FUN_02f3366c(char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (param_2 == 2) {
    iVar1 = strcmp(param_1,PTR_s_AudioTvOutput_042ad268);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      iVar1 = strcmp(param_1,PTR_s_AudioStereoJackOutput_042ad278);
      if (iVar1 == 0) {
        lVar3 = 1;
      }
      else {
        iVar1 = strcmp(param_1,PTR_s_AudioBuiltInSpeakerOutput_042ad288);
        if (iVar1 == 0) {
          lVar3 = 2;
        }
        else {
          iVar1 = strcmp(param_1,PTR_s_AudioUsbDeviceOutput_042ad298);
          if (iVar1 != 0) goto LAB_02f336d0;
          lVar3 = 3;
        }
      }
    }
    uVar2 = (&DAT_042ad270)[lVar3 * 4];
  }
  else {
LAB_02f336d0:
    uVar2 = 0;
  }
  return uVar2;
}


