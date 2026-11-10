/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02952d9c; name: FUN_02952d9c
 */


void FUN_02952d9c(long param_1,long param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  byte bVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  
  puVar1 = (undefined8 *)(param_1 + 0x2f4);
  DAT_043ecdf8 = *puVar1;
  DAT_043ece00 = *(undefined8 *)(param_1 + 0x2fc);
  DAT_043ece08 = *(undefined8 *)(param_1 + 0x304);
  DAT_043ece10 = *(undefined8 *)(param_1 + 0x30c);
  DAT_043ece18 = *(undefined8 *)(param_1 + 0x314);
  DAT_043ece20 = *(undefined8 *)(param_1 + 0x31c);
  DAT_043ece28 = *(undefined8 *)(param_1 + 0x324);
  DAT_043ece30 = *(undefined8 *)(param_1 + 0x32c);
  DAT_043ece38 = *(undefined8 *)(param_1 + 0x334);
  DAT_043ece40 = *(undefined8 *)(param_1 + 0x33c);
  DAT_043ece48 = *(undefined8 *)(param_1 + 0x344);
  DAT_043ece50 = *(undefined8 *)(param_1 + 0x34c);
  DAT_043ece58 = *(undefined8 *)(param_1 + 0x354);
  DAT_043ece60 = *(undefined8 *)(param_1 + 0x35c);
  uVar5 = *(undefined4 *)(param_2 + 0x2e0);
  uVar14 = *(undefined8 *)(param_2 + 0x2d8);
  bVar10 = *(byte *)(param_2 + 0x388);
  uVar17 = *(ulong *)(param_2 + 0x1e8);
  bVar6 = *(byte *)(param_1 + 0x386);
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_2 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2d8) = uVar14;
  *(undefined4 *)(param_1 + 0x2e0) = uVar5;
  uVar5 = *(undefined4 *)(param_2 + 0x2e4);
  *(undefined2 *)(param_1 + 0x2e8) = *(undefined2 *)(param_2 + 0x2e8);
  *(undefined4 *)(param_1 + 0x2e4) = uVar5;
  *(undefined2 *)(param_1 + 0x364) = *(undefined2 *)(param_2 + 0x364);
  *(undefined2 *)(param_1 + 0x366) = *(undefined2 *)(param_2 + 0x366);
  *(undefined1 *)(param_1 + 0x368) = *(undefined1 *)(param_2 + 0x368);
  *(undefined1 *)(param_1 + 0x369) = *(undefined1 *)(param_2 + 0x369);
  uVar7 = *(undefined1 *)(param_1 + 0x36a);
  *(undefined1 *)(param_1 + 0x36a) = *(undefined1 *)(param_2 + 0x36a);
  *(undefined1 *)(param_1 + 0x36b) = *(undefined1 *)(param_2 + 0x36b);
  *(undefined1 *)(param_1 + 0x36c) = *(undefined1 *)(param_2 + 0x36c);
  *(undefined1 *)(param_1 + 0x36d) = *(undefined1 *)(param_2 + 0x36d);
  *(undefined2 *)(param_1 + 0x370) = *(undefined2 *)(param_2 + 0x370);
  *(undefined2 *)(param_1 + 0x372) = *(undefined2 *)(param_2 + 0x372);
  *(undefined2 *)(param_1 + 0x374) = *(undefined2 *)(param_2 + 0x374);
  *(undefined1 *)(param_1 + 0x376) = *(undefined1 *)(param_2 + 0x376);
  *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_2 + 0x378);
  *(undefined4 *)(param_1 + 0x37c) = *(undefined4 *)(param_2 + 0x37c);
  *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(param_2 + 0x380);
  *(undefined1 *)(param_1 + 0x493) = *(undefined1 *)(param_2 + 0x493);
  *(undefined1 *)(param_1 + 0x494) = *(undefined1 *)(param_2 + 0x494);
  uVar9 = *(undefined2 *)(param_1 + 0x496);
  *(undefined2 *)(param_1 + 0x496) = *(undefined2 *)(param_2 + 0x496);
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_2 + 0x498);
  *(undefined1 *)(param_1 + 0x49c) = *(undefined1 *)(param_2 + 0x49c);
  uVar14 = *(undefined8 *)(param_2 + 0x344);
  uVar4 = *(undefined8 *)(param_2 + 0x34c);
  uVar15 = *(undefined8 *)(param_2 + 0x35c);
  *(undefined8 *)(param_1 + 0x354) = *(undefined8 *)(param_2 + 0x354);
  *(undefined8 *)(param_1 + 0x35c) = uVar15;
  *(undefined8 *)(param_1 + 0x344) = uVar14;
  *(undefined8 *)(param_1 + 0x34c) = uVar4;
  uVar14 = *(undefined8 *)(param_2 + 0x324);
  uVar4 = *(undefined8 *)(param_2 + 0x32c);
  uVar15 = *(undefined8 *)(param_2 + 0x33c);
  *(undefined8 *)(param_1 + 0x334) = *(undefined8 *)(param_2 + 0x334);
  *(undefined8 *)(param_1 + 0x33c) = uVar15;
  *(undefined8 *)(param_1 + 0x324) = uVar14;
  *(undefined8 *)(param_1 + 0x32c) = uVar4;
  uVar14 = *(undefined8 *)(param_2 + 0x304);
  uVar4 = *(undefined8 *)(param_2 + 0x30c);
  uVar15 = *(undefined8 *)(param_2 + 0x31c);
  *(undefined8 *)(param_1 + 0x314) = *(undefined8 *)(param_2 + 0x314);
  *(undefined8 *)(param_1 + 0x31c) = uVar15;
  *(undefined8 *)(param_1 + 0x304) = uVar14;
  *(undefined8 *)(param_1 + 0x30c) = uVar4;
  uVar14 = *(undefined8 *)(param_2 + 0x2fc);
  *puVar1 = *(undefined8 *)(param_2 + 0x2f4);
  *(undefined8 *)(param_1 + 0x2fc) = uVar14;
  uVar8 = *(undefined1 *)(param_2 + 0x386);
  *(undefined2 *)(param_1 + 900) = *(undefined2 *)(param_2 + 900);
  *(undefined1 *)(param_1 + 0x386) = uVar8;
  *(undefined4 *)(param_1 + 0x387) = *(undefined4 *)(param_2 + 0x387);
  uVar5 = *(undefined4 *)(param_2 + 0x38c);
  *(undefined4 *)(param_1 + 0x38f) = *(undefined4 *)(param_2 + 0x38f);
  *(undefined4 *)(param_1 + 0x38c) = uVar5;
  uVar15 = *(undefined8 *)(param_2 + 0x3ac);
  uVar14 = *(undefined8 *)(param_2 + 0x39c);
  uVar4 = *(undefined8 *)(param_2 + 0x3a4);
  *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(param_2 + 0x3b4);
  *(undefined8 *)(param_1 + 0x3a4) = uVar4;
  *(undefined8 *)(param_1 + 0x3ac) = uVar15;
  *(undefined8 *)(param_1 + 0x39c) = uVar14;
  *(undefined8 *)(param_1 + 0x394) = *(undefined8 *)(param_2 + 0x394);
  memcpy((void *)(param_1 + 0x3b8),(void *)(param_2 + 0x3b8),0xd8);
  uVar8 = *(undefined1 *)(param_2 + 0x492);
  *(undefined2 *)(param_1 + 0x490) = *(undefined2 *)(param_2 + 0x490);
  *(undefined1 *)(param_1 + 0x492) = uVar8;
  *(undefined4 *)(param_1 + 900) = 0;
  *(undefined4 *)(param_1 + 0x387) = 0;
  if ((bVar6 >> 6 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x386) = 0x40;
  }
  *(undefined2 *)(param_1 + 0x496) = uVar9;
  uVar14 = DAT_043ece00;
  *puVar1 = DAT_043ecdf8;
  *(undefined8 *)(param_1 + 0x2fc) = uVar14;
  uVar15 = DAT_043ece20;
  uVar4 = DAT_043ece10;
  uVar14 = DAT_043ece08;
  *(undefined8 *)(param_1 + 0x314) = DAT_043ece18;
  *(undefined8 *)(param_1 + 0x31c) = uVar15;
  *(undefined8 *)(param_1 + 0x304) = uVar14;
  *(undefined8 *)(param_1 + 0x30c) = uVar4;
  uVar15 = DAT_043ece40;
  uVar4 = DAT_043ece30;
  uVar14 = DAT_043ece28;
  *(undefined8 *)(param_1 + 0x334) = DAT_043ece38;
  *(undefined8 *)(param_1 + 0x33c) = uVar15;
  *(undefined8 *)(param_1 + 0x324) = uVar14;
  *(undefined8 *)(param_1 + 0x32c) = uVar4;
  uVar15 = DAT_043ece60;
  uVar4 = DAT_043ece50;
  uVar14 = DAT_043ece48;
  *(undefined8 *)(param_1 + 0x354) = DAT_043ece58;
  *(undefined8 *)(param_1 + 0x35c) = uVar15;
  *(undefined8 *)(param_1 + 0x344) = uVar14;
  *(undefined8 *)(param_1 + 0x34c) = uVar4;
  *(undefined1 *)(param_1 + 0x36a) = uVar7;
  if ((bVar10 >> 1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x388) = 2;
  }
  if ((*(ulong *)(param_1 + 0x1e8) & 7) != 0) {
    uVar3 = (uint)uVar17 & 7;
    if (((uVar3 == 4) || (uVar3 == 2)) && (uVar3 = (uint)uVar17 >> 8 & 0x3f, uVar3 != 0)) {
      uVar12 = (uint)*(ulong *)(param_1 + 0x1e8);
      uVar13 = uVar12 & 7;
      if ((uVar13 == 4) || (uVar13 == 2)) {
        uVar13 = uVar12 >> 8 & 0x3f;
      }
      else {
        uVar13 = 0;
      }
      uVar13 = uVar13 - *(byte *)(param_1 + 0x263);
      if ((int)uVar3 < (int)uVar13) {
        if ((uVar17 & 0x3807) == 2) {
          uVar17 = uVar17 & 0xffffffffffffc000 | uVar17 & 0xff | ((ulong)uVar13 & 0x3f) << 8;
        }
        if ((uVar17 & 0x3807) == 4) {
          uVar17 = uVar17 & 0xffffffffffffc000 | uVar17 & 0xff | ((ulong)uVar13 & 0x3f) << 8;
        }
      }
    }
  }
  *(ulong *)(param_1 + 0x1e8) = uVar17;
  *(undefined1 *)(param_1 + 0x263) = 0;
  uVar3 = *(uint *)(param_2 + 0x300);
  *(uint *)(param_1 + 0x300) = uVar3;
  *(undefined4 *)(param_1 + 0x307) = 0;
  bVar10 = 0;
  if (uVar3 != 0) {
    lVar16 = (&DAT_0428af30)[(ulong)uVar3 * 6];
    if (lVar16 == 0) {
      plVar11 = &DAT_0428af30;
    }
    else {
      plVar11 = &DAT_0428af30;
      if (*(char *)(lVar16 + 0x1e1) != '\0') {
        plVar11 = &DAT_0428af30 + (ulong)uVar3 * 6;
      }
    }
    piVar2 = (int *)((long)*(uint **)(*plVar11 + 0x250) + (ulong)**(uint **)(*plVar11 + 0x250));
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x13) ||
       (uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[9], uVar17 == 0)) {
      bVar10 = 0;
    }
    else {
      bVar10 = *(byte *)((long)piVar2 + uVar17);
      if (4 < bVar10) {
        bVar10 = 5;
      }
    }
  }
  *(byte *)(param_1 + 0x305) = bVar10;
  *(byte *)(param_1 + 0x304) = bVar10;
  *(undefined1 *)(param_1 + 0x30c) = 0;
  uVar3 = *(uint *)(param_2 + 0x31c);
  *(uint *)(param_1 + 0x31c) = uVar3;
  *(undefined4 *)(param_1 + 0x323) = 0;
  bVar10 = 0;
  if (uVar3 != 0) {
    lVar16 = (&DAT_0428af30)[(ulong)uVar3 * 6];
    if (lVar16 == 0) {
      plVar11 = &DAT_0428af30;
    }
    else {
      plVar11 = &DAT_0428af30;
      if (*(char *)(lVar16 + 0x1e1) != '\0') {
        plVar11 = &DAT_0428af30 + (ulong)uVar3 * 6;
      }
    }
    piVar2 = (int *)((long)*(uint **)(*plVar11 + 0x250) + (ulong)**(uint **)(*plVar11 + 0x250));
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x13) ||
       (uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[9], uVar17 == 0)) {
      bVar10 = 0;
    }
    else {
      bVar10 = *(byte *)((long)piVar2 + uVar17);
      if (4 < bVar10) {
        bVar10 = 5;
      }
    }
  }
  *(byte *)(param_1 + 0x321) = bVar10;
  *(byte *)(param_1 + 800) = bVar10;
  *(undefined1 *)(param_1 + 0x328) = 0;
  uVar3 = *(uint *)(param_2 + 0x338);
  *(uint *)(param_1 + 0x338) = uVar3;
  *(undefined4 *)(param_1 + 0x33f) = 0;
  bVar10 = 0;
  if (uVar3 != 0) {
    lVar16 = (&DAT_0428af30)[(ulong)uVar3 * 6];
    if (lVar16 == 0) {
      plVar11 = &DAT_0428af30;
    }
    else {
      plVar11 = &DAT_0428af30;
      if (*(char *)(lVar16 + 0x1e1) != '\0') {
        plVar11 = &DAT_0428af30 + (ulong)uVar3 * 6;
      }
    }
    piVar2 = (int *)((long)*(uint **)(*plVar11 + 0x250) + (ulong)**(uint **)(*plVar11 + 0x250));
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x13) ||
       (uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[9], uVar17 == 0)) {
      bVar10 = 0;
    }
    else {
      bVar10 = *(byte *)((long)piVar2 + uVar17);
      if (4 < bVar10) {
        bVar10 = 5;
      }
    }
  }
  *(byte *)(param_1 + 0x33d) = bVar10;
  *(byte *)(param_1 + 0x33c) = bVar10;
  *(undefined1 *)(param_1 + 0x344) = 0;
  uVar3 = *(uint *)(param_2 + 0x354);
  *(uint *)(param_1 + 0x354) = uVar3;
  *(undefined4 *)(param_1 + 0x35b) = 0;
  if (uVar3 != 0) {
    lVar16 = (&DAT_0428af30)[(ulong)uVar3 * 6];
    if (lVar16 == 0) {
      plVar11 = &DAT_0428af30;
    }
    else {
      plVar11 = &DAT_0428af30;
      if (*(char *)(lVar16 + 0x1e1) != '\0') {
        plVar11 = &DAT_0428af30 + (ulong)uVar3 * 6;
      }
    }
    piVar2 = (int *)((long)*(uint **)(*plVar11 + 0x250) + (ulong)**(uint **)(*plVar11 + 0x250));
    if ((0x12 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
       (uVar17 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[9], uVar17 != 0)) {
      bVar10 = *(byte *)((long)piVar2 + uVar17);
      if (4 < bVar10) {
        bVar10 = 5;
      }
      goto LAB_02953288;
    }
  }
  bVar10 = 0;
LAB_02953288:
  *(byte *)(param_1 + 0x359) = bVar10;
  *(byte *)(param_1 + 0x358) = bVar10;
  *(undefined4 *)(param_1 + 0x370) = 0x27100000;
  *(undefined1 *)(param_1 + 0x36d) = 0x12;
  *(undefined1 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined2 *)(param_1 + 0x374) = 0;
  *(ushort *)(param_1 + 0x87) = *(ushort *)(param_1 + 0x87) | 0x20;
  return;
}


