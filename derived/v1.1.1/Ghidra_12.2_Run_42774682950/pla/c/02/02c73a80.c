/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c73a80; name: FUN_02c73a80
 */


uint FUN_02c73a80(long param_1)

{
  long *plVar1;
  short *psVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  ushort *puVar11;
  uint *puVar12;
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
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_02c73adc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_02c73adc:
  if (*(char *)(param_1 + 0x18) != '\0') {
    piVar14 = *(int **)(param_1 + 0x10);
    iVar15 = *piVar14;
    lVar8 = 0;
    do {
      lVar9 = lVar8 + 4;
      iVar5 = iVar15 * 0x41c64e6d + 0x6073;
      iVar15 = iVar5 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar14 + lVar8 + 8) =
           *(ushort *)((long)piVar14 + lVar8 + 8) ^ (ushort)((uint)iVar5 >> 0x10);
      *(ushort *)((long)piVar14 + lVar8 + 10) =
           *(ushort *)((long)piVar14 + lVar8 + 10) ^ (ushort)((uint)iVar15 >> 0x10);
      lVar8 = lVar9;
    } while (lVar9 != 0x160);
    puVar11 = *(ushort **)(param_1 + 8);
    if (puVar11 != (ushort *)0x0) {
      iVar15 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar5 = iVar15 * 0x41c64e6d + 0x6073;
      *puVar11 = *puVar11 ^ (ushort)((uint)iVar15 >> 0x10);
      iVar15 = iVar5 * 0x41c64e6d + 0x6073;
      puVar11[1] = puVar11[1] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar15 * 0x41c64e6d + 0x6073;
      puVar11[2] = puVar11[2] ^ (ushort)((uint)iVar15 >> 0x10);
      iVar15 = iVar5 * 0x41c64e6d + 0x6073;
      puVar11[3] = puVar11[3] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar15 * 0x41c64e6d + 0x6073;
      puVar11[4] = puVar11[4] ^ (ushort)((uint)iVar15 >> 0x10);
      iVar15 = iVar5 * 0x41c64e6d + 0x6073;
      puVar11[5] = puVar11[5] ^ (ushort)((uint)iVar5 >> 0x10);
      puVar11[6] = puVar11[6] ^ (ushort)((uint)iVar15 >> 0x10);
      puVar11[7] = puVar11[7] ^ (ushort)((uint)(iVar15 * 0x41c64e6d + 0x6073) >> 0x10);
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
  puVar12 = *(uint **)(param_1 + 0x10);
  if (((byte)puVar12[1] >> 2 & 1) == 0) {
    puVar10 = puVar12 + (ulong)(byte)(&DAT_03a84e5a)[((ulong)(*puVar12 >> 0xd) & 0x1f) * 4] * 0x16 +
                        2;
  }
  else {
    puVar10 = (uint *)&DAT_04407a40;
  }
  bVar4 = *(byte *)((long)puVar10 + 0x27);
  if ((*(char *)(param_1 + 0x18) == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    if (puVar12 != (uint *)0x0) {
      lVar8 = 0;
      sVar13 = 0;
      do {
        psVar2 = (short *)((long)puVar12 + lVar8 + 8);
        lVar8 = lVar8 + 8;
        sVar13 = psVar2[3] + psVar2[2] + psVar2[1] + *psVar2 + sVar13;
      } while (lVar8 != 0x160);
      *(short *)((long)puVar12 + 6) = sVar13;
      piVar14 = *(int **)(param_1 + 0x10);
      iVar15 = *piVar14;
      lVar8 = 0;
      do {
        lVar9 = lVar8 + 4;
        iVar5 = iVar15 * 0x41c64e6d + 0x6073;
        iVar15 = iVar5 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar14 + lVar8 + 8) =
             *(ushort *)((long)piVar14 + lVar8 + 8) ^ (ushort)((uint)iVar5 >> 0x10);
        *(ushort *)((long)piVar14 + lVar8 + 10) =
             *(ushort *)((long)piVar14 + lVar8 + 10) ^ (ushort)((uint)iVar15 >> 0x10);
        lVar8 = lVar9;
      } while (lVar9 != 0x160);
    }
    puVar11 = *(ushort **)(param_1 + 8);
    if ((puVar11 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
      iVar15 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar5 = iVar15 * 0x41c64e6d + 0x6073;
      *puVar11 = *puVar11 ^ (ushort)((uint)iVar15 >> 0x10);
      iVar15 = iVar5 * 0x41c64e6d + 0x6073;
      puVar11[1] = puVar11[1] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar15 * 0x41c64e6d + 0x6073;
      puVar11[2] = puVar11[2] ^ (ushort)((uint)iVar15 >> 0x10);
      iVar15 = iVar5 * 0x41c64e6d + 0x6073;
      puVar11[3] = puVar11[3] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar15 * 0x41c64e6d + 0x6073;
      puVar11[4] = puVar11[4] ^ (ushort)((uint)iVar15 >> 0x10);
      iVar15 = iVar5 * 0x41c64e6d + 0x6073;
      puVar11[5] = puVar11[5] ^ (ushort)((uint)iVar5 >> 0x10);
      puVar11[6] = puVar11[6] ^ (ushort)((uint)iVar15 >> 0x10);
      puVar11[7] = puVar11[7] ^ (ushort)((uint)(iVar15 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  uVar3 = 0x1b;
  if (bVar4 - 0x1b < 0xb) {
    uVar3 = (uint)bVar4;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
  return uVar3;
}


