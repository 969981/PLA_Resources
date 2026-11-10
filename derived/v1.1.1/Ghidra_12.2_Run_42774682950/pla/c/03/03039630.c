/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03039630; name: FUN_03039630
 */


void FUN_03039630(long param_1,float *param_2,long *param_3)

{
  long *plVar1;
  void *pvVar2;
  undefined8 *puVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  byte *pbVar20;
  ulong uVar21;
  ushort *puVar22;
  long lVar23;
  long lVar24;
  void *pvVar25;
  long lVar26;
  void *pvVar27;
  long lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int iVar36;
  float fVar37;
  float fVar38;
  int iVar39;
  undefined8 uVar40;
  float fVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined **local_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined1 *local_558;
  undefined8 local_550;
  undefined1 auStack_548 [768];
  undefined1 *local_248;
  undefined8 local_240;
  undefined1 auStack_238 [128];
  long *local_1b8;
  undefined8 local_1b0;
  long alStack_1a8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined2 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  float local_70;
  
  lVar24 = tpidr_el0;
  if (*(long *)(lVar24 + 0x38d490) == 0) {
    lVar26 = FUN_0333d16c(0,1);
    *(long *)(lVar24 + 0x38d490) = lVar26;
    lVar26 = *(long *)(lVar26 + 0x10);
  }
  else {
    lVar26 = *(long *)(*(long *)(lVar24 + 0x38d490) + 0x10);
  }
  if (lVar26 != 0) {
    puVar3 = *(undefined8 **)(lVar26 + 8);
    uVar17 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= *(ulong *)(lVar26 + 0x10)) &&
       (*(ulong *)(lVar26 + 8) = uVar17, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = "TtPhysics";
      uVar15 = nn::os::GetSystemTick();
      puVar3[1] = uVar15;
    }
  }
  local_568 = 0xffffffff;
  uStack_560 = 1;
  local_558 = auStack_548;
  local_550 = -0x7fffffe000000000;
  local_248 = auStack_238;
  local_1b8 = alStack_1a8;
  local_570 = &PTR_LAB_042b1fc0;
  local_a8 = 0xffffffffffffffff;
  local_a0 = 0xffffffffffffffff;
  local_98 = 0xffffffffffffffff;
  local_90 = 0xffff;
  local_240 = -0x7fffffe000000000;
  local_1b0 = -0x7fffffe000000000;
  local_80 = CONCAT26(local_80._6_2_,0x2a02000020);
  local_78 = *(undefined8 *)param_2;
  local_70 = param_2[2];
  plVar11 = *(long **)(param_1 + 0x7f0);
  local_88 = lVar26;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_80);
  }
  lVar18 = *(long *)(lVar24 + 0x38d490);
  if (lVar18 == 0) {
    lVar18 = FUN_0333d16c(0,1);
    *(long *)(lVar24 + 0x38d490) = lVar18;
    lVar28 = *(long *)(lVar18 + 0x10);
  }
  else {
    lVar28 = *(long *)(lVar18 + 0x10);
  }
  if (lVar28 != 0) {
    puVar3 = *(undefined8 **)(lVar28 + 8);
    uVar17 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= *(ulong *)(lVar28 + 0x10)) &&
       (*(ulong *)(lVar28 + 8) = uVar17, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = "TtBuildCollideTasks";
      uVar15 = nn::os::GetSystemTick();
      puVar3[1] = uVar15;
      lVar18 = *(long *)(lVar24 + 0x38d490);
    }
  }
  if (lVar18 == 0) {
    lVar18 = FUN_0333d16c(0,1);
    *(long *)(lVar24 + 0x38d490) = lVar18;
  }
  lVar18 = *(long *)(lVar18 + 0x10);
  *(undefined4 *)(param_1 + 0x808) = 2;
  if (lVar18 != 0) {
    puVar3 = *(undefined8 **)(lVar18 + 8);
    uVar17 = (long)puVar3 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar17 <= *(ulong *)(lVar18 + 0x10)) &&
       (*(ulong *)(lVar18 + 8) = uVar17, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = "LtPreCollide";
      puVar3[2] = "StAddBodies";
      uVar15 = nn::os::GetSystemTick();
      puVar3[1] = uVar15;
    }
  }
  FUN_0302e468(param_1);
  if (3 < *(ulong *)(param_1 + 0x7c8)) {
    if (lVar18 == 0) {
      *(undefined4 *)(param_1 + 0x808) = 1;
      FUN_0303912c(param_1 + 0x7c8,param_1,param_2);
      *(undefined4 *)(param_1 + 0x808) = 2;
      FUN_0302e468(param_1);
    }
    else {
      puVar3 = *(undefined8 **)(lVar18 + 8);
      uVar17 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar17 <= *(ulong *)(lVar18 + 0x10)) &&
         (*(ulong *)(lVar18 + 8) = uVar17, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = "StPreCollideSignal";
        uVar15 = nn::os::GetSystemTick();
        puVar3[1] = uVar15;
      }
      *(undefined4 *)(param_1 + 0x808) = 1;
      FUN_0303912c(param_1 + 0x7c8,param_1,param_2);
      *(undefined4 *)(param_1 + 0x808) = 2;
      FUN_0302e468(param_1);
      puVar3 = *(undefined8 **)(lVar18 + 8);
      uVar17 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar17 <= *(ulong *)(lVar18 + 0x10)) &&
         (*(ulong *)(lVar18 + 8) = uVar17, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = "StMaintenance";
        uVar15 = nn::os::GetSystemTick();
        puVar3[1] = uVar15;
      }
    }
  }
  lVar12 = *(long *)(param_1 + 0x8b0);
  if (*(int *)(lVar12 + 0x40) != 0) {
    if (lVar18 != 0) {
      puVar3 = *(undefined8 **)(lVar18 + 8);
      uVar17 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar17 <= *(ulong *)(lVar18 + 0x10)) &&
         (*(ulong *)(lVar18 + 8) = uVar17, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = "TtUpdateCachesOfMutatedShapes";
        uVar15 = nn::os::GetSystemTick();
        puVar3[1] = uVar15;
      }
      lVar12 = *(long *)(param_1 + 0x8b0);
    }
    local_80 = lVar18;
    FUN_0303ffa8(lVar12,param_1);
    if (lVar18 != 0) {
      puVar3 = *(undefined8 **)(lVar18 + 8);
      uVar17 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar17 <= *(ulong *)(lVar18 + 0x10)) &&
         (*(ulong *)(lVar18 + 8) = uVar17, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = &DAT_0390f40e;
        uVar15 = nn::os::GetSystemTick();
        puVar3[1] = uVar15;
      }
    }
  }
  uVar16 = (-2 << (ulong)(*(int *)(param_1 + 0x8c8) - 1U & 0x1f) | 1U) ^ 0xfffffffe;
  lVar12 = (long)*(int *)(param_1 + 0x8c0);
  do {
    if (lVar12 < 1) {
      uVar16 = (-2 << (ulong)(*(int *)(param_1 + 0x8e0) - 1U & 0x1f) | 1U) ^ 0xfffffffe;
      lVar12 = (long)*(int *)(param_1 + 0x8d8);
      goto LAB_03039808;
    }
    uVar9 = *(uint *)(*(long *)(param_1 + 0x8b8) + lVar12 * 4 + -4) & uVar16;
    uVar16 = 0xffffffff;
    lVar12 = lVar12 + -1;
  } while (uVar9 == 0);
  goto LAB_0303982c;
  while( true ) {
    uVar9 = *(uint *)(*(long *)(param_1 + 0x8d0) + lVar12 * 4 + -4) & uVar16;
    uVar16 = 0xffffffff;
    lVar12 = lVar12 + -1;
    if (uVar9 != 0) break;
LAB_03039808:
    if (lVar12 < 1) goto LAB_03039bdc;
  }
