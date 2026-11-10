/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02de7d58; name: FUN_02de7d58
 */


void FUN_02de7d58(long param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  short sVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 *local_c0;
  char *pcStack_b8;
  size_t local_b0;
  long *local_a8;
  undefined4 local_a0 [2];
  int *local_98;
  int *local_90;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  
  lVar9 = *(long *)(param_1 + 0xa8);
  if ((((((lVar9 == 0) || (*(char *)(lVar9 + 0x1e1) != '\0')) &&
        ((lVar8 = *(long *)(param_1 + 0xd8), lVar8 == 0 || (*(char *)(lVar8 + 0x1e1) != '\0')))) &&
       ((*(long *)(param_1 + 0x108) == 0 || (*(char *)(*(long *)(param_1 + 0x108) + 0x1e1) != '\0'))
       )) && ((*(long *)(param_1 + 0x138) == 0 ||
              (*(char *)(*(long *)(param_1 + 0x138) + 0x1e1) != '\0')))) &&
     (((*(long *)(param_1 + 0x168) == 0 || (*(char *)(*(long *)(param_1 + 0x168) + 0x1e1) != '\0'))
      && ((*(long *)(param_1 + 0x198) == 0 ||
          (*(char *)(*(long *)(param_1 + 0x198) + 0x1e1) != '\0')))))) {
    *(undefined1 *)(param_1 + 0x98) = 1;
    if ((lVar9 != 0) && (*(char *)(lVar9 + 0x1e1) != '\0')) {
      piVar1 = (int *)((long)*(uint **)(lVar9 + 0x250) + (ulong)**(uint **)(lVar9 + 0x250));
      puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
      puVar14 = puVar2 + 1;
      uVar10 = (ulong)*puVar2;
      if (uVar10 != 0) {
        puVar2 = puVar14 + uVar10;
        do {
          local_90 = (int *)((long)puVar14 + (ulong)*puVar14);
          if (*(ushort *)((long)local_90 - (long)*local_90) < 5) {
            local_98 = (int *)0x0;
          }
          else {
            uVar10 = (ulong)((ushort *)((long)local_90 - (long)*local_90))[2];
            local_98 = (int *)0x0;
            if (uVar10 != 0) {
              puVar3 = (uint *)((long)local_90 + uVar10);
              local_98 = (int *)((long)puVar3 + (ulong)*puVar3);
            }
          }
          local_a0[0] = 0;
          local_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0xbf800000;
          if ((*(ushort *)((long)local_98 - (long)*local_98) < 0xd) ||
             (uVar10 = (ulong)((ushort *)((long)local_98 - (long)*local_98))[6], uVar10 == 0)) {
            local_64 = false;
          }
          else {
            local_64 = *(char *)((long)local_98 + uVar10) != '\0';
          }
          lVar9 = *(long *)(param_1 + 0x90);
          if ((*(ushort *)((long)local_90 - (long)*local_90) < 7) ||
             (uVar10 = (ulong)((ushort *)((long)local_90 - (long)*local_90))[3], uVar10 == 0)) {
            lVar8 = 0;
          }
          else {
            puVar3 = (uint *)((long)local_90 + uVar10);
            lVar8 = (long)puVar3 + (ulong)*puVar3;
          }
          local_b0 = strlen((char *)(lVar8 + 4));
          bVar6 = *(byte *)(lVar8 + 4);
          local_c0 = &DAT_cbf29ce484222645;
          if (bVar6 != 0) {
            local_c0 = &DAT_cbf29ce484222645;
            pbVar11 = (byte *)(lVar8 + 5);
            do {
              local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar6 != 0);
          }
          local_a8 = (long *)0x0;
          puVar5 = *(undefined8 **)(lVar9 + 0x60);
          pcStack_b8 = (char *)(lVar8 + 4);
          for (puVar4 = *(undefined8 **)(lVar9 + 0x58); puVar4 != puVar5; puVar4 = puVar4 + 2) {
            sVar7 = FUN_02b6f370(*puVar4,&local_c0);
            if (-1 < sVar7) {
              uVar13 = (uint)*(ushort *)((long)puVar4 + 10) + (int)sVar7;
              goto LAB_02de7f88;
            }
          }
          uVar13 = 0xffff;
LAB_02de7f88:
          local_88 = (undefined2)uVar13;
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          if ((~uVar13 & 0xffff) == 0) {
            local_64 = 0;
          }
          FUN_02de8b80(param_1 + 0x1c0,local_a0);
          puVar14 = puVar14 + 1;
        } while (puVar14 != puVar2);
        lVar8 = *(long *)(param_1 + 0xd8);
      }
    }
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x1e1) != '\0')) {
      piVar1 = (int *)((long)*(uint **)(lVar8 + 0x250) + (ulong)**(uint **)(lVar8 + 0x250));
      puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
      puVar14 = puVar2 + 1;
      uVar10 = (ulong)*puVar2;
      if (uVar10 != 0) {
        puVar2 = puVar14 + uVar10;
        do {
          local_90 = (int *)((long)puVar14 + (ulong)*puVar14);
          if (*(ushort *)((long)local_90 - (long)*local_90) < 5) {
            local_98 = (int *)0x0;
          }
          else {
            uVar10 = (ulong)((ushort *)((long)local_90 - (long)*local_90))[2];
            local_98 = (int *)0x0;
            if (uVar10 != 0) {
              puVar3 = (uint *)((long)local_90 + uVar10);
              local_98 = (int *)((long)puVar3 + (ulong)*puVar3);
            }
          }
          local_a0[0] = 1;
          local_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0xbf800000;
          if ((*(ushort *)((long)local_98 - (long)*local_98) < 0xd) ||
             (uVar10 = (ulong)((ushort *)((long)local_98 - (long)*local_98))[6], uVar10 == 0)) {
            local_64 = false;
          }
          else {
            local_64 = *(char *)((long)local_98 + uVar10) != '\0';
          }
          lVar9 = *(long *)(param_1 + 0x90);
          if ((*(ushort *)((long)local_90 - (long)*local_90) < 7) ||
             (uVar10 = (ulong)((ushort *)((long)local_90 - (long)*local_90))[3], uVar10 == 0)) {
            lVar8 = 0;
          }
          else {
            puVar3 = (uint *)((long)local_90 + uVar10);
            lVar8 = (long)puVar3 + (ulong)*puVar3;
          }
          local_b0 = strlen((char *)(lVar8 + 4));
          bVar6 = *(byte *)(lVar8 + 4);
          local_c0 = &DAT_cbf29ce484222645;
          if (bVar6 != 0) {
            local_c0 = &DAT_cbf29ce484222645;
            pbVar11 = (byte *)(lVar8 + 5);
            do {
              local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar6 != 0);
          }
          local_a8 = (long *)0x0;
          puVar5 = *(undefined8 **)(lVar9 + 0x60);
          pcStack_b8 = (char *)(lVar8 + 4);
          for (puVar4 = *(undefined8 **)(lVar9 + 0x58); puVar4 != puVar5; puVar4 = puVar4 + 2) {
            sVar7 = FUN_02b6f370(*puVar4,&local_c0);
            if (-1 < sVar7) {
              uVar13 = (uint)*(ushort *)((long)puVar4 + 10) + (int)sVar7;
              goto LAB_02de8158;
            }
          }
          uVar13 = 0xffff;
LAB_02de8158:
          local_88 = (undefined2)uVar13;
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          if ((~uVar13 & 0xffff) == 0) {
            local_64 = 0;
          }
          FUN_02de8b80(param_1 + 0x1c0,local_a0);
          puVar14 = puVar14 + 1;
        } while (puVar14 != puVar2);
      }
    }
    lVar9 = *(long *)(param_1 + 0x108);
    if ((lVar9 != 0) && (*(char *)(lVar9 + 0x1e1) != '\0')) {
      piVar1 = (int *)((long)*(uint **)(lVar9 + 0x250) + (ulong)**(uint **)(lVar9 + 0x250));
      puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
      puVar14 = puVar2 + 1;
      uVar10 = (ulong)*puVar2;
      if (uVar10 != 0) {
        puVar2 = puVar14 + uVar10;
        do {
          local_90 = (int *)((long)puVar14 + (ulong)*puVar14);
          if (*(ushort *)((long)local_90 - (long)*local_90) < 5) {
            local_98 = (int *)0x0;
          }
          else {
            uVar10 = (ulong)((ushort *)((long)local_90 - (long)*local_90))[2];
            local_98 = (int *)0x0;
            if (uVar10 != 0) {
              puVar3 = (uint *)((long)local_90 + uVar10);
              local_98 = (int *)((long)puVar3 + (ulong)*puVar3);
            }
          }
          local_a0[0] = 2;
          local_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0xbf800000;
          if ((*(ushort *)((long)local_98 - (long)*local_98) < 0xd) ||
             (uVar10 = (ulong)((ushort *)((long)local_98 - (long)*local_98))[6], uVar10 == 0)) {
            local_64 = false;
          }
          else {
            local_64 = *(char *)((long)local_98 + uVar10) != '\0';
          }
          lVar9 = *(long *)(param_1 + 0x90);
          if ((*(ushort *)((long)local_90 - (long)*local_90) < 7) ||
             (uVar10 = (ulong)((ushort *)((long)local_90 - (long)*local_90))[3], uVar10 == 0)) {
            lVar8 = 0;
          }
          else {
            puVar3 = (uint *)((long)local_90 + uVar10);
            lVar8 = (long)puVar3 + (ulong)*puVar3;
          }
          local_b0 = strlen((char *)(lVar8 + 4));
          bVar6 = *(byte *)(lVar8 + 4);
          local_c0 = &DAT_cbf29ce484222645;
          if (bVar6 != 0) {
            local_c0 = &DAT_cbf29ce484222645;
            pbVar11 = (byte *)(lVar8 + 5);
            do {
              local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar6 != 0);
          }
          local_a8 = (long *)0x0;
          puVar5 = *(undefined8 **)(lVar9 + 0x60);
          pcStack_b8 = (char *)(lVar8 + 4);
          for (puVar4 = *(undefined8 **)(lVar9 + 0x58); puVar4 != puVar5; puVar4 = puVar4 + 2) {
            sVar7 = FUN_02b6f370(*puVar4,&local_c0);
            if (-1 < sVar7) {
              uVar13 = (uint)*(ushort *)((long)puVar4 + 10) + (int)sVar7;
              goto LAB_02de8328;
            }
          }
          uVar13 = 0xffff;
LAB_02de8328:
          local_88 = (undefined2)uVar13;
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          if ((~uVar13 & 0xffff) == 0) {
            local_64 = 0;
          }
          FUN_02de8b80(param_1 + 0x1c0,local_a0);
          puVar14 = puVar14 + 1;
        } while (puVar14 != puVar2);
      }
    }
    lVar9 = *(long *)(param_1 + 0x138);
    if ((lVar9 != 0) && (*(char *)(lVar9 + 0x1e1) != '\0')) {
      piVar1 = (int *)((long)*(uint **)(lVar9 + 0x250) + (ulong)**(uint **)(lVar9 + 0x250));
      puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
      puVar14 = puVar2 + 1;
      uVar10 = (ulong)*puVar2;
      if (uVar10 != 0) {
        puVar2 = puVar14 + uVar10;
        do {
          piVar1 = (int *)((long)puVar14 + (ulong)*puVar14);
          if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
            local_98 = (int *)0x0;
          }
          else {
            uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
            local_98 = (int *)0x0;
            if (uVar10 != 0) {
              puVar3 = (uint *)((long)piVar1 + uVar10);
              local_98 = (int *)((long)puVar3 + (ulong)*puVar3);
            }
          }
          local_a0[0] = 3;
          local_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0xbf800000;
          if ((*(ushort *)((long)local_98 - (long)*local_98) < 0xd) ||
             (uVar10 = (ulong)((ushort *)((long)local_98 - (long)*local_98))[6], uVar10 == 0)) {
            local_64 = false;
          }
          else {
            local_64 = *(char *)((long)local_98 + uVar10) != '\0';
          }
          lVar9 = *(long *)(param_1 + 0x90);
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
             (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar10 == 0)) {
            lVar8 = 0;
          }
          else {
            puVar3 = (uint *)((long)piVar1 + uVar10);
            lVar8 = (long)puVar3 + (ulong)*puVar3;
          }
          local_90 = piVar1;
          local_b0 = strlen((char *)(lVar8 + 4));
          bVar6 = *(byte *)(lVar8 + 4);
          local_c0 = &DAT_cbf29ce484222645;
          if (bVar6 != 0) {
            local_c0 = &DAT_cbf29ce484222645;
            pbVar11 = (byte *)(lVar8 + 5);
            do {
              local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar6 != 0);
          }
          local_a8 = (long *)0x0;
          puVar5 = *(undefined8 **)(lVar9 + 0x60);
          pcStack_b8 = (char *)(lVar8 + 4);
          for (puVar4 = *(undefined8 **)(lVar9 + 0x58); puVar4 != puVar5; puVar4 = puVar4 + 2) {
            sVar7 = FUN_02b6f370(*puVar4,&local_c0);
            if (-1 < sVar7) {
              uVar13 = (uint)*(ushort *)((long)puVar4 + 10) + (int)sVar7;
              goto LAB_02de8508;
            }
          }
          uVar13 = 0xffff;
LAB_02de8508:
          local_88 = (undefined2)uVar13;
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          lVar9 = *(long *)(param_1 + 0x90);
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
             (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar10 == 0)) {
            lVar8 = 0;
          }
          else {
            puVar3 = (uint *)((long)piVar1 + uVar10);
            lVar8 = (long)puVar3 + (ulong)*puVar3;
          }
          local_b0 = strlen((char *)(lVar8 + 4));
          bVar6 = *(byte *)(lVar8 + 4);
          local_c0 = &DAT_cbf29ce484222645;
          if (bVar6 != 0) {
            local_c0 = &DAT_cbf29ce484222645;
            pbVar11 = (byte *)(lVar8 + 5);
            do {
              local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar6 != 0);
          }
          local_a8 = (long *)0x0;
          puVar5 = *(undefined8 **)(lVar9 + 0x60);
          pcStack_b8 = (char *)(lVar8 + 4);
          for (puVar4 = *(undefined8 **)(lVar9 + 0x58); puVar4 != puVar5; puVar4 = puVar4 + 2) {
            sVar7 = FUN_02b6f370(*puVar4,&local_c0);
            if (-1 < sVar7) {
              uVar15 = (uint)*(ushort *)((long)puVar4 + 10) + (int)sVar7;
              goto LAB_02de85c4;
            }
          }
          uVar15 = 0xffff;
