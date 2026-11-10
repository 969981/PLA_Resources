/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f40b00; name: FUN_02f40b00
 */


int FUN_02f40b00(long param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int local_24;
  long local_18;
  
  bVar2 = *(byte *)(param_1 + 0x24);
  uVar3 = (uint)bVar2;
  if (((~bVar2 & 0xf0) != 0) && ((char)bVar2 < '\0')) {
    uVar1 = uVar3 & 0xf0;
    if (0xef < uVar3) {
      uVar1 = (uint)bVar2;
    }
    uVar3 = (uVar1 + 0x50) * 0x10 & 0xff | uVar1 + 0x50 >> 4 & 0xf;
    if (uVar3 - 1 < 2) {
      return 2;
    }
    if (uVar3 == 5) {
      return -1;
    }
    if (uVar3 == 0) {
      if (*(char *)(param_1 + 0x25) < '\0') {
        return -1;
      }
      if ((uVar1 | 0x10) == 0xd0) {
        return 2;
      }
    }
    return 3;
  }
  if (bVar2 != 0xf0) {
    if (uVar3 == 0xff) {
      local_18 = param_1 + 0x26;
      goto LAB_02f40b94;
    }
    if (uVar3 != 0xf7) {
      return -1;
    }
  }
  local_18 = param_1 + 0x25;
LAB_02f40b94:
  FUN_02f40970(&local_18,&local_24);
  if (local_24 == -1) {
    return -1;
  }
  return local_24 + ((int)local_18 - (int)(byte *)(param_1 + 0x24));
}