LAB_0303982c:
  if (lVar18 != 0) {
    puVar3 = *(undefined8 **)(lVar18 + 8);
    uVar17 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= *(ulong *)(lVar18 + 0x10)) &&
       (*(ulong *)(lVar18 + 8) = uVar17, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = "TtRebuildCachesOfDirtyMaterialsOrQualities";
      uVar15 = nn::os::GetSystemTick();
      puVar3[1] = uVar15;
    }
  }
  lVar12 = *(long *)(param_1 + 0x38);
  local_80 = lVar18;
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar16 = *(int *)(param_1 + 0x5c) + 1;
    if ((*(byte *)(lVar12 + 0x54) & 0xf) == 0) {
      uVar17 = 0;
      pbVar20 = (byte *)(lVar12 + 0x114);
      do {
        uVar9 = (int)uVar17 + 1;
        uVar17 = (ulong)uVar9;
        if (uVar16 <= uVar9) goto LAB_03039870;
        bVar4 = *pbVar20;
        pbVar20 = pbVar20 + 0xc0;
      } while ((bVar4 & 0xf) == 0);
    }
    else {
      uVar17 = 0;
    }
    do {
      if (((*(byte *)(lVar12 + uVar17 * 0xc0 + 0x88) & 1) != 0) &&
         ((uVar5 = *(ushort *)(lVar12 + uVar17 * 0xc0 + 0x8a),
          (1 << (ulong)(uVar5 & 0x1f) &
          *(uint *)(*(long *)(param_1 + 0x8b8) + ((ulong)(uVar5 >> 3) & 0x1ffc))) != 0 ||
          (bVar4 = *(byte *)(lVar12 + uVar17 * 0xc0 + 0x89),
          (1 << (ulong)(bVar4 & 0x1f) &
          *(uint *)(*(long *)(param_1 + 0x8d0) + ((ulong)(bVar4 >> 3) & 0x1c))) != 0)))) {
        FUN_03031544(param_1,*(undefined4 *)(lVar12 + uVar17 * 0xc0 + 0x50),0);
      }
      pbVar20 = (byte *)(lVar12 + 0x54 + (ulong)((int)uVar17 + 1) * 0xc0);
      do {
        uVar9 = (int)uVar17 + 1;
        uVar17 = (ulong)uVar9;
        if (uVar16 <= uVar9) goto LAB_03039870;
        bVar4 = *pbVar20;
        pbVar20 = pbVar20 + 0xc0;
      } while ((bVar4 & 0xf) == 0);
    } while( true );
  }
