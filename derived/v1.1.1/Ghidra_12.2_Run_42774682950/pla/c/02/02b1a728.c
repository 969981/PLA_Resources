/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b1a728; name: FUN_02b1a728
 */


undefined8 FUN_02b1a728(double param_1,long param_2,ulong param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  float *pfVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined8 uVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  lVar12 = *(long *)(param_2 + 0x68);
  lVar14 = *(long *)(param_2 + 0x70);
  if (lVar12 == lVar14) {
    return 0;
  }
  if ((param_3 & 1) == 0) {
    if (*(double *)(param_2 + 0xd0) == param_1) {
      return 1;
    }
  }
  else {
    param_1 = *(double *)(param_2 + 0xd0) + param_1;
  }
  dVar25 = param_1 / *(double *)(param_2 + 0xd8);
  *(double *)(param_2 + 0xd0) = param_1;
  if (dVar25 < 1.0) {
    dVar26 = 1.0 - dVar25;
    cVar3 = *(char *)(lVar12 + 0x70);
    while( true ) {
      if (cVar3 != '\0') {
        uVar19 = *(undefined8 *)(lVar12 + 0x10);
        uVar21 = *(undefined8 *)(lVar12 + 0x40);
        lVar9 = *(long *)(param_2 + 0x58);
        uVar13 = (*(long *)(lVar9 + 0xa8) + *(long *)(lVar9 + 0xa0)) - 1;
        lVar11 = (uVar13 % 0x12) * 0xd8;
        lVar10 = *(long *)(*(long *)(lVar9 + 0x68) + (uVar13 / 0x12) * 8);
        lVar16 = (long)*(int *)(lVar12 + 4) * 0x1b0;
        lVar9 = *(long *)(lVar10 + lVar11) + lVar16;
        *(ulong *)(lVar9 + 0x48) =
             (ulong)(uint)(float)(dVar26 * (double)(float)*(undefined8 *)(lVar12 + 0x18) +
                                 dVar25 * (double)(float)*(undefined8 *)(lVar12 + 0x48));
        *(ulong *)(lVar9 + 0x40) =
             CONCAT44((float)(dVar26 * (double)(float)((ulong)uVar19 >> 0x20) +
                             dVar25 * (double)(float)((ulong)uVar21 >> 0x20)),
                      (float)(dVar26 * (double)(float)uVar19 + dVar25 * (double)(float)uVar21));
        *(undefined1 *)(*(long *)(lVar10 + lVar11) + lVar16 + 0x1a9) = 1;
        uStack_b8 = *(undefined8 *)(lVar12 + 0x28);
        local_c0 = *(undefined **)(lVar12 + 0x20);
        lVar10 = *(long *)(param_2 + 0x58);
        uStack_88 = *(undefined8 *)(lVar12 + 0x58);
        local_90 = *(undefined8 *)(lVar12 + 0x50);
        auVar20 = FUN_009c6b1c((float)dVar25,&local_c0,&local_90);
        uVar13 = (*(long *)(lVar10 + 0xa8) + *(long *)(lVar10 + 0xa0)) - 1;
        lVar9 = (uVar13 % 0x12) * 0xd8;
        lVar10 = *(long *)(*(long *)(lVar10 + 0x68) + (uVar13 / 0x12) * 8);
        lVar11 = (long)*(int *)(lVar12 + 4) * 0x1b0;
        *(undefined1 (*) [16])(*(long *)(lVar10 + lVar9) + lVar11 + 0x50) = auVar20;
        *(undefined1 *)(*(long *)(lVar10 + lVar9) + lVar11 + 0x1a9) = 1;
        uVar19 = *(undefined8 *)(lVar12 + 0x30);
        uVar21 = *(undefined8 *)(lVar12 + 0x60);
        lVar9 = *(long *)(param_2 + 0x58);
        uVar13 = (*(long *)(lVar9 + 0xa8) + *(long *)(lVar9 + 0xa0)) - 1;
        lVar11 = (uVar13 % 0x12) * 0xd8;
        lVar10 = *(long *)(*(long *)(lVar9 + 0x68) + (uVar13 / 0x12) * 8);
        lVar16 = (long)*(int *)(lVar12 + 4) * 0x1b0;
        lVar9 = *(long *)(lVar10 + lVar11) + lVar16;
        *(ulong *)(lVar9 + 0x68) =
             (ulong)(uint)(float)(dVar26 * (double)(float)*(undefined8 *)(lVar12 + 0x38) +
                                 dVar25 * (double)(float)*(undefined8 *)(lVar12 + 0x68));
        *(ulong *)(lVar9 + 0x60) =
             CONCAT44((float)(dVar26 * (double)(float)((ulong)uVar19 >> 0x20) +
                             dVar25 * (double)(float)((ulong)uVar21 >> 0x20)),
                      (float)(dVar26 * (double)(float)uVar19 + dVar25 * (double)(float)uVar21));
        *(undefined1 *)(*(long *)(lVar10 + lVar11) + lVar16 + 0x1a9) = 1;
      }
      lVar10 = *(long *)(lVar12 + 0x80);
      for (lVar9 = *(long *)(lVar12 + 0x78); lVar9 != lVar10; lVar9 = lVar9 + 0x28) {
        lVar11 = *(long *)(param_2 + 0x58);
        lVar17 = (long)*(int *)(lVar12 + 4) * 0x1b0;
        uVar13 = (*(long *)(lVar11 + 0xa8) + *(long *)(lVar11 + 0xa0)) - 1;
        fVar18 = *(float *)(lVar9 + 0x20);
        fVar22 = *(float *)(lVar9 + 0x24);
        lVar11 = *(long *)(*(long *)(lVar11 + 0x68) + (uVar13 / 0x12) * 8);
        lVar16 = (uVar13 % 0x12) * 0xd8;
        pfVar6 = (float *)FUN_00aef474(*(long *)(lVar11 + lVar16) + lVar17 + 0x70,lVar9);
        *pfVar6 = (float)(dVar26 * (double)fVar18 + dVar25 * (double)fVar22);
        *(undefined1 *)(*(long *)(lVar11 + lVar16) + lVar17 + 0x1a9) = 1;
      }
      lVar10 = *(long *)(lVar12 + 0xb8);
      for (lVar9 = *(long *)(lVar12 + 0xb0); lVar9 != lVar10; lVar9 = lVar9 + 0x40) {
        uVar21 = *(undefined8 *)(lVar9 + 0x28);
        uVar19 = *(undefined8 *)(lVar9 + 0x20);
        uVar24 = *(undefined8 *)(lVar9 + 0x38);
        uVar23 = *(undefined8 *)(lVar9 + 0x30);
        lVar11 = *(long *)(param_2 + 0x58);
        lVar17 = (long)*(int *)(lVar12 + 4) * 0x1b0;
        uVar13 = (*(long *)(lVar11 + 0xa8) + *(long *)(lVar11 + 0xa0)) - 1;
        lVar11 = *(long *)(*(long *)(lVar11 + 0x68) + (uVar13 / 0x12) * 8);
        lVar16 = (uVar13 % 0x12) * 0xd8;
        puVar7 = (undefined8 *)FUN_00aefbe4(*(long *)(lVar11 + lVar16) + lVar17 + 0xd8,lVar9);
        puVar7[1] = CONCAT44((float)(dVar26 * (double)(float)((ulong)uVar21 >> 0x20) +
                                    dVar25 * (double)(float)((ulong)uVar24 >> 0x20)),
                             (float)(dVar26 * (double)(float)uVar21 + dVar25 * (double)(float)uVar24
                                    ));
        *puVar7 = CONCAT44((float)(dVar26 * (double)(float)((ulong)uVar19 >> 0x20) +
                                  dVar25 * (double)(float)((ulong)uVar23 >> 0x20)),
                           (float)(dVar26 * (double)(float)uVar19 + dVar25 * (double)(float)uVar23))
        ;
        *(undefined1 *)(*(long *)(lVar11 + lVar16) + lVar17 + 0x1a9) = 1;
      }
      if (lVar12 + 0xf0 == lVar14) break;
      cVar3 = *(char *)(lVar12 + 0x160);
      lVar12 = lVar12 + 0xf0;
    }
    return 1;
  }
  lVar12 = *(long *)(*(long *)(param_2 + 0xa8) + 0x278) -
           *(long *)(*(long *)(param_2 + 0xa8) + 0x270);
  if (lVar12 != 0) {
    uVar15 = 1;
    do {
      FUN_02b18f84(param_2,param_2 + 0xa0,uVar15 - 1);
      uVar13 = (ulong)uVar15;
      uVar15 = uVar15 + 1;
    } while (uVar13 < (ulong)((lVar12 >> 4) * -0x79435e50d79435e5));
  }
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_c0 = PTR_DAT_0437f2d8 + 0x10;
  uStack_b8 = 0;
  FUN_01f0bbec(param_2 + 0xa8,&uStack_b8);
  plVar8 = *(long **)(param_2 + 0xb8);
  *(undefined8 *)(param_2 + 0xb8) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  uVar19 = local_a8;
  local_a8 = 0;
  plVar8 = *(long **)(param_2 + 0xc0);
  *(undefined8 *)(param_2 + 0xb8) = uVar19;
  *(undefined8 *)(param_2 + 0xc0) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  uVar19 = local_a0;
  local_a0 = 0;
  plVar8 = *(long **)(param_2 + 200);
  *(undefined8 *)(param_2 + 0xc0) = uVar19;
  *(undefined8 *)(param_2 + 200) = 0;
  if (plVar8 != (long *)0x0) {
    lVar12 = plVar8[0xb];
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  uVar19 = local_98;
  local_98 = 0;
  *(undefined8 *)(param_2 + 200) = uVar19;
  FUN_009848d0(&local_c0);
  lVar12 = *(long *)(param_2 + 0x68);
  lVar14 = *(long *)(param_2 + 0x70);
  while (lVar14 != lVar12) {
    lVar14 = lVar14 + -0xf0;
    FUN_02b1a474(lVar14);
  }
  *(long *)(param_2 + 0x70) = lVar12;
  return 0;
}


