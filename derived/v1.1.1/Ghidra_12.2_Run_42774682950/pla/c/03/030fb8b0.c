/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030fb8b0; name: FUN_030fb8b0
 */


void FUN_030fb8b0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  undefined *puVar8;
  bool bVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  void *pvVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  void *pvVar17;
  undefined1 uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined2 *puVar25;
  undefined2 *puVar26;
  int iVar27;
  undefined4 uVar28;
  long lVar29;
  undefined8 *puVar30;
  uint uVar31;
  undefined8 uVar32;
  undefined8 local_90;
  uint local_84;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  *param_1 = &PTR_LAB_042b56f8;
  param_1[1] = 0xffffffff;
  uVar32 = NEON_fmov(0x41200000,4);
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x19] = uVar32;
  param_1[0x1a] = uVar32;
  param_1[0x1b] = 0x3d4ccccd3d4ccccd;
  param_1[0x1d] = 0x3f3333333a83126f;
  param_1[0x1e] = 0x3fc000003e99999a;
  param_1[0x21] = 0x42c8000000000001;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  pcVar2 = (char *)((long)param_1 + 0x15dc);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1c] = 0x3e4ccccd3e4ccccd;
  param_1[0x22] = 0;
  param_1[0x23] = 0x8000000000000000;
  param_1[0x24] = 0;
  param_1[0x36] = param_1 + 0x38;
  *(undefined4 *)(param_1 + 0x2b) = param_4;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x25] = 0x8000000000000000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = param_2;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x8000000000000000;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x8000000000000000;
  param_1[0x30] = 0;
  param_1[0x31] = 0x8000000000000000;
  *(undefined4 *)((long)param_1 + 0x1bc) = 0x80000008;
  param_1[0x2b8] = 0;
  param_1[0x2b9] = 0x8000000000000000;
  *(undefined4 *)((long)param_1 + 0x15d4) = 0;
  *(undefined4 *)(param_1 + 699) = *(undefined4 *)(param_3 + 3);
  *pcVar2 = *(int *)(param_3 + 7) != 0;
  *(undefined1 *)((long)param_1 + 0x15dd) = *(undefined1 *)((long)param_3 + 0x9b);
  *(undefined1 *)((long)param_1 + 0x15de) = *(undefined1 *)((long)param_3 + 0x99);
  *(undefined1 *)((long)param_1 + 0x15df) = *(undefined1 *)((long)param_3 + 0x9c);
  *(undefined2 *)(param_1 + 700) = 0xffff;
  plVar3 = param_1 + 0x2c4;
  *(undefined4 *)((long)param_1 + 0x15e4) = 0;
  param_1[0x2bd] = 0;
  param_1[0x2c4] = 0;
  param_1[0x2c5] = 0;
  param_1[0x2c6] = 0x8000000000000000;
  param_1[0x2c7] = 0;
  param_1[0x2c8] = 0x8000000000000000;
  param_1[0x2c9] = 0;
  param_1[0x2ca] = 0x8000000000000000;
  param_1[0x2cc] = 0;
  *(undefined1 *)(param_1 + 0x2cd) = 0;
  param_1[0x2d2] = 0;
  param_1[0x2d3] = 0x8000000000000000;
  param_1[0x2ce] = 0;
  param_1[0x2cf] = 0;
  param_1[0x2d5] = 0;
  param_1[0x2d6] = 0x8000000000000000;
  param_1[0x2d9] = 0x8000000000000000;
  plVar12 = param_1 + 0x2db;
  plVar4 = param_1 + 0x2ce;
  param_1[0x2d7] = 0;
  param_1[0x2d8] = 0;
  param_1[0x2db] = 0;
  puVar10 = (undefined4 *)FUN_032cf5b0(0x310);
  puVar10[0xd] = 0xffffff;
  puVar10[0x19] = 0xffffff;
  puVar10[0x25] = 0xffffff;
  puVar10[0x31] = 0xffffff;
  puVar10[0x3d] = 0xffffff;
  puVar10[0x49] = 0xffffff;
  puVar10[0x55] = 0xffffff;
  puVar10[0x61] = 0xffffff;
  puVar10[0x6d] = 0xffffff;
  puVar10[0x79] = 0xffffff;
  puVar10[0x85] = 0xffffff;
  puVar10[0x91] = 0xffffff;
  puVar10[0x9d] = 0xffffff;
  puVar10[0xa9] = 0xffffff;
  puVar10[0xb5] = 0xffffff;
  puVar10[0xc1] = 0xffffff;
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined8 *)(puVar10 + 2) = 0;
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      FUN_032cf640(puVar10,0x310);
      break;
    }
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar9) {
      *plVar12 = (long)puVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  param_1[0x2da] = param_1[0x2db];
  param_1[0x2dc] = 0;
  param_1[0x2dd] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_3 + 0x15);
  param_1[0x1f] =
       CONCAT44(*(undefined4 *)((long)param_3 + 0xa4),*(undefined4 *)((long)param_3 + 0xa4));
  param_1[0x2c0] = 0;
  param_1[0x2c1] = 0;
  param_1[0x2c2] = 0;
  param_1[0x2c3] = 0;
  if ((*(char *)((long)param_1 + 0x15de) == '\0') && (*(char *)((long)param_3 + 0x9a) == '\0')) {
    bVar9 = *(char *)((long)param_1 + 0x15df) != '\0';
  }
  else {
    bVar9 = true;
  }
  uVar32 = param_3[1];
  param_1[0xd] = *param_3;
  param_1[0xe] = uVar32;
  uVar32 = param_3[3];
  param_1[0xf] = param_3[2];
  param_1[0x10] = uVar32;
  if (*pcVar2 != '\0') {
    uVar32 = param_3[5];
    param_1[0x13] = param_3[4];
    param_1[0x14] = uVar32;
    uVar32 = param_3[7];
    param_1[0x11] = param_3[6];
    param_1[0x12] = uVar32;
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)((long)param_3 + 0x44);
  uVar32 = param_3[0xc];
  param_1[8] = param_3[0xb];
  param_1[9] = uVar32;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_3 + 8);
  uVar32 = param_3[10];
  param_1[0xb] = param_3[9];
  param_1[0xc] = uVar32;
  *(undefined1 *)(param_1 + 0x2be) = *(undefined1 *)(param_3 + 0x13);
  *(undefined2 *)(param_1 + 700) = *(undefined2 *)(param_3 + 0x11);
  uVar32 = *(undefined8 *)((long)param_3 + 0x8c);
  *(undefined4 *)((long)param_1 + 0x15ec) = *(undefined4 *)((long)param_3 + 0x94);
  *(undefined8 *)((long)param_1 + 0x15e4) = uVar32;
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)((long)param_3 + 0x9d);
  uVar18 = 0;
  if (*(char *)((long)param_3 + 0x9a) != '\0') {
    uVar18 = *(undefined1 *)((long)param_3 + 0x9e);
  }
  *(undefined1 *)((long)param_1 + 0x101) = uVar18;
  *(undefined1 *)((long)param_1 + 0x102) = *(undefined1 *)((long)param_3 + 0x9f);
  uVar18 = 0;
  if (*(char *)((long)param_3 + 0x9a) != '\0') {
    uVar18 = *(undefined1 *)(param_3 + 0x14);
  }
  *(undefined1 *)((long)param_1 + 0x103) = uVar18;
  *(undefined1 *)((long)param_1 + 0x104) = *(undefined1 *)((long)param_3 + 0xa1);
  if (bVar9) {
    puVar11 = (undefined8 *)FUN_032cf5b0(0x1ae0);
    memset(puVar11,0,0x1ae0);
    *(undefined8 *)((long)puVar11 + 0x1d) = 0;
    *puVar11 = &PTR_LAB_04363a18;
    *(undefined4 *)((long)puVar11 + 0x2c) = 0x80000000;
    *(undefined4 *)(puVar11 + 3) = 1;
    *(undefined1 *)((long)puVar11 + 0x1c) = 1;
    *(undefined8 *)((long)puVar11 + 0x24) = 0;
    puVar11[8] = 0;
    *(undefined4 *)(puVar11 + 0x30b) = 0;
    *(undefined4 *)(puVar11 + 0x30f) = 0;
    *(undefined4 *)(puVar11 + 0x329) = 0;
    puVar11[0x332] = 0;
    *(undefined4 *)(puVar11 + 0x334) = 0;
    puVar11[0x355] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0x8000000000000000;
    puVar11[0x30e] = puVar11 + 0x310;
    *(undefined4 *)((long)puVar11 + 0x187c) = 0x80000010;
    puVar11[0x328] = puVar11 + 0x32a;
    puVar11[0x333] = puVar11 + 0x335;
    *(undefined4 *)((long)puVar11 + 0x194c) = 0x80000010;
    *(undefined4 *)((long)puVar11 + 0x19a4) = 0x80000020;
    puVar11[1] = 0;
    puVar11[2] = 0;
    lVar29 = *plVar3;
    *plVar3 = (long)puVar11;
    if (lVar29 != 0) {
      FUN_030feb84(lVar29);
      FUN_032cf640(lVar29,0x1ae0);
      puVar11 = (undefined8 *)*plVar3;
    }
    *(undefined1 *)((long)puVar11 + 0x1c) = 0;
    *(undefined1 *)(param_1[0x2c4] + 0x1d) = 1;
    *(undefined8 *)(param_1[0x2c4] + 0x1990) = 0;
    *(undefined8 *)(param_1[0x2c4] + 0x1ab0) = 0;
    puVar8 = PTR_PTR_0434a080;
    uVar31 = *(uint *)((long)param_1 + 0x1654);
    uVar19 = *(uint *)(param_1 + 699);
    if ((int)(uVar31 & 0x3fffffff) < (int)uVar19) {
      uVar32 = param_1[0x2c9];
      uVar28 = *(undefined4 *)(param_1 + 0x2ca);
      if (0x3fffffff < (int)uVar19) {
        FUN_032bd0a8(uVar19);
        uVar31 = *(uint *)((long)param_1 + 0x1654);
      }
      uVar31 = (uVar31 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar31) {
        uVar31 = 0x3fffffff;
      }
      uVar5 = uVar19;
      if ((int)uVar19 <= (int)uVar31) {
        uVar5 = uVar31;
      }
      uVar32 = FUN_032bd1d4(puVar8,uVar5,4,uVar32,uVar28,(uint *)((long)param_1 + 0x1654));
      param_1[0x2c9] = uVar32;
    }
    if (*(uint *)(param_1 + 0x2ca) != uVar19) {
      *(uint *)(param_1 + 0x2ca) = uVar19;
    }
    *(undefined1 *)(param_1 + 0x2cb) = 0;
    plVar12 = (long *)FUN_032cf5b0(0x18);
    *plVar12 = 0;
    plVar12[1] = 0;
    lVar29 = tpidr_el0;
    lVar21 = *(long *)(lVar29 + 0x38d490);
    if (lVar21 == 0) {
      lVar21 = FUN_0333d16c(0,1);
      *(long *)(lVar29 + 0x38d490) = lVar21;
    }
    plVar13 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
    pvVar14 = (void *)(**(code **)(*plVar13 + 0x10))(plVar13,0x100,0);
    if (*plVar12 == 0) {
      pvVar17 = (void *)0x0;
    }
    else {
      pvVar17 = (void *)(*plVar12 + (long)plVar12);
    }
    memcpy(pvVar14,pvVar17,(long)(int)plVar12[1] << 7);
    if ((int)*(uint *)((long)plVar12 + 0xc) < 0) {
      uVar31 = *(uint *)((long)plVar12 + 0xc) & 0x7fffffff;
      if ((int)uVar31 <= (int)*(uint *)(plVar12 + 1)) {
        uVar31 = *(uint *)(plVar12 + 1);
      }
      if (*plVar12 == 0) {
        lVar21 = 0;
      }
      else {
        lVar21 = *plVar12 + (long)plVar12;
      }
      lVar22 = *(long *)(lVar29 + 0x38d490);
      if (lVar22 == 0) {
        lVar22 = FUN_0333d16c(0,1);
        *(long *)(lVar29 + 0x38d490) = lVar22;
      }
      plVar13 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar21,(ulong)uVar31 << 7);
    }
    if (pvVar14 == (void *)0x0) {
      lVar21 = 0;
    }
    else {
      lVar21 = (long)pvVar14 - (long)plVar12;
    }
    *plVar12 = lVar21;
    *(undefined4 *)(plVar12 + 1) = 2;
    *(undefined4 *)((long)plVar12 + 0xc) = 0x80000002;
    puVar11 = (undefined8 *)(lVar21 + (long)plVar12);
    puVar11[1] = 0x7f7fffee7f7fffee;
    *puVar11 = 0x7f7fffee7f7fffee;
    puVar11[3] = 0xff7fffeeff7fffee;
    puVar11[2] = 0xff7fffeeff7fffee;
    *(undefined2 *)(puVar11 + 0xe) = 0;
    puVar11[5] = 0x7f7fffee7f7fffee;
    puVar11[4] = 0x7f7fffee7f7fffee;
    puVar11[7] = 0xff7fffeeff7fffee;
    puVar11[6] = 0xff7fffeeff7fffee;
    puVar11[9] = 0x7f7fffee7f7fffee;
    puVar11[8] = 0x7f7fffee7f7fffee;
    puVar11[0xb] = 0xff7fffeeff7fffee;
    puVar11[10] = 0xff7fffeeff7fffee;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
    lVar21 = *plVar12;
    *(undefined8 *)((long)plVar12 + lVar21 + 0xe0) = 0;
    *(undefined8 *)((long)plVar12 + lVar21 + 0xe8) = 0;
    *(undefined2 *)((long)plVar12 + lVar21 + 0xf0) = 0;
    *(undefined8 *)((long)plVar12 + lVar21 + 0x88) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar12 + lVar21 + 0x80) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar12 + lVar21 + 0x98) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar12 + lVar21 + 0x90) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar12 + lVar21 + 0xa8) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar12 + lVar21 + 0xa0) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar12 + lVar21 + 0xb8) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar12 + lVar21 + 0xb0) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar12 + lVar21 + 200) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar12 + lVar21 + 0xc0) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar12 + lVar21 + 0xd8) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar12 + lVar21 + 0xd0) = 0xff7fffeeff7fffee;
    *(undefined1 *)(plVar12 + 2) = 1;
    plVar13 = (long *)param_1[0x2cc];
    param_1[0x2cc] = plVar12;
    if (plVar13 != (long *)0x0) {
      if ((int)*(uint *)((long)plVar13 + 0xc) < 0) {
        uVar31 = *(uint *)((long)plVar13 + 0xc) & 0x7fffffff;
        if ((int)uVar31 <= (int)*(uint *)(plVar13 + 1)) {
          uVar31 = *(uint *)(plVar13 + 1);
        }
        if (*plVar13 == 0) {
          lVar21 = 0;
        }
        else {
          lVar21 = *plVar13 + (long)plVar13;
        }
        lVar22 = *(long *)(lVar29 + 0x38d490);
        if (lVar22 == 0) {
          lVar22 = FUN_0333d16c(0,1);
          *(long *)(lVar29 + 0x38d490) = lVar22;
        }
        plVar12 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
        (**(code **)(*plVar12 + 0x18))(plVar12,lVar21,(ulong)uVar31 << 7);
      }
      FUN_032cf640(plVar13,0x18);
      plVar12 = (long *)param_1[0x2cc];
    }
    uVar19 = *(uint *)((long)plVar12 + 0xc) & 0x7fffffff;
    uVar31 = *(int *)(param_1 + 699) + 0x40;
    if ((int)uVar19 <= (int)*(uint *)(plVar12 + 1)) {
      uVar19 = *(uint *)(plVar12 + 1);
    }
    if ((int)uVar19 < (int)uVar31) {
      uVar19 = *(int *)(param_1 + 699) + 0x3f;
      uVar19 = uVar19 | (int)uVar19 >> 0x10;
      uVar19 = uVar19 | (int)uVar19 >> 8;
      uVar19 = uVar19 | (int)uVar19 >> 4;
      uVar19 = uVar19 | (int)uVar19 >> 2;
      uVar19 = (uVar19 | (int)uVar19 >> 1) + 1;
      if ((int)uVar19 < (int)uVar31) {
        local_70 = 0;
        local_80 = (undefined8 *)0x0;
        local_78 = PTR_DAT_04372528;
        FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                     "Capacity reservation overflow",&local_80);
      }
      lVar21 = *(long *)(lVar29 + 0x38d490);
      if (lVar21 == 0) {
        lVar21 = FUN_0333d16c(0,1);
        *(long *)(lVar29 + 0x38d490) = lVar21;
      }
      plVar13 = *(long **)(*(long *)(lVar21 + 8) + 0x58);
      pvVar14 = (void *)(**(code **)(*plVar13 + 0x10))
                                  (plVar13,-(ulong)(uVar19 >> 0x1f) & 0xffffff8000000000 |
                                           (ulong)uVar19 << 7,0);
      if (*plVar12 == 0) {
        pvVar17 = (void *)0x0;
      }
      else {
        pvVar17 = (void *)(*plVar12 + (long)plVar12);
      }
      memcpy(pvVar14,pvVar17,(long)(int)plVar12[1] << 7);
      if ((int)*(uint *)((long)plVar12 + 0xc) < 0) {
        uVar31 = *(uint *)((long)plVar12 + 0xc) & 0x7fffffff;
        if ((int)uVar31 <= (int)*(uint *)(plVar12 + 1)) {
          uVar31 = *(uint *)(plVar12 + 1);
        }
        if (*plVar12 == 0) {
          lVar21 = 0;
        }
        else {
          lVar21 = *plVar12 + (long)plVar12;
        }
        lVar22 = *(long *)(lVar29 + 0x38d490);
        if (lVar22 == 0) {
          lVar22 = FUN_0333d16c(0,1);
          *(long *)(lVar29 + 0x38d490) = lVar22;
        }
        plVar13 = *(long **)(*(long *)(lVar22 + 8) + 0x58);
        (**(code **)(*plVar13 + 0x18))(plVar13,lVar21,(ulong)uVar31 << 7);
      }
      if (pvVar14 == (void *)0x0) {
        lVar29 = 0;
      }
      else {
        lVar29 = (long)pvVar14 - (long)plVar12;
      }
      *plVar12 = lVar29;
      *(uint *)((long)plVar12 + 0xc) = uVar19 | 0x80000000;
      uVar31 = *(int *)(param_1 + 699) + 0x40;
    }
    lVar29 = *plVar3;
    uVar19 = *(uint *)(lVar29 + 0x3c);
    if ((int)uVar31 <= (int)(uVar19 & 0x3fffffff)) goto LAB_030fbf9c;
    puVar11 = *(undefined8 **)(lVar29 + 0x30);
    uVar5 = *(uint *)(lVar29 + 0x38);
    if (0x3fffffff < (int)uVar31) {
      FUN_032bd0a8(uVar31);
      uVar19 = *(uint *)(lVar29 + 0x3c);
    }
    uVar20 = (uVar19 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar20) {
      uVar20 = 0x3fffffff;
    }
    if ((int)uVar31 <= (int)uVar20) {
      uVar31 = uVar20;
    }
    FUN_032bd100(uVar31,0x20,uVar19,&local_80);
    uVar31 = *(uint *)(lVar29 + 0x3c);
    puVar16 = (undefined8 *)(**(code **)(*(long *)puVar8 + 0x10))(puVar8,local_80,&local_80);
    if (0 < (int)uVar5) {
      uVar32 = puVar11[3];
      puVar16[1] = puVar11[1];
      puVar16[3] = uVar32;
      uVar32 = *puVar11;
      puVar16[2] = puVar11[2];
      *puVar16 = uVar32;
      if (uVar5 != 1) {
        lVar21 = (ulong)uVar5 - 1;
        puVar30 = puVar16;
        puVar15 = puVar11;
        do {
          uVar32 = puVar15[7];
          lVar21 = lVar21 + -1;
          puVar30[5] = puVar15[5];
          puVar30[7] = uVar32;
          uVar32 = puVar15[4];
          puVar30[6] = puVar15[6];
          puVar30[4] = uVar32;
          puVar30 = puVar30 + 4;
          puVar15 = puVar15 + 4;
        } while (lVar21 != 0);
      }
    }
    if (-1 < (int)uVar31) {
      (**(code **)(*(long *)puVar8 + 0x18))(puVar8,puVar11,((ulong)uVar31 & 0x3fffffff) << 5);
    }
    if (local_80 < (undefined8 *)0x7ffffffe0) {
      uVar28 = (undefined4)((ulong)local_80 >> 5);
    }
    else {
      uVar28 = 0x3fffffff;
    }
    *(undefined4 *)(lVar29 + 0x3c) = uVar28;
    *(undefined8 **)(lVar29 + 0x30) = puVar16;
    cVar7 = *(char *)((long)param_3 + 0x9a);
  }
  else {
LAB_030fbf9c:
    cVar7 = *(char *)((long)param_3 + 0x9a);
  }
  if (cVar7 != '\0') {
    puVar11 = (undefined8 *)FUN_032cf5b0(0x50);
    *puVar11 = 0;
    puVar11[1] = 0x8000000000000000;
    puVar11[8] = 0;
    puVar11[9] = 0;
    *(undefined1 *)((long)puVar11 + 0x44) = 0;
    puVar11[2] = 0;
    puVar11[3] = 0x8000000000000000;
    puVar11[4] = 0;
    puVar11[5] = 0x8000000000000000;
    puVar11[6] = 0;
    puVar11[7] = 0x8000000000000000;
    *(undefined4 *)(puVar11 + 8) = 0x3f800000;
    lVar29 = *plVar4;
    *plVar4 = (long)puVar11;
    if (lVar29 != 0) {
      FUN_030fecd4(lVar29);
      FUN_032cf640(lVar29,0x50);
      puVar11 = (undefined8 *)*plVar4;
    }
    FUN_030ff428(puVar11,param_1);
  }
  puVar8 = PTR_PTR_0434a080;
  if (param_3[0xe] == 0) {
    local_90 = 0x8000000000000000;
    uVar32 = param_3[0xd];
    puVar11 = (undefined8 *)FUN_032bd1d4(PTR_PTR_0434a080,1,8,0,0,(long)&local_90 + 4);
    puVar11[(int)(uint)local_90] = uVar32;
    local_90 = CONCAT44(local_90._4_4_,1);
    uVar32 = FUN_032cf5b0(0x30);
    uVar23 = local_90;
    uVar31 = (uint)local_90;
    local_80 = (undefined8 *)0x0;
    local_78 = (undefined *)0x8000000000000000;
    local_84 = (uint)local_90;
    if ((int)(uint)local_90 < 1) {
      local_80 = (undefined8 *)0x0;
      local_78._0_4_ = 0;
      local_78._4_4_ = 0x80000000;
    }
    else {
      local_80 = (undefined8 *)FUN_032cf190(puVar8,8,&local_84);
      local_78._0_4_ = uVar31;
      local_78._4_4_ = local_84;
      uVar19 = uVar31 & 3;
      puVar16 = local_80;
      puVar30 = puVar11;
      if (2 < uVar31 - 1) {
        iVar27 = uVar19 - uVar31;
        puVar15 = local_80;
        do {
          *puVar15 = *puVar30;
          puVar15[1] = puVar30[1];
          puVar15[2] = puVar30[2];
          puVar1 = puVar30 + 3;
          puVar16 = puVar15 + 4;
          puVar30 = puVar30 + 4;
          iVar27 = iVar27 + 4;
          puVar15[3] = *puVar1;
          puVar15 = puVar16;
        } while (iVar27 != 0);
      }
      if ((uVar23 & 3) != 0) {
        do {
          uVar19 = uVar19 - 1;
          *puVar16 = *puVar30;
          puVar16 = puVar16 + 1;
          puVar30 = puVar30 + 1;
        } while (uVar19 != 0);
      }
    }
    FUN_03100af4(uVar32,&local_80);
    uVar31 = local_78._4_4_;
    uVar23 = (ulong)local_78._4_4_;
    local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
    if ((-1 < (int)uVar31) && (local_80 != (undefined8 *)0x0)) {
      (**(code **)(*(long *)puVar8 + 0x18))(puVar8,local_80,(uVar23 & 0x3fffffff) << 3);
    }
    lVar29 = param_1[3];
    param_1[3] = uVar32;
    if (lVar29 != 0) {
      FUN_032d647c();
    }
    uVar23 = local_90;
    uVar24 = (ulong)local_90._4_4_;
    local_90 = (ulong)local_90._4_4_ << 0x20;
    if ((-1 < (long)uVar23) && (puVar11 != (undefined8 *)0x0)) {
      (**(code **)(*(long *)puVar8 + 0x18))(puVar8,puVar11,(uVar24 & 0x3fffffff) << 3);
    }
  }
  else if (param_1[3] != param_3[0xe]) {
    FUN_032d645c();
    lVar29 = param_1[3];
    param_1[3] = param_3[0xe];
    if (lVar29 != 0) {
      FUN_032d647c();
    }
  }
  iVar27 = *(int *)(param_1[3] + 0x20);
  if (iVar27 < 1) {
    uVar28 = 0xffffffff;
  }
  else {
    lVar29 = 0;
    uVar28 = 0xffffffff;
    do {
      if (*(long *)(*(long *)(*(long *)(param_1[3] + 0x18) + lVar29 * 8) + 0xa0) == param_3[0xd]) {
        uVar28 = (undefined4)lVar29;
        break;
      }
      lVar29 = lVar29 + 1;
    } while (iVar27 != lVar29);
  }
  *(undefined4 *)(param_1 + 4) = uVar28;
  uVar32 = param_3[0x10];
  param_1[5] = param_3[0xf];
  param_1[6] = uVar32;
  cVar7 = *(char *)((long)param_3 + 0xac);
  *(char *)(param_1 + 0x2d1) = cVar7;
  puVar8 = PTR_PTR_0434a080;
  uVar18 = 0;
  if (cVar7 != '\0') {
    uVar31 = *(uint *)((long)param_1 + 0x169c);
    uVar19 = *(uint *)(param_1 + 699);
    if ((int)(uVar31 & 0x3fffffff) < (int)uVar19) {
      uVar32 = param_1[0x2d2];
      uVar28 = *(undefined4 *)(param_1 + 0x2d3);
      if (0x3fffffff < (int)uVar19) {
        FUN_032bd0a8(uVar19);
        uVar31 = *(uint *)((long)param_1 + 0x169c);
      }
      uVar31 = (uVar31 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar31) {
        uVar31 = 0x3fffffff;
      }
      uVar5 = uVar19;
      if ((int)uVar19 <= (int)uVar31) {
        uVar5 = uVar31;
      }
      uVar32 = FUN_032bd1d4(puVar8,uVar5,1,uVar32,uVar28,(uint *)((long)param_1 + 0x169c));
      param_1[0x2d2] = uVar32;
    }
    uVar31 = *(uint *)(param_1 + 0x2d3);
    if ((int)uVar31 < (int)uVar19) {
      *(uint *)(param_1 + 0x2d3) = uVar19;
      memset((void *)(param_1[0x2d2] + (long)(int)uVar31),0,(ulong)(uVar19 + ~uVar31) + 1);
LAB_030fc288:
      lVar29 = param_1[0x2ce];
    }
    else {
      if ((int)uVar31 <= (int)uVar19) goto LAB_030fc288;
      *(uint *)(param_1 + 0x2d3) = uVar19;
      lVar29 = param_1[0x2ce];
    }
    if (lVar29 != 0) {
      uVar31 = *(uint *)((long)param_1 + 0x16cc);
      uVar19 = *(uint *)(param_1 + 699);
      if ((int)(uVar31 & 0x3fffffff) < (int)uVar19) {
        uVar32 = param_1[0x2d8];
        uVar28 = *(undefined4 *)(param_1 + 0x2d9);
        if (0x3fffffff < (int)uVar19) {
          FUN_032bd0a8(uVar19);
          uVar31 = *(uint *)((long)param_1 + 0x16cc);
        }
        uVar31 = (uVar31 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar31) {
          uVar31 = 0x3fffffff;
        }
        uVar5 = uVar19;
        if ((int)uVar19 <= (int)uVar31) {
          uVar5 = uVar31;
        }
        uVar32 = FUN_032bd1d4(puVar8,uVar5,4,uVar32,uVar28,(uint *)((long)param_1 + 0x16cc));
        param_1[0x2d8] = uVar32;
      }
      if ((*(int *)(param_1 + 0x2d9) < (int)uVar19) || ((int)uVar19 < *(int *)(param_1 + 0x2d9))) {
        *(uint *)(param_1 + 0x2d9) = uVar19;
      }
    }
    uVar31 = *(uint *)((long)param_1 + 0x16b4);
    uVar19 = *(uint *)(param_1 + 699);
    if ((int)(uVar31 & 0x3fffffff) < (int)uVar19) {
      uVar32 = param_1[0x2d5];
      uVar28 = *(undefined4 *)(param_1 + 0x2d6);
      if (0x3fffffff < (int)uVar19) {
        FUN_032bd0a8(uVar19);
        uVar31 = *(uint *)((long)param_1 + 0x16b4);
      }
      uVar31 = (uVar31 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar31) {
        uVar31 = 0x3fffffff;
      }
      uVar5 = uVar19;
      if ((int)uVar19 <= (int)uVar31) {
        uVar5 = uVar31;
      }
      uVar32 = FUN_032bd1d4(puVar8,uVar5,4,uVar32,uVar28,(uint *)((long)param_1 + 0x16b4));
      param_1[0x2d5] = uVar32;
    }
    if (*(uint *)(param_1 + 0x2d6) != uVar19) {
      *(uint *)(param_1 + 0x2d6) = uVar19;
    }
    uVar18 = 1;
  }
  *(undefined1 *)(param_1 + 0x2d4) = uVar18;
  iVar27 = *(int *)(param_1 + 699);
  if ((int)(*(uint *)((long)param_1 + 0x11c) & 0x3fffffff) < iVar27) {
    uVar32 = FUN_030fee48(PTR_PTR_0434a080,iVar27,param_1[0x22],*(undefined4 *)(param_1 + 0x23),
                          (long)param_1 + 0x11c);
    param_1[0x22] = uVar32;
  }
  if (*(int *)(param_1 + 0x23) != iVar27) {
    *(int *)(param_1 + 0x23) = iVar27;
  }
  param_1[0x2d0] = param_5;
  uVar32 = FUN_032cf5b0(0x78);
  FUN_030ffa08(uVar32,param_1,param_1 + 0x22);
  lVar29 = param_1[0x2cf];
  param_1[0x2cf] = uVar32;
  if (lVar29 != 0) {
    FUN_030ffcdc(lVar29);
    FUN_032cf640(lVar29,0x78);
  }
  uVar18 = 0x3a;
  if (*pcVar2 != '\0') {
    uVar18 = 0;
  }
  iVar27 = *(int *)(param_1 + 699);
  if ((int)(*(uint *)((long)param_1 + 0x15cc) & 0x3fffffff) < iVar27) {
    uVar32 = FUN_030feed0(PTR_PTR_0434a080,iVar27,param_1[0x2b8],*(undefined4 *)(param_1 + 0x2b9),
                          (long)param_1 + 0x15cc);
    param_1[0x2b8] = uVar32;
  }
  iVar6 = *(int *)(param_1 + 0x2b9);
  if (iVar6 < iVar27) {
    puVar25 = (undefined2 *)(param_1[0x2b8] + (long)iVar6 * 0x14);
    *(int *)(param_1 + 0x2b9) = iVar27;
    uVar31 = iVar27 - iVar6 & 1;
    if (iVar27 != iVar6 + 1) {
      iVar27 = (iVar6 + uVar31) - iVar27;
      puVar26 = puVar25;
      do {
        puVar25 = puVar26 + 0x14;
        *puVar26 = 0x7f7f;
        iVar27 = iVar27 + 2;
        *(undefined1 *)(puVar26 + 1) = 0x7f;
        *(undefined1 *)((long)puVar26 + 3) = uVar18;
        puVar26[10] = 0x7f7f;
        *(undefined1 *)(puVar26 + 0xb) = 0x7f;
        *(undefined1 *)((long)puVar26 + 0x17) = uVar18;
        *(undefined8 *)(puVar26 + 6) = 0;
        *(undefined8 *)(puVar26 + 2) = 0;
        *(undefined8 *)(puVar26 + 0x10) = 0;
        *(undefined8 *)(puVar26 + 0xc) = 0;
        puVar26 = puVar25;
      } while (iVar27 != 0);
    }
    if (uVar31 != 0) {
      *puVar25 = 0x7f7f;
      *(undefined1 *)(puVar25 + 1) = 0x7f;
      *(undefined1 *)((long)puVar25 + 3) = uVar18;
      *(undefined8 *)(puVar25 + 4) = 0;
      *(undefined4 *)(puVar25 + 8) = 0;
      *(undefined4 *)(puVar25 + 2) = 0;
      cVar7 = *pcVar2;
      goto joined_r0x030fc454;
    }
  }
  else if (iVar27 < iVar6) {
    *(int *)(param_1 + 0x2b9) = iVar27;
  }
  cVar7 = *pcVar2;
joined_r0x030fc454:
  if (cVar7 != '\0') {
    iVar27 = *(int *)(param_1 + 699);
    if ((int)(*(uint *)((long)param_1 + 300) & 0x3fffffff) < iVar27) {
      uVar32 = FUN_030ff064(PTR_PTR_0434a080,iVar27,param_1[0x24],*(undefined4 *)(param_1 + 0x25),
                            (long)param_1 + 300);
      param_1[0x24] = uVar32;
    }
    if ((*(int *)(param_1 + 0x25) < iVar27) || (iVar27 < *(int *)(param_1 + 0x25))) {
      *(int *)(param_1 + 0x25) = iVar27;
    }
  }
  param_1[0x18] = param_3[0x16];
  return;
}


