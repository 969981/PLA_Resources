/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3f7b4; name: FUN_02f3f7b4
 */


undefined4 FUN_02f3f7b4(long param_1)

{
  long lVar1;
  char local_2c [4];
  int local_28;
  undefined4 local_24;
  
  local_24 = 0;
  FUN_02f4a964(*(undefined8 *)(param_1 + 0xc0),local_2c,&local_28);
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x80);
  if (lVar1 != 0 && local_2c[0] == '\0') {
    do {
      FUN_02f3ae64(lVar1,local_2c,&local_28);
      lVar1 = *(long *)(lVar1 + 0x80);
      if (lVar1 == 0) break;
    } while (local_2c[0] == '\0');
  }
  if (local_28 == 0) {
    local_2c[0] = '\0';
    lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x80);
    if (lVar1 != 0) {
      do {
        FUN_02f3aed4(lVar1,local_2c,&local_24);
        lVar1 = *(long *)(lVar1 + 0x80);
        if (lVar1 == 0) {
          return local_24;
        }
      } while (local_2c[0] == '\0');
    }
  }
  return local_24;
}


