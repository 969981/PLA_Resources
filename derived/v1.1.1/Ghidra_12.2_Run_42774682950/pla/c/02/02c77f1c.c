/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c77f1c; name: FUN_02c77f1c
 */


void FUN_02c77f1c(long param_1,uint param_2)

{
  long *plVar1;
  short *psVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  ushort *puVar9;
  short sVar10;
  int *piVar11;
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
          if (cVar4 == '\0') goto LAB_02c77f80;
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
LAB_02c77f80:
  if (*(long *)(param_1 + 8) != 0) {
    if (*(char *)(param_1 + 0x18) != '\0') {
      piVar11 = *(int **)(param_1 + 0x10);
      iVar12 = *piVar11;
      lVar6 = 0;
      do {
        lVar7 = lVar6 + 4;
        iVar3 = iVar12 * 0x41c64e6d + 0x6073;
        iVar12 = iVar3 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar11 + lVar6 + 8) =
             *(ushort *)((long)piVar11 + lVar6 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
        *(ushort *)((long)piVar11 + lVar6 + 10) =
             *(ushort *)((long)piVar11 + lVar6 + 10) ^ (ushort)((uint)iVar12 >> 0x10);
        lVar6 = lVar7;
      } while (lVar7 != 0x160);
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
      lVar7 = *(long *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x18) = 0;
      lVar6 = 0;
      sVar10 = 0;
      do {
        psVar2 = (short *)(lVar7 + 8 + lVar6);
        lVar6 = lVar6 + 8;
        sVar10 = psVar2[3] + psVar2[2] + psVar2[1] + *psVar2 + sVar10;
      } while (lVar6 != 0x160);
      if (*(short *)(lVar7 + 6) != sVar10) {
        *(ushort *)(lVar7 + 4) = *(ushort *)(lVar7 + 4) | 4;
      }
    }
    puVar8 = *(uint **)(param_1 + 0x10);
    if (((byte)puVar8[1] >> 2 & 1) == 0) {
      puVar8 = puVar8 + (ulong)(byte)(&DAT_03a84e58)[((ulong)(*puVar8 >> 0xd) & 0x1f) * 4] * 0x16 +
                        2;
    }
    else {
      puVar8 = (uint *)0x4407b00;
    }
    puVar8[0xf] = param_2;
    if ((*(char *)(param_1 + 0x18) == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 != 0) {
        lVar7 = 0;
        sVar10 = 0;
        do {
          psVar2 = (short *)(lVar6 + 8 + lVar7);
          lVar7 = lVar7 + 8;
          sVar10 = psVar2[3] + psVar2[2] + psVar2[1] + *psVar2 + sVar10;
        } while (lVar7 != 0x160);
        *(short *)(lVar6 + 6) = sVar10;
        piVar11 = *(int **)(param_1 + 0x10);
        iVar12 = *piVar11;
        lVar6 = 0;
        do {
          lVar7 = lVar6 + 4;
          iVar3 = iVar12 * 0x41c64e6d + 0x6073;
          iVar12 = iVar3 * 0x41c64e6d + 0x6073;
          *(ushort *)((long)piVar11 + lVar6 + 8) =
               *(ushort *)((long)piVar11 + lVar6 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
          *(ushort *)((long)piVar11 + lVar6 + 10) =
               *(ushort *)((long)piVar11 + lVar6 + 10) ^ (ushort)((uint)iVar12 >> 0x10);
          lVar6 = lVar7;
        } while (lVar7 != 0x160);
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
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
  return;
}


