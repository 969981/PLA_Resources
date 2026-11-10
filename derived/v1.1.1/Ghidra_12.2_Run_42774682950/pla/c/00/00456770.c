/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00456770; name: FUN_00456770
 */


undefined8 FUN_00456770(int param_1)

{
  if (param_1 < 0x2a1) {
    if (param_1 == 0x40) {
      return 0x33;
    }
    if (param_1 == 0x2a0) {
      return 0x34;
    }
  }
  else {
    if (param_1 == 0x2a1) {
      return 0x36;
    }
    if (param_1 == 0x2a2) {
      return 0x35;
    }
  }
  return 0xffffffff;
}