LAB_02de85c4:
          local_86 = (undefined2)uVar15;
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          lVar9 = *(long *)(param_1 + 0x90);
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
             (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar10 == 0)) {
            lVar8 = 0;
          }
          else {
            puVar3 = (uint *)((long)piVar1 + uVar10);
            lVar8 = (long)puVar3 + (ulong)*puVar3;
          }
          local_b0 = strlen((char *)(lVar8 + 4));
          bVar6 = *(byte *)(lVar8 + 4);
          local_c0 = &DAT_cbf29ce484222645;
          if (bVar6 != 0) {
            local_c0 = &DAT_cbf29ce484222645;
            pbVar11 = (byte *)(lVar8 + 5);
            do {
              local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar6 != 0);
          }
          local_a8 = (long *)0x0;
          puVar5 = *(undefined8 **)(lVar9 + 0x60);
          pcStack_b8 = (char *)(lVar8 + 4);
          for (puVar4 = *(undefined8 **)(lVar9 + 0x58); puVar4 != puVar5; puVar4 = puVar4 + 2) {
            sVar7 = FUN_02b6f370(*puVar4,&local_c0);
            if (-1 < sVar7) {
              uVar12 = (uint)*(ushort *)((long)puVar4 + 10) + (int)sVar7;
              goto LAB_02de8680;
            }
          }
          uVar12 = 0xffff;
