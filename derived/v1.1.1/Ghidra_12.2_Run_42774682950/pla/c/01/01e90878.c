/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e90878; name: FUN_01e90878
 */


undefined4 FUN_01e90878(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 0;
  lVar2 = *param_1;
  if (lVar2 < 0x71e98f4e9a452820) {
    if (lVar2 < -0x2fae1c49911526b1) {
      uVar1 = 3;
      if (lVar2 != -0x6e9c84e0e06db568) {
        uVar1 = 0;
      }
      return uVar1;
    }
    if (lVar2 == -0x2fae1c49911526b1) {
      return 1;
    }
    if (lVar2 == 0x9bd13c6e7bb876e) {
      return 5;
    }
    if (lVar2 == 0x3b5d719234d56e3a) {
      return 2;
    }
  }
  else {
    if (lVar2 < 0x73c1dc842bbb2546) {
      uVar1 = 8;
      if (lVar2 != 0x71e98f4e9a452820) {
        uVar1 = 0;
      }
      return uVar1;
    }
    if (lVar2 == 0x79ee85ffb7c5b8e6) {
      uVar1 = 7;
    }
    else {
      if (lVar2 == 0x73c1dc842bbb2546) {
        return 4;
      }
      if (lVar2 == 0x7cc088e10572cf65) {
        return 6;
      }
    }
  }
  return uVar1;
}


