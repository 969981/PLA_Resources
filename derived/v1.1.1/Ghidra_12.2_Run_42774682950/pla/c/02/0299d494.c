/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0299d494; name: FUN_0299d494
 */


void FUN_0299d494(long param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  
  *(undefined1 *)(param_1 + 0x1a) = 1;
  *(undefined2 *)(param_1 + 0x18) = 0;
  uVar3 = FUN_02949cec(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),0);
  if ((uVar3 & 1) != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 8);
    uVar2 = FUN_0294da60(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                         *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),0);
    if (uVar2 != 0) {
      bVar1 = *(byte *)(lVar7 + 0x38);
      bVar4 = 0;
      if (bVar1 != 0) goto LAB_0299d510;
      do {
        do {
          bVar4 = bVar4 + 1;
          if (uVar2 <= bVar4) goto LAB_0299d52c;
        } while (bVar1 <= bVar4);
LAB_0299d510:
        lVar6 = *(long *)(lVar7 + (ulong)bVar4 * 8 + 8);
      } while ((lVar6 == 0) || (*(short *)(lVar6 + 0x74) == 0));
      uVar5 = 0;
      goto LAB_0299d718;
    }
  }
LAB_0299d52c:
  uVar3 = FUN_02949cec(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),1);
  if ((uVar3 & 1) != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 8);
    uVar2 = FUN_0294da60(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                         *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),1);
    if (uVar2 != 0) {
      bVar1 = *(byte *)(lVar7 + 0x70);
      bVar4 = 0;
      if (bVar1 != 0) goto LAB_0299d58c;
      do {
        do {
          bVar4 = bVar4 + 1;
          if (uVar2 <= bVar4) goto LAB_0299d5a8;
        } while (bVar1 <= bVar4);
LAB_0299d58c:
        lVar6 = *(long *)(lVar7 + (ulong)bVar4 * 8 + 0x40);
      } while ((lVar6 == 0) || (*(short *)(lVar6 + 0x74) == 0));
      uVar5 = 1;
      goto LAB_0299d718;
    }
  }
LAB_0299d5a8:
  uVar3 = FUN_02949cec(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),2);
  if ((uVar3 & 1) != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 8);
    uVar2 = FUN_0294da60(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                         *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),2);
    if (uVar2 != 0) {
      bVar1 = *(byte *)(lVar7 + 0xa8);
      bVar4 = 0;
      if (bVar1 != 0) goto LAB_0299d608;
      do {
        do {
          bVar4 = bVar4 + 1;
          if (uVar2 <= bVar4) goto LAB_0299d624;
        } while (bVar1 <= bVar4);
LAB_0299d608:
        lVar6 = *(long *)(lVar7 + (ulong)bVar4 * 8 + 0x78);
      } while ((lVar6 == 0) || (*(short *)(lVar6 + 0x74) == 0));
      uVar5 = 2;
      goto LAB_0299d718;
    }
  }
LAB_0299d624:
  uVar3 = FUN_02949cec(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),3);
  if ((uVar3 & 1) != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 8);
    uVar2 = FUN_0294da60(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                         *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),3);
    if (uVar2 != 0) {
      bVar1 = *(byte *)(lVar7 + 0xe0);
      bVar4 = 0;
      if (bVar1 != 0) goto LAB_0299d684;
      do {
        do {
          bVar4 = bVar4 + 1;
          if (uVar2 <= bVar4) goto LAB_0299d6a0;
        } while (bVar1 <= bVar4);
LAB_0299d684:
        lVar6 = *(long *)(lVar7 + (ulong)bVar4 * 8 + 0xb0);
      } while ((lVar6 == 0) || (*(short *)(lVar6 + 0x74) == 0));
      uVar5 = 3;
      goto LAB_0299d718;
    }
  }
LAB_0299d6a0:
  uVar3 = FUN_02949cec(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),4);
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  uVar2 = FUN_0294da60(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),4);
  if (uVar2 == 0) {
    return;
  }
  bVar1 = *(byte *)(lVar7 + 0x118);
  bVar4 = 0;
  if (bVar1 != 0) goto LAB_0299d700;
  do {
    do {
      bVar4 = bVar4 + 1;
      if (uVar2 <= bVar4) {
        return;
      }
    } while (bVar1 <= bVar4);
LAB_0299d700:
    lVar6 = *(long *)(lVar7 + (ulong)bVar4 * 8 + 0xe8);
  } while ((lVar6 == 0) || (*(short *)(lVar6 + 0x74) == 0));
  uVar5 = 4;
LAB_0299d718:
  *(undefined1 *)(param_1 + 0x18) = uVar5;
  *(byte *)(param_1 + 0x19) = bVar4;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return;
}