LAB_02de8680:
          local_84 = (undefined2)uVar12;
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          if ((((~uVar13 & 0xffff) == 0) || ((~uVar15 & 0xffff) == 0)) || ((~uVar12 & 0xffff) == 0))
          {
            local_64 = 0;
          }
          FUN_02de8b80(param_1 + 0x1c0,local_a0);
          puVar14 = puVar14 + 1;
        } while (puVar14 != puVar2);
      }
    }
    lVar9 = *(long *)(param_1 + 0x168);
    if ((lVar9 != 0) && (*(char *)(lVar9 + 0x1e1) != '\0')) {
      piVar1 = (int *)((long)*(uint **)(lVar9 + 0x250) + (ulong)**(uint **)(lVar9 + 0x250));
      puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
      puVar14 = puVar2 + 1;
      uVar10 = (ulong)*puVar2;
      if (uVar10 != 0) {
        puVar2 = puVar14 + uVar10;
        do {
          piVar1 = (int *)((long)puVar14 + (ulong)*puVar14);
          if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
            local_98 = (int *)0x0;
          }
          else {
            uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
            local_98 = (int *)0x0;
            if (uVar10 != 0) {
              puVar3 = (uint *)((long)piVar1 + uVar10);
              local_98 = (int *)((long)puVar3 + (ulong)*puVar3);
            }
          }
          local_a0[0] = 4;
          local_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0xbf800000;
          if ((*(ushort *)((long)local_98 - (long)*local_98) < 0xd) ||
             (uVar10 = (ulong)((ushort *)((long)local_98 - (long)*local_98))[6], uVar10 == 0)) {
            local_64 = false;
          }
          else {
            local_64 = *(char *)((long)local_98 + uVar10) != '\0';
          }
          lVar9 = *(long *)(param_1 + 0x90);
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
             (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar10 == 0)) {
            lVar8 = 0;
          }
          else {
            puVar3 = (uint *)((long)piVar1 + uVar10);
            lVar8 = (long)puVar3 + (ulong)*puVar3;
          }
          local_90 = piVar1;
          local_b0 = strlen((char *)(lVar8 + 4));
          bVar6 = *(byte *)(lVar8 + 4);
          local_c0 = &DAT_cbf29ce484222645;
          if (bVar6 != 0) {
            local_c0 = &DAT_cbf29ce484222645;
            pbVar11 = (byte *)(lVar8 + 5);
            do {
              local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar6 != 0);
          }
          local_a8 = (long *)0x0;
          puVar5 = *(undefined8 **)(lVar9 + 0x60);
          pcStack_b8 = (char *)(lVar8 + 4);
          for (puVar4 = *(undefined8 **)(lVar9 + 0x58); puVar4 != puVar5; puVar4 = puVar4 + 2) {
            sVar7 = FUN_02b6f370(*puVar4,&local_c0);
            if (-1 < sVar7) {
              uVar13 = (uint)*(ushort *)((long)puVar4 + 10) + (int)sVar7;
              goto LAB_02de8880;
            }
          }
          uVar13 = 0xffff;
LAB_02de8880:
          local_88 = (undefined2)uVar13;
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          lVar9 = *(long *)(param_1 + 0x90);
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
             (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar10 == 0)) {
            lVar8 = 0;
          }
          else {
            puVar3 = (uint *)((long)piVar1 + uVar10);
            lVar8 = (long)puVar3 + (ulong)*puVar3;
          }
          local_b0 = strlen((char *)(lVar8 + 4));
          bVar6 = *(byte *)(lVar8 + 4);
          local_c0 = &DAT_cbf29ce484222645;
          if (bVar6 != 0) {
            local_c0 = &DAT_cbf29ce484222645;
            pbVar11 = (byte *)(lVar8 + 5);
            do {
              local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar6 != 0);
          }
          local_a8 = (long *)0x0;
          puVar5 = *(undefined8 **)(lVar9 + 0x60);
          pcStack_b8 = (char *)(lVar8 + 4);
          for (puVar4 = *(undefined8 **)(lVar9 + 0x58); puVar4 != puVar5; puVar4 = puVar4 + 2) {
            sVar7 = FUN_02b6f370(*puVar4,&local_c0);
            if (-1 < sVar7) {
              uVar15 = (uint)*(ushort *)((long)puVar4 + 10) + (int)sVar7;
              goto LAB_02de893c;
            }
          }
          uVar15 = 0xffff;
