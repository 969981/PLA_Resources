/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db6d68; name: FUN_00db6d68
 */


void FUN_00db6d68(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1 + 0x2d0);
  while (uVar1 = (*pcVar2)(param_1 + 0x2f0), (uVar1 & 1) != 0) {
    nn::os::SleepThread(16000000);
    pcVar2 = *(code **)(param_1 + 0x2d0);
  }
  nn::oe::LeaveExitRequestHandlingSection();
  do {
    nn::os::SleepThread(16000000);
  } while( true );
}


