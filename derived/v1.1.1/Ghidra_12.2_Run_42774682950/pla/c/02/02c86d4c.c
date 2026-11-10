/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c86d4c; name: FUN_02c86d4c
 */


void FUN_02c86d4c(long param_1,uint param_2,uint param_3)

{
  long *plVar1;
  short *psVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  ushort *puVar13;
  short sVar14;
  int *piVar15;
  int iVar16;
  uint *puVar17;
  
  lVar9 = nn::os::GetCurrentThread();
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
            *plVar1 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_02c86db4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_02c86db4:
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
      psVar2 = (short *)(lVar10 + 8 + lVar9);
      lVar9 = lVar9 + 8;
      sVar14 = psVar2[3] + psVar2[2] + psVar2[1] + *psVar2 + sVar14;
    } while (lVar9 != 0x160);
    if (*(short *)(lVar10 + 6) != sVar14) {
      *(ushort *)(lVar10 + 4) = *(ushort *)(lVar10 + 4) | 4;
    }
  }
  if ((param_2 & 0xff) < 0x40) {
    puVar12 = *(uint **)(param_1 + 0x10);
    uVar11 = (ulong)(param_2 >> 3 & 0x1f);
    if (((ushort)puVar12[1] >> 2 & 1) == 0) {
      puVar17 = puVar12 + (ulong)(byte)(&DAT_03a84e5a)[((ulong)(*puVar12 >> 0xd) & 0x1f) * 4] * 0x16
                          + 2;
    }
    else {
      puVar17 = (uint *)&DAT_04407a40;
    }
    bVar4 = *(byte *)((long)puVar17 + uVar11 + 0x45);
    bVar8 = (byte)(1 << (ulong)(param_2 & 7));
    bVar3 = bVar4 | bVar8;
    if ((param_3 & 1) == 0) {
      bVar3 = bVar4 & (bVar8 ^ 0xff);
    }
    if (((ushort)puVar12[1] >> 2 & 1) == 0) {
      puVar12 = puVar12 + (ulong)(byte)(&DAT_03a84e5a)[((ulong)(*puVar12 >> 0xd) & 0x1f) * 4] * 0x16
                          + 2;
    }
    else {
      puVar12 = (uint *)0x4407bb0;
    }
    *(byte *)((long)puVar12 + uVar11 + 0x45) = bVar3;
    if ((*(char *)(param_1 + 0x18) == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
      lVar9 = *(long *)(param_1 + 0x10);
      if (lVar9 != 0) {
        lVar10 = 0;
        sVar14 = 0;
        do {
          psVar2 = (short *)(lVar9 + 8 + lVar10);
          lVar10 = lVar10 + 8;
          sVar14 = psVar2[3] + psVar2[2] + psVar2[1] + *psVar2 + sVar14;
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
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
  return;
}