LAB_03039870:
  pvVar25 = *(void **)(param_1 + 0x8b8);
  uVar17 = (ulong)*(int *)(param_1 + 0x8c0);
  pvVar27 = pvVar25;
  if (((ulong)pvVar25 & 0xf) == 0) {
    uVar21 = uVar17;
  }
  else {
    uVar21 = 4 - (((ulong)pvVar25 & 0xf) >> 2);
    uVar19 = uVar17;
    if (uVar21 <= uVar17) {
      uVar19 = uVar21;
    }
    uVar21 = uVar17 - uVar19;
    if (pvVar25 < (void *)((long)pvVar25 + uVar19 * 4)) {
      memset(pvVar25,0,uVar19 * 4);
      pvVar27 = (void *)((long)pvVar25 + uVar19 * 4);
    }
  }
  if ((3 < uVar21) && (0 < (long)(uVar21 & 0xfffffffffffffffc))) {
    pvVar2 = (void *)((long)pvVar27 + (uVar21 & 0xfffffffffffffffc) * 4);
    if (pvVar2 <= (void *)((long)pvVar27 + 0x10U)) {
      pvVar2 = (void *)((long)pvVar27 + 0x10U);
    }
    memset(pvVar27,0,(long)pvVar2 + ~(ulong)pvVar27 + 0x10 & 0xfffffffffffffff0);
    pvVar27 = (void *)((long)pvVar27 + ((long)pvVar2 + ~(ulong)pvVar27 & 0xfffffffffffffff0) + 0x10)
    ;
  }
  if (pvVar27 < (void *)((long)pvVar25 + uVar17 * 4)) {
    memset(pvVar27,0,(long)pvVar25 + ~(ulong)pvVar27 + uVar17 * 4 + 4 & 0xfffffffffffffffc);
  }
  pvVar25 = *(void **)(param_1 + 0x8d0);
  uVar17 = (ulong)*(int *)(param_1 + 0x8d8);
  pvVar27 = pvVar25;
  if (((ulong)pvVar25 & 0xf) == 0) {
    uVar21 = uVar17;
  }
  else {
    uVar21 = 4 - (((ulong)pvVar25 & 0xf) >> 2);
    uVar19 = uVar17;
    if (uVar21 <= uVar17) {
      uVar19 = uVar21;
    }
    uVar21 = uVar17 - uVar19;
    if (pvVar25 < (void *)((long)pvVar25 + uVar19 * 4)) {
      memset(pvVar25,0,uVar19 * 4);
      pvVar27 = (void *)((long)pvVar25 + uVar19 * 4);
    }
  }
  if ((3 < uVar21) && (0 < (long)(uVar21 & 0xfffffffffffffffc))) {
    pvVar2 = (void *)((long)pvVar27 + (uVar21 & 0xfffffffffffffffc) * 4);
    if (pvVar2 <= (void *)((long)pvVar27 + 0x10U)) {
      pvVar2 = (void *)((long)pvVar27 + 0x10U);
    }
    memset(pvVar27,0,(long)pvVar2 + ~(ulong)pvVar27 + 0x10 & 0xfffffffffffffff0);
    pvVar27 = (void *)((long)pvVar27 + ((long)pvVar2 + ~(ulong)pvVar27 & 0xfffffffffffffff0) + 0x10)
    ;
  }
  if (pvVar27 < (void *)((long)pvVar25 + uVar17 * 4)) {
    memset(pvVar27,0,(long)pvVar25 + ~(ulong)pvVar27 + uVar17 * 4 + 4 & 0xfffffffffffffffc);
  }
  if (local_80 != 0) {
    puVar3 = *(undefined8 **)(local_80 + 8);
    uVar17 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= *(ulong *)(local_80 + 0x10)) &&
       (*(ulong *)(local_80 + 8) = uVar17, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = &DAT_0390f40e;
      uVar15 = nn::os::GetSystemTick();
      puVar3[1] = uVar15;
    }
  }
