/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c311f0; name: FUN_02c311f0
 */


void FUN_02c311f0(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  int *piVar3;
  ushort uVar4;
  short sVar5;
  ushort *puVar6;
  bool bVar7;
  long *plVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  short *psVar12;
  long lVar13;
  ushort *puVar14;
  ushort *puVar15;
  ushort *puVar16;
  uint uVar17;
  ushort *puVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined1 auStack_38 [4];
  int local_34;
  
  uVar4 = *(ushort *)(param_2 + 0x7a);
  *(uint *)((long)param_1 + 0xb4) = (uint)uVar4;
  uVar11 = (uint)uVar4;
  if (uVar4 < 0x200) {
    uVar11 = 0x1ff;
  }
  local_34 = uVar11 + 1;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  plVar8 = (long *)param_1[0xf];
  if (plVar8 == (long *)0x0) {
LAB_02c31268:
    lVar20 = FUN_010c858c(auStack_38,param_1[1],&local_34);
    if (lVar20 != 0) {
      piVar3 = (int *)(lVar20 + 0x50);
      do {
        cVar9 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = *piVar3 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    plVar8 = (long *)param_1[0xf];
    param_1[0xf] = 0;
    if (plVar8 == (long *)0x0) {
LAB_02c312b8:
      param_1[0xf] = lVar20;
    }
    else {
      plVar2 = plVar8 + 10;
      do {
        iVar10 = (int)*plVar2 + -1;
        cVar9 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = iVar10;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar10 != 0) goto LAB_02c312b8;
      (**(code **)(*plVar8 + 0x10))();
      param_1[0xf] = lVar20;
    }
    if (lVar20 == 0) {
      cVar9 = '\x01';
      goto LAB_02c31468;
    }
  }
  else {
    if (uVar11 < *(ushort *)(plVar8 + 0xf)) {
LAB_02c31260:
      lVar20 = param_1[0xf];
    }
    else {
      plVar2 = plVar8 + 10;
      param_1[0xf] = 0;
      do {
        iVar10 = (int)*plVar2 + -1;
        cVar9 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = iVar10;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar10 != 0) goto LAB_02c31260;
      (**(code **)(*plVar8 + 0x10))();
      lVar20 = param_1[0xf];
    }
    if (lVar20 == 0) goto LAB_02c31268;
  }
  if (*(char *)(lVar20 + 0x7c) != '\0') {
    uVar11 = (uint)*(ushort *)(lVar20 + 0x78);
    if (*(ushort *)(lVar20 + 0x78) == 0) {
      iVar10 = 0;
    }
    else {
      puVar15 = *(ushort **)(param_2 + 0x58);
      iVar10 = 0;
      puVar14 = *(ushort **)(lVar20 + 0x58);
      do {
        while( true ) {
          uVar4 = *puVar15;
          *puVar14 = uVar4;
          if (uVar4 == 0x10) break;
          if (uVar4 == 0) goto LAB_02c313fc;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
          iVar10 = iVar10 + 1;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_02c313e8;
        }
        uVar4 = puVar15[1];
        uVar1 = uVar4 + 2;
        bVar7 = uVar11 < uVar1;
        uVar11 = uVar11 - uVar1;
        if (bVar7 || uVar11 == 0) {
          *puVar14 = 0;
          goto LAB_02c313fc;
        }
        uVar17 = uVar4 + 1;
        uVar19 = uVar17 & 7;
        puVar18 = puVar14 + 1;
        *puVar18 = uVar4;
        puVar6 = puVar15 + 1;
        puVar16 = puVar15;
        if (uVar19 != 0) {
          lVar13 = 0;
          do {
            lVar22 = lVar13;
            uVar17 = uVar17 - 1;
            uVar19 = uVar19 - 1;
            *(undefined2 *)((long)puVar14 + lVar22 + 4) =
                 *(undefined2 *)((long)puVar15 + lVar22 + 4);
            lVar13 = lVar22 + 2;
          } while (uVar19 != 0);
          puVar18 = (ushort *)((long)puVar14 + lVar22 + 4);
          puVar16 = (ushort *)((long)puVar15 + lVar22 + 2);
          puVar6 = puVar16 + 1;
          puVar14 = puVar18;
        }
        puVar15 = puVar6;
        if (6 < uVar4) {
          puVar14 = puVar18;
          do {
            puVar14[1] = puVar16[2];
            puVar14[2] = puVar15[2];
            puVar14[3] = puVar15[3];
            puVar14[4] = puVar15[4];
            puVar14[5] = puVar15[5];
            puVar14[6] = puVar15[6];
            puVar16 = puVar15 + 7;
            puVar14[7] = *puVar16;
            puVar15 = puVar15 + 8;
            uVar17 = uVar17 - 8;
            puVar14 = puVar14 + 8;
            *puVar14 = *puVar15;
          } while (uVar17 != 0);
        }
        iVar10 = uVar1 + iVar10;
      } while (uVar11 != 0);
LAB_02c313e8:
      if (iVar10 != 0) {
        iVar10 = iVar10 + -1;
        puVar14[-1] = 0;
      }
    }
LAB_02c313fc:
    *(short *)(lVar20 + 0x7a) = (short)iVar10;
    lVar20 = param_1[0xf];
  }
  psVar12 = *(short **)(lVar20 + 0x58);
  cVar9 = '\x01';
  while( true ) {
    while( true ) {
      for (; sVar5 = *psVar12, sVar5 == 10; psVar12 = psVar12 + 1) {
        cVar9 = cVar9 + '\x01';
      }
      if (sVar5 != 0x10) break;
      psVar12 = psVar12 + (ulong)(ushort)psVar12[1] + 2;
    }
    if (sVar5 == 0) break;
    psVar12 = psVar12 + 1;
  }
LAB_02c31468:
  *(char *)((long)param_1 + 0x99) = cVar9;
  *(undefined4 *)(param_1 + 0x15) = 4;
  *(undefined1 *)((long)param_1 + 0x9b) = 0;
  *(undefined1 *)((long)param_1 + 0xa3) = 0;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  if ((char)param_1[0x13] != '\0') {
    lVar20 = 0;
    uVar21 = 0;
    do {
      lVar13 = param_1[0xb] + lVar20;
      *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(lVar13 + 0x10);
      *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(lVar13 + 0x18);
      *(char *)(param_1[0xb] + lVar20 + 0x92) = (char)uVar21;
      plVar8 = (long *)(param_1[0xb] + lVar20);
      lVar13 = *plVar8;
      lVar22 = plVar8[3];
      *(long *)(lVar13 + 0x30) = plVar8[2];
      *(int *)(lVar13 + 0x38) = (int)lVar22;
      *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) | 0x10;
      (**(code **)(**(long **)(param_1[0xb] + lVar20) + 0x120))
                (*(long **)(param_1[0xb] + lVar20),&DAT_03a84812,0);
      uVar21 = uVar21 + 1;
      *(undefined1 *)(*(long *)(param_1[0xb] + lVar20) + 0x59) = 0xff;
      lVar20 = lVar20 + 0xa0;
    } while (uVar21 < *(byte *)(param_1 + 0x13));
  }
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *(undefined1 *)((long)param_1 + 0x9f) = 0;
  FUN_02c31fac(param_1);
  (**(code **)(*param_1 + 0x80))(param_1);
  return;
}


