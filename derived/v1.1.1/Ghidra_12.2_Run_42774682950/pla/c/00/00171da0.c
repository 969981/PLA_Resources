/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00171da0; name: FUN_00171da0
 */


undefined8 * FUN_00171da0(undefined8 param_1,long param_2,double *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  double dVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  double *pdVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  int iVar26;
  ulong uVar27;
  double local_f0;
  undefined4 local_e8;
  double local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(int *)(param_3 + 1) == 3) {
    iVar7 = FUN_00175390(param_3,&local_e0,0);
    if (iVar7 == 0) {
      if (NAN(*param_3)) {
                    /* WARNING: Subroutine does not return */
        FUN_001599d0(param_1,"table index is NaN");
      }
    }
    else {
      local_f0 = local_e0;
      local_e8 = 0x13;
      param_3 = &local_f0;
    }
  }
  else if (*(int *)(param_3 + 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001599d0(param_1,"table index is nil");
  }
  puVar8 = (undefined8 *)FUN_001721e0(param_2,param_3);
  puVar15 = *(undefined8 **)(param_2 + 0x20);
  if (*(int *)(puVar8 + 1) == 0) {
    if (puVar15 != (undefined8 *)0x0) goto LAB_00172164;
  }
  else if (puVar15 != (undefined8 *)0x0) {
    do {
      puVar16 = puVar15;
      if (puVar16 <= *(undefined8 **)(param_2 + 0x18)) goto LAB_00171ed4;
      puVar15 = puVar16 + -4;
      *(undefined8 **)(param_2 + 0x20) = puVar15;
    } while (*(int *)(puVar16 + -1) != 0);
    puVar9 = (undefined8 *)FUN_001721e0(param_2,puVar8 + 2);
    if (puVar9 == puVar8) {
      if (*(int *)((long)puVar8 + 0x1c) != 0) {
        *(int *)((long)puVar16 + -4) =
             (int)((ulong)((long)puVar8 +
                          ((long)*(int *)((long)puVar8 + 0x1c) * 0x20 - (long)puVar15)) >> 5);
      }
      *(int *)((long)puVar8 + 0x1c) = (int)((ulong)((long)puVar15 - (long)puVar8) >> 5);
      puVar8 = puVar15;
    }
    else {
      do {
        puVar10 = puVar9;
        puVar9 = puVar10 + (long)*(int *)((long)puVar10 + 0x1c) * 4;
      } while (puVar10 + (long)*(int *)((long)puVar10 + 0x1c) * 4 != puVar8);
      *(int *)((long)puVar10 + 0x1c) = (int)((ulong)((long)puVar15 - (long)puVar10) >> 5);
      uVar3 = *puVar8;
      uVar4 = puVar8[1];
      uVar5 = puVar8[3];
      puVar16[-2] = puVar8[2];
      puVar16[-1] = uVar5;
      *puVar15 = uVar3;
      puVar16[-3] = uVar4;
      if (*(int *)((long)puVar8 + 0x1c) != 0) {
        *(int *)((long)puVar16 + -4) =
             *(int *)((long)puVar16 + -4) + (int)((ulong)((long)puVar8 - (long)puVar15) >> 5);
        *(undefined4 *)((long)puVar8 + 0x1c) = 0;
      }
      *(undefined4 *)(puVar8 + 1) = 0;
    }
LAB_00172164:
    puVar8[2] = *param_3;
    *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(param_3 + 1);
    if ((((*(byte *)(param_3 + 1) >> 6 & 1) != 0) && ((*(byte *)(param_2 + 9) >> 2 & 1) != 0)) &&
       ((*(byte *)((long)*param_3 + 9) & 3) != 0)) {
      FUN_0015cbe0(param_1,param_2);
    }
    return puVar8;
  }
LAB_00171ed4:
  local_70 = 0;
  uStack_68 = 0;
  lVar17 = 0;
  iVar7 = 0;
  uVar18 = 1;
  local_80 = 0;
  uStack_78 = 0;
  uVar21 = 1;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0.0;
  uStack_d8 = 0;
  uVar14 = *(uint *)(param_2 + 0xc);
  uVar24 = 1;
  if (uVar14 != 0) goto LAB_00171f5c;
  while (uVar24 = uVar14, uVar18 <= uVar14) {
LAB_00171f5c:
    do {
      if (uVar24 < uVar18) {
        iVar22 = 0;
      }
      else {
        iVar22 = 0;
        do {
          uVar23 = uVar18 - 1;
          uVar18 = uVar18 + 1;
          if (*(int *)(*(long *)(param_2 + 0x10) + (ulong)uVar23 * 0x10 + 8) != 0) {
            iVar22 = iVar22 + 1;
          }
        } while (uVar18 <= uVar24);
      }
      lVar25 = lVar17 * 4;
      lVar17 = lVar17 + 1;
      iVar7 = iVar22 + iVar7;
      uVar24 = uVar21 * 2;
      *(int *)((long)&local_e0 + lVar25) = *(int *)((long)&local_e0 + lVar25) + iVar22;
      if (lVar17 == 0x20) goto LAB_00171f90;
      uVar21 = uVar24;
    } while (uVar24 <= uVar14);
  }
LAB_00171f90:
  uVar18 = ~(-1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f));
  iVar22 = 0;
  iVar26 = 0;
  uVar27 = -(ulong)(uVar18 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar18 << 5;
  lVar17 = (long)(int)uVar18 + 1;
  lVar25 = *(long *)(param_2 + 0x18) + uVar27;
  iVar13 = *(int *)(lVar25 + 8);
  while( true ) {
    if (iVar13 != 0) {
      if ((*(int *)(lVar25 + 0x18) == 0x13) &&
         (uVar11 = *(ulong *)(lVar25 + 0x10),
         (uVar11 < 0x80000001 && 0 < (long)uVar11) && (int)uVar11 != 0)) {
        uVar11 = FUN_00162320();
        uVar11 = -(uVar11 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar11 & 0xffffffff) << 2;
        *(int *)((long)&local_e0 + uVar11) = *(int *)((long)&local_e0 + uVar11) + 1;
        iVar13 = 1;
      }
      else {
        iVar13 = 0;
      }
      iVar26 = iVar13 + iVar26;
      iVar22 = iVar22 + 1;
    }
    uVar27 = uVar27 - 0x20;
    lVar17 = lVar17 + -1;
    if (lVar17 == 0) break;
    lVar25 = *(long *)(param_2 + 0x18) + uVar27;
    iVar13 = *(int *)(lVar25 + 8);
  }
  uVar18 = iVar26 + iVar7;
  if (*(int *)(param_3 + 1) == 0x13) {
    dVar12 = *param_3;
    iVar26 = 0;
    if ((((ulong)dVar12 < 0x80000001) && (0 < (long)dVar12)) && (SUB84(dVar12,0) != 0)) {
      uVar27 = FUN_00162320();
      uVar27 = -(uVar27 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar27 & 0xffffffff) << 2;
      *(int *)((long)&local_e0 + uVar27) = *(int *)((long)&local_e0 + uVar27) + 1;
      iVar26 = 1;
    }
    uVar18 = uVar18 + iVar26;
  }
  if (uVar18 == 0) {
    uVar14 = 0;
    uVar24 = 0;
  }
  else {
    uVar21 = 0;
    uVar24 = 0;
    uVar14 = 0;
    uVar19 = 0;
    uVar23 = 1;
    pdVar20 = &local_e0;
    do {
      iVar26 = *(int *)pdVar20;
      uVar1 = iVar26 + uVar19;
      uVar2 = uVar23;
      uVar6 = uVar1;
      if (uVar1 <= uVar21) {
        uVar2 = uVar24;
        uVar6 = uVar14;
      }
      if (iVar26 != 0) {
        uVar14 = uVar6;
      }
      uVar21 = uVar23 & 0x7fffffff;
      if (iVar26 != 0) {
        uVar24 = uVar2;
        uVar19 = uVar1;
      }
      uVar23 = uVar23 << 1;
      pdVar20 = (double *)((long)pdVar20 + 4);
    } while (uVar21 < uVar18);
  }
  FUN_00171860(param_1,param_2,uVar24,((iVar7 + iVar22) - uVar14) + 1);
  puVar15 = (undefined8 *)FUN_00172500(param_2,param_3);
  if (puVar15 == &DAT_039c5c28) {
    puVar15 = (undefined8 *)FUN_00171da0(param_1,param_2,param_3);
    return puVar15;
  }
  return puVar15;
}


