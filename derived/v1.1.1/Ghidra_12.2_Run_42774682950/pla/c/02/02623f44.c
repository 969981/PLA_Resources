/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02623f44; name: FUN_02623f44
 */


void FUN_02623f44(long param_1)

{
  ulong uVar1;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = nn::os::GetCurrentThread();
  while( true ) {
    local_30 = 0;
    uVar1 = FUN_02623fc4(param_1 + 0x10,&local_30,local_28);
    if ((uVar1 & 1) != 0) break;
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 4));
  }
  return;
}


