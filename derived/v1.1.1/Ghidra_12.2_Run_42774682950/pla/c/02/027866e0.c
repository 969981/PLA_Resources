/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027866e0; name: FUN_027866e0
 */


ulong FUN_027866e0(void)

{
  ulong uVar1;
  
  if ((long)DAT_0426be30 < -0x29ef35371dba487) {
    if (-0x4bd6706fd880cebf < (long)DAT_0426be30) {
      if ((long)DAT_0426be30 < -0x29ef45371dba63a) {
        if (DAT_0426be30 == 0xf7270694c7330954) {
          uVar1 = 0x100;
          goto LAB_027869f8;
        }
        if (DAT_0426be30 == 0xb4298f90277f3142) goto LAB_027869b4;
        uVar1 = 0xaac8e245813;
      }
      else {
        uVar1 = 0xbac8e2459c6;
      }
LAB_02786904:
      if (DAT_0426be30 != (uVar1 | 0xfd61000000000000)) {
        return 0;
      }
LAB_027869f4:
      uVar1 = 0x400;
      goto LAB_027869f8;
    }
    if ((long)DAT_0426be30 < -0x635c44796d8241e1) {
      if ((DAT_0426be30 != 0x9ca3b686927db5a0) && (DAT_0426be30 != 0x9ca3b886927db906)) {
        return 0;
      }
LAB_027869ec:
      uVar1 = 0x500;
      goto LAB_027869f8;
    }
    if ((long)DAT_0426be30 < -0x4bd6756fd880d73d) {
      if (DAT_0426be30 == 0x9ca3bb86927dbe1f) goto LAB_027869ec;
      uVar1 = 0x8990277f2710;
    }
    else {
      if (DAT_0426be30 == 0xb4298a90277f28c3) goto LAB_027869b4;
      uVar1 = 0x8c90277f2c29;
    }
    if (DAT_0426be30 != (uVar1 | 0xb429000000000000)) {
      return 0;
    }
  }
  else {
    if ((long)DAT_0426be30 < 0x21cfcbb62ff035a0) {
      if ((long)DAT_0426be30 < 0x111be26e72560393) {
        if (DAT_0426be30 != 0xfd610cac8e245b79) {
          uVar1 = 0xdac8e245d2c;
          goto LAB_02786904;
        }
        goto LAB_027869f4;
      }
      if ((long)DAT_0426be30 < 0x111be46e725606f9) {
        if (DAT_0426be30 != 0x111be26e72560393) {
          uVar1 = 0xe36e72560546;
LAB_027869e0:
          if (DAT_0426be30 != (uVar1 | 0x111b000000000000)) {
            return 0;
          }
        }
      }
      else if (DAT_0426be30 != 0x111be46e725606f9) {
        uVar1 = 0xe56e725608ac;
        goto LAB_027869e0;
      }
      goto LAB_027869ec;
    }
    if (0x6a92faa34d5c91bf < (long)DAT_0426be30) {
      if ((long)DAT_0426be30 < 0x6a92fca34d5c9526) {
        if ((DAT_0426be30 != 0x6a92faa34d5c91c0) && (DAT_0426be30 != 0x6a92fba34d5c9373)) {
          return 0;
        }
      }
      else if ((DAT_0426be30 != 0x6a92fca34d5c9526) && (DAT_0426be30 != 0x6a9301a34d5c9da5)) {
        return 0;
      }
      uVar1 = 0x300;
      goto LAB_027869f8;
    }
    if ((DAT_0426be30 != 0x21cfcbb62ff035a0) && (DAT_0426be30 != 0x21cfceb62ff03ab9)) {
      return 0;
    }
  }
LAB_027869b4:
  uVar1 = 0x200;
LAB_027869f8:
  return uVar1 | 1;
}


