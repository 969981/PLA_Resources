/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a03d50; name: FUN_02a03d50
 */


void FUN_02a03d50(long param_1,undefined8 param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined2 uVar2;
  long lVar3;
  char local_58;
  char local_57;
  undefined1 local_50;
  undefined1 local_4f;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined8 local_48;
  
  uVar2 = FUN_02988214(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_3 + 2),*param_3);
  *(undefined1 *)(*(long *)(param_3 + 4) + 0x5c) = 0;
  lVar3 = *(long *)(param_3 + 4);
  bVar1 = *(byte *)(lVar3 + 0x5c);
  if (bVar1 < *(byte *)(lVar3 + 0x5a)) {
    *(byte *)(lVar3 + 0x5c) = bVar1 + 1;
    for (lVar3 = *(long *)(lVar3 + (ulong)bVar1 * 8); lVar3 != 0;
        lVar3 = *(long *)(lVar3 + (ulong)bVar1 * 8)) {
      local_50 = *(undefined1 *)(*(long *)(param_3 + 2) + 0x7d);
      local_4f = *(undefined1 *)(lVar3 + 0x7d);
      local_4e = 0;
      local_48 = 0;
      local_4c = uVar2;
      FUN_029edf9c(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x760),&local_58,&local_50);
      if (local_58 == '\0') {
        if (local_57 == '\0') {
          FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x237,0xffff0000);
        }
      }
      else {
        lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
        *(undefined1 *)(lVar3 + (ulong)*(byte *)(lVar3 + 0x1c8) * 0x40 + 0x21) = 1;
      }
      lVar3 = *(long *)(param_3 + 4);
      bVar1 = *(byte *)(lVar3 + 0x5c);
      if (*(byte *)(lVar3 + 0x5a) <= bVar1) {
        return;
      }
      *(byte *)(lVar3 + 0x5c) = bVar1 + 1;
    }
  }
  return;
}


