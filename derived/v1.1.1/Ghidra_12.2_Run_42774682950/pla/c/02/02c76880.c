/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c76880; name: FUN_02c76880
 */


bool FUN_02c76880(long param_1,uint param_2)

{
  long *plVar1;
  short *psVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  ushort *puVar9;
  short sVar10;
  int *piVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  
  lVar7 = nn::os::GetCurrentThread();
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
            *plVar1 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02c768e4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02c768e4:
  if (*(char *)(param_1 + 0x18) != '\0') {
    piVar11 = *(int **)(param_1 + 0x10);
    iVar13 = *piVar11;
    lVar7 = 0;
    do {
      lVar8 = lVar7 + 4;
      iVar4 = iVar13 * 0x41c64e6d + 0x6073;
      iVar13 = iVar4 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar11 + lVar7 + 8) =
           *(ushort *)((long)piVar11 + lVar7 + 8) ^ (ushort)((uint)iVar4 >> 0x10);
      *(ushort *)((long)piVar11 + lVar7 + 10) =
           *(ushort *)((long)piVar11 + lVar7 + 10) ^ (ushort)((uint)iVar13 >> 0x10);
      lVar7 = lVar8;
    } while (lVar8 != 0x160);
    puVar9 = *(ushort **)(param_1 + 8);
    if (puVar9 != (ushort *)0x0) {
      iVar13 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar4 = iVar13 * 0x41c64e6d + 0x6073;
      *puVar9 = *puVar9 ^ (ushort)((uint)iVar13 >> 0x10);
      iVar13 = iVar4 * 0x41c64e6d + 0x6073;
      puVar9[1] = puVar9[1] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar13 * 0x41c64e6d + 0x6073;
      puVar9[2] = puVar9[2] ^ (ushort)((uint)iVar13 >> 0x10);
      iVar13 = iVar4 * 0x41c64e6d + 0x6073;
      puVar9[3] = puVar9[3] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar13 * 0x41c64e6d + 0x6073;
      puVar9[4] = puVar9[4] ^ (ushort)((uint)iVar13 >> 0x10);
      iVar13 = iVar4 * 0x41c64e6d + 0x6073;
      puVar9[5] = puVar9[5] ^ (ushort)((uint)iVar4 >> 0x10);
      puVar9[6] = puVar9[6] ^ (ushort)((uint)iVar13 >> 0x10);
      puVar9[7] = puVar9[7] ^ (ushort)((uint)(iVar13 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    lVar8 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
    lVar7 = 0;
    sVar10 = 0;
    do {
      psVar2 = (short *)(lVar8 + 8 + lVar7);
      lVar7 = lVar7 + 8;
      sVar10 = psVar2[3] + psVar2[2] + psVar2[1] + *psVar2 + sVar10;
    } while (lVar7 != 0x160);
    if (*(short *)(lVar8 + 6) != sVar10) {
      *(ushort *)(lVar8 + 4) = *(ushort *)(lVar8 + 4) | 4;
    }
  }
  if ((param_2 & 0xff) < 0x40) {
    puVar12 = *(uint **)(param_1 + 0x10);
    if (((byte)puVar12[1] >> 2 & 1) == 0) {
      puVar14 = puVar12 + (ulong)(byte)(&DAT_03a84e5a)[((ulong)(*puVar12 >> 0xd) & 0x1f) * 4] * 0x16
                          + 2;
    }
    else {
      puVar14 = (uint *)&DAT_04407a40;
    }
    bVar3 = *(byte *)((long)puVar14 + (ulong)(param_2 >> 3 & 0x1f) + 0x4d);
    if ((*(char *)(param_1 + 0x18) == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
      lVar7 = 0;
      sVar10 = 0;
      do {
        psVar2 = (short *)((long)puVar12 + lVar7 + 8);
        lVar7 = lVar7 + 8;
        sVar10 = psVar2[3] + psVar2[2] + psVar2[1] + *psVar2 + sVar10;
      } while (lVar7 != 0x160);
      *(short *)((long)puVar12 + 6) = sVar10;
      piVar11 = *(int **)(param_1 + 0x10);
      iVar13 = *piVar11;
      lVar7 = 0;
      do {
        lVar8 = lVar7 + 4;
        iVar4 = iVar13 * 0x41c64e6d + 0x6073;
        iVar13 = iVar4 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar11 + lVar7 + 8) =
             *(ushort *)((long)piVar11 + lVar7 + 8) ^ (ushort)((uint)iVar4 >> 0x10);
        *(ushort *)((long)piVar11 + lVar7 + 10) =
             *(ushort *)((long)piVar11 + lVar7 + 10) ^ (ushort)((uint)iVar13 >> 0x10);
        lVar7 = lVar8;
      } while (lVar8 != 0x160);
      puVar9 = *(ushort **)(param_1 + 8);
      if ((puVar9 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
        iVar13 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
        iVar4 = iVar13 * 0x41c64e6d + 0x6073;
        *puVar9 = *puVar9 ^ (ushort)((uint)iVar13 >> 0x10);
        iVar13 = iVar4 * 0x41c64e6d + 0x6073;
        puVar9[1] = puVar9[1] ^ (ushort)((uint)iVar4 >> 0x10);
        iVar4 = iVar13 * 0x41c64e6d + 0x6073;
        puVar9[2] = puVar9[2] ^ (ushort)((uint)iVar13 >> 0x10);
        iVar13 = iVar4 * 0x41c64e6d + 0x6073;
        puVar9[3] = puVar9[3] ^ (ushort)((uint)iVar4 >> 0x10);
        iVar4 = iVar13 * 0x41c64e6d + 0x6073;
        puVar9[4] = puVar9[4] ^ (ushort)((uint)iVar13 >> 0x10);
        iVar13 = iVar4 * 0x41c64e6d + 0x6073;
        puVar9[5] = puVar9[5] ^ (ushort)((uint)iVar4 >> 0x10);
        puVar9[6] = puVar9[6] ^ (ushort)((uint)iVar13 >> 0x10);
        puVar9[7] = puVar9[7] ^ (ushort)((uint)(iVar13 * 0x41c64e6d + 0x6073) >> 0x10);
      }
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    bVar6 = ((uint)bVar3 & 1 << (ulong)(param_2 & 7)) != 0;
  }
  else {
    bVar6 = false;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
  return bVar6;
}


