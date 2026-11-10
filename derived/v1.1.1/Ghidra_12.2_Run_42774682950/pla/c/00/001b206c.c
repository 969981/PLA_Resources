/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001b206c; name: FUN_001b206c
 */


/* WARNING: Removing unreachable block (ram,0x001b22e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b206c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  long *plVar10;
  bool bVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong *puVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long *plVar22;
  uint *puVar23;
  long *plVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long *local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  long *local_68;
  
  puVar12 = (undefined8 *)FUN_032cf5b0(0x200);
  *(undefined2 *)puVar12 = 1;
  *(undefined2 *)((long)puVar12 + 0xc) = 0;
  *(undefined8 *)((long)puVar12 + 4) = 0x10001003f7fff58;
  *(undefined1 *)((long)puVar12 + 0xe) = 0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar2 = PTR_DAT_04372560 + 0x10;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar12[7] = puVar2;
  puVar12[8] = 0xffffffff;
  puVar12[9] = 1;
  *(undefined4 *)(puVar12 + 0xc) = 0;
  puVar12[10] = 0;
  puVar12[0xb] = 0;
  puVar12[0xd] = 0;
  puVar12[0xe] = 0;
  puVar12[0x10] = 0;
  puVar12[0x11] = 0x8000000000000000;
  puVar12[0x12] = 0;
  puVar12[0x13] = 0x8000000000000000;
  puVar12[0x14] = 0;
  puVar12[0x15] = 0x8000000000000000;
  puVar2 = PTR_DAT_04372568;
  *(undefined4 *)(puVar12 + 0xf) = 0;
  do {
    iVar8 = *(int *)puVar2;
    cVar9 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar11) {
      *(int *)puVar2 = iVar8 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  *(int *)(puVar12 + 0x3f) = iVar8;
  FUN_001c108c();
  puVar2 = PTR_DAT_04372370;
  uVar28 = *(undefined8 *)(PTR_DAT_04372370 + 0x238);
  uVar27 = *(undefined8 *)(PTR_DAT_04372370 + 0x230);
  uVar18 = *(undefined8 *)(PTR_DAT_04372370 + 0x248);
  lVar26 = *(long *)(PTR_DAT_04372370 + 0x240);
  uVar31 = *(undefined8 *)(PTR_DAT_04372370 + 0x228);
  uVar30 = *(undefined8 *)(PTR_DAT_04372370 + 0x220);
  *(undefined4 *)(puVar12 + 0x13) = 0;
  *(undefined4 *)(puVar12 + 0x11) = 0;
  puVar12[0x33] = uVar28;
  puVar12[0x32] = uVar27;
  puVar12[0x35] = 0;
  puVar12[0x34] = 0;
  *(undefined4 *)(puVar12 + 0x15) = 0;
  puVar12[0x23] = 0;
  puVar12[0x22] = 0;
  *(undefined2 *)((long)puVar12 + 0x1fc) = 0;
  puVar12[0x17] = lVar26 << 0x20;
  puVar12[0x16] = 0;
  puVar12[0x19] = lVar26 << 0x20;
  puVar12[0x18] = 0;
  uVar27 = CONCAT44(-(float)((ulong)lVar26 >> 0x20),-(float)lVar26);
  uVar28 = CONCAT44(-(float)((ulong)uVar18 >> 0x20),-(float)uVar18);
  puVar12[0x1b] = uVar18;
  puVar12[0x1a] = lVar26;
  puVar12[0x1d] = uVar28;
  puVar12[0x1c] = uVar27;
  *(undefined1 *)((long)puVar12 + 0x1fe) = 0;
  puVar12[0x1f] = uVar18;
  puVar12[0x1e] = lVar26;
  puVar12[0x21] = uVar28;
  puVar12[0x20] = uVar27;
  *(undefined4 *)((long)puVar12 + 500) = 0;
  uVar27 = *(undefined8 *)(puVar2 + 0x208);
  uVar18 = *(undefined8 *)(puVar2 + 0x200);
  uVar29 = *(undefined8 *)(puVar2 + 0x218);
  uVar28 = *(undefined8 *)(puVar2 + 0x210);
  *(undefined4 *)(puVar12 + 0x3e) = 0xffffffff;
  puVar12[0x24] = 0;
  puVar12[0x26] = 0;
  puVar12[0x28] = 0;
  puVar12[0x2a] = 0;
  puVar12[0x31] = uVar31;
  puVar12[0x30] = uVar30;
  puVar12[0x3b] = uVar31;
  puVar12[0x3a] = uVar30;
  puVar12[0x3c] = 0;
  puVar12[0x3d] = 0;
  puVar12[0x2d] = uVar27;
  puVar12[0x2c] = uVar18;
  puVar12[0x2f] = uVar29;
  puVar12[0x2e] = uVar28;
  puVar12[0x37] = uVar27;
  puVar12[0x36] = uVar18;
  puVar12[0x39] = uVar29;
  puVar12[0x38] = uVar28;
  puVar12[0x25] = 0;
  puVar12[0x27] = 0;
  puVar12[0x29] = 0;
  puVar12[0x2b] = 0;
  *param_1 = (long)puVar12;
  uVar18 = *param_2;
  *(undefined8 *)((long)puVar12 + 7) = *(undefined8 *)((long)param_2 + 7);
  *puVar12 = uVar18;
  uVar18 = param_2[2];
  puVar12[3] = param_2[3];
  puVar12[2] = uVar18;
  uVar18 = param_2[4];
  puVar12[5] = param_2[5];
  puVar12[4] = uVar18;
  uVar18 = param_2[0x22];
  puVar12[0x23] = param_2[0x23];
  puVar12[0x22] = uVar18;
  uVar18 = param_2[0x24];
  puVar12[0x25] = param_2[0x25];
  puVar12[0x24] = uVar18;
  uVar18 = param_2[0x26];
  puVar12[0x27] = param_2[0x27];
  puVar12[0x26] = uVar18;
  uVar18 = param_2[0x28];
  puVar12[0x29] = param_2[0x29];
  puVar12[0x28] = uVar18;
  uVar18 = param_2[0x2a];
  puVar12[0x2b] = param_2[0x2b];
  puVar12[0x2a] = uVar18;
  uVar18 = param_2[0x2c];
  puVar12[0x2d] = param_2[0x2d];
  puVar12[0x2c] = uVar18;
  uVar18 = param_2[0x2e];
  puVar12[0x2f] = param_2[0x2f];
  puVar12[0x2e] = uVar18;
  uVar18 = param_2[0x30];
  puVar12[0x31] = param_2[0x31];
  puVar12[0x30] = uVar18;
  uVar18 = param_2[0x32];
  puVar12[0x33] = param_2[0x33];
  puVar12[0x32] = uVar18;
  uVar18 = param_2[0x34];
  puVar12[0x35] = param_2[0x35];
  puVar12[0x34] = uVar18;
  puVar12[0x3c] = param_2[0x3c];
  puVar12[0x3d] = param_2[0x3d];
  *(undefined4 *)(puVar12 + 0x3e) = *(undefined4 *)(param_2 + 0x3e);
  *(undefined4 *)((long)puVar12 + 500) = *(undefined4 *)((long)param_2 + 500);
  *(undefined1 *)((long)puVar12 + 0x1fc) = *(undefined1 *)((long)param_2 + 0x1fc);
  *(undefined1 *)((long)puVar12 + 0x1fe) = *(undefined1 *)((long)param_2 + 0x1fe);
  puVar12[6] = 0;
  uVar6 = *(uint *)(param_2 + 0x11);
  uVar17 = *(uint *)((long)puVar12 + 0x8c);
  plVar22 = *(long **)PTR_PTR_04372408;
  if ((int)uVar6 <= (int)(uVar17 & 0x3fffffff)) goto LAB_001b23b0;
  lVar26 = puVar12[0x10];
  uVar7 = *(uint *)(puVar12 + 0x11);
  if (0x3fffffff < (int)uVar6) {
    FUN_032bd0a8(uVar6);
    uVar17 = *(uint *)((long)puVar12 + 0x8c);
  }
  uVar15 = (uVar17 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar15) {
    uVar15 = 0x3fffffff;
  }
  uVar5 = uVar6;
  if ((int)uVar6 <= (int)uVar15) {
    uVar5 = uVar15;
  }
  FUN_032bd100(uVar5,0x40,uVar17,&local_80);
  uVar17 = *(uint *)((long)puVar12 + 0x8c);
  lVar13 = (**(code **)(*plVar22 + 0x10))(plVar22,local_80,&local_80);
  if (0 < (int)uVar7) {
    if (uVar7 == 1) {
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      puVar25 = (undefined8 *)(lVar13 + 0x50);
      puVar20 = (undefined8 *)(lVar26 + 0x50);
      do {
        puVar25[-8] = puVar20[-8];
        lVar19 = lVar19 + 2;
        uVar18 = puVar20[-7];
        uVar27 = puVar20[-6];
        uVar28 = puVar20[-4];
        puVar25[-5] = puVar20[-5];
        puVar25[-4] = uVar28;
        puVar25[-7] = uVar18;
        puVar25[-6] = uVar27;
        *puVar25 = *puVar20;
        uVar18 = puVar20[1];
        uVar27 = puVar20[2];
        puVar1 = puVar20 + 3;
        uVar28 = puVar20[4];
        puVar20 = puVar20 + 0x10;
        puVar25[3] = *puVar1;
        puVar25[4] = uVar28;
        puVar25[1] = uVar18;
        puVar25[2] = uVar27;
        puVar25 = puVar25 + 0x10;
      } while ((ulong)uVar7 - ((ulong)uVar7 & 1) != lVar19);
      if ((uVar7 & 1) == 0) goto LAB_001b2374;
    }
    lVar3 = lVar13 + lVar19 * 0x40;
    lVar19 = lVar26 + lVar19 * 0x40;
    uVar18 = *(undefined8 *)(lVar19 + 0x28);
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar19 + 0x18);
    *(undefined8 *)(lVar3 + 0x28) = uVar18;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar19 + 0x10);
    uVar18 = *(undefined8 *)(lVar19 + 0x20);
    *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(lVar19 + 0x30);
    *(undefined8 *)(lVar3 + 0x20) = uVar18;
  }
LAB_001b2374:
  if (-1 < (int)uVar17) {
    (**(code **)(*plVar22 + 0x18))(plVar22,lVar26,((ulong)uVar17 & 0x3fffffff) << 6);
  }
  if (local_80 < 0xfffffffc0) {
    uVar16 = (undefined4)(local_80 >> 6);
  }
  else {
    uVar16 = 0x3fffffff;
  }
  *(undefined4 *)((long)puVar12 + 0x8c) = uVar16;
  puVar12[0x10] = lVar13;
LAB_001b23b0:
  iVar8 = *(int *)(puVar12 + 0x11);
  if (iVar8 < (int)uVar6) {
    lVar13 = puVar12[0x10];
    *(uint *)(puVar12 + 0x11) = uVar6;
    lVar26 = lVar13 + (long)iVar8 * 0x40;
    uVar21 = ((long)(int)uVar6 * 0x40 + (long)iVar8 * -0x40) - 0x40;
    uVar17 = ((uint)(uVar21 >> 6) & 0x3ffffff) + 1;
    if ((uVar17 & 3) != 0) {
      lVar19 = -((ulong)uVar17 & 3);
      do {
        *(undefined4 *)(lVar26 + 0x2c) = 0;
        bVar11 = lVar19 != -1;
        lVar19 = lVar19 + 1;
        *(undefined4 *)(lVar26 + 0x34) = 0xffffffff;
        lVar26 = lVar26 + 0x40;
      } while (bVar11);
    }
    if (0xbf < uVar21) {
      do {
        *(undefined4 *)(lVar26 + 0x2c) = 0;
        *(undefined4 *)(lVar26 + 0x34) = 0xffffffff;
        *(undefined4 *)(lVar26 + 0x6c) = 0;
        *(undefined4 *)(lVar26 + 0x74) = 0xffffffff;
        *(undefined4 *)(lVar26 + 0xac) = 0;
        *(undefined4 *)(lVar26 + 0xb4) = 0xffffffff;
        *(undefined4 *)(lVar26 + 0xec) = 0;
        *(undefined4 *)(lVar26 + 0xf4) = 0xffffffff;
        lVar26 = lVar26 + 0x100;
      } while (lVar13 + (long)(int)uVar6 * 0x40 != lVar26);
    }
  }
  else if ((int)uVar6 < iVar8) {
    *(uint *)(puVar12 + 0x11) = uVar6;
  }
  if (*(int *)(param_2 + 0x11) < 1) {
    lVar26 = *param_1;
  }
  else {
    lVar26 = *param_1;
    lVar13 = 0;
    lVar19 = 0;
    do {
      lVar3 = param_2[0x10] + lVar13;
      lVar4 = *(long *)(lVar26 + 0x80) + lVar13;
      lVar13 = lVar13 + 0x40;
      uVar18 = *(undefined8 *)(lVar3 + 0x10);
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
      *(undefined8 *)(lVar4 + 0x10) = uVar18;
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
      uVar18 = *(undefined8 *)(lVar3 + 0x20);
      *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar3 + 0x30);
      *(undefined8 *)(lVar4 + 0x20) = uVar18;
      lVar19 = lVar19 + 1;
    } while (lVar19 < *(int *)(param_2 + 0x11));
  }
  uVar6 = *(uint *)(param_2 + 0x13);
  puVar23 = (uint *)(lVar26 + 0x9c);
  uVar17 = *puVar23;
  if ((int)(uVar17 & 0x3fffffff) < (int)uVar6) {
    uVar18 = *(undefined8 *)(lVar26 + 0x90);
    uVar16 = *(undefined4 *)(lVar26 + 0x98);
    if (0x3fffffff < (int)uVar6) {
      FUN_032bd0a8(uVar6);
      uVar17 = *puVar23;
    }
    uVar17 = (uVar17 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar17) {
      uVar17 = 0x3fffffff;
    }
    uVar7 = uVar6;
    if ((int)uVar6 <= (int)uVar17) {
      uVar7 = uVar17;
    }
    uVar18 = FUN_032bd1d4(plVar22,uVar7,0x10,uVar18,uVar16,puVar23);
    *(undefined8 *)(lVar26 + 0x90) = uVar18;
    uVar17 = *(uint *)(lVar26 + 0x98);
  }
  else {
    uVar17 = *(uint *)(lVar26 + 0x98);
  }
  if (uVar17 == uVar6) {
    iVar8 = *(int *)(param_2 + 0x13);
  }
  else {
    *(uint *)(lVar26 + 0x98) = uVar6;
    iVar8 = *(int *)(param_2 + 0x13);
  }
  if (0 < iVar8) {
    lVar13 = 0;
    do {
      lVar19 = lVar13 * 0x10;
      lVar13 = lVar13 + 1;
      puVar12 = (undefined8 *)(param_2[0x12] + lVar19);
      uVar18 = *puVar12;
      puVar25 = (undefined8 *)(*(long *)(lVar26 + 0x90) + lVar19);
      puVar25[1] = puVar12[1];
      *puVar25 = uVar18;
    } while (lVar13 < *(int *)(param_2 + 0x13));
  }
  local_80 = 0;
  uStack_78 = 0xffffffff00000000;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_032c3100(&local_80,plVar22);
    plVar10 = (long *)param_2[0xb];
    if ((long *)param_2[0xb] != (long *)0x0) {
      do {
        plVar24 = plVar10;
        plVar10 = (long *)*plVar24;
      } while ((long *)*plVar24 != (long *)0x0);
      puVar12 = *(undefined8 **)(lVar26 + 0x50);
      do {
        if ((puVar12 == (undefined8 *)0x0) || (puVar12[0x140] == 0)) {
          puVar12 = (undefined8 *)(**(code **)(*plVar22 + 0x10))(plVar22,0xa20,0);
          if (puVar12 != (undefined8 *)0x0) {
            puVar12[0x122] = puVar12 + 300;
            puVar12[300] = puVar12 + 0x136;
            puVar12[0x118] = puVar12 + 0x122;
            puVar12[0x10e] = puVar12 + 0x118;
            puVar12[0x104] = puVar12 + 0x10e;
            puVar12[0xfa] = puVar12 + 0x104;
            puVar12[0xf0] = puVar12 + 0xfa;
            puVar12[0xe6] = puVar12 + 0xf0;
            puVar12[0xdc] = puVar12 + 0xe6;
            puVar12[0xd2] = puVar12 + 0xdc;
            puVar12[200] = puVar12 + 0xd2;
            puVar12[0xbe] = puVar12 + 200;
            puVar12[0xb4] = puVar12 + 0xbe;
            puVar12[0xaa] = puVar12 + 0xb4;
            puVar12[0xa0] = puVar12 + 0xaa;
            puVar12[0x96] = puVar12 + 0xa0;
            puVar12[0x8c] = puVar12 + 0x96;
            puVar12[0x82] = puVar12 + 0x8c;
            puVar12[0x78] = puVar12 + 0x82;
            puVar12[0x6e] = puVar12 + 0x78;
            puVar12[100] = puVar12 + 0x6e;
            puVar12[0x5a] = puVar12 + 100;
            puVar12[0x50] = puVar12 + 0x5a;
            puVar12[0x46] = puVar12 + 0x50;
            puVar12[0x3c] = puVar12 + 0x46;
            puVar12[0x32] = puVar12 + 0x3c;
            puVar12[0x28] = puVar12 + 0x32;
            puVar12[0x136] = 0;
            puVar12[0x1e] = puVar12 + 0x28;
            puVar12[0x14] = puVar12 + 0x1e;
            puVar12[10] = puVar12 + 0x14;
            *puVar12 = puVar12 + 10;
            *(undefined4 *)(puVar12 + 0x143) = 0;
            puVar12[0x140] = puVar12;
            puVar12[0x141] = 0;
            puVar12[0x142] = *(undefined8 *)(lVar26 + 0x50);
            *(undefined8 **)(lVar26 + 0x50) = puVar12;
            if (puVar12[0x142] != 0) {
              *(undefined8 **)(puVar12[0x142] + 0xa08) = puVar12;
            }
            goto LAB_001b2700;
          }
          _DAT_00000028 = plVar24[5];
          local_68 = (long *)0x0;
          _DAT_00000018 = plVar24[3];
          _DAT_00000010 = plVar24[2];
          _DAT_00000020 = plVar24[4];
          _DAT_00000030 = plVar24[6];
        }
        else {
LAB_001b2700:
          local_68 = (long *)puVar12[0x140];
          puVar12[0x140] = *local_68;
          local_68[8] = (long)puVar12;
          *(int *)(puVar12 + 0x143) = *(int *)(puVar12 + 0x143) + 1;
          lVar13 = plVar24[5];
          local_68[3] = plVar24[3];
          local_68[5] = lVar13;
          local_68[2] = plVar24[2];
          lVar13 = plVar24[4];
          local_68[6] = plVar24[6];
          local_68[4] = lVar13;
          if (local_68 != (long *)0x0) {
            local_68[1] = 0;
            *local_68 = *(long *)(lVar26 + 0x58);
            if (*(long *)(lVar26 + 0x58) != 0) {
              *(long **)(*(long *)(lVar26 + 0x58) + 8) = local_68;
            }
            *(long **)(lVar26 + 0x58) = local_68;
            *(int *)(lVar26 + 0x60) = *(int *)(lVar26 + 0x60) + 1;
          }
        }
        local_90 = plVar24;
        FUN_032c2c3c(&local_80,plVar22,&local_90,&local_68);
        plVar24 = (long *)plVar24[1];
        if (plVar24 == (long *)0x0) break;
        lVar26 = *param_1;
        puVar12 = *(undefined8 **)(lVar26 + 0x50);
      } while( true );
    }
  }
  if (*(int *)(param_2 + 0xf) != 0) {
    local_90 = (long *)0x0;
    uStack_88 = 0xffffffff00000000;
    FUN_032c3100(&local_90,plVar22);
    plVar10 = (long *)param_2[0xe];
    if ((long *)param_2[0xe] != (long *)0x0) {
      do {
        plVar24 = plVar10;
        plVar10 = (long *)*plVar24;
      } while ((long *)*plVar24 != (long *)0x0);
      lVar26 = *param_1;
      puVar12 = *(undefined8 **)(lVar26 + 0x68);
      if (puVar12 != (undefined8 *)0x0) goto LAB_001b2854;
      do {
        puVar12 = (undefined8 *)(**(code **)(*plVar22 + 0x10))(plVar22,0x1020,0);
        if (puVar12 == (undefined8 *)0x0) {
          puVar25 = (undefined8 *)0x0;
          goto LAB_001b29bc;
        }
        puVar12[0x1d0] = puVar12 + 0x1e0;
        puVar12[0x1e0] = puVar12 + 0x1f0;
        puVar12[0x1c0] = puVar12 + 0x1d0;
        puVar12[0x1b0] = puVar12 + 0x1c0;
        puVar12[0x1a0] = puVar12 + 0x1b0;
        puVar12[400] = puVar12 + 0x1a0;
        puVar12[0x180] = puVar12 + 400;
        puVar12[0x170] = puVar12 + 0x180;
        puVar12[0x160] = puVar12 + 0x170;
        puVar12[0x150] = puVar12 + 0x160;
        puVar12[0x140] = puVar12 + 0x150;
        puVar12[0x130] = puVar12 + 0x140;
        puVar12[0x120] = puVar12 + 0x130;
        puVar12[0x110] = puVar12 + 0x120;
        puVar12[0x100] = puVar12 + 0x110;
        puVar12[0xf0] = puVar12 + 0x100;
        puVar12[0xe0] = puVar12 + 0xf0;
        puVar12[0xd0] = puVar12 + 0xe0;
        puVar12[0xc0] = puVar12 + 0xd0;
        puVar12[0xb0] = puVar12 + 0xc0;
        puVar12[0xa0] = puVar12 + 0xb0;
        puVar12[0x90] = puVar12 + 0xa0;
        puVar12[0x80] = puVar12 + 0x90;
        puVar12[0x70] = puVar12 + 0x80;
        puVar12[0x60] = puVar12 + 0x70;
        puVar12[0x50] = puVar12 + 0x60;
        puVar12[0x40] = puVar12 + 0x50;
        puVar12[0x30] = puVar12 + 0x40;
        puVar12[0x20] = puVar12 + 0x30;
        puVar12[0x1f0] = 0;
        puVar12[0x10] = puVar12 + 0x20;
        *puVar12 = puVar12 + 0x10;
        *(undefined4 *)(puVar12 + 0x203) = 0;
        puVar12[0x200] = puVar12;
        puVar12[0x201] = 0;
        puVar12[0x202] = *(undefined8 *)(lVar26 + 0x68);
        *(undefined8 **)(lVar26 + 0x68) = puVar12;
        if (puVar12[0x202] != 0) {
          *(undefined8 **)(puVar12[0x202] + 0x1008) = puVar12;
        }
        do {
          puVar25 = (undefined8 *)puVar12[0x200];
          puVar12[0x200] = *puVar25;
          puVar25[0xe] = puVar12;
          *(int *)(puVar12 + 0x203) = *(int *)(puVar12 + 0x203) + 1;
LAB_001b29bc:
          lVar13 = plVar24[3];
          puVar25[2] = plVar24[2];
          puVar25[3] = lVar13;
          lVar13 = plVar24[4];
          lVar19 = plVar24[5];
          lVar3 = plVar24[7];
          puVar25[6] = plVar24[6];
          puVar25[7] = lVar3;
          puVar25[4] = lVar13;
          puVar25[5] = lVar19;
          lVar13 = plVar24[9];
          lVar19 = plVar24[10];
          lVar3 = plVar24[0xc];
          puVar25[0xb] = plVar24[0xb];
          puVar25[0xc] = lVar3;
          puVar25[9] = lVar13;
          puVar25[10] = lVar19;
          puVar25[8] = plVar24[8];
          if (puVar25 != (undefined8 *)0x0) {
            puVar25[1] = 0;
            *puVar25 = *(undefined8 *)(lVar26 + 0x70);
            if (*(long *)(lVar26 + 0x70) != 0) {
              *(undefined8 **)(*(long *)(lVar26 + 0x70) + 8) = puVar25;
            }
            *(undefined8 **)(lVar26 + 0x70) = puVar25;
            *(int *)(lVar26 + 0x78) = *(int *)(lVar26 + 0x78) + 1;
          }
          local_68 = (long *)puVar25[2];
          local_70 = (undefined8 *)0x0;
          puVar12 = (undefined8 *)FUN_032c2dcc(&local_80,&local_68,&local_70);
          puVar25[2] = *puVar12;
          local_68 = (long *)puVar25[3];
          local_70 = (undefined8 *)0x0;
          puVar12 = (undefined8 *)FUN_032c2dcc(&local_80,&local_68,&local_70);
          puVar25[3] = *puVar12;
          local_68 = (long *)puVar25[4];
          local_70 = (undefined8 *)0x0;
          puVar12 = (undefined8 *)FUN_032c2dcc(&local_80,&local_68,&local_70);
          puVar25[4] = *puVar12;
          local_68 = (long *)puVar25[5];
          local_70 = (undefined8 *)0x0;
          puVar14 = (ulong *)FUN_032c2dcc(&local_90,&local_68,&local_70);
          uVar21 = *puVar14;
          if ((uVar21 & 0xfffffffffffffffc) == 0) {
            local_70 = puVar25;
            local_68 = plVar24;
            FUN_032c2c3c(&local_90,plVar22,&local_68,&local_70);
          }
          else {
            local_68 = (long *)puVar25[5];
            FUN_032c2f40(&local_90,&local_68);
            puVar25[5] = uVar21;
            *(undefined8 **)((uVar21 & 0xfffffffffffffffc) + (uVar21 & 3) * 8 + 0x28) = puVar25;
          }
          local_68 = (long *)puVar25[6];
          local_70 = (undefined8 *)0x0;
          puVar14 = (ulong *)FUN_032c2dcc(&local_90,&local_68,&local_70);
          uVar21 = *puVar14;
          if ((uVar21 & 0xfffffffffffffffc) == 0) {
            local_68 = (long *)((long)plVar24 + 1);
            local_70 = (undefined8 *)((long)puVar25 + 1);
            FUN_032c2c3c(&local_90,plVar22,&local_68,&local_70);
          }
          else {
            local_68 = (long *)puVar25[6];
            FUN_032c2f40(&local_90,&local_68);
            puVar25[6] = uVar21;
            *(long *)((uVar21 & 0xfffffffffffffffc) + (uVar21 & 3) * 8 + 0x28) = (long)puVar25 + 1;
          }
          local_68 = (long *)puVar25[7];
          local_70 = (undefined8 *)0x0;
          puVar14 = (ulong *)FUN_032c2dcc(&local_90,&local_68,&local_70);
          uVar21 = *puVar14;
          if ((uVar21 & 0xfffffffffffffffc) == 0) {
            local_68 = (long *)((long)plVar24 + 2);
            local_70 = (undefined8 *)((long)puVar25 + 2);
            FUN_032c2c3c(&local_90,plVar22,&local_68,&local_70);
            plVar24 = (long *)plVar24[1];
          }
          else {
            local_68 = (long *)puVar25[7];
            FUN_032c2f40(&local_90,&local_68);
            puVar25[7] = uVar21;
            *(long *)((uVar21 & 0xfffffffffffffffc) + (uVar21 & 3) * 8 + 0x28) = (long)puVar25 + 2;
            plVar24 = (long *)plVar24[1];
          }
          if (plVar24 == (long *)0x0) goto LAB_001b2ba4;
          lVar26 = *param_1;
          puVar12 = *(undefined8 **)(lVar26 + 0x68);
          if (puVar12 == (undefined8 *)0x0) break;
LAB_001b2854:
        } while (puVar12[0x200] != 0);
      } while( true );
    }
LAB_001b2ba4:
    FUN_032c3060(&local_90,plVar22);
    FUN_032c2c38(&local_90);
  }
  FUN_032c3060(&local_80,plVar22);
  FUN_032c2c38(&local_80);
  return;
}


