/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c7a8c4; name: FUN_02c7a8c4
 */


void FUN_02c7a8c4(long param_1,undefined1 param_2)

{
  long *plVar1;
  short *psVar2;
  ushort uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  ushort *puVar10;
  short sVar11;
  int *piVar12;
  int iVar13;
  
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
          if (cVar5 == '\0') goto LAB_02c7a928;
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
LAB_02c7a928:
  if (*(char *)(param_1 + 0x18) != '\0') {
    piVar12 = *(int **)(param_1 + 0x10);
    iVar13 = *piVar12;
    lVar7 = 0;
    do {
      lVar8 = lVar7 + 4;
      iVar4 = iVar13 * 0x41c64e6d + 0x6073;
      iVar13 = iVar4 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar12 + lVar7 + 8) =
           *(ushort *)((long)piVar12 + lVar7 + 8) ^ (ushort)((uint)iVar4 >> 0x10);
      *(ushort *)((long)piVar12 + lVar7 + 10) =
           *(ushort *)((long)piVar12 + lVar7 + 10) ^ (ushort)((uint)iVar13 >> 0x10);
      lVar7 = lVar8;
    } while (lVar8 != 0x160);
    puVar10 = *(ushort **)(param_1 + 8);
    if (puVar10 != (ushort *)0x0) {
      iVar13 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar4 = iVar13 * 0x41c64e6d + 0x6073;
      *puVar10 = *puVar10 ^ (ushort)((uint)iVar13 >> 0x10);
      iVar13 = iVar4 * 0x41c64e6d + 0x6073;
      puVar10[1] = puVar10[1] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar13 * 0x41c64e6d + 0x6073;
      puVar10[2] = puVar10[2] ^ (ushort)((uint)iVar13 >> 0x10);
      iVar13 = iVar4 * 0x41c64e6d + 0x6073;
      puVar10[3] = puVar10[3] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar13 * 0x41c64e6d + 0x6073;
      puVar10[4] = puVar10[4] ^ (ushort)((uint)iVar13 >> 0x10);
      iVar13 = iVar4 * 0x41c64e6d + 0x6073;
      puVar10[5] = puVar10[5] ^ (ushort)((uint)iVar4 >> 0x10);
      puVar10[6] = puVar10[6] ^ (ushort)((uint)iVar13 >> 0x10);
      puVar10[7] = puVar10[7] ^ (ushort)((uint)(iVar13 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    lVar8 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
    lVar7 = 0;
    sVar11 = 0;
    do {
      psVar2 = (short *)(lVar8 + 8 + lVar7);
      lVar7 = lVar7 + 8;
      sVar11 = psVar2[3] + psVar2[2] + psVar2[1] + *psVar2 + sVar11;
    } while (lVar7 != 0x160);
    if (*(short *)(lVar8 + 6) != sVar11) {
      *(ushort *)(lVar8 + 4) = *(ushort *)(lVar8 + 4) | 4;
    }
  }
  puVar9 = *(uint **)(param_1 + 0x10);
  uVar3 = (ushort)puVar9[1];
  cVar5 = DAT_04407a00._4_1_;
  if ((uVar3 >> 2 & 1) == 0) {
    cVar5 = (char)puVar9[(ulong)(byte)(&DAT_03a84e59)[((ulong)(*puVar9 >> 0xd) & 0x1f) * 4] * 0x16 +
                         9];
  }
  if (cVar5 == '\0') {
    if ((uVar3 >> 2 & 1) == 0) {
      puVar9 = puVar9 + (ulong)(byte)(&DAT_03a84e5a)[((ulong)(*puVar9 >> 0xd) & 0x1f) * 4] * 0x16 +
                        2;
    }
    else {
      puVar9 = (uint *)0x4407bb0;
    }
    *(undefined1 *)((long)puVar9 + 0x1a) = param_2;
    cVar5 = *(char *)(param_1 + 0x18);
  }
  else {
    if ((uVar3 >> 2 & 1) == 0) {
      puVar9 = puVar9 + (ulong)(byte)(&DAT_03a84e59)[((ulong)(*puVar9 >> 0xd) & 0x1f) * 4] * 0x16 +
                        2;
    }
    else {
      puVar9 = (uint *)0x4407b58;
    }
    *(undefined1 *)(puVar9 + 8) = param_2;
    cVar5 = *(char *)(param_1 + 0x18);
  }
  if ((cVar5 == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 != 0) {
      lVar8 = 0;
      sVar11 = 0;
      do {
        psVar2 = (short *)(lVar7 + 8 + lVar8);
        lVar8 = lVar8 + 8;
        sVar11 = psVar2[3] + psVar2[2] + psVar2[1] + *psVar2 + sVar11;
      } while (lVar8 != 0x160);
      *(short *)(lVar7 + 6) = sVar11;
      piVar12 = *(int **)(param_1 + 0x10);
      iVar13 = *piVar12;
      lVar7 = 0;
      do {
        lVar8 = lVar7 + 4;
        iVar4 = iVar13 * 0x41c64e6d + 0x6073;
        iVar13 = iVar4 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar12 + lVar7 + 8) =
             *(ushort *)((long)piVar12 + lVar7 + 8) ^ (ushort)((uint)iVar4 >> 0x10);
        *(ushort *)((long)piVar12 + lVar7 + 10) =
             *(ushort *)((long)piVar12 + lVar7 + 10) ^ (ushort)((uint)iVar13 >> 0x10);
        lVar7 = lVar8;
      } while (lVar8 != 0x160);
    }
    puVar10 = *(ushort **)(param_1 + 8);
    if ((puVar10 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
      iVar13 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar4 = iVar13 * 0x41c64e6d + 0x6073;
      *puVar10 = *puVar10 ^ (ushort)((uint)iVar13 >> 0x10);
      iVar13 = iVar4 * 0x41c64e6d + 0x6073;
      puVar10[1] = puVar10[1] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar13 * 0x41c64e6d + 0x6073;
      puVar10[2] = puVar10[2] ^ (ushort)((uint)iVar13 >> 0x10);
      iVar13 = iVar4 * 0x41c64e6d + 0x6073;
      puVar10[3] = puVar10[3] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar13 * 0x41c64e6d + 0x6073;
      puVar10[4] = puVar10[4] ^ (ushort)((uint)iVar13 >> 0x10);
      iVar13 = iVar4 * 0x41c64e6d + 0x6073;
      puVar10[5] = puVar10[5] ^ (ushort)((uint)iVar4 >> 0x10);
      puVar10[6] = puVar10[6] ^ (ushort)((uint)iVar13 >> 0x10);
      puVar10[7] = puVar10[7] ^ (ushort)((uint)(iVar13 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
  return;
}


