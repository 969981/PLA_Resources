/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c65bf0; name: FUN_02c65bf0
 */


void FUN_02c65bf0(long param_1)

{
  long *plVar1;
  short *psVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ushort *puVar9;
  int *piVar10;
  short sVar11;
  int iVar12;
  
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
          if (cVar4 == '\0') goto LAB_02c65c4c;
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
LAB_02c65c4c:
  puVar7 = *(undefined8 **)(param_1 + 8);
  if (puVar7 != (undefined8 *)0x0) {
    if (*(char *)(param_1 + 0x19) == '\0') {
      if (*(char *)(param_1 + 0x18) != '\0') {
        piVar10 = *(int **)(param_1 + 0x10);
        iVar12 = *piVar10;
        lVar6 = 0;
        do {
          lVar8 = lVar6 + 4;
          iVar3 = iVar12 * 0x41c64e6d + 0x6073;
          iVar12 = iVar3 * 0x41c64e6d + 0x6073;
          *(ushort *)((long)piVar10 + lVar6 + 8) =
               *(ushort *)((long)piVar10 + lVar6 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
          *(ushort *)((long)piVar10 + lVar6 + 10) =
               *(ushort *)((long)piVar10 + lVar6 + 10) ^ (ushort)((uint)iVar12 >> 0x10);
          lVar6 = lVar8;
        } while (lVar8 != 0x160);
        puVar9 = *(ushort **)(param_1 + 8);
        if (puVar9 != (ushort *)0x0) {
          iVar12 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
          iVar3 = iVar12 * 0x41c64e6d + 0x6073;
          *puVar9 = *puVar9 ^ (ushort)((uint)iVar12 >> 0x10);
          iVar12 = iVar3 * 0x41c64e6d + 0x6073;
          puVar9[1] = puVar9[1] ^ (ushort)((uint)iVar3 >> 0x10);
          iVar3 = iVar12 * 0x41c64e6d + 0x6073;
          puVar9[2] = puVar9[2] ^ (ushort)((uint)iVar12 >> 0x10);
          iVar12 = iVar3 * 0x41c64e6d + 0x6073;
          puVar9[3] = puVar9[3] ^ (ushort)((uint)iVar3 >> 0x10);
          iVar3 = iVar12 * 0x41c64e6d + 0x6073;
          puVar9[4] = puVar9[4] ^ (ushort)((uint)iVar12 >> 0x10);
          iVar12 = iVar3 * 0x41c64e6d + 0x6073;
          puVar9[5] = puVar9[5] ^ (ushort)((uint)iVar3 >> 0x10);
          puVar9[6] = puVar9[6] ^ (ushort)((uint)iVar12 >> 0x10);
          puVar9[7] = puVar9[7] ^ (ushort)((uint)(iVar12 * 0x41c64e6d + 0x6073) >> 0x10);
        }
        lVar8 = *(long *)(param_1 + 0x10);
        *(undefined1 *)(param_1 + 0x18) = 0;
        lVar6 = 0;
        sVar11 = 0;
        do {
          psVar2 = (short *)(lVar8 + 8 + lVar6);
          lVar6 = lVar6 + 8;
          sVar11 = psVar2[3] + psVar2[2] + psVar2[1] + *psVar2 + sVar11;
        } while (lVar6 != 0x160);
        if (*(short *)(lVar8 + 6) != sVar11) {
          *(ushort *)(lVar8 + 4) = *(ushort *)(lVar8 + 4) | 4;
        }
      }
      puVar7 = *(undefined8 **)(param_1 + 8);
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined1 *)(param_1 + 0x19) = 0;
      if (*(char *)(param_1 + 0x18) == '\0') {
        lVar6 = *(long *)(param_1 + 0x10);
        if (lVar6 != 0) {
          lVar8 = 0;
          sVar11 = 0;
          do {
            psVar2 = (short *)(lVar6 + 8 + lVar8);
            lVar8 = lVar8 + 8;
            sVar11 = psVar2[3] + psVar2[2] + psVar2[1] + *psVar2 + sVar11;
          } while (lVar8 != 0x160);
          *(short *)(lVar6 + 6) = sVar11;
          piVar10 = *(int **)(param_1 + 0x10);
          iVar12 = *piVar10;
          lVar6 = 0;
          do {
            lVar8 = lVar6 + 4;
            iVar3 = iVar12 * 0x41c64e6d + 0x6073;
            iVar12 = iVar3 * 0x41c64e6d + 0x6073;
            *(ushort *)((long)piVar10 + lVar6 + 8) =
                 *(ushort *)((long)piVar10 + lVar6 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
            *(ushort *)((long)piVar10 + lVar6 + 10) =
                 *(ushort *)((long)piVar10 + lVar6 + 10) ^ (ushort)((uint)iVar12 >> 0x10);
            lVar6 = lVar8;
          } while (lVar8 != 0x160);
        }
        puVar9 = *(ushort **)(param_1 + 8);
        if ((puVar9 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
          iVar12 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
          iVar3 = iVar12 * 0x41c64e6d + 0x6073;
          *puVar9 = *puVar9 ^ (ushort)((uint)iVar12 >> 0x10);
          iVar12 = iVar3 * 0x41c64e6d + 0x6073;
          puVar9[1] = puVar9[1] ^ (ushort)((uint)iVar3 >> 0x10);
          iVar3 = iVar12 * 0x41c64e6d + 0x6073;
          puVar9[2] = puVar9[2] ^ (ushort)((uint)iVar12 >> 0x10);
          iVar12 = iVar3 * 0x41c64e6d + 0x6073;
          puVar9[3] = puVar9[3] ^ (ushort)((uint)iVar3 >> 0x10);
          iVar3 = iVar12 * 0x41c64e6d + 0x6073;
          puVar9[4] = puVar9[4] ^ (ushort)((uint)iVar12 >> 0x10);
          iVar12 = iVar3 * 0x41c64e6d + 0x6073;
          puVar9[5] = puVar9[5] ^ (ushort)((uint)iVar3 >> 0x10);
          puVar9[6] = puVar9[6] ^ (ushort)((uint)iVar12 >> 0x10);
          puVar9[7] = puVar9[7] ^ (ushort)((uint)(iVar12 * 0x41c64e6d + 0x6073) >> 0x10);
        }
        *(undefined1 *)(param_1 + 0x18) = 1;
      }
    }
    else {
      *puVar7 = 0;
      puVar7[1] = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
  return;
}


