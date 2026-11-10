/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00550920; name: FUN_00550920
 */


undefined8 FUN_00550920(uint *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (uint)*param_2;
  if (-1 < (char)*param_2) {
    *param_1 = uVar1;
    return 1;
  }
  uVar2 = param_2[1] ^ 0x80;
  if ((uVar2 & 0xc0) == 0) {
    if (uVar1 < 0xe0) {
      if ((0xbf < uVar1) && (uVar2 = (uVar1 & 0x1f) << 6 | uVar2, 0x7f < uVar2)) {
        *param_1 = uVar2;
        return 2;
      }
    }
    else {
      uVar3 = param_2[2] ^ 0x80;
      if ((uVar3 & 0xc0) == 0) {
        if (uVar1 < 0xf0) {
          uVar1 = (uVar2 | (uVar1 & 0xf) << 6) << 6;
          if (0x7ff < uVar1) {
            *param_1 = uVar1 | uVar3;
            return 3;
          }
        }
        else if (((uVar1 < 0xf8) && (((param_2[3] ^ 0x80) & 0xc0) == 0)) &&
                (uVar1 = (uVar3 | (uVar2 | (uVar1 & 7) << 6) << 6) << 6, 0xffff < uVar1)) {
          *param_1 = uVar1 | param_2[3] ^ 0x80;
          return 4;
        }
      }
    }
  }
  *param_1 = 0xfffd;
  return 1;
}


