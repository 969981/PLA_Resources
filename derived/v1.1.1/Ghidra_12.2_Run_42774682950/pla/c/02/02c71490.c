/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c71490; name: FUN_02c71490
 */


void FUN_02c71490(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  short *psVar3;
  ushort uVar4;
  int iVar5;
  char cVar6;
  uint *puVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  ushort *puVar13;
  short sVar14;
  int *piVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  ushort *puVar19;
  uint uVar20;
  
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
          if (cVar6 == '\0') goto LAB_02c714f4;
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
LAB_02c714f4:
  if (*(char *)(param_1 + 0x18) != '\0') {
    piVar15 = *(int **)(param_1 + 0x10);
    iVar17 = *piVar15;
    lVar9 = 0;
    do {
      lVar10 = lVar9 + 4;
      iVar5 = iVar17 * 0x41c64e6d + 0x6073;
      iVar17 = iVar5 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar15 + lVar9 + 8) =
           *(ushort *)((long)piVar15 + lVar9 + 8) ^ (ushort)((uint)iVar5 >> 0x10);
      *(ushort *)((long)piVar15 + lVar9 + 10) =
           *(ushort *)((long)piVar15 + lVar9 + 10) ^ (ushort)((uint)iVar17 >> 0x10);
      lVar9 = lVar10;
    } while (lVar10 != 0x160);
    puVar13 = *(ushort **)(param_1 + 8);
    if (puVar13 != (ushort *)0x0) {
      iVar17 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar5 = iVar17 * 0x41c64e6d + 0x6073;
      *puVar13 = *puVar13 ^ (ushort)((uint)iVar17 >> 0x10);
      iVar17 = iVar5 * 0x41c64e6d + 0x6073;
      puVar13[1] = puVar13[1] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar17 * 0x41c64e6d + 0x6073;
      puVar13[2] = puVar13[2] ^ (ushort)((uint)iVar17 >> 0x10);
      iVar17 = iVar5 * 0x41c64e6d + 0x6073;
      puVar13[3] = puVar13[3] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar17 * 0x41c64e6d + 0x6073;
      puVar13[4] = puVar13[4] ^ (ushort)((uint)iVar17 >> 0x10);
      iVar17 = iVar5 * 0x41c64e6d + 0x6073;
      puVar13[5] = puVar13[5] ^ (ushort)((uint)iVar5 >> 0x10);
      puVar13[6] = puVar13[6] ^ (ushort)((uint)iVar17 >> 0x10);
      puVar13[7] = puVar13[7] ^ (ushort)((uint)(iVar17 * 0x41c64e6d + 0x6073) >> 0x10);
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
    puVar11 = puVar11 + (ulong)(byte)(&DAT_03a84e5a)[((ulong)(*puVar11 >> 0xd) & 0x1f) * 4] * 0x16 +
                        2;
    cVar6 = *(char *)(param_2 + 0x7c);
  }
  else {
    puVar11 = (uint *)&DAT_04407a40;
    cVar6 = *(char *)(param_2 + 0x7c);
  }
  if (cVar6 == '\0') {
    cVar6 = *(char *)(param_1 + 0x18);
  }
  else {
    uVar12 = (uint)*(ushort *)(param_2 + 0x78);
    if (*(ushort *)(param_2 + 0x78) == 0) {
      iVar17 = 0;
    }
    else {
      puVar13 = *(ushort **)(param_2 + 0x58);
      iVar17 = 0;
      do {
        while( true ) {
          uVar4 = (ushort)*puVar11;
          *puVar13 = uVar4;
          if (uVar4 == 0x10) break;
          if (uVar4 == 0) goto LAB_02c718ec;
          puVar13 = puVar13 + 1;
          puVar11 = (uint *)((long)puVar11 + 2);
          iVar17 = iVar17 + 1;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_02c718d8;
        }
        uVar4 = *(ushort *)((long)puVar11 + 2);
        uVar1 = uVar4 + 2;
        bVar8 = uVar12 < uVar1;
        uVar12 = uVar12 - uVar1;
        if (bVar8 || uVar12 == 0) {
          *puVar13 = 0;
          goto LAB_02c718ec;
        }
        uVar18 = uVar4 + 1;
        uVar20 = uVar18 & 7;
        puVar19 = puVar13 + 1;
        *puVar19 = uVar4;
        puVar7 = (uint *)((long)puVar11 + 2);
        puVar16 = puVar11;
        if (uVar20 != 0) {
          lVar9 = 0;
          do {
            lVar10 = lVar9;
            uVar18 = uVar18 - 1;
            uVar20 = uVar20 - 1;
            *(undefined2 *)((long)puVar13 + lVar10 + 4) =
                 *(undefined2 *)((long)puVar11 + lVar10 + 4);
            lVar9 = lVar10 + 2;
          } while (uVar20 != 0);
          puVar19 = (ushort *)((long)puVar13 + lVar10 + 4);
          puVar16 = (uint *)((long)puVar11 + lVar10 + 2);
          puVar7 = (uint *)((long)puVar16 + 2);
          puVar13 = puVar19;
        }
        puVar11 = puVar7;
        if (6 < uVar4) {
          puVar13 = puVar19;
          do {
            puVar13[1] = (ushort)puVar16[1];
            puVar13[2] = (ushort)puVar11[1];
            puVar13[3] = *(ushort *)((long)puVar11 + 6);
            puVar13[4] = (ushort)puVar11[2];
            puVar13[5] = *(ushort *)((long)puVar11 + 10);
            puVar13[6] = (ushort)puVar11[3];
            puVar16 = (uint *)((long)puVar11 + 0xe);
            puVar13[7] = *(ushort *)puVar16;
            puVar11 = puVar11 + 4;
            uVar18 = uVar18 - 8;
            puVar13 = puVar13 + 8;
            *puVar13 = (ushort)*puVar11;
          } while (uVar18 != 0);
        }
        iVar17 = uVar1 + iVar17;
      } while (uVar12 != 0);
LAB_02c718d8:
      if (iVar17 != 0) {
        iVar17 = iVar17 + -1;
        puVar13[-1] = 0;
      }
    }
LAB_02c718ec:
    *(short *)(param_2 + 0x7a) = (short)iVar17;
    cVar6 = *(char *)(param_1 + 0x18);
  }
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
      iVar17 = *piVar15;
      lVar9 = 0;
      do {
        lVar10 = lVar9 + 4;
        iVar5 = iVar17 * 0x41c64e6d + 0x6073;
        iVar17 = iVar5 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar15 + lVar9 + 8) =
             *(ushort *)((long)piVar15 + lVar9 + 8) ^ (ushort)((uint)iVar5 >> 0x10);
        *(ushort *)((long)piVar15 + lVar9 + 10) =
             *(ushort *)((long)piVar15 + lVar9 + 10) ^ (ushort)((uint)iVar17 >> 0x10);
        lVar9 = lVar10;
      } while (lVar10 != 0x160);
    }
    puVar13 = *(ushort **)(param_1 + 8);
    if ((puVar13 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
      iVar17 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar5 = iVar17 * 0x41c64e6d + 0x6073;
      *puVar13 = *puVar13 ^ (ushort)((uint)iVar17 >> 0x10);
      iVar17 = iVar5 * 0x41c64e6d + 0x6073;
      puVar13[1] = puVar13[1] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar17 * 0x41c64e6d + 0x6073;
      puVar13[2] = puVar13[2] ^ (ushort)((uint)iVar17 >> 0x10);
      iVar17 = iVar5 * 0x41c64e6d + 0x6073;
      puVar13[3] = puVar13[3] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar17 * 0x41c64e6d + 0x6073;
      puVar13[4] = puVar13[4] ^ (ushort)((uint)iVar17 >> 0x10);
      iVar17 = iVar5 * 0x41c64e6d + 0x6073;
      puVar13[5] = puVar13[5] ^ (ushort)((uint)iVar5 >> 0x10);
      puVar13[6] = puVar13[6] ^ (ushort)((uint)iVar17 >> 0x10);
      puVar13[7] = puVar13[7] ^ (ushort)((uint)(iVar17 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
  return;
}


