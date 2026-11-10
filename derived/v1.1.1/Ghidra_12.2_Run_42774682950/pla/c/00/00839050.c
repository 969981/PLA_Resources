/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00839050; name: FUN_00839050
 */


ulong * FUN_00839050(long param_1,ulong *param_2,ulong param_3,uint param_4)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  ulong uVar16;
  ulong *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined1 auStack_350 [20];
  uint local_33c;
  undefined4 local_338 [34];
  undefined1 local_2b0 [16];
  undefined1 auStack_2a0 [136];
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [136];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [136];
  undefined1 auStack_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [8];
  int local_78 [4];
  uint local_68 [2];
  
  memset(local_68,0,4);
  local_78[0] = 0;
  local_338[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_338);
  puVar17 = param_2;
  if ((param_4 & 0xff) != 0) {
    uVar16 = (ulong)((param_4 & 0xff) + 0x1f >> 3) & 0x3c;
    if (param_3 < uVar16) {
      local_338[0] = 0x10407;
    }
    else {
      memcpy(local_68,param_2,uVar16);
      local_338[0] = 0;
    }
    local_98[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_338 | 4),(Result *)local_98);
    FUN_007ee578(local_98,local_338);
    FUN_007ee660(local_78,local_98);
    if (local_78[0] != 0) {
      return (ulong *)0x0;
    }
    puVar17 = (ulong *)((long)param_2 + uVar16);
  }
  puVar1 = (undefined8 *)(param_1 + 0x138);
  if (*(undefined8 **)(param_1 + 0x140) != puVar1) {
    puVar12 = *(undefined8 **)(param_1 + 0x140);
    do {
      puVar19 = (undefined8 *)puVar12[1];
      *puVar12 = 0;
      puVar12[1] = 0;
      FUN_007e8fc4(param_1 + 0x150,param_1 + 0x150,(long)*(int *)(param_1 + 0x164) + (long)puVar12);
      puVar12 = puVar19;
    } while (puVar19 != puVar1);
  }
  FUN_007e8f94(puVar1);
  if ((param_4 & 0xff) != 0) {
    uVar18 = 0;
    do {
      uVar13 = *puVar17;
      puVar2 = (ulong *)((long)puVar17 + 0xc);
      uVar16 = puVar17[1];
      FUN_007e3400(local_98);
      if ((local_68[0] & 1 << (ulong)(uVar18 & 0x1f)) == 0) {
        FUN_007e4318(local_338,local_98,puVar2,6);
      }
      else {
        FUN_007e4318(local_338,local_98,puVar2,0x12);
        puVar17 = puVar2;
      }
      uVar8 = ((uint)uVar16 & 0xff00ff00) >> 8 | ((uint)uVar16 & 0xff00ff) << 8;
      uVar16 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar16 >> 0x20 | uVar16 << 0x20;
      FUN_007ee660(local_78,local_338);
      FUN_007f0ce0(auStack_b8);
      FUN_007f105c(auStack_b8,local_98);
      uVar3 = *(undefined1 *)((long)puVar17 + 0x14);
      uVar4 = *(undefined1 *)((long)puVar17 + 0x17);
      uVar13 = puVar17[3];
      uVar9 = *(undefined2 *)((long)puVar17 + 0x12);
      uVar7 = *(ushort *)((long)puVar17 + 0x15);
      memcpy(&local_d8,(void *)((long)puVar17 + 0x19),0x20);
      uVar5 = *(undefined1 *)((long)puVar17 + 0x3a);
      bVar6 = *(byte *)((long)puVar17 + 0x39);
      uVar16 = (ulong)bVar6;
      FUN_007e8190(local_338);
      FUN_007e8434(local_338);
      memset(local_2b0,0,0x10);
      FUN_007e8190(auStack_2a0);
      FUN_007e8434(auStack_2a0);
      memset(auStack_218,0,0x10);
      FUN_007e8190(auStack_208);
      FUN_007e8434(auStack_208);
      memset(auStack_180,0,0x10);
      FUN_007e8190(auStack_170);
      FUN_007e8434(auStack_170);
      memset(auStack_e8,0,0x10);
      puVar17 = (ulong *)((long)puVar17 + 0x3b);
      if (uVar16 != 0) {
        puVar15 = local_338;
        uVar20 = uVar16;
        do {
          FUN_00836fb4(auStack_350,puVar15,puVar17,((int)param_2 + (int)param_3) - (int)puVar17,
                       &local_33c);
          puVar17 = (ulong *)((long)puVar17 + (ulong)local_33c);
          puVar15 = puVar15 + 0x26;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      FUN_008370c0(param_1,uVar14,uVar8 >> 0x10 | uVar8 << 0x10,auStack_b8);
      uVar10 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
      uVar10 = FUN_00826d78(uVar10,uVar14);
      if (*(int *)(param_1 + 0x160) != 0) {
        lVar11 = FUN_007e9088(param_1 + 0x150);
        if (lVar11 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = lVar11 - *(int *)(param_1 + 0x164);
        }
        memset((void *)(lVar11 + 0x10),0,0x2c8);
        FUN_007f0ce0(lVar11 + 0x20);
        *(undefined2 *)(lVar11 + 0x40) = 0xfdfd;
        FUN_007e8190(lVar11 + 0x78);
        FUN_007e8434(lVar11 + 0x78);
        memset((undefined8 *)(lVar11 + 0x100),0,0x10);
        FUN_007e8190(lVar11 + 0x110);
        FUN_007e8434(lVar11 + 0x110);
        memset((void *)(lVar11 + 0x198),0,0x10);
        FUN_007e8190(lVar11 + 0x1a8);
        FUN_007e8434(lVar11 + 0x1a8);
        memset((void *)(lVar11 + 0x230),0,0x10);
        FUN_007e8190(lVar11 + 0x240);
        FUN_007e8434(lVar11 + 0x240);
        memset((void *)(lVar11 + 0x2c8),0,0x10);
        FUN_007e8fa0(puVar1,puVar1,lVar11);
        *(ulong *)(lVar11 + 0x10) = uVar14;
        *(short *)(lVar11 + 0x18) = (short)(uVar8 >> 0x10);
        FUN_007f0f88(lVar11 + 0x20,auStack_b8);
        *(ushort *)(lVar11 + 0x1c) = uVar7 >> 8 | uVar7 << 8;
        *(undefined1 *)(lVar11 + 0x42) = uVar3;
        *(undefined1 *)(lVar11 + 0x1a) = uVar4;
        *(undefined2 *)(lVar11 + 0x40) = uVar9;
        *(bool *)(lVar11 + 0x1b) = (char)uVar13 != '\0';
        *(undefined8 *)(lVar11 + 0x58) = local_d0;
        *(undefined8 *)(lVar11 + 0x60) = local_c8;
        *(undefined8 *)(lVar11 + 0x68) = local_c0;
        *(byte *)(lVar11 + 0x70) = bVar6;
        *(undefined8 *)(lVar11 + 0x48) = uVar10;
        *(undefined8 *)(lVar11 + 0x50) = local_d8;
        *(undefined1 *)(lVar11 + 0x71) = uVar5;
        if (bVar6 != 0) {
          puVar15 = local_338;
          puVar12 = (undefined8 *)(lVar11 + 0x100);
          do {
            FUN_007e8410(puVar12 + -0x11,puVar15);
            puVar19 = (undefined8 *)(puVar15 + 0x22);
            uVar10 = *(undefined8 *)(puVar15 + 0x24);
            puVar15 = puVar15 + 0x26;
            *puVar12 = *puVar19;
            puVar12[1] = uVar10;
            uVar16 = uVar16 - 1;
            puVar12 = puVar12 + 0x13;
          } while (uVar16 != 0);
        }
      }
      FUN_007e81d4(auStack_170);
      FUN_007e81d4(auStack_208);
      FUN_007e81d4(auStack_2a0);
      FUN_007e81d4(local_338);
      FUN_007e34a4(local_98);
      uVar18 = uVar18 + 1;
    } while ((uVar18 & 0xff) < (param_4 & 0xff));
  }
  return puVar17;
}


