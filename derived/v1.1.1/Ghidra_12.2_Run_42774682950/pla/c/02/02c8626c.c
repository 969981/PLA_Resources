/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c8626c; name: FUN_02c8626c
 */


void FUN_02c8626c(long param_1,ushort *param_2)

{
  uint uVar1;
  long *plVar2;
  short *psVar3;
  ushort uVar4;
  int iVar5;
  char cVar6;
  ushort *puVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  ushort *puVar13;
  short sVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  
  lVar9 = nn::os::GetCurrentThread();
  plVar2 = (long *)(param_1 + 0x30);
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24));
        while (*plVar2 == 0) {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_02c862d0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_02c862d0:
  if (*(char *)(param_1 + 0x18) != '\0') {
    piVar15 = *(int **)(param_1 + 0x10);
    iVar16 = *piVar15;
    lVar9 = 0;
    do {
      lVar10 = lVar9 + 4;
      iVar5 = iVar16 * 0x41c64e6d + 0x6073;
      iVar16 = iVar5 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar15 + lVar9 + 8) =
           *(ushort *)((long)piVar15 + lVar9 + 8) ^ (ushort)((uint)iVar5 >> 0x10);
      *(ushort *)((long)piVar15 + lVar9 + 10) =
           *(ushort *)((long)piVar15 + lVar9 + 10) ^ (ushort)((uint)iVar16 >> 0x10);
      lVar9 = lVar10;
    } while (lVar10 != 0x160);
    puVar13 = *(ushort **)(param_1 + 8);
    if (puVar13 != (ushort *)0x0) {
      iVar16 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar5 = iVar16 * 0x41c64e6d + 0x6073;
      *puVar13 = *puVar13 ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar5 * 0x41c64e6d + 0x6073;
      puVar13[1] = puVar13[1] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar16 * 0x41c64e6d + 0x6073;
      puVar13[2] = puVar13[2] ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar5 * 0x41c64e6d + 0x6073;
      puVar13[3] = puVar13[3] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar16 * 0x41c64e6d + 0x6073;
      puVar13[4] = puVar13[4] ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar5 * 0x41c64e6d + 0x6073;
      puVar13[5] = puVar13[5] ^ (ushort)((uint)iVar5 >> 0x10);
      puVar13[6] = puVar13[6] ^ (ushort)((uint)iVar16 >> 0x10);
      puVar13[7] = puVar13[7] ^ (ushort)((uint)(iVar16 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    lVar10 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
    lVar9 = 0;
    sVar14 = 0;
    do {
      psVar3 = (short *)(lVar10 + 8 + lVar9);
      lVar9 = lVar9 + 8;
      sVar14 = psVar3[3] + psVar3[2] + psVar3[1] + *psVar3 + sVar14;
    } while (lVar9 != 0x160);
    if (*(short *)(lVar10 + 6) != sVar14) {
      *(ushort *)(lVar10 + 4) = *(ushort *)(lVar10 + 4) | 4;
    }
  }
  puVar11 = *(uint **)(param_1 + 0x10);
  if (((byte)puVar11[1] >> 2 & 1) == 0) {
    puVar11 = puVar11 + (ulong)(byte)(&DAT_03a84e59)[((ulong)(*puVar11 >> 0xd) & 0x1f) * 4] * 0x16 +
                        2;
  }
  else {
    puVar11 = (uint *)0x4407b58;
  }
  iVar16 = 0;
  uVar12 = 0xd;
  do {
    while( true ) {
      uVar4 = *param_2;
      *(ushort *)puVar11 = uVar4;
      if (uVar4 == 0x10) break;
      if (uVar4 == 0) goto LAB_02c8655c;
      puVar11 = (uint *)((long)puVar11 + 2);
      param_2 = param_2 + 1;
      iVar16 = iVar16 + 1;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) goto LAB_02c86554;
    }
    uVar4 = param_2[1];
    uVar1 = uVar4 + 2;
    bVar8 = uVar12 < uVar1;
    uVar12 = uVar12 - uVar1;
    if (bVar8 || uVar12 == 0) {
      *(undefined2 *)puVar11 = 0;
      cVar6 = *(char *)(param_1 + 0x18);
      goto joined_r0x02c866a8;
    }
    uVar17 = uVar4 + 1;
    uVar19 = uVar17 & 7;
    puVar18 = (uint *)((long)puVar11 + 2);
    *(ushort *)puVar18 = uVar4;
    puVar7 = param_2 + 1;
    puVar13 = param_2;
    if (uVar19 != 0) {
      lVar9 = 0;
      do {
        lVar10 = lVar9;
        uVar17 = uVar17 - 1;
        uVar19 = uVar19 - 1;
        *(undefined2 *)((long)puVar11 + lVar10 + 4) = *(undefined2 *)((long)param_2 + lVar10 + 4);
        lVar9 = lVar10 + 2;
      } while (uVar19 != 0);
      puVar18 = (uint *)((long)puVar11 + lVar10 + 4);
      puVar13 = (ushort *)((long)param_2 + lVar10 + 2);
      puVar7 = puVar13 + 1;
      puVar11 = puVar18;
    }
    param_2 = puVar7;
    if (6 < uVar4) {
      puVar11 = puVar18;
      do {
        *(ushort *)((long)puVar11 + 2) = puVar13[2];
        *(ushort *)(puVar11 + 1) = param_2[2];
        *(ushort *)((long)puVar11 + 6) = param_2[3];
        *(ushort *)(puVar11 + 2) = param_2[4];
        *(ushort *)((long)puVar11 + 10) = param_2[5];
        *(ushort *)(puVar11 + 3) = param_2[6];
        puVar13 = param_2 + 7;
        *(ushort *)((long)puVar11 + 0xe) = *puVar13;
        param_2 = param_2 + 8;
        uVar17 = uVar17 - 8;
        puVar11 = puVar11 + 4;
        *(ushort *)puVar11 = *param_2;
      } while (uVar17 != 0);
    }
    iVar16 = uVar1 + iVar16;
  } while (uVar12 != 0);
LAB_02c86554:
  if (iVar16 != 0) {
    *(undefined2 *)((long)puVar11 + -2) = 0;
  }
LAB_02c8655c:
  cVar6 = *(char *)(param_1 + 0x18);
joined_r0x02c866a8:
  if ((cVar6 == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 != 0) {
      lVar10 = 0;
      sVar14 = 0;
      do {
        psVar3 = (short *)(lVar9 + 8 + lVar10);
        lVar10 = lVar10 + 8;
        sVar14 = psVar3[3] + psVar3[2] + psVar3[1] + *psVar3 + sVar14;
      } while (lVar10 != 0x160);
      *(short *)(lVar9 + 6) = sVar14;
      piVar15 = *(int **)(param_1 + 0x10);
      iVar16 = *piVar15;
      lVar9 = 0;
      do {
        lVar10 = lVar9 + 4;
        iVar5 = iVar16 * 0x41c64e6d + 0x6073;
        iVar16 = iVar5 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar15 + lVar9 + 8) =
             *(ushort *)((long)piVar15 + lVar9 + 8) ^ (ushort)((uint)iVar5 >> 0x10);
        *(ushort *)((long)piVar15 + lVar9 + 10) =
             *(ushort *)((long)piVar15 + lVar9 + 10) ^ (ushort)((uint)iVar16 >> 0x10);
        lVar9 = lVar10;
      } while (lVar10 != 0x160);
    }
    puVar13 = *(ushort **)(param_1 + 8);
    if ((puVar13 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
      iVar16 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar5 = iVar16 * 0x41c64e6d + 0x6073;
      *puVar13 = *puVar13 ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar5 * 0x41c64e6d + 0x6073;
      puVar13[1] = puVar13[1] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar16 * 0x41c64e6d + 0x6073;
      puVar13[2] = puVar13[2] ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar5 * 0x41c64e6d + 0x6073;
      puVar13[3] = puVar13[3] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar16 * 0x41c64e6d + 0x6073;
      puVar13[4] = puVar13[4] ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar5 * 0x41c64e6d + 0x6073;
      puVar13[5] = puVar13[5] ^ (ushort)((uint)iVar5 >> 0x10);
      puVar13[6] = puVar13[6] ^ (ushort)((uint)iVar16 >> 0x10);
      puVar13[7] = puVar13[7] ^ (ushort)((uint)(iVar16 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
  return;
}


