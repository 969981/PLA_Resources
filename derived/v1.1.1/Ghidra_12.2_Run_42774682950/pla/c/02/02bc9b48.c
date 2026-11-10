/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc9b48; name: FUN_02bc9b48
 */


void FUN_02bc9b48(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x74) != '\0') {
    for (lVar1 = *(long *)(param_1 + 0x140) << 6; lVar1 != 0; lVar1 = lVar1 + -0x40) {
      nn::hid::VibrationTarget::UnsetVibrationDeviceHandle();
    }
    *(undefined1 *)(param_1 + 0x74) = 0;
  }
  return;
}


