/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c76158; name: FUN_02c76158
 */


undefined8 FUN_02c76158(long param_1,ushort *param_2)

{
  long *plVar1;
  short *psVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  ushort uVar10;
  ushort *puVar11;
  short sVar12;
  int *piVar13;
  int iVar14;
  undefined8 uVar15;
  
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
          if (cVar4 == '\0') goto LAB_02c761bc;
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
LAB_02c761bc:
  if (*(char *)(param_1 + 0x18) != '\0') {
    piVar13 = *(int **)(param_1 + 0x10);
    iVar14 = *piVar13;
    lVar6 = 0;
    do {
      lVar7 = lVar6 + 4;
      iVar3 = iVar14 * 0x41c64e6d + 0x6073;
      iVar14 = iVar3 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar13 + lVar6 + 8) =
           *(ushort *)((long)piVar13 + lVar6 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
      *(ushort *)((long)piVar13 + lVar6 + 10) =
           *(ushort *)((long)piVar13 + lVar6 + 10) ^ (ushort)((uint)iVar14 >> 0x10);
      lVar6 = lVar7;
    } while (lVar7 != 0x160);
    puVar11 = *(ushort **)(param_1 + 8);
    if (puVar11 != (ushort *)0x0) {
      iVar14 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar3 = iVar14 * 0x41c64e6d + 0x6073;
      *puVar11 = *puVar11 ^ (ushort)((uint)iVar14 >> 0x10);
      iVar14 = iVar3 * 0x41c64e6d + 0x6073;
      puVar11[1] = puVar11[1] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar14 * 0x41c64e6d + 0x6073;
      puVar11[2] = puVar11[2] ^ (ushort)((uint)iVar14 >> 0x10);
      iVar14 = iVar3 * 0x41c64e6d + 0x6073;
      puVar11[3] = puVar11[3] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar14 * 0x41c64e6d + 0x6073;
      puVar11[4] = puVar11[4] ^ (ushort)((uint)iVar14 >> 0x10);
      iVar14 = iVar3 * 0x41c64e6d + 0x6073;
      puVar11[5] = puVar11[5] ^ (ushort)((uint)iVar3 >> 0x10);
      puVar11[6] = puVar11[6] ^ (ushort)((uint)iVar14 >> 0x10);
      puVar11[7] = puVar11[7] ^ (ushort)((uint)(iVar14 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    lVar7 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
    lVar6 = 0;
    sVar12 = 0;
    do {
      psVar2 = (short *)(lVar7 + 8 + lVar6);
      lVar6 = lVar6 + 8;
      sVar12 = psVar2[3] + psVar2[2] + psVar2[1] + *psVar2 + sVar12;
    } while (lVar6 != 0x160);
    if (*(short *)(lVar7 + 6) != sVar12) {
      *(ushort *)(lVar7 + 4) = *(ushort *)(lVar7 + 4) | 4;
    }
  }
  puVar8 = *(uint **)(param_1 + 0x10);
  if (((byte)puVar8[1] >> 2 & 1) == 0) {
    puVar9 = puVar8 + (ulong)(byte)(&DAT_03a84e5a)[((ulong)(*puVar8 >> 0xd) & 0x1f) * 4] * 0x16 + 2;
  }
  else {
    puVar9 = (uint *)&DAT_04407a40;
  }
  uVar10 = (ushort)*puVar9;
  if (uVar10 == *param_2) {
    do {
      if (uVar10 == 0x10) {
        puVar11 = (ushort *)((long)puVar9 + 2);
        lVar6 = (ulong)*puVar11 * 2 + 4;
        puVar9 = (uint *)((long)puVar9 + lVar6);
        while (lVar6 != 0) {
          param_2 = param_2 + 1;
          lVar6 = lVar6 + -2;
          uVar10 = *puVar11;
          puVar11 = puVar11 + 1;
          if (uVar10 != *param_2) goto LAB_02c7639c;
        }
        uVar10 = (ushort)*puVar9;
      }
      if (uVar10 == 0) {
        uVar15 = 1;
        cVar4 = *(char *)(param_1 + 0x18);
        goto joined_r0x02c7650c;
      }
      puVar9 = (uint *)((long)puVar9 + 2);
      uVar10 = *(ushort *)puVar9;
      param_2 = param_2 + 1;
    } while (uVar10 == *param_2);
  }
LAB_02c7639c:
  uVar15 = 0;
  cVar4 = *(char *)(param_1 + 0x18);
joined_r0x02c7650c:
  if ((cVar4 == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    if (puVar8 != (uint *)0x0) {
      lVar6 = 0;
      sVar12 = 0;
      do {
        psVar2 = (short *)((long)puVar8 + lVar6 + 8);
        lVar6 = lVar6 + 8;
        sVar12 = psVar2[3] + psVar2[2] + psVar2[1] + *psVar2 + sVar12;
      } while (lVar6 != 0x160);
      *(short *)((long)puVar8 + 6) = sVar12;
      piVar13 = *(int **)(param_1 + 0x10);
      iVar14 = *piVar13;
      lVar6 = 0;
      do {
        lVar7 = lVar6 + 4;
        iVar3 = iVar14 * 0x41c64e6d + 0x6073;
        iVar14 = iVar3 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar13 + lVar6 + 8) =
             *(ushort *)((long)piVar13 + lVar6 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
        *(ushort *)((long)piVar13 + lVar6 + 10) =
             *(ushort *)((long)piVar13 + lVar6 + 10) ^ (ushort)((uint)iVar14 >> 0x10);
        lVar6 = lVar7;
      } while (lVar7 != 0x160);
    }
    puVar11 = *(ushort **)(param_1 + 8);
    if ((puVar11 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
      iVar14 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar3 = iVar14 * 0x41c64e6d + 0x6073;
      *puVar11 = *puVar11 ^ (ushort)((uint)iVar14 >> 0x10);
      iVar14 = iVar3 * 0x41c64e6d + 0x6073;
      puVar11[1] = puVar11[1] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar14 * 0x41c64e6d + 0x6073;
      puVar11[2] = puVar11[2] ^ (ushort)((uint)iVar14 >> 0x10);
      iVar14 = iVar3 * 0x41c64e6d + 0x6073;
      puVar11[3] = puVar11[3] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar14 * 0x41c64e6d + 0x6073;
      puVar11[4] = puVar11[4] ^ (ushort)((uint)iVar14 >> 0x10);
      iVar14 = iVar3 * 0x41c64e6d + 0x6073;
      puVar11[5] = puVar11[5] ^ (ushort)((uint)iVar3 >> 0x10);
      puVar11[6] = puVar11[6] ^ (ushort)((uint)iVar14 >> 0x10);
      puVar11[7] = puVar11[7] ^ (ushort)((uint)(iVar14 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
  return uVar15;
}


