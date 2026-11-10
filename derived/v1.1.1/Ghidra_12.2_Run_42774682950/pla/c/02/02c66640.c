/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c66640; name: FUN_02c66640
 */


void FUN_02c66640(long param_1)

{
  long *plVar1;
  short *psVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int *piVar7;
  ushort *puVar8;
  long lVar9;
  short sVar10;
  int iVar11;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02c6669c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02c6669c:
  *(undefined1 *)(param_1 + 0x19) = 0;
  if (*(char *)(param_1 + 0x18) == '\0') {
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      lVar9 = 0;
      sVar10 = 0;
      do {
        psVar2 = (short *)(lVar6 + 8 + lVar9);
        lVar9 = lVar9 + 8;
        sVar10 = psVar2[3] + psVar2[2] + psVar2[1] + *psVar2 + sVar10;
      } while (lVar9 != 0x160);
      *(short *)(lVar6 + 6) = sVar10;
      piVar7 = *(int **)(param_1 + 0x10);
      iVar11 = *piVar7;
      lVar6 = 0;
      do {
        lVar9 = lVar6 + 4;
        iVar3 = iVar11 * 0x41c64e6d + 0x6073;
        iVar11 = iVar3 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar7 + lVar6 + 8) =
             *(ushort *)((long)piVar7 + lVar6 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
        *(ushort *)((long)piVar7 + lVar6 + 10) =
             *(ushort *)((long)piVar7 + lVar6 + 10) ^ (ushort)((uint)iVar11 >> 0x10);
        lVar6 = lVar9;
      } while (lVar9 != 0x160);
    }
    puVar8 = *(ushort **)(param_1 + 8);
    if ((puVar8 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
      iVar11 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar3 = iVar11 * 0x41c64e6d + 0x6073;
      *puVar8 = *puVar8 ^ (ushort)((uint)iVar11 >> 0x10);
      iVar11 = iVar3 * 0x41c64e6d + 0x6073;
      puVar8[1] = puVar8[1] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar11 * 0x41c64e6d + 0x6073;
      puVar8[2] = puVar8[2] ^ (ushort)((uint)iVar11 >> 0x10);
      iVar11 = iVar3 * 0x41c64e6d + 0x6073;
      puVar8[3] = puVar8[3] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar11 * 0x41c64e6d + 0x6073;
      puVar8[4] = puVar8[4] ^ (ushort)((uint)iVar11 >> 0x10);
      iVar11 = iVar3 * 0x41c64e6d + 0x6073;
      puVar8[5] = puVar8[5] ^ (ushort)((uint)iVar3 >> 0x10);
      puVar8[6] = puVar8[6] ^ (ushort)((uint)iVar11 >> 0x10);
      puVar8[7] = puVar8[7] ^ (ushort)((uint)(iVar11 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
  return;
}


