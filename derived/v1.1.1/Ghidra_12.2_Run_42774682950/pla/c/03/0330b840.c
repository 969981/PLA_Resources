/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0330b840; name: _INIT_1629
 */


void _INIT_1629(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444add0 & 1) == 0) {
    DAT_0444adc0 = 0;
    DAT_0444adc8 = 0;
    DAT_0444ac08 = &DAT_0444adb0;
    DAT_0444adb0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444adb8 = &DAT_0434e868;
    DAT_0444add0 = 1;
  }
  return;
}


