/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092a3c0; name: FUN_0092a3c0
 */


void FUN_0092a3c0(long param_1,long param_2,int param_3)

{
  long lVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_168 [8];
  long local_160;
  long local_158 [29];
  uint local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined4 local_5c;
  undefined1 local_58;
  undefined1 local_54 [4];
  
  local_64 = 5;
  local_66 = 0;
  local_68 = 0x101;
  bVar2 = *(byte *)(*(long *)(param_2 + 0x70) + 0x7d);
  lVar7 = 3;
  if (0x17 < bVar2) {
    lVar7 = (ulong)(bVar2 < 0x1e) << 2;
  }
  uVar5 = *(uint *)(*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x68) + 0xd0) + 0x68) + 0x98)
                   + 0x110);
  lVar1 = 1;
  if (0x11 < bVar2) {
    lVar1 = lVar7;
  }
  lVar7 = 2;
  if (0xb < bVar2) {
    lVar7 = lVar1;
  }
  lVar1 = 0;
  if (5 < bVar2) {
    lVar1 = lVar7;
  }
  local_65 = 2;
  if ((uVar5 < 3) &&
     (local_65 = (&PTR_DAT_041b8018)[(int)uVar5][lVar1] == 0,
     1 < (byte)(&PTR_DAT_041b8018)[(int)uVar5][lVar1])) {
    local_65 = 2;
  }
  FUN_009346d8(auStack_168,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0),&local_68);
  if ((local_70 != 0) && (param_3 == 0xed)) {
    uVar3 = *(undefined1 *)(*(long *)(local_160 + 0x70) + 0x7d);
    uVar4 = *(undefined1 *)(*(long *)(param_2 + 0x70) + 0x7d);
    local_54[0] = 0;
    uVar6 = FUN_0092a90c(param_1,local_54);
    if ((uVar6 & 1) != 0) {
      local_5c = 0xed;
      local_58 = local_54[0];
      local_60 = uVar4;
      local_5f = uVar3;
      FUN_0092a580(param_1,&local_60);
    }
    if (local_70 != 1) {
      plVar8 = local_158;
      lVar7 = (ulong)local_70 * 8 + -8;
      do {
        uVar3 = *(undefined1 *)(*(long *)(*plVar8 + 0x70) + 0x7d);
        uVar4 = *(undefined1 *)(*(long *)(param_2 + 0x70) + 0x7d);
        local_54[0] = 0;
        uVar6 = FUN_0092a90c(param_1,local_54);
        if ((uVar6 & 1) != 0) {
          local_5c = 0xed;
          local_58 = local_54[0];
          local_60 = uVar4;
          local_5f = uVar3;
          FUN_0092a580(param_1,&local_60);
        }
        plVar8 = plVar8 + 1;
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
    }
  }
  return;
}


