/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02954420; name: FUN_02954420
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_02954420(byte *param_1,byte param_2,undefined1 *param_3)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*param_1;
  if (*param_1 != 0) {
    if (param_1[1] == param_2) {
      if (param_1[2] == 0x1f) {
        uVar2 = 1;
        *param_3 = 0;
        bVar1 = param_1[3];
      }
      else {
        uVar2 = 0;
        bVar1 = param_1[3];
      }
      goto joined_r0x0295444c;
    }
    uVar2 = 0;
  }
  bVar1 = param_1[3];
joined_r0x0295444c:
  if (((bVar1 == 0) || (param_1[4] != param_2)) || (param_1[5] != 0x1f)) {
    bVar1 = param_1[6];
  }
  else {
    param_3[uVar2] = 1;
    uVar2 = (ulong)((int)uVar2 + 1);
    bVar1 = param_1[6];
  }
  if (((bVar1 != 0) && (param_1[7] == param_2)) && (param_1[8] == 0x1f)) {
    param_3[uVar2] = 2;
    uVar2 = (ulong)((int)uVar2 + 1);
  }
  if (((param_1[9] != 0) && (param_1[10] == param_2)) && (param_1[0xb] == 0x1f)) {
    param_3[uVar2] = 3;
    uVar2 = (ulong)((int)uVar2 + 1);
  }
  if (((param_1[0xc] != 0) && (param_1[0xd] == param_2)) && (param_1[0xe] == 0x1f)) {
    param_3[uVar2] = 4;
    uVar2 = (ulong)((int)uVar2 + 1);
  }
  if (((param_1[0xf] != 0) && (param_1[0x10] == param_2)) && (param_1[0x11] == 0x1f)) {
    param_3[uVar2] = 5;
    uVar2 = (ulong)((int)uVar2 + 1);
  }
  return uVar2;
}