LAB_03039bdc:
  lVar12 = *(long *)(param_1 + 0x8f8);
  uVar5 = *(ushort *)(lVar12 + 0x60);
  if (uVar5 != 0xffff) {
    lVar23 = *(long *)(lVar12 + 0x40);
    uVar17 = (ulong)(uint)uVar5;
    do {
      if (*(short *)(lVar23 + uVar17 * 0x10 + 2) == 0xe) {
        puVar22 = (ushort *)(lVar23 + uVar17 * 0x10);
        goto LAB_03039c18;
      }
      uVar6 = *(ushort *)(lVar23 + uVar17 * 0x10);
      uVar17 = (ulong)uVar6;
    } while (uVar6 != 0xffff);
  }
  uVar17 = (ulong)*(ushort *)(lVar12 + 0x38);
  if (uVar17 == 0xffff) {
    iVar36 = *(int *)(lVar12 + 0x48);
    uVar17 = (ulong)iVar36;
    lVar23 = *(long *)(lVar12 + 0x40);
    if ((int)(*(uint *)(lVar12 + 0x4c) & 0x3fffffff) <= iVar36) {
      lVar23 = FUN_0304662c(PTR_PTR_0434a080,iVar36 + 1,lVar23,uVar17);
      *(long *)(lVar12 + 0x40) = lVar23;
    }
    puVar22 = (ushort *)(lVar23 + uVar17 * 0x10);
    puVar22[4] = 0;
    puVar22[5] = 0;
    puVar22[6] = 0;
    puVar22[7] = 0;
    *(int *)(lVar12 + 0x48) = iVar36 + 1;
    uVar5 = *(ushort *)(lVar12 + 0x60);
  }
  else {
    puVar22 = (ushort *)(*(long *)(lVar12 + 0x40) + uVar17 * 0x10);
    *(ushort *)(lVar12 + 0x38) = *puVar22;
  }
  *puVar22 = uVar5;
  *(short *)(lVar12 + 0x60) = (short)uVar17;
  puVar22[1] = 0xe;
