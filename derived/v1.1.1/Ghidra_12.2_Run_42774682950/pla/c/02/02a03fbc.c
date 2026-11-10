/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a03fbc; name: FUN_02a03fbc
 */


void FUN_02a03fbc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  char local_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  *(undefined1 *)(param_3[3] + 0x5c) = 0;
  lVar2 = param_3[3];
  bVar1 = *(byte *)(lVar2 + 0x5c);
  if (bVar1 < *(byte *)(lVar2 + 0x5a)) {
    *(byte *)(lVar2 + 0x5c) = bVar1 + 1;
    lVar2 = *(long *)(lVar2 + (ulong)bVar1 * 8);
    if (lVar2 != 0) {
      bVar3 = false;
      do {
        local_50 = param_3[1];
        uStack_48 = param_3[2];
        local_34 = 1;
        local_38 = *(undefined4 *)*param_3;
        local_40 = lVar2;
        FUN_02a08b94(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1c60),local_58,&local_50);
        if (local_58[0] != '\0') {
          bVar3 = true;
          lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
          *(undefined1 *)(lVar2 + (ulong)*(byte *)(lVar2 + 0x1c8) * 0x40 + 0x21) = 1;
        }
        lVar2 = param_3[3];
        bVar1 = *(byte *)(lVar2 + 0x5c);
        if (*(byte *)(lVar2 + 0x5a) <= bVar1) break;
        *(byte *)(lVar2 + 0x5c) = bVar1 + 1;
        lVar2 = *(long *)(lVar2 + (ulong)bVar1 * 8);
      } while (lVar2 != 0);
      if (bVar3) {
        return;
      }
    }
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  if (*(char *)(lVar2 + (ulong)*(byte *)(lVar2 + 0x1c8) * 0x40 + 0x43) == '\0') {
    FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x237,0xffff0000);
    return;
  }
  return;
}


