/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0275d420; name: FUN_0275d420
 */


void FUN_0275d420(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    *(undefined8 *)(param_1 + 0x68) = param_2;
    *(undefined4 *)(param_1 + 0x70) = param_3;
    nn::os::GetSystemTick();
    uVar1 = nn::os::ConvertToTimeSpan();
    *(undefined8 *)(param_1 + 0x98) = uVar1;
    *(undefined4 *)(param_1 + 0xa8) = 1;
  }
  return;
}


