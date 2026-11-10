/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337008c; name: thunk_FUN_03370090
 */


void thunk_FUN_03370090(long param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long lStack_120;
  long lStack_118;
  ulong uStack_110;
  ulong uStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  ulong uStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  lVar20 = *(long *)(param_1 + 0x20);
  puVar7 = *(undefined8 **)(param_1 + 0x30);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_032cf5b0(0x28);
    *puVar7 = &PTR_LAB_0436de98;
    puVar7[1] = 0xffffffff;
    puVar7[2] = 1;
    puVar7[3] = 0;
    puVar7[4] = 0x8000000000000000;
    puVar10 = *(undefined8 **)(param_1 + 0x30);
    if ((puVar10 != puVar7) &&
       (*(undefined8 **)(param_1 + 0x30) = puVar7, puVar10 != (undefined8 *)0x0)) {
      FUN_032d647c(puVar10);
      puVar7 = *(undefined8 **)(param_1 + 0x30);
      iVar3 = *(int *)(puVar7 + 4);
      goto joined_r0x03370580;
    }
  }
  iVar3 = *(int *)(puVar7 + 4);
joined_r0x03370580:
  if (iVar3 != 0) {
    *(undefined4 *)(puVar7 + 4) = 0;
  }
  puVar6 = PTR_PTR_0434a080;
  lVar9 = *(long *)(param_1 + 0x28);
  uVar19 = 0;
  puVar11 = *(uint **)(lVar9 + 0x18);
  uVar15 = *puVar11;
  do {
    if ((int)uVar15 < 0) {
      uVar19 = puVar11[(long)(int)uVar19 + 2] + uVar19;
    }
    else {
      while (uVar19 = uVar19 + 1, (uVar15 >> 0x1e & 1) == 0) {
        uVar15 = puVar11[(int)uVar19];
      }
    }
    if (*(int *)(lVar9 + 0x20) - 4U <= uVar19) {
      return;
    }
    uVar15 = puVar11[(int)uVar19];
  } while ((int)uVar15 < 0);
  do {
    if (uVar19 == 0) {
      return;
    }
    lVar13 = 0;
    lVar16 = -0x400000000;
    uVar14 = 0xffffffffffffffff;
    do {
      lVar1 = lVar13 * 4;
      lVar13 = lVar13 + 2;
      lVar16 = lVar16 + 0x200000000;
      uVar14 = uVar14 + 1;
    } while ((*(uint *)((long)puVar11 +
                       lVar1 + ((long)(((ulong)uVar19 << 0x20) + 0x200000000) >> 0x1e)) >> 0x1d & 1)
             == 0);
    puVar11 = puVar11 + (long)(int)uVar19 + 2;
    plVar2 = (long *)(*(long *)(lVar20 + 0x30) + ((ulong)*puVar11 & 0xfffffff) * 0x40);
    if ((*puVar11 >> 0x1c & 1) == 0) {
      uStack_110 = plVar2[2];
      uStack_108 = plVar2[3];
      lStack_118 = plVar2[1];
      lStack_120 = *plVar2;
      dStack_100 = (double)plVar2[4];
      dStack_f8 = (double)plVar2[5];
      dStack_f0 = (double)plVar2[6];
      dStack_e8 = (double)plVar2[7];
    }
    else {
      uVar4 = (uint)plVar2[2];
      uStack_108 = -plVar2[3];
      uVar15 = -uVar4;
      if ((ulong)~plVar2[3] <= uStack_108) {
        uVar15 = ~uVar4;
      }
      uStack_110 = (ulong)uVar15 & 0x7ff | ((ulong)plVar2[2] >> 0xe) * -0x4000;
      lStack_120 = (ulong)((uint7)((ulong)*plVar2 >> 8) & 0xffffffffffffc0) * -0x100;
      lStack_118 = (ulong)((uint7)((ulong)plVar2[1] >> 8) & 0xffffffffffffc0) * -0x100;
      dStack_100 = -(double)plVar2[4];
      dStack_f8 = -(double)plVar2[5];
      dStack_f0 = -(double)plVar2[6];
      dStack_e8 = -(double)plVar2[7];
    }
    if ((int)lVar13 != 2) {
      lVar9 = 0;
      uVar18 = 0;
      uVar17 = 2;
      uVar15 = *(uint *)((long)puVar11 + (lVar16 >> 0x1e | 4U));
      do {
        uVar4 = *(uint *)((long)puVar11 + (lVar9 >> 0x1e | 4U));
        plVar2 = (long *)(*(long *)(lVar20 + 0x30) + (ulong)(uVar15 & 0xfffffff) * 0x40);
        if ((uVar15 & 0x1fffffff) >> 0x1c == 0) {
          uStack_d0 = plVar2[2];
          uStack_c8 = plVar2[3];
          lStack_d8 = plVar2[1];
          lStack_e0 = *plVar2;
          dStack_c0 = (double)plVar2[4];
          dStack_b8 = (double)plVar2[5];
          dStack_b0 = (double)plVar2[6];
          dStack_a8 = (double)plVar2[7];
        }
        else {
          uVar5 = (uint)plVar2[2];
          uStack_c8 = -plVar2[3];
          uVar15 = -uVar5;
          if ((ulong)~plVar2[3] <= uStack_c8) {
            uVar15 = ~uVar5;
          }
          uStack_d0 = (ulong)uVar15 & 0x7ff | ((ulong)plVar2[2] >> 0xe) * -0x4000;
          lStack_e0 = (ulong)((uint7)((ulong)*plVar2 >> 8) & 0xffffffffffffc0) * -0x100;
          lStack_d8 = (ulong)((uint7)((ulong)plVar2[1] >> 8) & 0xffffffffffffc0) * -0x100;
          dStack_c0 = -(double)plVar2[4];
          dStack_b8 = -(double)plVar2[5];
          dStack_b0 = -(double)plVar2[6];
          dStack_a8 = -(double)plVar2[7];
        }
        plVar2 = (long *)(*(long *)(lVar20 + 0x30) + ((ulong)uVar4 & 0xfffffff) * 0x40);
        if ((uVar4 >> 0x1c & 1) == 0) {
          uStack_90 = plVar2[2];
          uStack_88 = plVar2[3];
          lStack_98 = plVar2[1];
          lStack_a0 = *plVar2;
          dStack_80 = (double)plVar2[4];
          dStack_78 = (double)plVar2[5];
          dStack_70 = (double)plVar2[6];
          dStack_68 = (double)plVar2[7];
        }
        else {
          uVar5 = (uint)plVar2[2];
          uStack_88 = -plVar2[3];
          uVar15 = -uVar5;
          if ((ulong)~plVar2[3] <= uStack_88) {
            uVar15 = ~uVar5;
          }
          uStack_90 = (ulong)uVar15 & 0x7ff | ((ulong)plVar2[2] >> 0xe) * -0x4000;
          lStack_a0 = (ulong)((uint7)((ulong)*plVar2 >> 8) & 0xffffffffffffc0) * -0x100;
          lStack_98 = (ulong)((uint7)((ulong)plVar2[1] >> 8) & 0xffffffffffffc0) * -0x100;
          dStack_80 = -(double)plVar2[4];
          dStack_78 = -(double)plVar2[5];
          dStack_70 = -(double)plVar2[6];
          dStack_68 = -(double)plVar2[7];
        }
        lVar16 = *(long *)(param_1 + 0x30);
        iVar8 = *(int *)(lVar16 + 0x20);
        lVar13 = *(long *)(lVar16 + 0x18);
        iVar3 = iVar8 + 1;
        if ((int)(*(uint *)(lVar16 + 0x24) & 0x3fffffff) <= iVar8) {
          lVar13 = FUN_0336f850(puVar6,iVar3);
          iVar8 = *(int *)(lVar16 + 0x20);
          *(long *)(lVar16 + 0x18) = lVar13;
        }
        *(int *)(lVar16 + 0x20) = iVar3;
        FUN_0336f1c0(&lStack_120,lVar13 + (long)iVar8 * 0x20);
        uVar12 = -(uVar17 >> 0x1f) & 0xfffffffc00000000 | uVar17 << 2;
        uVar18 = uVar18 + 1;
        lVar9 = lVar9 + 0x200000000;
        *(uint *)((long)puVar11 + uVar12) =
             *(uint *)((long)puVar11 + uVar12) & 0xe0000000 |
             *(int *)(*(long *)(param_1 + 0x30) + 0x20) - 1U & 0x1fffffff;
        uVar17 = (ulong)((int)uVar17 + 2);
        uVar15 = uVar4;
      } while (uVar18 < (uVar14 & 0x7fffffff));
      lVar9 = *(long *)(param_1 + 0x28);
    }
    puVar11 = *(uint **)(lVar9 + 0x18);
    uVar15 = puVar11[(int)uVar19];
    do {
      if ((int)uVar15 < 0) {
        uVar19 = puVar11[(long)(int)uVar19 + 2] + uVar19;
      }
      else {
        while (uVar19 = uVar19 + 1, (uVar15 >> 0x1e & 1) == 0) {
          uVar15 = puVar11[(int)uVar19];
        }
      }
      if (*(int *)(lVar9 + 0x20) - 4U <= uVar19) {
        return;
      }
      uVar15 = puVar11[(int)uVar19];
    } while ((int)uVar15 < 0);
  } while( true );
}


