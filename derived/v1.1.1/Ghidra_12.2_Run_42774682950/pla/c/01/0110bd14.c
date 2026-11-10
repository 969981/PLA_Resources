/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0110bd14; name: FUN_0110bd14
 */


void FUN_0110bd14(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar7 = 0;
  lVar1 = param_1 + 0x11720;
  lVar2 = param_1 + 0x116a0;
  do {
    lVar3 = lVar2 + lVar7;
    if (*(char *)(lVar3 + -0xf8) == '\0') {
      if (*(char *)(param_2 + lVar7) != '\0') {
        lVar4 = param_2 + lVar7;
        uVar8 = *(undefined8 *)(lVar4 + 0xc);
        puVar6 = (undefined8 *)(param_1 + 0x115ac + lVar7);
        uVar10 = *(undefined8 *)(lVar4 + 0x14);
        *puVar6 = *(undefined8 *)(lVar4 + 4);
        puVar6[1] = uVar8;
        puVar6[2] = uVar10;
        uVar10 = *(undefined8 *)(lVar4 + 0x1c);
        uVar9 = *(undefined8 *)(lVar4 + 0x24);
        uVar8 = *(undefined8 *)(lVar4 + 0x34);
        puVar6[5] = *(undefined8 *)(lVar4 + 0x2c);
        puVar6[6] = uVar8;
        puVar6[3] = uVar10;
        puVar6[4] = uVar9;
        uVar10 = *(undefined8 *)(lVar4 + 0x3c);
        uVar9 = *(undefined8 *)(lVar4 + 0x44);
        uVar8 = *(undefined8 *)(lVar4 + 0x54);
        puVar6[9] = *(undefined8 *)(lVar4 + 0x4c);
        puVar6[10] = uVar8;
        puVar6[7] = uVar10;
        puVar6[8] = uVar9;
        uVar10 = *(undefined8 *)(lVar4 + 0x5c);
        uVar9 = *(undefined8 *)(lVar4 + 100);
        uVar8 = *(undefined8 *)(lVar4 + 0x74);
        puVar6[0xd] = *(undefined8 *)(lVar4 + 0x6c);
        puVar6[0xe] = uVar8;
        puVar6[0xb] = uVar10;
        puVar6[0xc] = uVar9;
        *(undefined1 *)(lVar3 + -0xf8) = 1;
      }
    }
    else if (*(char *)(param_2 + lVar7) == '\0') {
      *(undefined1 *)(lVar3 + -0xf8) = 0;
    }
    else {
      lVar4 = param_2 + lVar7;
      uVar8 = *(undefined8 *)(lVar4 + 0xc);
      puVar6 = (undefined8 *)(param_1 + 0x115ac + lVar7);
      uVar10 = *(undefined8 *)(lVar4 + 0x14);
      *puVar6 = *(undefined8 *)(lVar4 + 4);
      puVar6[1] = uVar8;
      puVar6[2] = uVar10;
      uVar10 = *(undefined8 *)(lVar4 + 0x1c);
      uVar9 = *(undefined8 *)(lVar4 + 0x24);
      uVar8 = *(undefined8 *)(lVar4 + 0x34);
      puVar6[5] = *(undefined8 *)(lVar4 + 0x2c);
      puVar6[6] = uVar8;
      puVar6[3] = uVar10;
      puVar6[4] = uVar9;
      uVar10 = *(undefined8 *)(lVar4 + 0x3c);
      uVar9 = *(undefined8 *)(lVar4 + 0x44);
      uVar8 = *(undefined8 *)(lVar4 + 0x54);
      puVar6[9] = *(undefined8 *)(lVar4 + 0x4c);
      puVar6[10] = uVar8;
      puVar6[7] = uVar10;
      puVar6[8] = uVar9;
      uVar10 = *(undefined8 *)(lVar4 + 0x5c);
      uVar9 = *(undefined8 *)(lVar4 + 100);
      uVar8 = *(undefined8 *)(lVar4 + 0x74);
      puVar6[0xd] = *(undefined8 *)(lVar4 + 0x6c);
      puVar6[0xe] = uVar8;
      puVar6[0xb] = uVar10;
      puVar6[0xc] = uVar9;
    }
    lVar4 = param_2 + lVar7;
    if (*(char *)(lVar3 + -0x7c) == '\0') {
      if (*(char *)(lVar4 + 0x7c) != '\0') {
        uVar8 = *(undefined8 *)(lVar4 + 0x80);
        lVar5 = lVar1 + lVar7;
        uVar10 = *(undefined8 *)(lVar4 + 0x90);
        *(undefined8 *)(lVar5 + -0xf0) = *(undefined8 *)(lVar4 + 0x88);
        *(undefined8 *)(lVar5 + -0xe8) = uVar10;
        *(undefined8 *)(lVar5 + -0xf8) = uVar8;
        uVar8 = *(undefined8 *)(lVar4 + 0x98);
        uVar10 = *(undefined8 *)(lVar4 + 0xa0);
        uVar9 = *(undefined8 *)(lVar4 + 0xb0);
        *(undefined8 *)(lVar5 + -0xd0) = *(undefined8 *)(lVar4 + 0xa8);
        *(undefined8 *)(lVar5 + -200) = uVar9;
        *(undefined8 *)(lVar5 + -0xe0) = uVar8;
        *(undefined8 *)(lVar5 + -0xd8) = uVar10;
        uVar8 = *(undefined8 *)(lVar4 + 0xb8);
        uVar10 = *(undefined8 *)(lVar4 + 0xc0);
        uVar9 = *(undefined8 *)(lVar4 + 0xd0);
        *(undefined8 *)(lVar5 + -0xb0) = *(undefined8 *)(lVar4 + 200);
        *(undefined8 *)(lVar5 + -0xa8) = uVar9;
        *(undefined8 *)(lVar5 + -0xc0) = uVar8;
        *(undefined8 *)(lVar5 + -0xb8) = uVar10;
        uVar8 = *(undefined8 *)(lVar4 + 0xd8);
        uVar10 = *(undefined8 *)(lVar4 + 0xe0);
        uVar9 = *(undefined8 *)(lVar4 + 0xf0);
        *(undefined8 *)(lVar5 + -0x90) = *(undefined8 *)(lVar4 + 0xe8);
        *(undefined8 *)(lVar5 + -0x88) = uVar9;
        *(undefined8 *)(lVar5 + -0xa0) = uVar8;
        *(undefined8 *)(lVar5 + -0x98) = uVar10;
        *(undefined1 *)(lVar3 + -0x7c) = 1;
      }
    }
    else if (*(char *)(lVar4 + 0x7c) == '\0') {
      *(undefined1 *)(lVar3 + -0x7c) = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar4 + 0x80);
      lVar5 = lVar1 + lVar7;
      uVar10 = *(undefined8 *)(lVar4 + 0x90);
      *(undefined8 *)(lVar5 + -0xf0) = *(undefined8 *)(lVar4 + 0x88);
      *(undefined8 *)(lVar5 + -0xe8) = uVar10;
      *(undefined8 *)(lVar5 + -0xf8) = uVar8;
      uVar8 = *(undefined8 *)(lVar4 + 0x98);
      uVar10 = *(undefined8 *)(lVar4 + 0xa0);
      uVar9 = *(undefined8 *)(lVar4 + 0xb0);
      *(undefined8 *)(lVar5 + -0xd0) = *(undefined8 *)(lVar4 + 0xa8);
      *(undefined8 *)(lVar5 + -200) = uVar9;
      *(undefined8 *)(lVar5 + -0xe0) = uVar8;
      *(undefined8 *)(lVar5 + -0xd8) = uVar10;
      uVar8 = *(undefined8 *)(lVar4 + 0xb8);
      uVar10 = *(undefined8 *)(lVar4 + 0xc0);
      uVar9 = *(undefined8 *)(lVar4 + 0xd0);
      *(undefined8 *)(lVar5 + -0xb0) = *(undefined8 *)(lVar4 + 200);
      *(undefined8 *)(lVar5 + -0xa8) = uVar9;
      *(undefined8 *)(lVar5 + -0xc0) = uVar8;
      *(undefined8 *)(lVar5 + -0xb8) = uVar10;
      uVar8 = *(undefined8 *)(lVar4 + 0xd8);
      uVar10 = *(undefined8 *)(lVar4 + 0xe0);
      uVar9 = *(undefined8 *)(lVar4 + 0xf0);
      *(undefined8 *)(lVar5 + -0x90) = *(undefined8 *)(lVar4 + 0xe8);
      *(undefined8 *)(lVar5 + -0x88) = uVar9;
      *(undefined8 *)(lVar5 + -0xa0) = uVar8;
      *(undefined8 *)(lVar5 + -0x98) = uVar10;
    }
    if (*(char *)(lVar2 + lVar7) == '\0') {
      if (*(char *)(lVar4 + 0xf8) != '\0') {
        uVar8 = *(undefined8 *)(lVar4 + 0x104);
        uVar10 = *(undefined8 *)(lVar4 + 0x10c);
        lVar5 = lVar1 + lVar7;
        *(undefined8 *)(lVar5 + -0x7c) = *(undefined8 *)(lVar4 + 0xfc);
        *(undefined8 *)(lVar5 + -0x6c) = uVar10;
        *(undefined8 *)(lVar5 + -0x74) = uVar8;
        uVar8 = *(undefined8 *)(lVar4 + 0x114);
        uVar9 = *(undefined8 *)(lVar4 + 0x11c);
        uVar10 = *(undefined8 *)(lVar4 + 0x124);
        *(undefined8 *)(lVar5 + -0x4c) = *(undefined8 *)(lVar4 + 300);
        *(undefined8 *)(lVar5 + -0x54) = uVar10;
        *(undefined8 *)(lVar5 + -0x5c) = uVar9;
        *(undefined8 *)(lVar5 + -100) = uVar8;
        uVar8 = *(undefined8 *)(lVar4 + 0x134);
        uVar9 = *(undefined8 *)(lVar4 + 0x13c);
        uVar10 = *(undefined8 *)(lVar4 + 0x144);
        *(undefined8 *)(lVar5 + -0x2c) = *(undefined8 *)(lVar4 + 0x14c);
        *(undefined8 *)(lVar5 + -0x34) = uVar10;
        *(undefined8 *)(lVar5 + -0x3c) = uVar9;
        *(undefined8 *)(lVar5 + -0x44) = uVar8;
        uVar8 = *(undefined8 *)(lVar4 + 0x154);
        uVar9 = *(undefined8 *)(lVar4 + 0x15c);
        uVar10 = *(undefined8 *)(lVar4 + 0x164);
        *(undefined8 *)(lVar5 + -0xc) = *(undefined8 *)(lVar4 + 0x16c);
        *(undefined8 *)(lVar5 + -0x14) = uVar10;
        *(undefined8 *)(lVar5 + -0x1c) = uVar9;
        *(undefined8 *)(lVar5 + -0x24) = uVar8;
        *(undefined1 *)(lVar2 + lVar7) = 1;
      }
    }
    else if (*(char *)(lVar4 + 0xf8) == '\0') {
      *(undefined1 *)(lVar2 + lVar7) = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar4 + 0x104);
      uVar10 = *(undefined8 *)(lVar4 + 0x10c);
      lVar5 = lVar1 + lVar7;
      *(undefined8 *)(lVar5 + -0x7c) = *(undefined8 *)(lVar4 + 0xfc);
      *(undefined8 *)(lVar5 + -0x6c) = uVar10;
      *(undefined8 *)(lVar5 + -0x74) = uVar8;
      uVar8 = *(undefined8 *)(lVar4 + 0x114);
      uVar9 = *(undefined8 *)(lVar4 + 0x11c);
      uVar10 = *(undefined8 *)(lVar4 + 0x124);
      *(undefined8 *)(lVar5 + -0x4c) = *(undefined8 *)(lVar4 + 300);
      *(undefined8 *)(lVar5 + -0x54) = uVar10;
      *(undefined8 *)(lVar5 + -0x5c) = uVar9;
      *(undefined8 *)(lVar5 + -100) = uVar8;
      uVar8 = *(undefined8 *)(lVar4 + 0x134);
      uVar9 = *(undefined8 *)(lVar4 + 0x13c);
      uVar10 = *(undefined8 *)(lVar4 + 0x144);
      *(undefined8 *)(lVar5 + -0x2c) = *(undefined8 *)(lVar4 + 0x14c);
      *(undefined8 *)(lVar5 + -0x34) = uVar10;
      *(undefined8 *)(lVar5 + -0x3c) = uVar9;
      *(undefined8 *)(lVar5 + -0x44) = uVar8;
      uVar8 = *(undefined8 *)(lVar4 + 0x154);
      uVar9 = *(undefined8 *)(lVar4 + 0x15c);
      uVar10 = *(undefined8 *)(lVar4 + 0x164);
      *(undefined8 *)(lVar5 + -0xc) = *(undefined8 *)(lVar4 + 0x16c);
      *(undefined8 *)(lVar5 + -0x14) = uVar10;
      *(undefined8 *)(lVar5 + -0x1c) = uVar9;
      *(undefined8 *)(lVar5 + -0x24) = uVar8;
    }
    if (*(char *)(lVar3 + 0x7c) == '\0') {
      if (*(char *)(lVar4 + 0x174) != '\0') {
        uVar8 = *(undefined8 *)(lVar4 + 0x178);
        puVar6 = (undefined8 *)(lVar1 + lVar7);
        uVar10 = *(undefined8 *)(lVar4 + 0x188);
        puVar6[1] = *(undefined8 *)(lVar4 + 0x180);
        puVar6[2] = uVar10;
        *puVar6 = uVar8;
        uVar8 = *(undefined8 *)(lVar4 + 400);
        uVar10 = *(undefined8 *)(lVar4 + 0x198);
        uVar9 = *(undefined8 *)(lVar4 + 0x1a8);
        puVar6[5] = *(undefined8 *)(lVar4 + 0x1a0);
        puVar6[6] = uVar9;
        puVar6[3] = uVar8;
        puVar6[4] = uVar10;
        uVar8 = *(undefined8 *)(lVar4 + 0x1b0);
        uVar10 = *(undefined8 *)(lVar4 + 0x1b8);
        uVar9 = *(undefined8 *)(lVar4 + 0x1c8);
        puVar6[9] = *(undefined8 *)(lVar4 + 0x1c0);
        puVar6[10] = uVar9;
        puVar6[7] = uVar8;
        puVar6[8] = uVar10;
        uVar8 = *(undefined8 *)(lVar4 + 0x1d0);
        uVar10 = *(undefined8 *)(lVar4 + 0x1d8);
        uVar9 = *(undefined8 *)(lVar4 + 0x1e8);
        puVar6[0xd] = *(undefined8 *)(lVar4 + 0x1e0);
        puVar6[0xe] = uVar9;
        puVar6[0xb] = uVar8;
        puVar6[0xc] = uVar10;
        *(undefined1 *)(lVar3 + 0x7c) = 1;
      }
    }
    else if (*(char *)(lVar4 + 0x174) == '\0') {
      *(undefined1 *)(lVar3 + 0x7c) = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar4 + 0x178);
      puVar6 = (undefined8 *)(lVar1 + lVar7);
      uVar10 = *(undefined8 *)(lVar4 + 0x188);
      puVar6[1] = *(undefined8 *)(lVar4 + 0x180);
      puVar6[2] = uVar10;
      *puVar6 = uVar8;
      uVar8 = *(undefined8 *)(lVar4 + 400);
      uVar10 = *(undefined8 *)(lVar4 + 0x198);
      uVar9 = *(undefined8 *)(lVar4 + 0x1a8);
      puVar6[5] = *(undefined8 *)(lVar4 + 0x1a0);
      puVar6[6] = uVar9;
      puVar6[3] = uVar8;
      puVar6[4] = uVar10;
      uVar8 = *(undefined8 *)(lVar4 + 0x1b0);
      uVar10 = *(undefined8 *)(lVar4 + 0x1b8);
      uVar9 = *(undefined8 *)(lVar4 + 0x1c8);
      puVar6[9] = *(undefined8 *)(lVar4 + 0x1c0);
      puVar6[10] = uVar9;
      puVar6[7] = uVar8;
      puVar6[8] = uVar10;
      uVar8 = *(undefined8 *)(lVar4 + 0x1d0);
      uVar10 = *(undefined8 *)(lVar4 + 0x1d8);
      uVar9 = *(undefined8 *)(lVar4 + 0x1e8);
      puVar6[0xd] = *(undefined8 *)(lVar4 + 0x1e0);
      puVar6[0xe] = uVar9;
      puVar6[0xb] = uVar8;
      puVar6[0xc] = uVar10;
    }
    lVar7 = lVar7 + 0x1f0;
  } while (lVar7 != 0x9b0);
  return;
}


