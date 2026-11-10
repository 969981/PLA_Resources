/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3c5d0; name: FUN_02a3c5d0
 */


void FUN_02a3c5d0(long param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  uVar4 = FUN_02949cec(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),0);
  if ((uVar4 & 1) != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 8);
    uVar2 = FUN_0294da60(*(undefined4 *)(lVar6 + 0x110),
                         *(undefined1 *)(*(long *)(lVar6 + 0x58) + 0x55),0);
    bVar1 = *(byte *)(lVar7 + 0x38);
    if ((int)uVar2 < (int)(uint)bVar1) {
      uVar5 = (uint)bVar1;
      while( true ) {
        if ((uVar2 & 0xff) < (uint)bVar1) {
          lVar6 = *(long *)(lVar7 + (ulong)(uVar2 & 0xff) * 8 + 8);
        }
        else {
          lVar6 = 0;
        }
        iVar3 = FUN_029506a8(lVar6,0x10);
        if (iVar3 == 0x95) {
          *(ushort *)(lVar6 + 0x87) = *(ushort *)(lVar6 + 0x87) & 0xffbf;
          *(undefined1 *)(lVar6 + 0x28e) = 0x1f;
        }
        if (uVar5 - 1 == uVar2) break;
        bVar1 = *(byte *)(lVar7 + 0x38);
        uVar2 = uVar2 + 1;
      }
    }
    FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x3b,0);
  }
  uVar4 = FUN_02949cec(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),1);
  if ((uVar4 & 1) != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 8);
    uVar2 = FUN_0294da60(*(undefined4 *)(lVar6 + 0x110),
                         *(undefined1 *)(*(long *)(lVar6 + 0x58) + 0x55),1);
    bVar1 = *(byte *)(lVar7 + 0x70);
    if ((int)uVar2 < (int)(uint)bVar1) {
      uVar5 = (uint)bVar1;
      while( true ) {
        if ((uVar2 & 0xff) < (uint)bVar1) {
          lVar6 = *(long *)(lVar7 + (ulong)(uVar2 & 0xff) * 8 + 0x40);
        }
        else {
          lVar6 = 0;
        }
        iVar3 = FUN_029506a8(lVar6,0x10);
        if (iVar3 == 0x95) {
          *(ushort *)(lVar6 + 0x87) = *(ushort *)(lVar6 + 0x87) & 0xffbf;
          *(undefined1 *)(lVar6 + 0x28e) = 0x1f;
        }
        if (uVar5 - 1 == uVar2) break;
        bVar1 = *(byte *)(lVar7 + 0x70);
        uVar2 = uVar2 + 1;
      }
    }
    FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x3b,1);
  }
  uVar4 = FUN_02949cec(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),2);
  if ((uVar4 & 1) != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 8);
    uVar2 = FUN_0294da60(*(undefined4 *)(lVar6 + 0x110),
                         *(undefined1 *)(*(long *)(lVar6 + 0x58) + 0x55),2);
    bVar1 = *(byte *)(lVar7 + 0xa8);
    if ((int)uVar2 < (int)(uint)bVar1) {
      uVar5 = (uint)bVar1;
      while( true ) {
        if ((uVar2 & 0xff) < (uint)bVar1) {
          lVar6 = *(long *)(lVar7 + (ulong)(uVar2 & 0xff) * 8 + 0x78);
        }
        else {
          lVar6 = 0;
        }
        iVar3 = FUN_029506a8(lVar6,0x10);
        if (iVar3 == 0x95) {
          *(ushort *)(lVar6 + 0x87) = *(ushort *)(lVar6 + 0x87) & 0xffbf;
          *(undefined1 *)(lVar6 + 0x28e) = 0x1f;
        }
        if (uVar5 - 1 == uVar2) break;
        bVar1 = *(byte *)(lVar7 + 0xa8);
        uVar2 = uVar2 + 1;
      }
    }
    FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x3b,2);
  }
  uVar4 = FUN_02949cec(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),3);
  if ((uVar4 & 1) != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 8);
    uVar2 = FUN_0294da60(*(undefined4 *)(lVar6 + 0x110),
                         *(undefined1 *)(*(long *)(lVar6 + 0x58) + 0x55),3);
    bVar1 = *(byte *)(lVar7 + 0xe0);
    if ((int)uVar2 < (int)(uint)bVar1) {
      uVar5 = (uint)bVar1;
      while( true ) {
        if ((uVar2 & 0xff) < (uint)bVar1) {
          lVar6 = *(long *)(lVar7 + (ulong)(uVar2 & 0xff) * 8 + 0xb0);
        }
        else {
          lVar6 = 0;
        }
        iVar3 = FUN_029506a8(lVar6,0x10);
        if (iVar3 == 0x95) {
          *(ushort *)(lVar6 + 0x87) = *(ushort *)(lVar6 + 0x87) & 0xffbf;
          *(undefined1 *)(lVar6 + 0x28e) = 0x1f;
        }
        if (uVar5 - 1 == uVar2) break;
        bVar1 = *(byte *)(lVar7 + 0xe0);
        uVar2 = uVar2 + 1;
      }
    }
    FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x3b,3);
  }
  uVar4 = FUN_02949cec(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),4);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 8);
  uVar2 = FUN_0294da60(*(undefined4 *)(lVar6 + 0x110),
                       *(undefined1 *)(*(long *)(lVar6 + 0x58) + 0x55),4);
  bVar1 = *(byte *)(lVar7 + 0x118);
  if ((int)uVar2 < (int)(uint)bVar1) {
    uVar5 = (uint)bVar1;
    while( true ) {
      if ((uVar2 & 0xff) < (uint)bVar1) {
        lVar6 = *(long *)(lVar7 + (ulong)(uVar2 & 0xff) * 8 + 0xe8);
      }
      else {
        lVar6 = 0;
      }
      iVar3 = FUN_029506a8(lVar6,0x10);
      if (iVar3 == 0x95) {
        *(ushort *)(lVar6 + 0x87) = *(ushort *)(lVar6 + 0x87) & 0xffbf;
        *(undefined1 *)(lVar6 + 0x28e) = 0x1f;
      }
      if (uVar5 - 1 == uVar2) break;
      bVar1 = *(byte *)(lVar7 + 0x118);
      uVar2 = uVar2 + 1;
    }
  }
  FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x3b,4);
  return;
}


