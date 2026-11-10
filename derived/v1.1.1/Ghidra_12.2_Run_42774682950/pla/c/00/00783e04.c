/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00783e04; name: FUN_00783e04
 */


void FUN_00783e04(byte *param_1)

{
  byte *pbVar1;
  
  nn::os::SdkMutexType::Lock();
  if ((*param_1 & 1) == 0) {
    *param_1 = 1;
    for (pbVar1 = *(byte **)(param_1 + 0x10); pbVar1 != param_1 + 8; pbVar1 = *(byte **)(pbVar1 + 8)
        ) {
      FUN_00783cd0(pbVar1 + -8);
    }
  }
  nn::os::SdkMutexType::Unlock();
  return;
}


