/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029fc25c; name: FUN_029fc25c
 */


void FUN_029fc25c(long param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long local_a8 [10];
  undefined6 uStack_58;
  undefined2 local_52;
  undefined2 uStack_50;
  byte bStack_4e;
  undefined1 uStack_4d;
  byte bStack_4c;
  undefined1 uStack_4b;
  undefined1 auStack_48 [8];
  long *local_38;
  
  uStack_50 = 0;
  bStack_4e = 0;
  uStack_4d = 0;
  bStack_4c = 0;
  uStack_4b = 0;
  local_a8[9] = 0;
  uStack_58 = 0;
  local_52 = 0;
  local_a8[0] = 0;
  local_a8[7] = 0;
  local_a8[8] = 0;
  local_a8[5] = 0;
  local_a8[6] = 0;
  local_a8[3] = 0;
  local_a8[4] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  lVar6 = *(long *)(*(long *)(param_1 + 0x60) + 0x12c0);
  FUN_029e9bc4(lVar6,local_a8);
  local_38 = local_a8;
  FUN_029f7874(*(undefined8 *)(*(long *)(lVar6 + 0x60) + 0x17e0),auStack_48,&local_38);
  if (bStack_4e != 0) {
    bStack_4c = 1;
    lVar6 = local_a8[0];
    while (lVar6 != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      bVar2 = *(byte *)(lVar6 + 0x7d);
      lVar6 = *(long *)(lVar3 + 0x20);
      lVar5 = *(long *)(*(long *)(*(long *)(lVar6 + 0x10) + 8) + (ulong)bVar2 * 8 + 0x120);
      *(undefined1 *)(lVar5 + 0x386) = 0;
      *(undefined2 *)(lVar5 + 900) = 0;
      if (*(ushort *)(lVar5 + 0x370) < 9999) {
        *(ushort *)(lVar5 + 0x370) = *(ushort *)(lVar5 + 0x370) + 1;
      }
      bVar1 = 0;
      if ((byte)(*(char *)(lVar5 + 0x493) + 1U) < 3) {
        bVar1 = *(char *)(lVar5 + 0x493) + 1;
      }
      *(byte *)(lVar5 + 0x493) = bVar1;
      *(undefined1 *)(lVar5 + (ulong)bVar1 + 0x490) = 0;
      *(undefined1 *)(lVar5 + 0x36e) = 1;
      lVar6 = *(long *)(*(long *)(*(long *)(lVar6 + 0x10) + 8) + (ulong)bVar2 * 8 + 0x120);
      if (*(char *)(lVar6 + 0x49c) != '\x1f') {
        *(undefined1 *)(lVar6 + 0x49c) = 0x1f;
        *(undefined4 *)(lVar6 + 0x498) = 0;
      }
      FUN_02a3e6b8(*(undefined8 *)(lVar3 + 0x18),0x40);
      uVar4 = (ulong)bStack_4c;
      if (bStack_4e <= bStack_4c) {
        return;
      }
      bStack_4c = bStack_4c + 1;
      lVar6 = local_a8[uVar4];
    }
  }
  return;
}


