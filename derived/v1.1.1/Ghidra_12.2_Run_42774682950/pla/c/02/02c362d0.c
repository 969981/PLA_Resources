/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c362d0; name: FUN_02c362d0
 */


void FUN_02c362d0(long param_1,uint param_2,undefined8 param_3,undefined4 param_4,uint param_5,
                 int param_6)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  ushort uVar4;
  char cVar5;
  ushort *puVar6;
  bool bVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  ushort *puVar15;
  ushort *puVar16;
  ushort *puVar17;
  uint uVar18;
  ushort *puVar19;
  long *local_48;
  
  plVar9 = (long *)FUN_00d1603c();
  lVar10 = *plVar9;
  *(long *)PTR_DAT_0437b198 = lVar10;
  uVar3 = *(undefined4 *)(lVar10 + 0x238);
  plVar9 = *(long **)(param_1 + 0x88);
  local_48 = plVar9;
  if (plVar9 == (long *)0x0) {
    FUN_02c2d7bc(&local_48,param_3,param_4,uVar3);
  }
  else {
    plVar2 = plVar9 + 10;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_02c2d7bc(&local_48,param_3,param_4,uVar3);
    if (plVar9 != (long *)0x0) {
      plVar2 = plVar9 + 10;
      do {
        iVar11 = (int)*plVar2 + -1;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = iVar11;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (param_2 < *(uint *)(param_1 + 0x90)) {
    lVar14 = *(long *)(param_1 + 0x88);
    lVar10 = ((ulong)param_2 + (ulong)param_2 * 2) * 8;
    *(ulong *)(*(long *)(param_1 + 0x98) + lVar10 + 8) =
         (ulong)(uint)(param_6 << 0x12) & 0x1c0000 | (ulong)(param_5 & 3);
    lVar12 = *(long *)(param_1 + 0x98);
    lVar10 = *(long *)(lVar12 + lVar10);
    if (*(char *)(lVar10 + 0x7c) != '\0') {
      uVar13 = (uint)*(ushort *)(lVar10 + 0x78);
      if (*(ushort *)(lVar10 + 0x78) == 0) {
        iVar11 = 0;
      }
      else {
        puVar16 = *(ushort **)(lVar14 + 0x58);
        iVar11 = 0;
        puVar15 = *(ushort **)(lVar10 + 0x58);
        do {
          while( true ) {
            uVar4 = *puVar16;
            *puVar15 = uVar4;
            if (uVar4 == 0x10) break;
            if (uVar4 == 0) goto LAB_02c364e4;
            puVar15 = puVar15 + 1;
            puVar16 = puVar16 + 1;
            iVar11 = iVar11 + 1;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_02c364d0;
          }
          uVar4 = puVar16[1];
          uVar1 = uVar4 + 2;
          bVar7 = uVar13 < uVar1;
          uVar13 = uVar13 - uVar1;
          if (bVar7 || uVar13 == 0) {
            *puVar15 = 0;
            goto LAB_02c364e4;
          }
          uVar18 = uVar4 + 1;
          uVar8 = uVar18 & 7;
          puVar19 = puVar15 + 1;
          *puVar19 = uVar4;
          puVar6 = puVar16 + 1;
          puVar17 = puVar16;
          if (uVar8 != 0) {
            lVar12 = 0;
            do {
              lVar14 = lVar12;
              uVar18 = uVar18 - 1;
              uVar8 = uVar8 - 1;
              *(undefined2 *)((long)puVar15 + lVar14 + 4) =
                   *(undefined2 *)((long)puVar16 + lVar14 + 4);
              lVar12 = lVar14 + 2;
            } while (uVar8 != 0);
            puVar19 = (ushort *)((long)puVar15 + lVar14 + 4);
            puVar17 = (ushort *)((long)puVar16 + lVar14 + 2);
            puVar6 = puVar17 + 1;
            puVar15 = puVar19;
          }
          puVar16 = puVar6;
          if (6 < uVar4) {
            puVar15 = puVar19;
            do {
              puVar15[1] = puVar17[2];
              puVar15[2] = puVar16[2];
              puVar15[3] = puVar16[3];
              puVar15[4] = puVar16[4];
              puVar15[5] = puVar16[5];
              puVar15[6] = puVar16[6];
              puVar17 = puVar16 + 7;
              puVar15[7] = *puVar17;
              puVar16 = puVar16 + 8;
              uVar18 = uVar18 - 8;
              puVar15 = puVar15 + 8;
              *puVar15 = *puVar16;
            } while (uVar18 != 0);
          }
          iVar11 = uVar1 + iVar11;
        } while (uVar13 != 0);
LAB_02c364d0:
        if (iVar11 != 0) {
          iVar11 = iVar11 + -1;
          puVar15[-1] = 0;
        }
      }
LAB_02c364e4:
      *(short *)(lVar10 + 0x7a) = (short)iVar11;
      lVar12 = *(long *)(param_1 + 0x98);
    }
    lVar10 = (ulong)param_2 * 0x18;
    *(undefined2 *)(lVar12 + lVar10 + 0x10) = 0;
    lVar10 = *(long *)(param_1 + 0x98) + lVar10;
    *(ushort *)(lVar10 + 0x12) = *(ushort *)(lVar10 + 0x12) & 0xfffe;
  }
  return;
}