LAB_03039c18:
  uVar17 = *(ulong *)(puVar22 + 4) & 0xfffffffffffffffc;
  if (uVar17 == 0) {
LAB_03039c24:
    FUN_030391e8(puVar22 + 4,param_1,&LAB_030392c0,0);
    lVar12 = *(long *)(param_1 + 0x648);
    if (lVar12 != 0) goto LAB_0303a058;
LAB_03039c78:
    iVar36 = *(int *)(param_1 + 0x5a0);
    uVar40 = *(undefined8 *)(param_1 + 0x550);
    fVar30 = *param_2;
    fVar34 = param_2[1];
    *(float *)(param_1 + 0x5a4) = 1.0 / (float)iVar36;
    *(float *)(param_1 + 0x5ac) = 1.0 / (float)*(int *)(param_1 + 0x5a8);
    uVar15 = CONCAT44(fVar30,fVar30);
    *(undefined8 *)(param_1 + 0x540) = uVar15;
    fVar29 = 1.0 / fVar30;
    *(ulong *)(param_1 + 0x548) = CONCAT44(fVar29,fVar29);
    if ((float)uVar40 == 0.0) {
      uVar40 = NEON_fmov(0x3f800000,4);
    }
    else {
      uVar42 = NEON_frecpe(uVar40,4);
      uVar43 = NEON_frecps(uVar40,uVar42,4);
      fVar35 = (float)uVar42 * (float)uVar43;
      fVar41 = (float)((ulong)uVar42 >> 0x20) * (float)((ulong)uVar43 >> 0x20);
      uVar40 = NEON_frecps(uVar40,CONCAT44(fVar41,fVar35),4);
      uVar40 = CONCAT44(fVar30 * fVar41 * (float)((ulong)uVar40 >> 0x20),
                        fVar30 * fVar35 * (float)uVar40);
    }
    *(undefined8 *)(param_1 + 0x558) = uVar40;
    if (fVar30 <= fVar34) {
      uVar15 = CONCAT44(fVar34,fVar34);
    }
    fVar34 = fVar30 * (1.0 / (float)iVar36);
    *(undefined8 *)(param_1 + 0x560) = uVar15;
    fVar37 = (float)*(undefined8 *)(param_1 + 0x870);
    fVar31 = fVar37 * fVar30;
    fVar35 = (float)((ulong)*(undefined8 *)(param_1 + 0x870) >> 0x20);
    fVar32 = fVar35 * fVar30;
    fVar33 = (float)*(undefined8 *)(param_1 + 0x878);
    fVar30 = fVar33 * fVar30;
    *(ulong *)(param_1 + 0x568) = CONCAT44(fVar34,fVar34);
    uVar15 = NEON_scvtf(CONCAT44(iVar36,iVar36),4);
    fVar38 = fVar31 * fVar31 + fVar32 * fVar32 + fVar30 * fVar30;
    uVar42 = CONCAT44(fVar31 * fVar31 + fVar32 * fVar32 + fVar30 * fVar30,fVar38);
    fVar41 = fVar33 * fVar33 + fVar37 * fVar37 + fVar35 * fVar35;
    uVar43 = CONCAT44(fVar33 * fVar33 + fVar37 * fVar37 + fVar35 * fVar35,fVar41);
    fVar35 = fVar35 * fVar34;
    *(ulong *)(param_1 + 0x5c8) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x878) >> 0x20) * fVar34,fVar33 * fVar34)
    ;
    *(ulong *)(param_1 + 0x5c0) =
         CONCAT17((char)((uint)fVar35 >> 0x18),
                  CONCAT16((char)((uint)fVar35 >> 0x10),
                           CONCAT15((char)((uint)fVar35 >> 8),
                                    CONCAT14(SUB41(fVar35,0),fVar37 * fVar34))));
    fVar34 = fVar29 * (float)uVar15;
    *(ulong *)(param_1 + 0x570) = CONCAT44(fVar29 * (float)((ulong)uVar15 >> 0x20),fVar34);
    fVar35 = *(float *)(param_1 + 0x614) * fVar34;
    fVar29 = -(fVar34 * *(float *)(param_1 + 0x61c));
    uVar15 = NEON_frsqrte(uVar43,4);
    *(ulong *)(param_1 + 0x608) = CONCAT44(fVar29,fVar29);
    fVar29 = (float)uVar15;
    fVar34 = (float)((ulong)uVar15 >> 0x20);
    uVar15 = NEON_frsqrts(uVar43,CONCAT44(fVar34 * fVar34,fVar29 * fVar29),4);
    *(ulong *)(param_1 + 0x600) = CONCAT44(fVar35,fVar35);
    uVar40 = NEON_frsqrte(uVar42,4);
    fVar29 = fVar29 * (float)uVar15;
    fVar34 = fVar34 * (float)((ulong)uVar15 >> 0x20);
    fVar35 = (float)uVar40;
    fVar37 = (float)((ulong)uVar40 >> 0x20);
    uVar15 = NEON_frsqrts(uVar42,CONCAT44(fVar37 * fVar37,fVar35 * fVar35),4);
    fVar35 = fVar35 * (float)uVar15;
    fVar37 = fVar37 * (float)((ulong)uVar15 >> 0x20);
    uVar15 = NEON_frsqrts(uVar42,CONCAT44(fVar37 * fVar37,fVar35 * fVar35),4);
    uVar40 = NEON_frsqrts(uVar43,CONCAT44(fVar34 * fVar34,fVar29 * fVar29),4);
    fVar34 = fVar38 * (float)uVar15 * fVar35;
    iVar39 = -(uint)(fVar38 <= 0.0);
    iVar36 = -(uint)(fVar41 <= 0.0);
    fVar41 = fVar41 * (float)uVar40 * fVar29;
    *(ulong *)(param_1 + 0x5d8) =
         CONCAT44(CONCAT13((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                           CONCAT12((byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10),
                                    CONCAT11((byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar39 >> 8),
                                             SUB41(fVar34,0) & ~(byte)iVar39))),fVar30);
    *(ulong *)(param_1 + 0x5d0) = CONCAT44(fVar32,fVar31);
    fVar29 = (float)CONCAT13((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                             CONCAT12((byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                      CONCAT11((byte)((uint)fVar41 >> 8) &
                                               ~(byte)((uint)iVar36 >> 8),
                                               SUB41(fVar41,0) & ~(byte)iVar36)));
    if (fVar29 == 0.0) {
      *(undefined4 *)(param_1 + 0x5b0) = 0x411cf5c3;
    }
    else {
      *(float *)(param_1 + 0x5b0) = fVar29;
    }
  }
  else {
    uVar17 = *(ulong *)(uVar17 + 8);
    uVar16 = (uint)((uVar17 & 3) == 0);
    while ((uVar17 & 0xfffffffffffffffc) != 0) {
      uVar17 = *(ulong *)((uVar17 & 0xfffffffffffffffc) + 8);
      if ((uVar17 & 3) == 0) {
        uVar16 = uVar16 + 1;
      }
    }
    if (uVar16 == 0) goto LAB_03039c24;
    lVar12 = *(long *)(param_1 + 0x648);
    if (lVar12 == 0) goto LAB_03039c78;
LAB_0303a058:
    FUN_0303ecb8(*param_2,param_2[1],lVar12,param_1 + 0x870,param_1 + 0x530);
  }
  if (lVar18 != 0) {
    puVar3 = *(undefined8 **)(lVar18 + 8);
    uVar17 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= *(ulong *)(lVar18 + 0x10)) &&
       (*(ulong *)(lVar18 + 8) = uVar17, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = "StCreateSimulationContext";
      uVar15 = nn::os::GetSystemTick();
      puVar3[1] = uVar15;
      lVar12 = *(long *)(param_1 + 0x908);
      goto joined_r0x03039f4c;
    }
  }
  lVar12 = *(long *)(param_1 + 0x908);
joined_r0x03039f4c:
  if (lVar12 == 0) {
    lVar12 = *(long *)(lVar24 + 0x38d490);
    if (lVar12 == 0) {
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar24 + 0x38d490) = lVar12;
    }
    plVar11 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
    plVar14 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x640,0);
    *plVar14 = (long)(plVar14 + 2);
    lVar12 = 0x48;
    *(undefined4 *)(plVar14 + 1) = 0;
    *(undefined4 *)((long)plVar14 + 0xc) = 0x80000020;
    plVar11 = plVar14 + 0x24;
    do {
      iVar36 = (int)lVar12;
      *(int *)((long)plVar11 + -0xc) = iVar36 + -0x47;
      *(int *)(plVar11 + -1) = iVar36 + -0x46;
      lVar12 = lVar12 + 4;
      *(int *)((long)plVar11 + -4) = iVar36 + -0x45;
      *(int *)plVar11 = iVar36 + -0x44;
      plVar11 = plVar11 + 2;
    } while (lVar12 != 0x148);
    *(undefined4 *)(plVar14 + 0xa2) = 0x1ff;
    *(undefined4 *)(plVar14 + 0x22) = 0;
    plVar14[0xa5] = -0x8000000000000000;
    plVar14[0xa7] = -0x8000000000000000;
    plVar14[0xaa] = (long)(plVar14 + 0xae);
    plVar14[0xa4] = 0;
    plVar14[0xa6] = 0;
    plVar14[0xa8] = 0;
    *(undefined4 *)(plVar14 + 0xab) = 0;
    *(undefined4 *)((long)plVar14 + 0x55c) = 0x80000018;
    *(long **)(param_1 + 0x908) = plVar14;
    FUN_0301b3b4(plVar14,param_1,param_2[2]);
  }
  else {
    FUN_0301ba1c(lVar12,param_1,param_2[2]);
  }
  *(undefined4 *)(param_1 + 0x808) = 4;
  if (lVar18 != 0) {
    puVar3 = *(undefined8 **)(lVar18 + 8);
    uVar17 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= *(ulong *)(lVar18 + 0x10)) &&
       (*(ulong *)(lVar18 + 8) = uVar17, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = &DAT_03922da5;
      uVar15 = nn::os::GetSystemTick();
      puVar3[1] = uVar15;
    }
  }
  local_a8 = CONCAT62(local_a8._2_6_,0xffff);
  (**(code **)(**(long **)(param_1 + 0x4a8) + 0x10))
            (*(long **)(param_1 + 0x4a8),*(undefined8 *)(param_1 + 0x908),&local_570);
  if (lVar28 != 0) {
    puVar3 = *(undefined8 **)(lVar28 + 8);
    uVar17 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= *(ulong *)(lVar28 + 0x10)) &&
       (*(ulong *)(lVar28 + 8) = uVar17, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = "EtBuildCollideTasks";
      uVar15 = nn::os::GetSystemTick();
      puVar3[1] = uVar15;
    }
  }
  if ((int)local_550 != 0 || (int)local_240 != 0) {
    if (*(long *)(lVar24 + 0x38d490) == 0) {
      lVar18 = FUN_0333d16c(0,1);
      *(long *)(lVar24 + 0x38d490) = lVar18;
      lVar24 = *(long *)(lVar18 + 0x10);
    }
    else {
      lVar24 = *(long *)(*(long *)(lVar24 + 0x38d490) + 0x10);
    }
    if (lVar24 != 0) {
      puVar3 = *(undefined8 **)(lVar24 + 8);
      uVar17 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar17 <= *(ulong *)(lVar24 + 0x10)) &&
         (*(ulong *)(lVar24 + 8) = uVar17, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = "TtCollide";
        uVar15 = nn::os::GetSystemTick();
        puVar3[1] = uVar15;
      }
    }
    local_80 = lVar24;
    (**(code **)(*param_3 + 0xb0))(param_3,&local_570,0);
    if (lVar24 != 0) {
      puVar3 = *(undefined8 **)(lVar24 + 8);
      uVar17 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar17 <= *(ulong *)(lVar24 + 0x10)) &&
         (*(ulong *)(lVar24 + 8) = uVar17, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = &DAT_0390f40e;
        uVar15 = nn::os::GetSystemTick();
        puVar3[1] = uVar15;
      }
    }
  }
  plVar11 = local_1b8;
  puVar10 = PTR_PTR_0434a080;
  local_570 = &PTR_LAB_04350ee8;
  if ((int)local_1b0 == 0) {
LAB_0303a408:
    lVar24 = local_1b0;
    uVar17 = (ulong)local_1b0._4_4_;
    local_1b0 = (ulong)local_1b0._4_4_ << 0x20;
    if ((-1 < lVar24) && (local_1b8 != (long *)0x0)) {
      (**(code **)(*(long *)puVar10 + 0x18))(puVar10,local_1b8,(uVar17 & 0x3fffffff) << 3);
    }
    lVar24 = local_240;
    uVar16 = local_240._4_4_;
    local_1b8 = (long *)0x0;
    local_1b0 = CONCAT44(0x80000000,(int)local_1b0);
    local_240 = (ulong)local_240._4_4_ << 0x20;
    if ((-1 < lVar24) && (local_248 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)puVar10 + 0x18))(puVar10,local_248,uVar16 << 2);
    }
    lVar24 = local_550;
    uVar17 = (ulong)local_550._4_4_;
    local_248 = (undefined1 *)0x0;
    local_240 = CONCAT44(0x80000000,(int)local_240);
    local_550 = (ulong)local_550._4_4_ << 0x20;
    if ((-1 < lVar24) && (local_558 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)puVar10 + 0x18))(puVar10,local_558,(uVar17 & 0x3fffffff) * 0x18);
    }
    if (lVar26 != 0) {
      puVar3 = *(undefined8 **)(lVar26 + 8);
      uVar17 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar17 <= *(ulong *)(lVar26 + 0x10)) &&
         (*(ulong *)(lVar26 + 8) = uVar17, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = &DAT_0390f40e;
        uVar15 = nn::os::GetSystemTick();
        puVar3[1] = uVar15;
      }
    }
    return;
  }
  plVar14 = local_1b8 + (long)(int)local_1b0 + -1;
  plVar13 = (long *)*plVar14;
  if (plVar13 == (long *)0x0) goto LAB_0303a3d4;
  if (plVar13[1] == 0) goto LAB_0303a3d4;
  plVar1 = plVar13 + 2;
  do {
    lVar24 = *plVar1 + -1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar24;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    if (lVar24 == 0) {
      (**(code **)(*plVar13 + 0x18))();
    }
LAB_0303a3d4:
    do {
      if (plVar14 == plVar11) goto LAB_0303a408;
      plVar14 = plVar14 + -1;
      plVar13 = (long *)*plVar14;
    } while ((plVar13 == (long *)0x0) || (plVar13[1] == 0));
    plVar1 = plVar13 + 2;
    do {
      lVar24 = *plVar1 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar24;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  } while( true );
}


