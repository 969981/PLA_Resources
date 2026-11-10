/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b18f84; name: FUN_02b18f84
 */


ulong FUN_02b18f84(long param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  undefined4 uVar29;
  undefined1 auVar30 [16];
  long local_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  ulong local_78;
  
  uVar23 = *(undefined8 *)(param_1 + 0x58);
  lVar22 = *(long *)(*(long *)(param_2 + 8) + 0x270);
  lVar24 = lVar22 + (long)param_3 * 0x130;
  lVar21 = (long)param_3;
  uVar6 = FUN_02b1f8b0(uVar23,lVar24);
  if ((uVar6 & 0xff) == 0) {
    uVar6 = FUN_02b1fb34(uVar23,lVar24,lVar22 + lVar21 * 0x130 + 0x20);
  }
  lVar24 = (long)uVar6 >> 0x20;
  if (*(char *)(lVar22 + lVar21 * 0x130 + 0x70) != '\0') {
    lVar9 = *(long *)(param_1 + 0x58);
    uVar16 = (*(long *)(lVar9 + 0xa8) + *(long *)(lVar9 + 0xa0)) - 1;
    lVar10 = *(long *)(*(long *)(lVar9 + 0x68) + (uVar16 / 0x12) * 8);
    lVar17 = (uVar16 % 0x12) * 0xd8;
    lVar14 = lVar22 + lVar21 * 0x130;
    lVar9 = *(long *)(lVar10 + lVar17) + lVar24 * 0x1b0;
    *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)(lVar14 + 0x48);
    uVar23 = *(undefined8 *)(lVar14 + 0x60);
    uVar1 = *(undefined8 *)(lVar14 + 0x68);
    uVar2 = *(undefined8 *)(lVar14 + 0x58);
    *(undefined8 *)(lVar9 + 0x50) = *(undefined8 *)(lVar14 + 0x50);
    *(undefined8 *)(lVar9 + 0x58) = uVar2;
    *(undefined8 *)(lVar9 + 0x60) = uVar23;
    *(undefined8 *)(lVar9 + 0x68) = uVar1;
    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)(lVar14 + 0x40);
    *(undefined1 *)(*(long *)(lVar10 + lVar17) + lVar24 * 0x1b0 + 0x1a9) = 1;
  }
  lVar9 = lVar22 + lVar21 * 0x130;
  plVar25 = (long *)(lVar9 + 0x80);
  plVar11 = (long *)*plVar25;
  plVar27 = (long *)(lVar9 + 0x88);
  plVar28 = (long *)*plVar27;
  if (plVar11 != plVar28) {
    plVar18 = plVar28;
    plVar26 = plVar11;
    do {
      lVar9 = *(long *)(param_1 + 0x58);
      plVar19 = plVar11;
      if ((plVar11 != plVar18) && (*plVar11 != *plVar26)) {
        do {
          plVar19 = plVar19 + 4;
          if (plVar18 == plVar19) {
            plVar19 = plVar18;
            goto LAB_02b19130;
          }
        } while (*plVar19 != *plVar26);
      }
LAB_02b19130:
      piVar20 = *(int **)(lVar22 + lVar21 * 0x130 + 0x78);
      uVar29 = 0;
      uVar16 = 0xffffffff;
      if (plVar18 != plVar19) {
        uVar16 = (ulong)((long)plVar19 - (long)plVar11) >> 5 & 0xffffffff;
      }
      puVar12 = (uint *)((long)piVar20 + (ulong)*(ushort *)((long)piVar20 + (10 - (long)*piVar20)));
      puVar12 = (uint *)((long)puVar12 + uVar16 * 4 + (ulong)*puVar12 + 4);
      piVar20 = (int *)((long)puVar12 + (ulong)*puVar12);
      if (6 < *(ushort *)((long)piVar20 - (long)*piVar20)) {
        uVar16 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[3];
        uVar29 = 0;
        if (uVar16 != 0) {
          uVar29 = *(undefined4 *)((long)piVar20 + uVar16);
        }
      }
      uVar16 = (*(long *)(lVar9 + 0xa8) + *(long *)(lVar9 + 0xa0)) - 1;
      lVar9 = *(long *)(*(long *)(lVar9 + 0x68) + (uVar16 / 0x12) * 8);
      lVar10 = (uVar16 % 0x12) * 0xd8;
      puVar7 = (undefined4 *)FUN_00aef474(*(long *)(lVar9 + lVar10) + lVar24 * 0x1b0 + 0x70,plVar26)
      ;
      *puVar7 = uVar29;
      plVar26 = plVar26 + 4;
      *(undefined1 *)(*(long *)(lVar9 + lVar10) + lVar24 * 0x1b0 + 0x1a9) = 1;
      if (plVar26 == plVar28) break;
      plVar11 = (long *)*plVar25;
      plVar18 = (long *)*plVar27;
    } while( true );
  }
  lVar9 = lVar22 + lVar21 * 0x130;
  plVar25 = (long *)(lVar9 + 0xb8);
  plVar11 = (long *)*plVar25;
  plVar27 = (long *)(lVar9 + 0xc0);
  plVar28 = (long *)*plVar27;
  if (plVar11 != plVar28) {
    plVar18 = plVar28;
    plVar26 = plVar11;
    do {
      lVar9 = *(long *)(param_1 + 0x58);
      plVar19 = plVar11;
      if ((plVar11 != plVar18) && (*plVar11 != *plVar26)) {
        do {
          plVar19 = plVar19 + 4;
          if (plVar18 == plVar19) {
            plVar19 = plVar18;
            goto LAB_02b192a0;
          }
        } while (*plVar19 != *plVar26);
      }
LAB_02b192a0:
      piVar20 = *(int **)(lVar22 + lVar21 * 0x130 + 0x78);
      puVar12 = (uint *)((long)piVar20 + (ulong)*(ushort *)((long)piVar20 + (0xc - (long)*piVar20)))
      ;
      uVar16 = 0xffffffff;
      if (plVar18 != plVar19) {
        uVar16 = (ulong)((long)plVar19 - (long)plVar11) >> 5 & 0xffffffff;
      }
      puVar12 = (uint *)((long)puVar12 + uVar16 * 4 + (ulong)*puVar12 + 4);
      piVar20 = (int *)((long)puVar12 + (ulong)*puVar12);
      puVar8 = (undefined8 *)
               ((long)piVar20 + (ulong)*(ushort *)((long)piVar20 + (6 - (long)*piVar20)));
      uVar23 = *puVar8;
      uVar1 = puVar8[1];
      uVar16 = (*(long *)(lVar9 + 0xa8) + *(long *)(lVar9 + 0xa0)) - 1;
      lVar9 = *(long *)(*(long *)(lVar9 + 0x68) + (uVar16 / 0x12) * 8);
      lVar10 = (uVar16 % 0x12) * 0xd8;
      puVar8 = (undefined8 *)FUN_00aefbe4(*(long *)(lVar9 + lVar10) + lVar24 * 0x1b0 + 0xd8,plVar26)
      ;
      plVar26 = plVar26 + 4;
      puVar8[1] = uVar1;
      *puVar8 = uVar23;
      *(undefined1 *)(*(long *)(lVar9 + lVar10) + lVar24 * 0x1b0 + 0x1a9) = 1;
      if (plVar26 == plVar28) break;
      plVar11 = (long *)*plVar25;
      plVar18 = (long *)*plVar27;
    } while( true );
  }
  lVar22 = lVar22 + lVar21 * 0x130;
  plVar11 = (long *)(lVar22 + 0xf0);
  lVar9 = *plVar11;
  plVar25 = (long *)(lVar22 + 0xf8);
  if (*plVar25 != lVar9) {
    uVar16 = 0;
    lVar22 = *(long *)(*(long *)(param_2 + 8) + 0x2a8);
    do {
      lVar10 = *(long *)(param_1 + 0x58);
      lVar14 = *(long *)(param_1 + 0x60);
      lVar17 = *(long *)(*(long *)(*(long *)(lVar22 + lVar21 * 0x38) + uVar16 * 0x30 + 8) + 600);
      lVar17 = FUN_02b75c1c(lVar17,*(long *)(**(long **)(*(long *)(lVar17 + 0x80) + 0x28) + 0x60) +
                                   2);
      local_98 = lVar14;
      auVar30 = FUN_01b34908(&local_88,*(undefined8 *)(lVar14 + 8),&local_98);
      local_80 = auVar30._8_8_;
      plVar27 = auVar30._0_8_;
      if (plVar27 == (long *)0x0) {
        plVar28 = (long *)0x0;
      }
      else {
        plVar28 = plVar27 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar4) {
            *(int *)plVar28 = (int)*plVar28 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar28 = plVar27;
      }
      lVar13 = *(long *)(plVar28[0x13] + 0x58);
      lVar14 = *(long *)(lVar17 + 0x88);
      if (*(long *)(lVar17 + 0x80) == 0) {
        if (lVar14 != 0) {
          local_90 = *(undefined8 *)(lVar14 + 8);
          goto LAB_02b19480;
        }
        uVar15 = 0;
        local_88 = 0;
      }
      else {
        local_90 = *(undefined8 *)(*(long *)(lVar17 + 0x80) + 8);
        if (lVar14 == 0) {
          uVar23 = 0;
        }
        else {
LAB_02b19480:
          uVar23 = *(undefined8 *)(lVar14 + 0x10);
        }
        local_88 = *(ulong *)(lVar13 + 8);
        local_80 = *(undefined8 *)(lVar13 + 0x6098);
        local_78 = lVar13 + 0x10;
        auVar30 = FUN_02b94dac(*(undefined8 *)(lVar13 + 0x6140),&local_88,&local_90,1,uVar23);
        local_80 = auVar30._8_8_;
        local_88 = auVar30._0_8_ & 0xffffffffffffff00;
        uVar15 = auVar30._0_8_ & 0xff;
      }
      local_88 = local_88 | uVar15;
      local_78 = local_78 & 0xffffffffffffff00;
      FUN_02bc082c(plVar28 + 0xb,&local_88);
      *(undefined4 *)(plVar28 + 0x14) = 1;
      uVar15 = (*(long *)(lVar10 + 0xa8) + *(long *)(lVar10 + 0xa0)) - 1;
      plVar26 = (long *)(*(long *)(*(long *)(lVar10 + 0x68) + (uVar15 / 0x12) * 8) +
                        (uVar15 % 0x12) * 0xd8);
      plVar28 = (long *)FUN_02b21fc8(*plVar26 + lVar24 * 0x1b0 + 0x140,lVar9 + uVar16 * 0x20);
      if (plVar27 != (long *)0x0) {
        plVar18 = plVar27 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar4) {
            *(int *)plVar18 = (int)*plVar18 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar18 = (long *)*plVar28;
      *plVar28 = (long)plVar27;
      if (plVar18 != (long *)0x0) {
        plVar28 = plVar18 + 10;
        do {
          iVar5 = (int)*plVar28 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar4) {
            *(int *)plVar28 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar18 + 0x10))();
        }
      }
      *(undefined1 *)(*plVar26 + lVar24 * 0x1b0 + 0x1a9) = 1;
      if (plVar27 != (long *)0x0) {
        plVar28 = plVar27 + 10;
        do {
          iVar5 = (int)*plVar28 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar4) {
            *(int *)plVar28 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
        }
      }
      uVar16 = (ulong)((int)uVar16 + 1);
      lVar9 = *plVar11;
    } while (uVar16 < (ulong)(*plVar25 - lVar9 >> 5));
  }
  return uVar6;
}


