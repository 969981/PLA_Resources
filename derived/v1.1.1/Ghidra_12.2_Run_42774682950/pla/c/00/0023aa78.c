/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023aa78; name: FUN_0023aa78
 */


/* WARNING: Removing unreachable block (ram,0x0023b334) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0023aa78(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                 long param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  char cVar15;
  byte bVar16;
  byte bVar17;
  ushort uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  uint uVar28;
  ulong uVar29;
  undefined4 *puVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 uVar33;
  uint uVar34;
  long lVar35;
  ulong uVar36;
  int iVar37;
  long lVar38;
  undefined8 *puVar39;
  int iVar40;
  undefined8 *puVar41;
  ulong uVar42;
  undefined4 *puVar43;
  undefined8 uVar44;
  int iVar45;
  ulong uVar46;
  uint *puVar47;
  byte *pbVar48;
  ulong uVar49;
  long *plVar50;
  ulong uVar51;
  undefined8 *local_138;
  ulong local_e0;
  undefined8 *local_d8;
  
  puVar47 = (uint *)(param_1 + 0x10);
  *puVar47 = *puVar47 & 0xffc00000;
  *(undefined8 *)(param_1 + 8) = 0xffffffff00000000;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffc00000;
  plVar50 = (long *)(param_1 + 0x18);
  *plVar50 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xe0;
  lVar35 = param_4;
  if (param_5 == 0) {
LAB_0023ab40:
    uVar25 = *(undefined8 *)(param_6 + 0x30);
    *(long *)(param_1 + 0x28) = param_4;
    cVar15 = *(char *)(param_6 + 0xda);
    param_5 = param_4;
  }
  else {
    uVar18 = *(ushort *)(param_6 + 0x44);
    if (uVar18 == 0) {
      if ((*(ushort *)(param_6 + 0x40) != 0) && ((*(ushort *)(param_6 + 0x40) >> 2 & 1) == 0))
      goto LAB_0023ab40;
      uVar25 = *(undefined8 *)(param_6 + 0x38);
      *(long *)(param_1 + 0x28) = param_5;
      cVar15 = *(char *)(param_6 + 0xda);
      lVar35 = param_5;
      param_4 = param_5;
    }
    else {
      uVar25 = *(undefined8 *)(param_6 + 0x30);
      if ((uVar18 & 1) != 0) {
        lVar35 = param_5;
      }
      if (((uVar18 >> 1 & 1) == 0) ||
         (((*(uint *)(param_5 + 0x1c) ^ *(uint *)(param_4 + 0x1c)) & 3) != 0)) {
        *(long *)(param_1 + 0x28) = param_4;
        cVar15 = *(char *)(param_6 + 0xda);
        param_5 = param_4;
      }
      else {
        uVar25 = *(undefined8 *)(param_6 + 0x38);
        *(long *)(param_1 + 0x28) = param_4;
        cVar15 = *(char *)(param_6 + 0xda);
      }
    }
  }
  if (cVar15 != '\0') {
    *(undefined1 *)(param_1 + 0x49) = 0x40;
  }
  pbVar48 = (byte *)(lVar35 + 0x20);
  if ((*pbVar48 & 3) == 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(pbVar48 + *(byte *)(lVar35 + 0x22));
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(pbVar48 + *(byte *)(lVar35 + 0x23));
    bVar16 = *(byte *)(lVar35 + 0x21);
  }
  else {
    puVar23 = (undefined8 *)FUN_00232654(0x20);
    *(undefined8 **)(param_1 + 8) = puVar23;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0x28;
    uVar33 = *(undefined8 *)(pbVar48 + *(byte *)(lVar35 + 0x22) + 8);
    *puVar23 = *(undefined8 *)(pbVar48 + *(byte *)(lVar35 + 0x22));
    puVar23[1] = uVar33;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0x10;
    lVar26 = *(long *)(param_1 + 8);
    uVar33 = *(undefined8 *)(pbVar48 + *(byte *)(lVar35 + 0x23) + 8);
    *(undefined8 *)(lVar26 + 0x10) = *(undefined8 *)(pbVar48 + *(byte *)(lVar35 + 0x23));
    *(undefined8 *)(lVar26 + 0x18) = uVar33;
    bVar16 = *(byte *)(lVar35 + 0x21);
  }
  lVar35 = (ulong)bVar16 + 2;
  if (bVar16 != 0) {
    bVar17 = *pbVar48;
    uVar34 = (uint)bVar16;
    if (uVar34 == 1) {
      uVar31 = 0;
    }
    else {
      uVar31 = 0;
      do {
        uVar28 = uVar31 & 0x1f;
        uVar19 = uVar31 + 1;
        uVar31 = uVar31 + 2;
        lVar26 = 4;
        if ((1 << (ulong)uVar28 & (uint)bVar17) != 0) {
          lVar26 = 0x10;
        }
        lVar38 = 4;
        if ((1 << (ulong)(uVar19 & 0x1f) & (uint)bVar17) != 0) {
          lVar38 = 0x10;
        }
        lVar35 = lVar38 + lVar26 + lVar35;
      } while (uVar34 - (uVar34 & 1) != uVar31);
    }
    if ((bVar16 & 1) != 0) {
      lVar26 = 4;
      if ((1 << (ulong)(uVar31 & 0x1f) & (uint)bVar17) != 0) {
        lVar26 = 0x10;
      }
      lVar35 = lVar26 + lVar35;
    }
  }
  uVar34 = *(uint *)(param_4 + 0x1c);
  uVar49 = (ulong)uVar34;
  uVar32 = lVar35 + 0x20U + ((ulong)(uint)(*(int *)(param_5 + 0x1c) << 2) & 0xc);
  uVar42 = uVar49 & 0x400;
  uVar3 = uVar32 + (uVar34 << 2 & (int)(uVar34 << 10) >> 0x1f & 0xc);
  uVar31 = (uVar34 & 0xff) >> 2 & 3;
  uVar19 = (uVar34 & 0xff) >> 4 & 3;
  uVar28 = uVar34 >> 6 & 7;
  uVar4 = uVar3 + ((uVar31 | uVar31 << 2) << 2);
  uVar36 = uVar4 + (uVar19 << 4);
  uVar5 = uVar36 + (uVar28 << 2);
  uVar6 = uVar5 + ((uVar49 & 0x200) >> 6);
  uVar7 = uVar6 + (uVar42 >> 8);
  uVar8 = uVar7 + ((uVar49 & 0x1000) >> 10);
  lVar26 = 0xc;
  if ((uVar34 & 0x4000) == 0) {
    lVar26 = 0;
  }
  uVar51 = uVar8 + lVar26;
  if ((uVar34 >> 0x13 & 1) == 0) {
    local_138 = (undefined8 *)0x0;
    local_e0 = 0;
    local_d8 = (undefined8 *)0x0;
  }
  else {
    local_d8 = (undefined8 *)(param_4 + (uVar51 & 0xffffffff));
    uVar51 = uVar51 + 0x1c;
    local_138 = (undefined8 *)(param_4 + (uVar51 & 0xffffffff));
    local_e0 = (ulong)(uVar28 << 4);
  }
  iVar37 = (int)(uVar49 & 0x200);
  iVar45 = (int)(uVar49 & 0x20000);
  lVar26 = 0x74;
  if ((uVar34 & 0x100000) == 0) {
    lVar26 = 0;
  }
  uVar20 = uVar34 >> 0x16 & 3;
  iVar12 = 0;
  if ((uVar34 >> 0x16 & 3) != 0) {
    iVar12 = uVar20 << 4;
  }
  uVar13 = 6;
  if (uVar28 != 7) {
    uVar13 = uVar28;
  }
  uVar24 = (ulong)uVar13;
  iVar40 = (int)(uVar49 & 0x1000);
  uVar14 = 2;
  if (iVar40 == 0) {
    uVar14 = (int)(uVar42 >> 10);
  }
  uVar28 = uVar34 & 3;
  uVar21 = uVar34 >> 0xf & 3;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xfb | (byte)(uVar34 >> 0x10) & 4;
  uVar22 = uVar34 >> 0x18 & 3;
  FUN_0023baf4(param_1,uVar28,uVar31,uVar19,uVar24,iVar37 != 0,uVar14,uVar34 >> 0xe & 1,uVar21,
               iVar45 != 0,(byte)(uVar34 >> 0x13) & 1,(byte)(uVar34 >> 0x14) & 1,uVar20,uVar22);
  *(byte *)(param_1 + 0x49) =
       (byte)(*(uint *)(param_4 + 0x1c) >> 10) & 2 | *(byte *)(param_1 + 0x49) & 0xfd;
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_0023baa8;
  uVar9 = local_e0 + uVar51 + (ulong)((uVar21 | uVar21 << 2) << 2);
  uVar49 = uVar9 + ((uVar49 & 0x20000) >> 0xe);
  uVar29 = (ulong)*puVar47;
  uVar10 = uVar49 + lVar26;
  if ((*puVar47 & 3) != 0) {
    FUN_0024bbbc();
    uVar29 = (ulong)*puVar47;
    if ((*puVar47 >> 1 & 1) != 0) {
      uVar46 = 1;
      lVar26 = 0x10;
      do {
        FUN_0024bbbc(*plVar50 + lVar26);
        uVar29 = (ulong)*puVar47;
        uVar46 = uVar46 + 1;
        lVar26 = lVar26 + 0x10;
      } while (uVar46 < (uVar29 & 3));
    }
  }
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffc | uVar28;
  if (uVar28 != 0) {
    FUN_0023bd74(param_1,param_3,uVar25,param_6,param_5,param_5 + (lVar35 + 0x20U & 0xffffffff),
                 param_5 + (uVar32 & 0xffffffff),param_4 + (uVar10 & 0xffffffff));
    uVar29 = (ulong)*(uint *)(param_1 + 0x10);
  }
  uVar28 = (uint)uVar29;
  puVar23 = (undefined8 *)(*plVar50 + (ulong)((uVar28 & 3) << 4));
  if ((uVar29 & 0xc) != 0) {
    *(undefined4 *)(puVar23 + 2) = 0;
    *puVar23 = 0;
    puVar23[1] = 0;
    uVar28 = *puVar47;
    if ((uVar28 >> 3 & 1) != 0) {
      *(undefined4 *)((long)puVar23 + 0x24) = 0;
      *(undefined8 *)((long)puVar23 + 0x1c) = 0;
      *(undefined8 *)((long)puVar23 + 0x14) = 0;
      uVar28 = *puVar47;
      if ((~uVar28 & 0xc) == 0) {
        *(undefined4 *)(puVar23 + 7) = 0;
        puVar23[5] = 0;
        puVar23[6] = 0;
        uVar28 = *puVar47;
      }
    }
  }
  *(uint *)(param_1 + 0x14) =
       *(uint *)(param_1 + 0x14) & 0xfffffff0 | *(uint *)(param_1 + 0x14) & 3 | uVar31 << 2;
  if (uVar31 != 0) {
    puVar2 = (undefined8 *)(param_4 + (uVar3 & 0xffffffff));
    *puVar23 = *puVar2;
    *(undefined4 *)(puVar23 + 1) = *(undefined4 *)(puVar2 + 1);
    *(undefined8 *)((long)puVar23 + 0xc) = *(undefined8 *)((long)puVar2 + 0xc);
    if (uVar31 != 1) {
      *(undefined8 *)((long)puVar23 + 0x14) = *(undefined8 *)((long)puVar2 + 0x14);
      *(undefined4 *)((long)puVar23 + 0x1c) = *(undefined4 *)((long)puVar2 + 0x1c);
      puVar23[4] = puVar2[4];
      if (uVar31 != 2) {
        puVar23[5] = puVar2[5];
        *(undefined4 *)(puVar23 + 6) = *(undefined4 *)(puVar2 + 6);
        *(undefined8 *)((long)puVar23 + 0x34) = *(undefined8 *)((long)puVar2 + 0x34);
      }
    }
    uVar28 = *puVar47;
  }
  puVar23 = (undefined8 *)(*plVar50 + (ulong)((uVar28 & 3) * 0x10 + (uVar28 >> 2 & 3) * 0x14));
  if ((uVar28 & 0x30) != 0) {
    *(undefined4 *)puVar23 = 0;
    puVar23[1] = 0;
    if ((*(byte *)puVar47 >> 5 & 1) != 0) {
      *(undefined4 *)(puVar23 + 2) = 0;
      puVar23[3] = 0;
      if ((~*puVar47 & 0x30) == 0) {
        *(undefined4 *)(puVar23 + 4) = 0;
        puVar23[5] = 0;
      }
    }
  }
  uVar31 = *(uint *)(param_1 + 0x14) & 0xffffffcf | uVar19 << 4;
  *(uint *)(param_1 + 0x14) = uVar31;
  if (uVar19 != 0) {
    puVar2 = (undefined8 *)(param_4 + (uVar4 & 0xffffffff));
    uVar33 = *puVar2;
    uVar27 = puVar2[1];
    *puVar23 = uVar33;
    puVar23[1] = uVar27;
    uVar31 = (uint)((ulong)uVar33 >> 8) & 0xff;
    if ((uVar31 == 6) || (uVar31 - 3 < 3)) {
      uVar31 = *puVar47;
      uVar32 = 1;
      puVar23[1] = *plVar50 +
                   ((ulong)(uVar31 >> 4) & 0x1c) + ((ulong)(uVar31 >> 8) & 0xc) +
                   ((ulong)(uVar31 >> 2) & 3) * 0x14 + ((ulong)(uVar31 >> 0xc) & 1) * 0xc +
                   (((ulong)(uVar31 << 4) & 0x30) + ((ulong)uVar31 & 0x30) |
                   (ulong)(uVar31 >> 6) & 8);
      uVar31 = *(uint *)(param_1 + 0x14);
    }
    else {
      uVar32 = 0;
      puVar23[1] = 0;
      uVar31 = *(uint *)(param_1 + 0x14);
    }
    if ((uVar31 >> 5 & 1) != 0) {
      uVar33 = puVar2[2];
      uVar27 = puVar2[3];
      puVar23[2] = uVar33;
      puVar23[3] = uVar27;
      uVar31 = (uint)((ulong)uVar33 >> 8) & 0xff;
      if ((uVar31 == 6) || (uVar31 - 3 < 3)) {
        uVar31 = *puVar47;
        lVar35 = *plVar50 +
                 ((ulong)(uVar31 >> 4) & 0x1c) + ((ulong)(uVar31 >> 8) & 0xc) +
                 ((ulong)(uVar31 >> 2) & 3) * 0x14 + ((ulong)(uVar31 >> 0xc) & 1) * 0xc +
                 (((ulong)(uVar31 << 4) & 0x30) + ((ulong)uVar31 & 0x30) | (ulong)(uVar31 >> 6) & 8)
                 + uVar32 * 0x14;
        uVar32 = (ulong)((int)uVar32 + 1);
      }
      else {
        lVar35 = 0;
      }
      puVar23[3] = lVar35;
      uVar31 = *(uint *)(param_1 + 0x14);
      if ((~uVar31 & 0x30) == 0) {
        uVar33 = puVar2[4];
        uVar27 = puVar2[5];
        puVar23[4] = uVar33;
        puVar23[5] = uVar27;
        uVar31 = (uint)((ulong)uVar33 >> 8) & 0xff;
        if ((uVar31 == 6) || (uVar31 - 3 < 3)) {
          uVar31 = *puVar47;
          lVar35 = *plVar50 +
                   ((ulong)(uVar31 >> 4) & 0x1c) + ((ulong)(uVar31 >> 8) & 0xc) +
                   ((ulong)(uVar31 >> 2) & 3) * 0x14 + ((ulong)(uVar31 >> 0xc) & 1) * 0xc +
                   (((ulong)(uVar31 << 4) & 0x30) + ((ulong)uVar31 & 0x30) |
                   (ulong)(uVar31 >> 6) & 8) + uVar32 * 0x14;
        }
        else {
          lVar35 = 0;
        }
        puVar23[5] = lVar35;
        uVar31 = *(uint *)(param_1 + 0x14);
      }
    }
  }
  if (uVar13 != 0) {
    uVar19 = *puVar47;
    lVar26 = *plVar50;
    lVar35 = ((ulong)(uVar19 >> 8) & 0xc) + ((ulong)(uVar19 >> 2) & 3) * 0x14 +
             ((ulong)(uVar19 >> 0xc) & 1) * 0xc +
             (((ulong)(uVar19 << 4) & 0x30) + ((ulong)uVar19 & 0x30) | (ulong)(uVar19 >> 6) & 8);
    puVar11 = (undefined4 *)(lVar26 + lVar35);
    if ((uVar19 & 0x1c0) != 0) {
      *puVar11 = 0;
      if ((((((*(ushort *)puVar47 & 0x180) != 0) && (puVar11[1] = 0, 0x80 < (*puVar47 & 0x1c0))) &&
           (puVar11[2] = 0, (*(byte *)(param_1 + 0x11) & 1) != 0)) &&
          ((puVar11[3] = 0, 0x100 < (*puVar47 & 0x1c0) && (puVar11[4] = 0, (~*puVar47 & 0x180) == 0)
           ))) && (puVar11[5] = 0, (~*puVar47 & 0x1c0) == 0)) {
        puVar11[6] = 0;
      }
      uVar31 = *(uint *)(param_1 + 0x14);
    }
    *(uint *)(param_1 + 0x14) = uVar31 & 0xfffffe00 | uVar31 & 0x3f | uVar13 << 6;
    uVar36 = uVar36 & 0xffffffff;
    if (uVar13 == 1) {
      lVar38 = 0;
    }
    else {
      lVar38 = 0;
      puVar30 = (undefined4 *)(lVar35 + lVar26 + 4);
      puVar43 = (undefined4 *)(uVar36 + param_4 + 4);
      do {
        puVar30[-1] = puVar43[-1];
        lVar38 = lVar38 + 2;
        *puVar30 = *puVar43;
        puVar30 = puVar30 + 2;
        puVar43 = puVar43 + 2;
      } while (uVar24 - (uVar24 & 1) != lVar38);
      if ((uVar13 & 1) == 0) goto LAB_0023b380;
    }
    puVar11[lVar38] = *(undefined4 *)(param_4 + uVar36 + lVar38 * 4);
  }
LAB_0023b380:
  if (iVar37 != 0) {
    uVar31 = *puVar47;
    *(undefined8 *)
     (*plVar50 +
     ((ulong)(uVar31 << 4) & 0x30) + ((ulong)uVar31 & 0x30) + ((ulong)(uVar31 >> 2) & 3) * 0x14) =
         *(undefined8 *)(param_4 + (uVar5 & 0xffffffff));
  }
  if ((int)uVar42 != 0) {
    uVar31 = *puVar47;
    *(undefined4 *)
     (*plVar50 +
     (((ulong)(uVar31 << 4) & 0x30) + ((ulong)uVar31 & 0x30) | (ulong)(uVar31 >> 6) & 8) +
     ((ulong)(uVar31 >> 2) & 3) * 0x14) = *(undefined4 *)(param_4 + (uVar6 & 0xffffffff));
  }
  if (iVar40 != 0) {
    uVar31 = *puVar47;
    *(undefined4 *)
     ((((ulong)(uVar31 << 4) & 0x30) + ((ulong)uVar31 & 0x30) | (ulong)(uVar31 >> 6) & 8) +
      ((ulong)(uVar31 >> 2) & 3) * 0x14 + *plVar50 + 4) =
         *(undefined4 *)(param_4 + (uVar7 & 0xffffffff));
  }
  if ((uVar34 >> 0xe & 1) != 0) {
    uVar31 = *puVar47;
    puVar23 = (undefined8 *)(param_4 + (uVar8 & 0xffffffff));
    puVar2 = (undefined8 *)
             (*plVar50 +
             ((ulong)(uVar31 >> 8) & 0xc) + ((ulong)(uVar31 >> 2) & 3) * 0x14 +
             (((ulong)(uVar31 << 4) & 0x30) + ((ulong)uVar31 & 0x30) | (ulong)(uVar31 >> 6) & 8));
    uVar33 = *puVar23;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar23 + 1);
    *puVar2 = uVar33;
  }
  if (((uVar34 >> 0x13 & 1) != 0) && (local_d8 != (undefined8 *)0x0)) {
    uVar31 = *puVar47;
    uVar33 = *local_d8;
    uVar27 = local_d8[1];
    uVar44 = local_d8[2];
    puVar23 = (undefined8 *)
              (*plVar50 +
              ((ulong)(uVar31 >> 4) & 0x1c) + ((ulong)(uVar31 >> 8) & 0xc) +
              ((ulong)(uVar31 >> 0xc) & 8) + ((ulong)(uVar31 >> 0xc) & 1) * 0xc +
              (((ulong)(uVar31 << 4) & 0x30) + ((ulong)uVar31 & 0x30) | (ulong)(uVar31 >> 6) & 8) +
              (((ulong)(uVar31 >> 0xd) & 3) + ((ulong)(uVar31 >> 2) & 3)) * 0x14);
    *(undefined4 *)(puVar23 + 3) = *(undefined4 *)(local_d8 + 3);
    puVar23[1] = uVar27;
    puVar23[2] = uVar44;
    *puVar23 = uVar33;
    if (uVar13 != 0) {
      uVar31 = *puVar47;
      puVar23 = (undefined8 *)
                (*plVar50 +
                (long)(int)((uVar31 >> 4 & 0x1c) + (uVar31 >> 8 & 0xc) + (uVar31 >> 0xc & 8) +
                            (uVar31 >> 0xc & 1) * 0xc + (uVar31 >> 0x10 & 1) * 0x1c +
                            ((uVar31 & 3) * 0x10 + (uVar31 & 0x30) | uVar31 >> 6 & 8) +
                           ((uVar31 >> 0xd & 3) + (uVar31 >> 2 & 3)) * 0x14));
      uVar33 = local_138[1];
      *puVar23 = *local_138;
      puVar23[1] = uVar33;
      if (uVar13 != 1) {
        uVar33 = local_138[3];
        puVar23[2] = local_138[2];
        puVar23[3] = uVar33;
        if (uVar13 != 2) {
          uVar33 = local_138[5];
          puVar23[4] = local_138[4];
          puVar23[5] = uVar33;
          if (uVar13 != 3) {
            uVar33 = local_138[7];
            puVar23[6] = local_138[6];
            puVar23[7] = uVar33;
            if (uVar13 != 4) {
              uVar33 = local_138[9];
              puVar23[8] = local_138[8];
              puVar23[9] = uVar33;
              if (uVar13 != 5) {
                uVar33 = local_138[0xb];
                puVar23[10] = local_138[10];
                puVar23[0xb] = uVar33;
                if (uVar13 != 6) {
                  uVar33 = local_138[0xd];
                  puVar23[0xc] = local_138[0xc];
                  puVar23[0xd] = uVar33;
                }
              }
            }
          }
        }
      }
    }
  }
  if (uVar21 != 0) {
    uVar31 = *puVar47;
    puVar23 = (undefined8 *)
              (*plVar50 +
              ((ulong)(uVar31 >> 4) & 0x1c) + ((ulong)(uVar31 >> 8) & 0xc) +
              ((ulong)(uVar31 >> 2) & 3) * 0x14 + ((ulong)(uVar31 >> 0xc) & 1) * 0xc +
              (((ulong)(uVar31 << 4) & 0x30) + ((ulong)uVar31 & 0x30) | (ulong)(uVar31 >> 6) & 8));
    if ((uVar31 & 0x6000) != 0) {
      *(undefined4 *)(puVar23 + 2) = 0;
      *puVar23 = 0;
      puVar23[1] = 0;
      if ((*(byte *)(param_1 + 0x11) >> 6 & 1) != 0) {
        *(undefined4 *)((long)puVar23 + 0x24) = 0;
        *(undefined8 *)((long)puVar23 + 0x1c) = 0;
        *(undefined8 *)((long)puVar23 + 0x14) = 0;
        if ((~*puVar47 & 0x6000) == 0) {
          *(undefined4 *)(puVar23 + 7) = 0;
          puVar23[5] = 0;
          puVar23[6] = 0;
        }
      }
    }
    puVar2 = (undefined8 *)(param_4 + (local_e0 + uVar51 & 0xffffffff));
    *(uint *)(param_1 + 0x14) =
         *(uint *)(param_1 + 0x14) & 0xffff8000 | *(uint *)(param_1 + 0x14) & 0x1fff | uVar21 << 0xd
    ;
    if (uVar21 == 1) {
      lVar35 = 0;
    }
    else {
      lVar35 = 0;
      puVar39 = puVar23;
      puVar41 = puVar2;
      do {
        uVar33 = *puVar41;
        uVar27 = puVar41[1];
        lVar35 = lVar35 + 2;
        *(undefined4 *)(puVar39 + 2) = *(undefined4 *)(puVar41 + 2);
        *puVar39 = uVar33;
        puVar39[1] = uVar27;
        uVar33 = *(undefined8 *)((long)puVar41 + 0x14);
        uVar27 = *(undefined8 *)((long)puVar41 + 0x1c);
        *(undefined4 *)((long)puVar39 + 0x24) = *(undefined4 *)((long)puVar41 + 0x24);
        *(undefined8 *)((long)puVar39 + 0x1c) = uVar27;
        *(undefined8 *)((long)puVar39 + 0x14) = uVar33;
        puVar41 = puVar41 + 5;
        puVar39 = puVar39 + 5;
      } while ((ulong)uVar21 - ((ulong)uVar21 & 1) != lVar35);
    }
    if ((uVar34 >> 0xf & 1) != 0) {
      puVar2 = (undefined8 *)((long)puVar2 + lVar35 * 0x14);
      puVar23 = (undefined8 *)((long)puVar23 + lVar35 * 0x14);
      uVar33 = *puVar2;
      uVar27 = puVar2[1];
      *(undefined4 *)(puVar23 + 2) = *(undefined4 *)(puVar2 + 2);
      *puVar23 = uVar33;
      puVar23[1] = uVar27;
    }
  }
  if (uVar22 != 0) {
    uVar31 = *puVar47;
    puVar23 = (undefined8 *)
              (*plVar50 +
              (long)(int)((uVar31 >> 4 & 0x1c) + (uVar31 >> 8 & 0xc) + (uVar31 >> 0xc & 8) +
                          (uVar31 >> 0xd & 0x60) + (uVar31 >> 0xc & 1) * 0xc +
                          (uVar31 >> 0x10 & 1) * 0x1c + (uVar31 >> 0xc & 0x10) * (uVar31 >> 6 & 7) +
                          (uVar31 >> 0x11 & 1) * 0x74 + (uint)((uVar31 & 0x300000) != 0) * 0x10 +
                          ((uVar31 & 3) * 0x10 + (uVar31 & 0x30) | uVar31 >> 6 & 8) +
                         ((uVar31 >> 0xd & 3) + (uVar31 >> 2 & 3)) * 0x14));
    if ((uVar31 & 0x300000) != 0) {
      puVar23[9] = 0;
      puVar23[10] = 0;
      *puVar23 = 0;
      puVar23[7] = 0;
      puVar23[8] = 0;
      puVar23[5] = 0;
      puVar23[6] = 0;
      puVar23[3] = 0;
      puVar23[4] = 0;
      puVar23[1] = 0;
      puVar23[2] = 0;
      if ((*(byte *)(param_1 + 0x12) >> 5 & 1) != 0) {
        puVar23[0x14] = 0;
        puVar23[0x15] = 0;
        puVar23[0xb] = 0;
        puVar23[0x12] = 0;
        puVar23[0x13] = 0;
        puVar23[0x10] = 0;
        puVar23[0x11] = 0;
        puVar23[0xe] = 0;
        puVar23[0xf] = 0;
        puVar23[0xc] = 0;
        puVar23[0xd] = 0;
        if ((~*puVar47 & 0x300000) == 0) {
          puVar23[0x1f] = 0;
          puVar23[0x20] = 0;
          puVar23[0x16] = 0;
          puVar23[0x1d] = 0;
          puVar23[0x1e] = 0;
          puVar23[0x1b] = 0;
          puVar23[0x1c] = 0;
          puVar23[0x19] = 0;
          puVar23[0x1a] = 0;
          puVar23[0x17] = 0;
          puVar23[0x18] = 0;
        }
      }
    }
    puVar2 = (undefined8 *)(param_4 + (ulong)(uint)((int)uVar10 + iVar12));
    *(uint *)(param_1 + 0x14) =
         *(uint *)(param_1 + 0x14) & 0xffc00000 |
         *(uint *)(param_1 + 0x14) & 0xfffff | uVar22 << 0x14;
    if (uVar22 == 1) {
      lVar35 = 0;
    }
    else {
      lVar35 = 0;
      puVar39 = puVar23;
      puVar41 = puVar2;
      do {
        uVar33 = *puVar41;
        lVar35 = lVar35 + 2;
        uVar27 = puVar41[2];
        puVar39[1] = puVar41[1];
        puVar39[2] = uVar27;
        *puVar39 = uVar33;
        uVar33 = puVar41[3];
        uVar27 = puVar41[4];
        uVar44 = puVar41[6];
        puVar39[5] = puVar41[5];
        puVar39[6] = uVar44;
        puVar39[3] = uVar33;
        puVar39[4] = uVar27;
        uVar33 = puVar41[7];
        uVar27 = puVar41[8];
        uVar44 = puVar41[10];
        puVar39[9] = puVar41[9];
        puVar39[10] = uVar44;
        puVar39[7] = uVar33;
        puVar39[8] = uVar27;
        uVar33 = puVar41[0xe];
        uVar27 = puVar41[0xf];
        uVar44 = puVar41[0x11];
        puVar39[0x10] = puVar41[0x10];
        puVar39[0x11] = uVar44;
        puVar39[0xe] = uVar33;
        puVar39[0xf] = uVar27;
        uVar27 = puVar41[0xd];
        uVar33 = puVar41[0xc];
        puVar39[0xb] = puVar41[0xb];
        puVar39[0xc] = uVar33;
        puVar39[0xd] = uVar27;
        uVar33 = puVar41[0x12];
        uVar27 = puVar41[0x13];
        puVar1 = puVar41 + 0x14;
        uVar44 = puVar41[0x15];
        puVar41 = puVar41 + 0x16;
        puVar39[0x14] = *puVar1;
        puVar39[0x15] = uVar44;
        puVar39[0x12] = uVar33;
        puVar39[0x13] = uVar27;
        puVar39 = puVar39 + 0x16;
      } while ((ulong)uVar22 - ((ulong)uVar22 & 1) != lVar35);
    }
    if ((uVar34 >> 0x18 & 1) != 0) {
      puVar2 = puVar2 + lVar35 * 0xb;
      uVar33 = *puVar2;
      uVar27 = puVar2[2];
      puVar23 = puVar23 + lVar35 * 0xb;
      puVar23[1] = puVar2[1];
      puVar23[2] = uVar27;
      *puVar23 = uVar33;
      uVar33 = puVar2[3];
      uVar27 = puVar2[4];
      uVar44 = puVar2[6];
      puVar23[5] = puVar2[5];
      puVar23[6] = uVar44;
      puVar23[3] = uVar33;
      puVar23[4] = uVar27;
      uVar33 = puVar2[7];
      uVar27 = puVar2[8];
      uVar44 = puVar2[10];
      puVar23[9] = puVar2[9];
      puVar23[10] = uVar44;
      puVar23[7] = uVar33;
      puVar23[8] = uVar27;
    }
  }
  if (iVar45 != 0) {
    uVar31 = *puVar47;
    *(undefined8 *)
     (*plVar50 +
     ((ulong)(uVar31 >> 4) & 0x1c) + ((ulong)(uVar31 >> 8) & 0xc) +
     ((ulong)(uVar31 >> 0xc) & 1) * 0xc +
     (((ulong)(uVar31 << 4) & 0x30) + ((ulong)uVar31 & 0x30) | (ulong)(uVar31 >> 6) & 8) +
     (((ulong)(uVar31 >> 0xd) & 3) + ((ulong)(uVar31 >> 2) & 3)) * 0x14) =
         *(undefined8 *)(param_4 + (uVar9 & 0xffffffff));
  }
  if ((uVar34 >> 0x14 & 1) != 0) {
    uVar34 = *puVar47;
    puVar23 = (undefined8 *)(param_4 + (uVar49 & 0xffffffff));
    puVar2 = (undefined8 *)
             (*plVar50 +
             (long)(int)((uVar34 >> 4 & 0x1c) + (uVar34 >> 8 & 0xc) + (uVar34 >> 0xc & 8) +
                         (uVar34 >> 0xc & 1) * 0xc + (uVar34 >> 0x10 & 1) * 0x1c +
                         (uVar34 >> 0xc & 0x10) * (uVar34 >> 6 & 7) +
                         ((uVar34 & 3) * 0x10 + (uVar34 & 0x30) | uVar34 >> 6 & 8) +
                        ((uVar34 >> 0xd & 3) + (uVar34 >> 2 & 3)) * 0x14));
    uVar33 = puVar23[3];
    uVar27 = puVar23[4];
    uVar44 = puVar23[6];
    puVar2[5] = puVar23[5];
    puVar2[6] = uVar44;
    puVar2[3] = uVar33;
    puVar2[4] = uVar27;
    uVar33 = puVar23[7];
    uVar27 = puVar23[8];
    uVar44 = puVar23[10];
    puVar2[9] = puVar23[9];
    puVar2[10] = uVar44;
    puVar2[7] = uVar33;
    puVar2[8] = uVar27;
    uVar44 = puVar23[0xd];
    uVar33 = puVar23[0xb];
    uVar27 = puVar23[0xc];
    *(undefined4 *)(puVar2 + 0xe) = *(undefined4 *)(puVar23 + 0xe);
    puVar2[0xc] = uVar27;
    puVar2[0xd] = uVar44;
    puVar2[0xb] = uVar33;
    uVar33 = *puVar23;
    uVar27 = puVar23[2];
    puVar2[1] = puVar23[1];
    puVar2[2] = uVar27;
    *puVar2 = uVar33;
  }
LAB_0023baa8:
  FUN_0023c054(param_1,param_3,param_6,uVar25);
  FUN_0023c230(param_1,param_2,param_3);
  FUN_0023c380(param_1,param_3);
  return;
}


