/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c36550; name: FUN_02c36550
 */


void FUN_02c36550(long *param_1,uint param_2,long param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  ushort *puVar4;
  bool bVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  ushort uVar12;
  uint uVar13;
  ushort *puVar14;
  long lVar15;
  ushort *puVar16;
  ulong uVar17;
  ushort *puVar18;
  ushort *puVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  long *local_48;
  
  lVar10 = param_1[0xd];
  if (*(char *)(lVar10 + 0x7c) != '\0') {
    uVar13 = (uint)*(ushort *)(lVar10 + 0x78);
    if (*(ushort *)(lVar10 + 0x78) == 0) {
      iVar11 = 0;
    }
    else {
      puVar18 = *(ushort **)(param_3 + 0x58);
      iVar11 = 0;
      puVar16 = *(ushort **)(lVar10 + 0x58);
      do {
        while( true ) {
          uVar12 = *puVar18;
          *puVar16 = uVar12;
          if (uVar12 == 0x10) break;
          if (uVar12 == 0) goto LAB_02c366b4;
          puVar16 = puVar16 + 1;
          puVar18 = puVar18 + 1;
          iVar11 = iVar11 + 1;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_02c366a0;
        }
        uVar12 = puVar18[1];
        uVar1 = uVar12 + 2;
        bVar5 = uVar13 < uVar1;
        uVar13 = uVar13 - uVar1;
        if (bVar5 || uVar13 == 0) {
          *puVar16 = 0;
          goto LAB_02c366b4;
        }
        uVar20 = uVar12 + 1;
        uVar21 = uVar20 & 7;
        puVar14 = puVar16 + 1;
        *puVar14 = uVar12;
        puVar4 = puVar18 + 1;
        puVar19 = puVar18;
        if (uVar21 != 0) {
          lVar22 = 0;
          do {
            lVar15 = lVar22;
            uVar20 = uVar20 - 1;
            uVar21 = uVar21 - 1;
            *(undefined2 *)((long)puVar16 + lVar15 + 4) =
                 *(undefined2 *)((long)puVar18 + lVar15 + 4);
            lVar22 = lVar15 + 2;
          } while (uVar21 != 0);
          puVar14 = (ushort *)((long)puVar16 + lVar15 + 4);
          puVar19 = (ushort *)((long)puVar18 + lVar15 + 2);
          puVar4 = puVar19 + 1;
          puVar16 = puVar14;
        }
        puVar18 = puVar4;
        if (6 < uVar12) {
          puVar16 = puVar14;
          do {
            puVar16[1] = puVar19[2];
            puVar16[2] = puVar18[2];
            puVar16[3] = puVar18[3];
            puVar16[4] = puVar18[4];
            puVar16[5] = puVar18[5];
            puVar16[6] = puVar18[6];
            puVar19 = puVar18 + 7;
            puVar16[7] = *puVar19;
            puVar18 = puVar18 + 8;
            uVar20 = uVar20 - 8;
            puVar16 = puVar16 + 8;
            *puVar16 = *puVar18;
          } while (uVar20 != 0);
        }
        iVar11 = uVar1 + iVar11;
      } while (uVar13 != 0);
LAB_02c366a0:
      if (iVar11 != 0) {
        iVar11 = iVar11 + -1;
        puVar16[-1] = 0;
      }
    }
LAB_02c366b4:
    *(short *)(lVar10 + 0x7a) = (short)iVar11;
  }
  puVar3 = PTR_DAT_0437b198;
  if (param_4 == 0) {
    uVar23 = 0;
  }
  else if (param_4 == 1) {
    uVar23 = 1;
  }
  else {
    plVar7 = (long *)FUN_00d1603c();
    lVar10 = *plVar7;
    *(long *)puVar3 = lVar10;
    uVar23 = (ulong)(*(int *)(lVar10 + 0x238) == 5) << 1;
  }
  plVar7 = (long *)FUN_00d1603c();
  lVar10 = *plVar7;
  *(long *)puVar3 = lVar10;
  uVar6 = *(undefined4 *)(lVar10 + 0x238);
  plVar7 = (long *)param_1[0x11];
  local_48 = plVar7;
  if (plVar7 == (long *)0x0) {
    FUN_02c2d7bc(&local_48,param_1[0xd],param_5,uVar6);
  }
  else {
    plVar9 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_02c2d7bc(&local_48,param_1[0xd],param_5,uVar6);
    if (plVar7 != (long *)0x0) {
      plVar9 = plVar7 + 10;
      do {
        iVar11 = (int)*plVar9 + -1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = iVar11;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  lVar10 = param_1[0x11];
  plVar7 = (long *)param_1[0xd];
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar22 = param_1[0xe];
  uVar6 = (**(code **)(*param_1 + 0x58))(param_1);
  uVar8 = (**(code **)(*param_1 + 0x50))(param_1,lVar22,uVar6);
  plVar9 = (long *)FUN_00d1603c();
  lVar22 = *plVar9;
  *(long *)puVar3 = lVar22;
  if (*(int *)(lVar22 + 0x238) - 2U < 5) {
    if (*(char *)((long)plVar7 + 0x7c) != '\0') {
      puVar16 = (ushort *)plVar7[0xb];
      puVar18 = *(ushort **)(param_1[0xe] + 0x58);
      uVar12 = *puVar16;
      if (uVar12 == *puVar18) {
        do {
          if (uVar12 == 0x10) {
            puVar14 = puVar16 + 1;
            uVar17 = (ulong)*puVar14;
            lVar22 = uVar17 * 2 + 4;
            puVar16 = puVar16 + uVar17 + 2;
            while (lVar22 != 0) {
              puVar18 = puVar18 + 1;
              lVar22 = lVar22 + -2;
              uVar12 = *puVar14;
              puVar14 = puVar14 + 1;
              if (uVar12 != *puVar18) goto LAB_02c36840;
            }
            uVar12 = *puVar16;
          }
          if (uVar12 == 0) {
            uVar23 = uVar8 & 0x1f;
            goto LAB_02c36844;
          }
          puVar16 = puVar16 + 1;
          uVar12 = *puVar16;
          puVar18 = puVar18 + 1;
        } while (uVar12 == *puVar18);
      }
    }
LAB_02c36840:
    uVar23 = uVar23 | 0x200;
  }
LAB_02c36844:
  if (param_2 < *(uint *)(param_1 + 0x12)) {
    lVar22 = ((ulong)param_2 + (ulong)param_2 * 2) * 8;
    *(ulong *)(param_1[0x13] + lVar22 + 8) = uVar23;
    lVar15 = param_1[0x13];
    lVar22 = *(long *)(lVar15 + lVar22);
    if (*(char *)(lVar22 + 0x7c) != '\0') {
      uVar13 = (uint)*(ushort *)(lVar22 + 0x78);
      if (*(ushort *)(lVar22 + 0x78) == 0) {
        iVar11 = 0;
      }
      else {
        puVar18 = *(ushort **)(lVar10 + 0x58);
        iVar11 = 0;
        puVar16 = *(ushort **)(lVar22 + 0x58);
        do {
          while( true ) {
            uVar12 = *puVar18;
            *puVar16 = uVar12;
            if (uVar12 == 0x10) break;
            if (uVar12 == 0) goto LAB_02c369ac;
            puVar16 = puVar16 + 1;
            puVar18 = puVar18 + 1;
            iVar11 = iVar11 + 1;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_02c36998;
          }
          uVar12 = puVar18[1];
          uVar1 = uVar12 + 2;
          bVar5 = uVar13 < uVar1;
          uVar13 = uVar13 - uVar1;
          if (bVar5 || uVar13 == 0) {
            *puVar16 = 0;
            goto LAB_02c369ac;
          }
          uVar20 = uVar12 + 1;
          uVar21 = uVar20 & 7;
          puVar14 = puVar16 + 1;
          *puVar14 = uVar12;
          puVar4 = puVar18 + 1;
          puVar19 = puVar18;
          if (uVar21 != 0) {
            lVar10 = 0;
            do {
              lVar15 = lVar10;
              uVar20 = uVar20 - 1;
              uVar21 = uVar21 - 1;
              *(undefined2 *)((long)puVar16 + lVar15 + 4) =
                   *(undefined2 *)((long)puVar18 + lVar15 + 4);
              lVar10 = lVar15 + 2;
            } while (uVar21 != 0);
            puVar14 = (ushort *)((long)puVar16 + lVar15 + 4);
            puVar19 = (ushort *)((long)puVar18 + lVar15 + 2);
            puVar4 = puVar19 + 1;
            puVar16 = puVar14;
          }
          puVar18 = puVar4;
          if (6 < uVar12) {
            puVar16 = puVar14;
            do {
              puVar16[1] = puVar19[2];
              puVar16[2] = puVar18[2];
              puVar16[3] = puVar18[3];
              puVar16[4] = puVar18[4];
              puVar16[5] = puVar18[5];
              puVar16[6] = puVar18[6];
              puVar19 = puVar18 + 7;
              puVar16[7] = *puVar19;
              puVar18 = puVar18 + 8;
              uVar20 = uVar20 - 8;
              puVar16 = puVar16 + 8;
              *puVar16 = *puVar18;
            } while (uVar20 != 0);
          }
          iVar11 = uVar1 + iVar11;
        } while (uVar13 != 0);
LAB_02c36998:
        if (iVar11 != 0) {
          iVar11 = iVar11 + -1;
          puVar16[-1] = 0;
        }
      }
LAB_02c369ac:
      *(short *)(lVar22 + 0x7a) = (short)iVar11;
      lVar15 = param_1[0x13];
    }
    lVar10 = (ulong)param_2 * 0x18;
    *(undefined2 *)(lVar15 + lVar10 + 0x10) = 0;
    lVar10 = param_1[0x13] + lVar10;
    *(ushort *)(lVar10 + 0x12) = *(ushort *)(lVar10 + 0x12) & 0xfffe;
  }
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar11 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar11;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02c36a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x10))(plVar7);
      return;
    }
  }
  return;
}


