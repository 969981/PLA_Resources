/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a22870; name: FUN_02a22870
 */


void FUN_02a22870(long *param_1,undefined1 param_2,long param_3,undefined2 param_4)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined1 local_68;
  undefined1 local_67;
  byte local_66 [2];
  undefined2 uStack_64;
  ushort local_62;
  uint local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 auStack_38 [8];
  
  bVar2 = *(byte *)(param_3 + 0x7d);
  uVar4 = (ulong)bVar2;
  uVar3 = FUN_02a21f10(param_1,uVar4,0);
  if (((uVar3 & 1) != 0) || (*(char *)(param_3 + 900) < '\0')) {
    lVar6 = param_1[4];
    lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 4000) + 0x10) + 8) + uVar4 * 8 + 0x120);
    if (*(short *)(lVar7 + 0x74) != 0) {
      *(byte *)(lVar7 + 900) = *(byte *)(lVar7 + 900) & 0x7f;
      lVar6 = param_1[4];
    }
    lVar7 = *(long *)(*(long *)(lVar6 + 0xfe0) + 0x20);
    lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 0xfe0) + 0x10) + 8) + uVar4 * 8 + 0x120)
    ;
    *(undefined1 *)
     (*(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0x10) + 8) +
                (ulong)*(byte *)(lVar6 + 0x7d) * 8 + 0x120) + 0x38f) = 0;
    FUN_02a3e6b8(*(undefined8 *)(lVar7 + 0x18),0x33,*(undefined1 *)(lVar6 + 0x7d),3,0);
  }
  local_67 = 0;
  local_5c = 0;
  local_54 = 0;
  local_4c = 0;
  local_44 = 0;
  _local_66 = CONCAT22(param_4,local_66);
  local_62 = 0x82;
  local_60 = (uint)bVar2;
  local_68 = param_2;
  FUN_029e54ac(*(undefined8 *)(param_1[4] + 0xde0),auStack_38,&local_68);
  local_62 = local_62 & 0xff00;
  lVar6 = 0;
  bVar2 = *(byte *)(param_3 + 0x7d);
  if (5 < bVar2) {
    if (bVar2 < 0xc) {
      lVar6 = 2;
    }
    else if (bVar2 < 0x12) {
      lVar6 = 1;
    }
    else if (bVar2 < 0x18) {
      lVar6 = 3;
    }
    else {
      lVar6 = (ulong)(bVar2 < 0x1e) << 2;
    }
  }
  if (*(uint *)(*param_1 + 0x110) < 3) {
    local_67 = (&PTR_DAT_0427c9a8)[(int)*(uint *)(*param_1 + 0x110)][lVar6];
  }
  else {
    local_67 = 2;
  }
  uVar5 = 0;
  _local_66 = 4;
  do {
    if ((((uVar5 & 0xffff) < 0x11) && ((1 << (ulong)(uVar5 & 0x1f) & 0x18600U) != 0)) &&
       (uVar1 = (uVar5 >> 3) + 1, (uVar1 & 0xff) < 4)) {
      bVar2 = (byte)uVar1;
      local_66[bVar2] = local_66[bVar2] | (byte)(1 << (ulong)(uVar5 & 7));
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0x13);
  local_68 = param_2;
  FUN_029f563c(*(undefined8 *)(param_1[4] + 0x1140),auStack_38,&local_68);
  return;
}


