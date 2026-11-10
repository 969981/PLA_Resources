/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00607e9c; name: FUN_00607e9c
 */


void FUN_00607e9c(void)

{
  ulong uVar1;
  
  uVar1 = nn::os::SdkRecursiveMutexType::IsLockedByCurrentThread();
  if ((uVar1 & 1) == 0) {
                    /* try { // try from 00607ebc to 00607edb has its CatchHandler @ 00607edc */
                    /* WARNING: Subroutine does not return */
    FUN_00607c30("external/webrtc/rtc_base/criticalsection.cc",0xa2,"CurrentThreadIsOwner()",
                 PTR_DAT_043752a0);
  }
  nn::os::SdkRecursiveMutexType::Unlock();
  return;
}


