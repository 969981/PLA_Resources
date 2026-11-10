/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cd4754; name: FUN_00cd4754
 */


undefined8 FUN_00cd4754(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  if ((long)puVar1 < -0x3807b6688508941e) {
    if (puVar1 == (undefined1 *)0x8964d1245bb2a8bb) {
      return 3;
    }
    if (puVar1 == (undefined1 *)0xc223aa6648ce415d) {
      return 7;
    }
    if (puVar1 == (undefined1 *)0x91837e47206f1d15) {
      return 0xd;
    }
  }
  else if ((long)puVar1 < 0x5f89f09249c10944) {
    if ((long)puVar1 < 0x4233a18e620996c8) {
      if ((long)puVar1 < 0xac6b1274261ea10) {
        if (puVar1 == (undefined1 *)0xc7f849977af76be2) {
          return 6;
        }
        if (puVar1 == (undefined1 *)0xcff5d7fa40f4fd06) {
          return 0xb;
        }
      }
      else {
        if (puVar1 == (undefined1 *)0xac6b1274261ea10) {
          return 1;
        }
        if (puVar1 == (undefined1 *)0x1e45bbd0d46022df) {
          return 8;
        }
        if (puVar1 == (undefined1 *)0x2388e4a528baa66c) {
          return 0xc;
        }
      }
    }
    else if ((long)puVar1 < 0x5486fd94d0219a95) {
      if (puVar1 == (undefined1 *)0x4233a18e620996c8) {
        return 0xe;
      }
    }
    else {
      if (puVar1 == (undefined1 *)0x5486fd94d0219a95) {
        return 2;
      }
      if ((puVar1 != (undefined1 *)0x570e45733e8000f5) &&
         (puVar1 == (undefined1 *)0x580fca602ddd6b0b)) {
        return 9;
      }
    }
  }
  else {
    if (puVar1 == (undefined1 *)0x5f89f09249c10944) {
      return 4;
    }
    if (puVar1 == (undefined1 *)0x5f9b0e9249cfaf71) {
      return 5;
    }
    if (puVar1 == &DAT_7c08eae870e235e0) {
      return 0;
    }
  }
  return 10;
}


