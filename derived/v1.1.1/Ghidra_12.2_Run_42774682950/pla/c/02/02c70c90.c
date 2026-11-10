/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c70c90; name: FUN_02c70c90
 */


void FUN_02c70c90(long param_1,long param_2)

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
  int iVar10;
  uint *puVar11;
  ushort *puVar12;
  int *piVar13;
  uint uVar14;
  long lVar15;
  short sVar16;
  uint *puVar17;
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
          if (cVar6 == '\0') goto LAB_02c70cf4;
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
LAB_02c70cf4:
  puVar11 = *(uint **)(param_1 + 0x10);
  if (((byte)puVar11[1] >> 2 & 1) != 0) {
    uVar14 = FUN_02c69ba8(param_1);
    if (uVar14 - 1 < 10) {
      FUN_02c2e33c(*(undefined8 *)(DAT_043f2380 + (ulong)uVar14 * 8 + 8),0,param_2);
    }
    goto LAB_02c71138;
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    uVar14 = *puVar11;
    lVar9 = 0;
    do {
      lVar15 = lVar9 + 4;
      iVar10 = uVar14 * 0x41c64e6d + 0x6073;
      uVar14 = iVar10 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)puVar11 + lVar9 + 8) =
           *(ushort *)((long)puVar11 + lVar9 + 8) ^ (ushort)((uint)iVar10 >> 0x10);
      *(ushort *)((long)puVar11 + lVar9 + 10) =
           *(ushort *)((long)puVar11 + lVar9 + 10) ^ (ushort)(uVar14 >> 0x10);
      lVar9 = lVar15;
    } while (lVar15 != 0x160);
    puVar12 = *(ushort **)(param_1 + 8);
    if (puVar12 != (ushort *)0x0) {
      iVar10 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar5 = iVar10 * 0x41c64e6d + 0x6073;
      *puVar12 = *puVar12 ^ (ushort)((uint)iVar10 >> 0x10);
      iVar10 = iVar5 * 0x41c64e6d + 0x6073;
      puVar12[1] = puVar12[1] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar10 * 0x41c64e6d + 0x6073;
      puVar12[2] = puVar12[2] ^ (ushort)((uint)iVar10 >> 0x10);
      iVar10 = iVar5 * 0x41c64e6d + 0x6073;
      puVar12[3] = puVar12[3] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar10 * 0x41c64e6d + 0x6073;
      puVar12[4] = puVar12[4] ^ (ushort)((uint)iVar10 >> 0x10);
      iVar10 = iVar5 * 0x41c64e6d + 0x6073;
      puVar12[5] = puVar12[5] ^ (ushort)((uint)iVar5 >> 0x10);
      puVar12[6] = puVar12[6] ^ (ushort)((uint)iVar10 >> 0x10);
      puVar12[7] = puVar12[7] ^ (ushort)((uint)(iVar10 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    puVar11 = *(uint **)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
    sVar16 = 0;
    lVar9 = 0;
    do {
      lVar15 = lVar9 + 8;
      sVar16 = *(short *)((long)puVar11 + lVar9 + 0xe) +
               *(short *)((long)puVar11 + lVar9 + 0xc) +
               *(short *)((long)puVar11 + lVar9 + 10) +
               *(short *)((long)puVar11 + lVar9 + 8) + sVar16;
      lVar9 = lVar15;
    } while (lVar15 != 0x160);
    if (*(short *)((long)puVar11 + 6) != sVar16) {
      *(ushort *)(puVar11 + 1) = (ushort)puVar11[1] | 4;
      puVar11 = *(uint **)(param_1 + 0x10);
    }
  }
  if (((byte)puVar11[1] >> 2 & 1) == 0) {
    puVar11 = puVar11 + (ulong)(byte)(&DAT_03a84e58)[((ulong)(*puVar11 >> 0xd) & 0x1f) * 4] * 0x16 +
                        2;
    if (*(char *)(param_2 + 0x7c) != '\0') goto LAB_02c70e6c;
LAB_02c70fc4:
    cVar6 = *(char *)(param_1 + 0x18);
  }
  else {
    puVar11 = (uint *)&DAT_04407990;
    if (*(char *)(param_2 + 0x7c) == '\0') goto LAB_02c70fc4;
LAB_02c70e6c:
    uVar14 = (uint)*(ushort *)(param_2 + 0x78);
    if (*(ushort *)(param_2 + 0x78) == 0) {
      iVar10 = 0;
    }
    else {
      puVar12 = *(ushort **)(param_2 + 0x58);
      iVar10 = 0;
      do {
        while( true ) {
          uVar4 = (ushort)*puVar11;
          *puVar12 = uVar4;
          if (uVar4 == 0x10) break;
          if (uVar4 == 0) goto LAB_02c7112c;
          puVar12 = puVar12 + 1;
          puVar11 = (uint *)((long)puVar11 + 2);
          iVar10 = iVar10 + 1;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_02c71118;
        }
        uVar4 = *(ushort *)((long)puVar11 + 2);
        uVar1 = uVar4 + 2;
        bVar8 = uVar14 < uVar1;
        uVar14 = uVar14 - uVar1;
        if (bVar8 || uVar14 == 0) {
          *puVar12 = 0;
          goto LAB_02c7112c;
        }
        uVar18 = uVar4 + 1;
        uVar20 = uVar18 & 7;
        puVar19 = puVar12 + 1;
        *puVar19 = uVar4;
        puVar7 = (uint *)((long)puVar11 + 2);
        puVar17 = puVar11;
        if (uVar20 != 0) {
          lVar9 = 0;
          do {
            lVar15 = lVar9;
            uVar18 = uVar18 - 1;
            uVar20 = uVar20 - 1;
            *(undefined2 *)((long)puVar12 + lVar15 + 4) =
                 *(undefined2 *)((long)puVar11 + lVar15 + 4);
            lVar9 = lVar15 + 2;
          } while (uVar20 != 0);
          puVar19 = (ushort *)((long)puVar12 + lVar15 + 4);
          puVar17 = (uint *)((long)puVar11 + lVar15 + 2);
          puVar7 = (uint *)((long)puVar17 + 2);
          puVar12 = puVar19;
        }
        puVar11 = puVar7;
        if (6 < uVar4) {
          puVar12 = puVar19;
          do {
            puVar12[1] = (ushort)puVar17[1];
            puVar12[2] = (ushort)puVar11[1];
            puVar12[3] = *(ushort *)((long)puVar11 + 6);
            puVar12[4] = (ushort)puVar11[2];
            puVar12[5] = *(ushort *)((long)puVar11 + 10);
            puVar12[6] = (ushort)puVar11[3];
            puVar17 = (uint *)((long)puVar11 + 0xe);
            puVar12[7] = *(ushort *)puVar17;
            puVar11 = puVar11 + 4;
            uVar18 = uVar18 - 8;
            puVar12 = puVar12 + 8;
            *puVar12 = (ushort)*puVar11;
          } while (uVar18 != 0);
        }
        iVar10 = uVar1 + iVar10;
      } while (uVar14 != 0);
LAB_02c71118:
      if (iVar10 != 0) {
        iVar10 = iVar10 + -1;
        puVar12[-1] = 0;
      }
    }
LAB_02c7112c:
    *(short *)(param_2 + 0x7a) = (short)iVar10;
    cVar6 = *(char *)(param_1 + 0x18);
  }
  if ((cVar6 == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 != 0) {
      lVar15 = 0;
      sVar16 = 0;
      do {
        psVar3 = (short *)(lVar9 + 8 + lVar15);
        lVar15 = lVar15 + 8;
        sVar16 = psVar3[3] + psVar3[2] + psVar3[1] + *psVar3 + sVar16;
      } while (lVar15 != 0x160);
      *(short *)(lVar9 + 6) = sVar16;
      piVar13 = *(int **)(param_1 + 0x10);
      iVar10 = *piVar13;
      lVar9 = 0;
      do {
        lVar15 = lVar9 + 4;
        iVar5 = iVar10 * 0x41c64e6d + 0x6073;
        iVar10 = iVar5 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar13 + lVar9 + 8) =
             *(ushort *)((long)piVar13 + lVar9 + 8) ^ (ushort)((uint)iVar5 >> 0x10);
        *(ushort *)((long)piVar13 + lVar9 + 10) =
             *(ushort *)((long)piVar13 + lVar9 + 10) ^ (ushort)((uint)iVar10 >> 0x10);
        lVar9 = lVar15;
      } while (lVar15 != 0x160);
    }
    puVar12 = *(ushort **)(param_1 + 8);
    if ((puVar12 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
      iVar10 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar5 = iVar10 * 0x41c64e6d + 0x6073;
      *puVar12 = *puVar12 ^ (ushort)((uint)iVar10 >> 0x10);
      iVar10 = iVar5 * 0x41c64e6d + 0x6073;
      puVar12[1] = puVar12[1] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar10 * 0x41c64e6d + 0x6073;
      puVar12[2] = puVar12[2] ^ (ushort)((uint)iVar10 >> 0x10);
      iVar10 = iVar5 * 0x41c64e6d + 0x6073;
      puVar12[3] = puVar12[3] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar10 * 0x41c64e6d + 0x6073;
      puVar12[4] = puVar12[4] ^ (ushort)((uint)iVar10 >> 0x10);
      iVar10 = iVar5 * 0x41c64e6d + 0x6073;
      puVar12[5] = puVar12[5] ^ (ushort)((uint)iVar5 >> 0x10);
      puVar12[6] = puVar12[6] ^ (ushort)((uint)iVar10 >> 0x10);
      puVar12[7] = puVar12[7] ^ (ushort)((uint)(iVar10 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
LAB_02c71138:
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
  return;
}


