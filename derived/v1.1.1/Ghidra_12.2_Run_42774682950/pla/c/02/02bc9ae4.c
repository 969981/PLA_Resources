/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc9ae4; name: FUN_02bc9ae4
 */


void FUN_02bc9ae4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x74) == '\0') {
    lVar1 = *(long *)(param_1 + 0x140) << 6;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)(param_1 + 0xc0);
      do {
        nn::hid::VibrationTarget::SetVibrationDeviceHandle((VibrationDeviceHandle *)*puVar2);
        lVar1 = lVar1 + -0x40;
        puVar2 = puVar2 + 8;
      } while (lVar1 != 0);
    }
    *(undefined1 *)(param_1 + 0x74) = 1;
  }
  return;
}


