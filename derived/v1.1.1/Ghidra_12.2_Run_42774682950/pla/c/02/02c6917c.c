/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c6917c; name: FUN_02c6917c
 */


undefined1 FUN_02c6917c(long param_1)

{
  long *plVar1;
  short *psVar2;
  ushort uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  ushort *puVar12;
  short sVar13;
  int *piVar14;
  int iVar15;
  
  lVar8 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02c691d8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02c691d8:
  if (*(char *)(param_1 + 0x18) != '\0') {
    piVar14 = *(int **)(param_1 + 0x10);
    iVar15 = *piVar14;
    lVar8 = 0;
    do {
      lVar9 = lVar8 + 4;
      iVar4 = iVar15 * 0x41c64e6d + 0x6073;
      iVar15 = iVar4 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar14 + lVar8 + 8) =
           *(ushort *)((long)piVar14 + lVar8 + 8) ^ (ushort)((uint)iVar4 >> 0x10);
      *(ushort *)((long)piVar14 + lVar8 + 10) =
           *(ushort *)((long)piVar14 + lVar8 + 10) ^ (ushort)((uint)iVar15 >> 0x10);
      lVar8 = lVar9;
    } while (lVar9 != 0x160);
    puVar12 = *(ushort **)(param_1 + 8);
    if (puVar12 != (ushort *)0x0) {
      iVar15 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar4 = iVar15 * 0x41c64e6d + 0x6073;
      *puVar12 = *puVar12 ^ (ushort)((uint)iVar15 >> 0x10);
      iVar15 = iVar4 * 0x41c64e6d + 0x6073;
      puVar12[1] = puVar12[1] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar15 * 0x41c64e6d + 0x6073;
      puVar12[2] = puVar12[2] ^ (ushort)((uint)iVar15 >> 0x10);
      iVar15 = iVar4 * 0x41c64e6d + 0x6073;
      puVar12[3] = puVar12[3] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar15 * 0x41c64e6d + 0x6073;
      puVar12[4] = puVar12[4] ^ (ushort)((uint)iVar15 >> 0x10);
      iVar15 = iVar4 * 0x41c64e6d + 0x6073;
      puVar12[5] = puVar12[5] ^ (ushort)((uint)iVar4 >> 0x10);
      puVar12[6] = puVar12[6] ^ (ushort)((uint)iVar15 >> 0x10);
      puVar12[7] = puVar12[7] ^ (ushort)((uint)(iVar15 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    lVar9 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
    lVar8 = 0;
    sVar13 = 0;
    do {
      psVar2 = (short *)(lVar9 + 8 + lVar8);
      lVar8 = lVar8 + 8;
      sVar13 = psVar2[3] + psVar2[2] + psVar2[1] + *psVar2 + sVar13;
    } while (lVar8 != 0x160);
    if (*(short *)(lVar9 + 6) != sVar13) {
      *(ushort *)(lVar9 + 4) = *(ushort *)(lVar9 + 4) | 4;
    }
  }
  puVar10 = *(uint **)(param_1 + 0x10);
  uVar3 = (ushort)puVar10[1];
  cVar5 = DAT_04407a00._4_1_;
  if ((uVar3 >> 2 & 1) == 0) {
    cVar5 = (char)puVar10[(ulong)(byte)(&DAT_03a84e59)[((ulong)(*puVar10 >> 0xd) & 0x1f) * 4] * 0x16
                          + 9];
  }
  if (cVar5 == '\0') {
    if ((uVar3 >> 2 & 1) == 0) {
      puVar11 = puVar10 + (ulong)(byte)(&DAT_03a84e5a)[((ulong)(*puVar10 >> 0xd) & 0x1f) * 4] * 0x16
                          + 2;
    }
    else {
      puVar11 = (uint *)&DAT_04407a40;
    }
    puVar11 = (uint *)((long)puVar11 + 0x1a);
  }
  else if ((uVar3 >> 2 & 1) == 0) {
    puVar11 = puVar10 + (ulong)(byte)(&DAT_03a84e59)[((ulong)(*puVar10 >> 0xd) & 0x1f) * 4] * 0x16 +
                        10;
  }
  else {
    puVar11 = (uint *)&DAT_04407a08;
  }
  uVar7 = *puVar11;
  if ((*(char *)(param_1 + 0x18) == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    if (puVar10 != (uint *)0x0) {
      lVar8 = 0;
      sVar13 = 0;
      do {
        psVar2 = (short *)((long)puVar10 + lVar8 + 8);
        lVar8 = lVar8 + 8;
        sVar13 = psVar2[3] + psVar2[2] + psVar2[1] + *psVar2 + sVar13;
      } while (lVar8 != 0x160);
      *(short *)((long)puVar10 + 6) = sVar13;
      piVar14 = *(int **)(param_1 + 0x10);
      iVar15 = *piVar14;
      lVar8 = 0;
      do {
        lVar9 = lVar8 + 4;
        iVar4 = iVar15 * 0x41c64e6d + 0x6073;
        iVar15 = iVar4 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar14 + lVar8 + 8) =
             *(ushort *)((long)piVar14 + lVar8 + 8) ^ (ushort)((uint)iVar4 >> 0x10);
        *(ushort *)((long)piVar14 + lVar8 + 10) =
             *(ushort *)((long)piVar14 + lVar8 + 10) ^ (ushort)((uint)iVar15 >> 0x10);
        lVar8 = lVar9;
      } while (lVar9 != 0x160);
    }
    puVar12 = *(ushort **)(param_1 + 8);
    if ((puVar12 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
      iVar15 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar4 = iVar15 * 0x41c64e6d + 0x6073;
      *puVar12 = *puVar12 ^ (ushort)((uint)iVar15 >> 0x10);
      iVar15 = iVar4 * 0x41c64e6d + 0x6073;
      puVar12[1] = puVar12[1] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar15 * 0x41c64e6d + 0x6073;
      puVar12[2] = puVar12[2] ^ (ushort)((uint)iVar15 >> 0x10);
      iVar15 = iVar4 * 0x41c64e6d + 0x6073;
      puVar12[3] = puVar12[3] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar15 * 0x41c64e6d + 0x6073;
      puVar12[4] = puVar12[4] ^ (ushort)((uint)iVar15 >> 0x10);
      iVar15 = iVar4 * 0x41c64e6d + 0x6073;
      puVar12[5] = puVar12[5] ^ (ushort)((uint)iVar4 >> 0x10);
      puVar12[6] = puVar12[6] ^ (ushort)((uint)iVar15 >> 0x10);
      puVar12[7] = puVar12[7] ^ (ushort)((uint)(iVar15 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
  return (char)uVar7;
}


