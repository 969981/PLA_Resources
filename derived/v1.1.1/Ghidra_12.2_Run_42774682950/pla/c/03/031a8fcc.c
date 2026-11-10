/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a8fcc; name: FUN_031a8fcc
 */


void FUN_031a8fcc(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  float local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  
  lVar13 = tpidr_el0;
  lVar12 = *(long *)(lVar13 + 0x38d490);
  if (lVar12 == 0) {
    lVar12 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar12;
  }
  plVar10 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
  plVar10 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x100,0);
  FUN_031b078c(plVar10,0);
  lVar12 = *(long *)(param_2 + 0x40);
  lVar13 = *(long *)(lVar12 + 0x40);
  local_b0 = 0x3a83126f3a83126f;
  local_d0 = CONCAT44(*(undefined4 *)(lVar13 + 0xe8),*(undefined4 *)(lVar13 + 0xe8));
  local_c0 = 1;
  local_b8 = 0x3f800000;
  local_b4 = 0;
  local_bc = *(float *)(lVar13 + 0x50) * 0.5;
  uStack_a4 = *(undefined4 *)(lVar13 + 0x30);
  local_a8 = 0xffffffff;
  local_a0 = *(undefined8 *)(lVar13 + 0x78);
  local_80 = *(undefined4 *)(lVar13 + 0x54);
  local_98 = *(undefined8 *)(lVar13 + 0x80);
  local_90 = *(undefined4 *)(lVar13 + 0x88);
  local_88 = *(undefined8 *)(lVar13 + 0x90);
  uStack_c8 = local_d0;
  iVar8 = FUN_03159198(param_3,(undefined8 *)(lVar12 + 0x20),lVar13 + 0x20,&local_d0,&local_e0);
  if (iVar8 == -1) {
    uVar22 = *(undefined8 *)(lVar12 + 0x28);
    uVar23 = *(undefined8 *)(lVar12 + 0x20);
    iVar9 = *(int *)(param_2 + 0x50);
    lVar13 = *(long *)(param_2 + 0x48);
    iVar8 = iVar9 + 1;
    if ((int)(*(uint *)(param_2 + 0x54) & 0x3fffffff) <= iVar9) {
      lVar13 = FUN_031aaf24(PTR_PTR_0434a080,iVar8,lVar13,iVar9,(uint *)(param_2 + 0x54));
      iVar9 = *(int *)(param_2 + 0x50);
      *(long *)(param_2 + 0x48) = lVar13;
    }
    puVar14 = (undefined4 *)(lVar13 + (long)iVar9 * 0xa0);
    *(int *)(param_2 + 0x50) = iVar8;
    *(undefined8 *)(puVar14 + 0x24) = 0;
    *(undefined8 *)(puVar14 + 0x26) = 0x8000000000000000;
    *(undefined8 *)(puVar14 + 8) = 0;
    *(undefined8 *)(puVar14 + 10) = 0;
    *puVar14 = 1;
    *(undefined8 *)(puVar14 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)(puVar14 + 0xf) = 0;
    *(undefined8 *)(puVar14 + 6) = uVar22;
    *(undefined8 *)(puVar14 + 4) = uVar23;
    *param_1 = 0;
    if (plVar10 == (long *)0x0) {
      return;
    }
  }
  else {
    *(int *)(plVar10 + 8) = iVar8;
    *(undefined4 *)(plVar10 + 10) = 0;
    *(undefined4 *)(plVar10 + 7) = 0;
    plVar10[5] = lStack_d8;
    plVar10[4] = local_e0;
    puVar7 = PTR_PTR_0434a080;
    lVar13 = local_e0;
    lVar15 = lStack_d8;
    if (*(int *)(lVar12 + 0x38) != 0) {
      puVar16 = *(undefined8 **)(lVar12 + 0x30);
      lVar13 = (long)*(int *)(lVar12 + 0x38) << 5;
      do {
        if (*(int *)(puVar16 + 2) == -1) {
          uStack_e8 = puVar16[1];
          local_f0 = *puVar16;
        }
        else {
          lVar15 = *(long *)(*(long *)(param_3 + 0x38) + (long)*(int *)(puVar16 + 2) * 0xf0);
          fVar19 = (float)((ulong)*puVar16 >> 0x20);
          fVar18 = (float)*puVar16;
          fVar20 = (float)puVar16[1];
          local_f0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar15 + 0x90) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar15 + 0x80) >> 0x20) * fVar20 +
                              (float)((ulong)*(undefined8 *)(lVar15 + 0x60) >> 0x20) * fVar18 +
                              (float)((ulong)*(undefined8 *)(lVar15 + 0x70) >> 0x20) * fVar19,
                              (float)*(undefined8 *)(lVar15 + 0x90) +
                              (float)*(undefined8 *)(lVar15 + 0x80) * fVar20 +
                              (float)*(undefined8 *)(lVar15 + 0x60) * fVar18 +
                              (float)*(undefined8 *)(lVar15 + 0x70) * fVar19);
          uStack_e8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar15 + 0x98) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar15 + 0x88) >> 0x20) * fVar20 +
                               (float)((ulong)*(undefined8 *)(lVar15 + 0x68) >> 0x20) * fVar18 +
                               (float)((ulong)*(undefined8 *)(lVar15 + 0x78) >> 0x20) * fVar19,
                               (float)*(undefined8 *)(lVar15 + 0x98) +
                               (float)*(undefined8 *)(lVar15 + 0x88) * fVar20 +
                               (float)*(undefined8 *)(lVar15 + 0x68) * fVar18 +
                               (float)*(undefined8 *)(lVar15 + 0x78) * fVar19);
        }
        lVar15 = *(long *)(lVar12 + 0x40);
        local_b0 = 0x3a83126f3a83126f;
        local_d0 = CONCAT44(*(undefined4 *)(lVar15 + 0xe8),*(undefined4 *)(lVar15 + 0xe8));
        local_c0 = 1;
        local_b8 = 0x3f800000;
        local_b4 = 0;
        local_bc = *(float *)(lVar15 + 0x50) * 0.5;
        uStack_a4 = *(undefined4 *)(lVar15 + 0x30);
        local_a8 = 0xffffffff;
        local_a0 = *(undefined8 *)(lVar15 + 0x78);
        local_80 = *(undefined4 *)(lVar15 + 0x54);
        local_98 = *(undefined8 *)(lVar15 + 0x80);
        local_90 = *(undefined4 *)(lVar15 + 0x88);
        local_88 = *(undefined8 *)(lVar15 + 0x90);
        uStack_c8 = local_d0;
        iVar9 = FUN_03159198(param_3,&local_f0,lVar15 + 0x20,&local_d0,&local_100);
        if (iVar9 != -1) {
          iVar17 = (int)plVar10[10];
          uVar11 = *(uint *)((long)plVar10 + 0x54);
          uVar2 = iVar17 + 1;
          if (iVar17 < (int)(uVar11 & 0x3fffffff)) {
            lVar15 = plVar10[9];
          }
          else {
            lVar15 = plVar10[9];
            if (0x3ffffffe < iVar17) {
              FUN_032bd0a8(uVar2);
              uVar11 = *(uint *)((long)plVar10 + 0x54);
            }
            uVar11 = (uVar11 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar11) {
              uVar11 = 0x3fffffff;
            }
            uVar4 = uVar2;
            if ((int)uVar2 <= (int)uVar11) {
              uVar4 = uVar11;
            }
            lVar15 = FUN_032bd1d4(puVar7,uVar4,4,lVar15,iVar17,(uint *)((long)plVar10 + 0x54));
            iVar17 = (int)plVar10[10];
            plVar10[9] = lVar15;
          }
          *(int *)(lVar15 + (long)iVar17 * 4) = iVar9;
          *(uint *)(plVar10 + 10) = uVar2;
          iVar9 = (int)plVar10[7];
          uVar11 = *(uint *)((long)plVar10 + 0x3c);
          uVar2 = iVar9 + 1;
          if (iVar9 < (int)(uVar11 & 0x3fffffff)) {
            lVar15 = plVar10[6];
          }
          else {
            lVar15 = plVar10[6];
            if (0x3ffffffe < iVar9) {
              FUN_032bd0a8(uVar2);
              uVar11 = *(uint *)((long)plVar10 + 0x3c);
            }
            uVar11 = (uVar11 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar11) {
              uVar11 = 0x3fffffff;
            }
            uVar4 = uVar2;
            if ((int)uVar2 <= (int)uVar11) {
              uVar4 = uVar11;
            }
            lVar15 = FUN_032bd1d4(puVar7,uVar4,0x10,lVar15,iVar9,(uint *)((long)plVar10 + 0x3c));
            iVar9 = (int)plVar10[7];
            plVar10[6] = lVar15;
          }
          puVar1 = (undefined8 *)(lVar15 + (long)iVar9 * 0x10);
          puVar1[1] = local_f8;
          *puVar1 = local_100;
          *(uint *)(plVar10 + 7) = uVar2;
        }
        puVar16 = puVar16 + 4;
        lVar13 = lVar13 + -0x20;
      } while (lVar13 != 0);
      if ((int)plVar10[10] != 0) {
        iVar8 = *(int *)(*(long *)(lVar12 + 0x40) + 0x44);
        if (iVar8 < 1) {
          iVar8 = 10000;
        }
        *(int *)(plVar10 + 0xb) = iVar8;
        *(undefined8 *)((long)plVar10 + 0x5c) = *(undefined8 *)(*(long *)(lVar12 + 0x40) + 0x50);
        lVar13 = *(long *)(lVar12 + 0x40);
        lVar15 = *(long *)(lVar13 + 0x60);
        plVar10[0xf] = *(long *)(lVar13 + 0x68);
        plVar10[0xe] = lVar15;
        lVar15 = *(long *)(lVar13 + 0xb8);
        plVar10[0x17] = *(long *)(lVar13 + 0xa8);
        plVar10[0x19] = lVar15;
        lVar15 = *(long *)(lVar13 + 0x98);
        plVar10[0x13] = *(long *)(lVar13 + 0x88);
        plVar10[0x15] = lVar15;
        plVar10[0x11] = *(long *)(lVar13 + 0x78);
        lVar15 = *(long *)(lVar13 + 0x70);
        plVar10[0x12] = *(long *)(lVar13 + 0x80);
        plVar10[0x10] = lVar15;
        lVar15 = *(long *)(lVar13 + 0x90);
        plVar10[0x16] = *(long *)(lVar13 + 0xa0);
        plVar10[0x14] = lVar15;
        lVar15 = *(long *)(lVar13 + 0xb0);
        plVar10[0x1a] = *(long *)(lVar13 + 0xc0);
        plVar10[0x18] = lVar15;
        lVar15 = *(long *)(*(long *)(lVar12 + 0x40) + 0x28);
        lVar13 = *(long *)(*(long *)(lVar12 + 0x40) + 0x20);
        *(undefined1 *)((long)plVar10 + 0xaa) = 0;
        *(undefined1 *)(plVar10 + 0x16) = 1;
        plVar10[0xf] = lVar15;
        plVar10[0xe] = lVar13;
        uVar23 = *(undefined8 *)plVar10[6];
        lVar13 = *(long *)(lVar12 + 0x40);
        fVar18 = (float)plVar10[4] - (float)uVar23;
        fVar20 = (float)((ulong)plVar10[4] >> 0x20) - (float)((ulong)uVar23 >> 0x20);
        fVar21 = (float)plVar10[5] - (float)((undefined8 *)plVar10[6])[1];
        fVar18 = fVar18 * fVar18;
        fVar20 = fVar20 * fVar20;
        fVar21 = fVar21 * fVar21;
        fVar19 = fVar18 + fVar20 + fVar21;
        uVar23 = CONCAT44(fVar18 + fVar20 + fVar21,fVar19);
        uVar22 = NEON_frsqrte(uVar23,4);
        fVar18 = (float)uVar22;
        fVar20 = (float)((ulong)uVar22 >> 0x20);
        uVar22 = NEON_frsqrts(uVar23,CONCAT44(fVar20 * fVar20,fVar18 * fVar18),4);
        fVar18 = fVar18 * (float)uVar22;
        fVar20 = fVar20 * (float)((ulong)uVar22 >> 0x20);
        uVar23 = NEON_frsqrts(uVar23,CONCAT44(fVar20 * fVar20,fVar18 * fVar18),4);
        iVar8 = -(uint)(fVar19 <= 0.0);
        fVar19 = fVar19 * (float)uVar23 * fVar18;
        fVar18 = (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                                 CONCAT12((byte)((uint)fVar19 >> 0x10) &
                                          ~(byte)((uint)iVar8 >> 0x10),
                                          CONCAT11((byte)((uint)fVar19 >> 8) &
                                                   ~(byte)((uint)iVar8 >> 8),
                                                   SUB41(fVar19,0) & ~(byte)iVar8)));
        if (*(char *)(lVar13 + 0x48) == '\0') {
          cVar5 = *(char *)(lVar13 + 0x49);
        }
        else {
          *(float *)((long)plVar10 + 0xc4) =
               *(float *)(lVar13 + 0x34) + fVar18 * *(float *)(lVar13 + 0x38);
          lVar13 = *(long *)(lVar12 + 0x40);
          cVar5 = *(char *)(lVar13 + 0x49);
        }
        if (cVar5 != '\0') {
          *(float *)((long)plVar10 + 0xbc) =
               *(float *)(lVar13 + 0x3c) + fVar18 * *(float *)(lVar13 + 0x40);
        }
        *param_1 = (long)plVar10;
        return;
      }
      lVar13 = local_e0;
      lVar15 = lStack_d8;
    }
    iVar17 = *(int *)(param_2 + 0x50);
    lVar12 = *(long *)(param_2 + 0x48);
    iVar9 = iVar17 + 1;
    if ((int)(*(uint *)(param_2 + 0x54) & 0x3fffffff) <= iVar17) {
      lVar12 = FUN_031aaf24(PTR_PTR_0434a080,iVar9);
      *(long *)(param_2 + 0x48) = lVar12;
      iVar17 = *(int *)(param_2 + 0x50);
    }
    puVar14 = (undefined4 *)(lVar12 + (long)iVar17 * 0xa0);
    *(int *)(param_2 + 0x50) = iVar9;
    *puVar14 = 1;
    *(undefined8 *)(puVar14 + 0x24) = 0;
    *(undefined8 *)(puVar14 + 0x26) = 0x8000000000000000;
    *(long *)(puVar14 + 6) = lVar15;
    *(long *)(puVar14 + 4) = lVar13;
    puVar14[0xc] = iVar8;
    puVar14[0xd] = 0xffffffff;
    *(undefined8 *)(puVar14 + 0xf) = 0x100000000;
    *(undefined8 *)(puVar14 + 8) = 0;
    *(undefined8 *)(puVar14 + 10) = 0;
    *param_1 = 0;
  }
  if (plVar10[1] != 0) {
    plVar3 = plVar10 + 2;
    do {
      lVar13 = *plVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *plVar3 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x031a91a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x18))(plVar10);
      return;
    }
  }
  return;
}


