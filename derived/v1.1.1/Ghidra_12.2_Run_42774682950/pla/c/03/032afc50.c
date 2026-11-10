/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032afc50; name: FUN_032afc50
 */


undefined8 FUN_032afc50(int param_1)

{
  if (param_1 < 0x32495441) {
    if (param_1 < 0x31495441) {
      switch(param_1) {
      case 0x6f:
        return 0x46;
      case 0x70:
        return 0x3c;
      case 0x71:
        return 0x32;
      case 0x72:
        return 0x28;
      case 0x73:
        return 0x1e;
      case 0x74:
        return 10;
      }
      if (param_1 == 0x24) {
        return 0x35;
      }
    }
    else {
      if (param_1 == 0x31495441) {
        return 0x96;
      }
      if (param_1 == 0x31545844) {
        return 0x78;
      }
    }
  }
  else if (param_1 < 0x35545844) {
    if (param_1 < 0x33545844) {
      if (param_1 == 0x32495441) {
        return 0xa0;
      }
      if (param_1 == 0x32545844) {
        return 0x82;
      }
    }
    else {
      if (param_1 == 0x33545844) {
        return 0x82;
      }
      if (param_1 == 0x34545844) {
        return 0x8c;
      }
    }
  }
  else if (param_1 < 0x53354342) {
    if (param_1 == 0x35545844) {
      return 0x8c;
    }
    if (param_1 == 0x53344342) {
      return 0x97;
    }
  }
  else {
    if (param_1 == 0x53354342) {
      return 0xa1;
    }
    if (param_1 == 0x55344342) {
      return 0x96;
    }
    if (param_1 == 0x55354342) {
      return 0xa0;
    }
  }
  return 0;
}


