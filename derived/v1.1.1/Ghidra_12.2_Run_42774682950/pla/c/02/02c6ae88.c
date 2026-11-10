/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c6ae88; name: FUN_02c6ae88
 */


undefined1 FUN_02c6ae88(long param_1)

{
  long *plVar1;
  short *psVar2;
  undefined1 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  ushort *puVar11;
  short sVar12;
  int *piVar13;
  int iVar14;
  
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
          if (cVar5 == '\0') goto LAB_02c6aee4;
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
LAB_02c6aee4:
  if (*(char *)(param_1 + 0x18) != '\0') {
    piVar13 = *(int **)(param_1 + 0x10);
    iVar14 = *piVar13;
    lVar7 = 0;
    do {
      lVar8 = lVar7 + 4;
      iVar4 = iVar14 * 0x41c64e6d + 0x6073;
      iVar14 = iVar4 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar13 + lVar7 + 8) =
           *(ushort *)((long)piVar13 + lVar7 + 8) ^ (ushort)((uint)iVar4 >> 0x10);
      *(ushort *)((long)piVar13 + lVar7 + 10) =
           *(ushort *)((long)piVar13 + lVar7 + 10) ^ (ushort)((uint)iVar14 >> 0x10);
      lVar7 = lVar8;
    } while (lVar8 != 0x160);
    puVar11 = *(ushort **)(param_1 + 8);
    if (puVar11 != (ushort *)0x0) {
      iVar14 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar4 = iVar14 * 0x41c64e6d + 0x6073;
      *puVar11 = *puVar11 ^ (ushort)((uint)iVar14 >> 0x10);
      iVar14 = iVar4 * 0x41c64e6d + 0x6073;
      puVar11[1] = puVar11[1] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar14 * 0x41c64e6d + 0x6073;
      puVar11[2] = puVar11[2] ^ (ushort)((uint)iVar14 >> 0x10);
      iVar14 = iVar4 * 0x41c64e6d + 0x6073;
      puVar11[3] = puVar11[3] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar14 * 0x41c64e6d + 0x6073;
      puVar11[4] = puVar11[4] ^ (ushort)((uint)iVar14 >> 0x10);
      iVar14 = iVar4 * 0x41c64e6d + 0x6073;
      puVar11[5] = puVar11[5] ^ (ushort)((uint)iVar4 >> 0x10);
      puVar11[6] = puVar11[6] ^ (ushort)((uint)iVar14 >> 0x10);
      puVar11[7] = puVar11[7] ^ (ushort)((uint)(iVar14 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    lVar8 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
    lVar7 = 0;
    sVar12 = 0;
    do {
      psVar2 = (short *)(lVar8 + 8 + lVar7);
      lVar7 = lVar7 + 8;
      sVar12 = psVar2[3] + psVar2[2] + psVar2[1] + *psVar2 + sVar12;
    } while (lVar7 != 0x160);
    if (*(short *)(lVar8 + 6) != sVar12) {
      *(ushort *)(lVar8 + 4) = *(ushort *)(lVar8 + 4) | 4;
    }
  }
  puVar10 = *(uint **)(param_1 + 0x10);
  if (((byte)puVar10[1] >> 2 & 1) == 0) {
    puVar9 = puVar10 + (ulong)(byte)(&DAT_03a84e57)[((ulong)(*puVar10 >> 0xd) & 0x1f) * 4] * 0x16 +
                       2;
  }
  else {
    puVar9 = (uint *)&DAT_04407938;
  }
  uVar3 = *(undefined1 *)((long)puVar9 + 0x21);
  if ((*(char *)(param_1 + 0x18) == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    if (puVar10 != (uint *)0x0) {
      lVar7 = 0;
      sVar12 = 0;
      do {
        psVar2 = (short *)((long)puVar10 + lVar7 + 8);
        lVar7 = lVar7 + 8;
        sVar12 = psVar2[3] + psVar2[2] + psVar2[1] + *psVar2 + sVar12;
      } while (lVar7 != 0x160);
      *(short *)((long)puVar10 + 6) = sVar12;
      piVar13 = *(int **)(param_1 + 0x10);
      iVar14 = *piVar13;
      lVar7 = 0;
      do {
        lVar8 = lVar7 + 4;
        iVar4 = iVar14 * 0x41c64e6d + 0x6073;
        iVar14 = iVar4 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar13 + lVar7 + 8) =
             *(ushort *)((long)piVar13 + lVar7 + 8) ^ (ushort)((uint)iVar4 >> 0x10);
        *(ushort *)((long)piVar13 + lVar7 + 10) =
             *(ushort *)((long)piVar13 + lVar7 + 10) ^ (ushort)((uint)iVar14 >> 0x10);
        lVar7 = lVar8;
      } while (lVar8 != 0x160);
    }
    puVar11 = *(ushort **)(param_1 + 8);
    if ((puVar11 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
      iVar14 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar4 = iVar14 * 0x41c64e6d + 0x6073;
      *puVar11 = *puVar11 ^ (ushort)((uint)iVar14 >> 0x10);
      iVar14 = iVar4 * 0x41c64e6d + 0x6073;
      puVar11[1] = puVar11[1] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar14 * 0x41c64e6d + 0x6073;
      puVar11[2] = puVar11[2] ^ (ushort)((uint)iVar14 >> 0x10);
      iVar14 = iVar4 * 0x41c64e6d + 0x6073;
      puVar11[3] = puVar11[3] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar14 * 0x41c64e6d + 0x6073;
      puVar11[4] = puVar11[4] ^ (ushort)((uint)iVar14 >> 0x10);
      iVar14 = iVar4 * 0x41c64e6d + 0x6073;
      puVar11[5] = puVar11[5] ^ (ushort)((uint)iVar4 >> 0x10);
      puVar11[6] = puVar11[6] ^ (ushort)((uint)iVar14 >> 0x10);
      puVar11[7] = puVar11[7] ^ (ushort)((uint)(iVar14 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
  return uVar3;
}