LAB_02de893c:
          local_86 = (undefined2)uVar15;
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          if (((~uVar13 & 0xffff) == 0) || ((~uVar15 & 0xffff) == 0)) {
            local_64 = 0;
          }
          FUN_02de8b80(param_1 + 0x1c0,local_a0);
          puVar14 = puVar14 + 1;
        } while (puVar14 != puVar2);
      }
    }
    lVar9 = *(long *)(param_1 + 0x198);
    if ((lVar9 != 0) && (*(char *)(lVar9 + 0x1e1) != '\0')) {
      piVar1 = (int *)((long)*(uint **)(lVar9 + 0x250) + (ulong)**(uint **)(lVar9 + 0x250));
      puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
      puVar14 = puVar2 + 1;
      uVar10 = (ulong)*puVar2;
      if (uVar10 != 0) {
        puVar2 = puVar14 + uVar10;
        do {
          local_90 = (int *)((long)puVar14 + (ulong)*puVar14);
          if (*(ushort *)((long)local_90 - (long)*local_90) < 5) {
            local_98 = (int *)0x0;
          }
          else {
            uVar10 = (ulong)((ushort *)((long)local_90 - (long)*local_90))[2];
            local_98 = (int *)0x0;
            if (uVar10 != 0) {
              puVar3 = (uint *)((long)local_90 + uVar10);
              local_98 = (int *)((long)puVar3 + (ulong)*puVar3);
            }
          }
          local_a0[0] = 5;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0xbf800000;
          if ((*(ushort *)((long)local_98 - (long)*local_98) < 0xd) ||
             (uVar10 = (ulong)((ushort *)((long)local_98 - (long)*local_98))[6], uVar10 == 0)) {
            local_64 = false;
          }
          else {
            local_64 = *(char *)((long)local_98 + uVar10) != '\0';
          }
          local_80 = 0;
          lVar9 = *(long *)(param_1 + 0x90);
          if ((*(ushort *)((long)local_90 - (long)*local_90) < 7) ||
             (uVar10 = (ulong)((ushort *)((long)local_90 - (long)*local_90))[3], uVar10 == 0)) {
            lVar8 = 0;
          }
          else {
            puVar3 = (uint *)((long)local_90 + uVar10);
            lVar8 = (long)puVar3 + (ulong)*puVar3;
          }
          local_b0 = strlen((char *)(lVar8 + 4));
          bVar6 = *(byte *)(lVar8 + 4);
          local_c0 = &DAT_cbf29ce484222645;
          if (bVar6 != 0) {
            local_c0 = &DAT_cbf29ce484222645;
            pbVar11 = (byte *)(lVar8 + 5);
            do {
              local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar6 != 0);
          }
          local_a8 = (long *)0x0;
          puVar5 = *(undefined8 **)(lVar9 + 0x60);
          pcStack_b8 = (char *)(lVar8 + 4);
          for (puVar4 = *(undefined8 **)(lVar9 + 0x58); puVar4 != puVar5; puVar4 = puVar4 + 2) {
            sVar7 = FUN_02b6f370(*puVar4,&local_c0);
            if (-1 < sVar7) {
              uVar13 = (uint)*(ushort *)((long)puVar4 + 10) + (int)sVar7;
              goto LAB_02de8b24;
            }
          }
          uVar13 = 0xffff;
LAB_02de8b24:
          local_88 = (undefined2)uVar13;
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          if ((~uVar13 & 0xffff) == 0) {
            local_64 = 0;
          }
          FUN_02de8b80(param_1 + 0x1c0,local_a0);
          puVar14 = puVar14 + 1;
        } while (puVar14 != puVar2);
      }
    }
  }
  return;
}


