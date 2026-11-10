/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f33334; name: FUN_02f33334
 */


void FUN_02f33334(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_042ad248;
  uVar1 = nn::audio::GetActiveAudioDeviceChannelCountForOutput();
  *(undefined4 *)(param_1 + 0x21) = uVar1;
  *(undefined1 *)((long)param_1 + 0x10c) = 0;
  nn::audio::GetActiveAudioDeviceName((AudioDeviceName *)(param_1 + 1));
  if (DAT_0440a1c0._4_1_ == '\0') {
    if ((DAT_0440b2d0 & 1) == 0) {
      iVar2 = nn::audio::AcquireAudioDeviceNotificationForOutput((SystemEvent *)&DAT_0440b2a0);
      if (iVar2 == 0) {
        DAT_0440b2d0 = 1;
      }
      else if (DAT_0440b2d0 != 1) {
        return;
      }
    }
    *(undefined1 *)((long)param_1 + 0x10c) = 1;
  }
  return;
}


