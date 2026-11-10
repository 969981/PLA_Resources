/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c71918; name: FUN_02c71918
 */


void FUN_02c71918(long param_1,ushort *param_2,uint param_3)

{
  uint uVar1;
  long *plVar2;
  short *psVar3;
  ushort uVar4;
  int iVar5;
  char cVar6;
  uint *puVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  ushort *puVar12;
  uint *puVar13;
  short sVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  
  lVar9 = nn::os::GetCurrentThread();
  plVar2 = (long *)(param_1 + 0x30);
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24));
        while (*plVar2 == 0) {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_02c71980;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_02c71980:
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
    puVar12 = *(ushort **)(param_1 + 8);
    if (puVar12 != (ushort *)0x0) {
      iVar16 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar5 = iVar16 * 0x41c64e6d + 0x6073;
      *puVar12 = *puVar12 ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar5 * 0x41c64e6d + 0x6073;
      puVar12[1] = puVar12[1] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar16 * 0x41c64e6d + 0x6073;
      puVar12[2] = puVar12[2] ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar5 * 0x41c64e6d + 0x6073;
      puVar12[3] = puVar12[3] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar16 * 0x41c64e6d + 0x6073;
      puVar12[4] = puVar12[4] ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar5 * 0x41c64e6d + 0x6073;
      puVar12[5] = puVar12[5] ^ (ushort)((uint)iVar5 >> 0x10);
      puVar12[6] = puVar12[6] ^ (ushort)((uint)iVar16 >> 0x10);
      puVar12[7] = puVar12[7] ^ (ushort)((uint)(iVar16 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    lVar10 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
    lVar9 = 0;
    sVar14 = 0;
    do {
      psVar3 = (short *)(lVar10 + 8 + lVar9);
      lVar9 = lVar9 + 8;
      sVar14 = psVar3[3] + psVar3[2] + psVar3[1] + *psVar3 + sVar14;
    } while (lVar9 != 0x160);
    if (*(short *)(lVar10 + 6) != sVar14) {
      *(ushort *)(lVar10 + 4) = *(ushort *)(lVar10 + 4) | 4;
    }
  }
  puVar11 = *(uint **)(param_1 + 0x10);
  if (((byte)puVar11[1] >> 2 & 1) == 0) {
    puVar11 = puVar11 + (ulong)(byte)(&DAT_03a84e5a)[((ulong)(*puVar11 >> 0xd) & 0x1f) * 4] * 0x16 +
                        2;
  }
  else {
    puVar11 = (uint *)&DAT_04407a40;
  }
  if (0xc < param_3) {
    param_3 = 0xd;
  }
  if (param_3 != 0) {
    iVar16 = 0;
    do {
      while( true ) {
        uVar4 = (ushort)*puVar11;
        *param_2 = uVar4;
        if (uVar4 == 0x10) break;
        if (uVar4 == 0) goto LAB_02c71c18;
        param_2 = param_2 + 1;
        puVar11 = (uint *)((long)puVar11 + 2);
        iVar16 = iVar16 + 1;
        param_3 = param_3 - 1;
        if (param_3 == 0) goto LAB_02c71c10;
      }
      uVar4 = *(ushort *)((long)puVar11 + 2);
      uVar1 = uVar4 + 2;
      bVar8 = param_3 < uVar1;
      param_3 = param_3 - uVar1;
      if (bVar8 || param_3 == 0) {
        *param_2 = 0;
        cVar6 = *(char *)(param_1 + 0x18);
        goto joined_r0x02c71d64;
      }
      uVar17 = uVar4 + 1;
      uVar18 = uVar17 & 7;
      puVar12 = param_2 + 1;
      *puVar12 = uVar4;
      puVar7 = (uint *)((long)puVar11 + 2);
      puVar13 = puVar11;
      if (uVar18 != 0) {
        lVar9 = 0;
        do {
          lVar10 = lVar9;
          uVar17 = uVar17 - 1;
          uVar18 = uVar18 - 1;
          *(undefined2 *)((long)param_2 + lVar10 + 4) = *(undefined2 *)((long)puVar11 + lVar10 + 4);
          lVar9 = lVar10 + 2;
        } while (uVar18 != 0);
        puVar12 = (ushort *)((long)param_2 + lVar10 + 4);
        puVar13 = (uint *)((long)puVar11 + lVar10 + 2);
        puVar7 = (uint *)((long)puVar13 + 2);
        param_2 = puVar12;
      }
      puVar11 = puVar7;
      if (6 < uVar4) {
        param_2 = puVar12;
        do {
          param_2[1] = (ushort)puVar13[1];
          param_2[2] = (ushort)puVar11[1];
          param_2[3] = *(ushort *)((long)puVar11 + 6);
          param_2[4] = (ushort)puVar11[2];
          param_2[5] = *(ushort *)((long)puVar11 + 10);
          param_2[6] = (ushort)puVar11[3];
          puVar13 = (uint *)((long)puVar11 + 0xe);
          param_2[7] = *(ushort *)puVar13;
          puVar11 = puVar11 + 4;
          uVar17 = uVar17 - 8;
          param_2 = param_2 + 8;
          *param_2 = (ushort)*puVar11;
        } while (uVar17 != 0);
      }
      iVar16 = uVar1 + iVar16;
    } while (param_3 != 0);
LAB_02c71c10:
    if (iVar16 != 0) {
      param_2[-1] = 0;
    }
  }
LAB_02c71c18:
  cVar6 = *(char *)(param_1 + 0x18);
joined_r0x02c71d64:
  if ((cVar6 == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 != 0) {
      lVar10 = 0;
      sVar14 = 0;
      do {
        psVar3 = (short *)(lVar9 + 8 + lVar10);
        lVar10 = lVar10 + 8;
        sVar14 = psVar3[3] + psVar3[2] + psVar3[1] + *psVar3 + sVar14;
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
    puVar12 = *(ushort **)(param_1 + 8);
    if ((puVar12 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
      iVar16 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar5 = iVar16 * 0x41c64e6d + 0x6073;
      *puVar12 = *puVar12 ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar5 * 0x41c64e6d + 0x6073;
      puVar12[1] = puVar12[1] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar16 * 0x41c64e6d + 0x6073;
      puVar12[2] = puVar12[2] ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar5 * 0x41c64e6d + 0x6073;
      puVar12[3] = puVar12[3] ^ (ushort)((uint)iVar5 >> 0x10);
      iVar5 = iVar16 * 0x41c64e6d + 0x6073;
      puVar12[4] = puVar12[4] ^ (ushort)((uint)iVar16 >> 0x10);
      iVar16 = iVar5 * 0x41c64e6d + 0x6073;
      puVar12[5] = puVar12[5] ^ (ushort)((uint)iVar5 >> 0x10);
      puVar12[6] = puVar12[6] ^ (ushort)((uint)iVar16 >> 0x10);
      puVar12[7] = puVar12[7] ^ (ushort)((uint)(iVar16 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
  return;
}


