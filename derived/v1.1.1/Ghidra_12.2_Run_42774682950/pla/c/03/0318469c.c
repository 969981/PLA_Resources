/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318469c; name: FUN_0318469c
 */


void FUN_0318469c(long param_1,long param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined2 *puVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  undefined *__dest;
  long *plVar19;
  long lVar20;
  int *piVar21;
  undefined4 *puVar22;
  uint uVar23;
  int iVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long local_d8;
  long local_c0;
  undefined4 local_b8 [2];
  uint local_b0 [2];
  int local_a8 [2];
  int local_a0 [2];
  int local_98;
  undefined4 uStack_94;
  undefined4 *local_90;
  undefined *puStack_88;
  undefined4 *local_80;
  int *piStack_78;
  
  puVar9 = PTR_PTR_0434a080;
  lVar18 = *(long *)(param_2 + 0x38);
  lVar17 = (long)*(int *)(*(long *)(param_1 + 0x20) + 0x60);
  lVar13 = lVar18 + lVar17 * 0xf0;
  uVar12 = *(uint *)(lVar13 + 200);
  uVar25 = (ulong)uVar12;
  lVar13 = *(long *)(lVar13 + 0xc0);
  local_90 = (undefined4 *)CONCAT44(local_90._4_4_,uVar12);
  if ((int)uVar12 < 1) {
    uVar25 = 0;
    lVar14 = 0;
    uVar23 = 0x80000000;
  }
  else {
    lVar14 = FUN_032cf190(PTR_PTR_0434a080,0x10,&local_90);
    uVar23 = (uint)local_90;
    lVar20 = 0;
    do {
      puVar22 = (undefined4 *)(lVar13 + lVar20);
      *(undefined4 *)(lVar14 + lVar20) = *puVar22;
      lVar10 = *(long *)(puVar22 + 2);
      *(long *)((undefined4 *)(lVar14 + lVar20) + 2) = lVar10;
      if (lVar10 != 0) {
        FUN_032d645c();
      }
      uVar12 = uVar12 - 1;
      lVar20 = lVar20 + 0x10;
    } while (uVar12 != 0);
  }
  plVar19 = (long *)(lVar18 + lVar17 * 0xf0 + 0xd0);
  iVar24 = (int)uVar25;
  if (*(int *)(*plVar19 + 4) == -2) {
    iVar16 = 1;
    __dest = &DAT_03aad864;
  }
  else {
    piVar21 = (int *)(lVar18 + lVar17 * 0xf0 + 0xd8);
    iVar16 = *piVar21 + 1;
    lVar13 = tpidr_el0;
    lVar17 = *(long *)(lVar13 + 0x38d490);
    if (lVar17 == 0) {
      lVar17 = FUN_0333d16c(0,1);
      *(long *)(lVar13 + 0x38d490) = lVar17;
    }
    __dest = (undefined *)FUN_032cf2d8(*(undefined8 *)(*(long *)(lVar17 + 8) + 0x58),8,iVar16);
    memcpy(__dest,(void *)*plVar19,(long)*piVar21 * 8 + 8);
  }
  uVar12 = iVar24 - 1;
  if (0 < iVar24) {
    do {
      lVar17 = *(long *)(lVar14 + ((long)((ulong)uVar12 << 0x20) >> 0x1c) + 8);
      lVar13 = *(long *)(param_1 + 0x20);
      if (*(int *)(lVar17 + 0x18) == *(int *)(lVar13 + 0x5c)) {
        iVar2 = *(int *)(lVar13 + 0x60);
        FUN_0317842c(local_a0,param_2,*(undefined4 *)(lVar17 + 0x1c));
        iVar3 = local_a0[0];
        iVar5 = local_a0[0];
joined_r0x03184b24:
        if (iVar5 != -1) {
          lVar13 = *(long *)(param_2 + 0x38);
          lVar18 = *(long *)(lVar13 + (long)iVar2 * 0xf0 + 0x10);
          if (lVar18 == 0) {
            local_d8 = 0;
          }
          else if (*(char *)(lVar18 + 0x30) == '\x01') {
            local_d8 = *(long *)(lVar18 + 0x20);
          }
          else {
            local_d8 = FUN_02898d80();
            lVar13 = *(long *)(param_2 + 0x38);
          }
          lVar13 = *(long *)(lVar13 + (long)iVar3 * 0xf0 + 0x10);
          if (lVar13 == 0) {
            local_c0 = 0;
            iVar5 = *(int *)(lVar17 + 0x38);
          }
          else if (*(char *)(lVar13 + 0x30) == '\x01') {
            local_c0 = *(long *)(lVar13 + 0x20);
            iVar5 = *(int *)(lVar17 + 0x38);
          }
          else {
            local_c0 = FUN_02898d80();
            iVar5 = *(int *)(lVar17 + 0x38);
          }
          if (iVar5 != 0) {
            lVar13 = *(long *)(lVar17 + 0x30);
            puVar22 = (undefined4 *)(lVar13 + 0xc);
            do {
              uVar4 = puVar22[-3];
              puVar7 = (undefined8 *)(*(long *)(local_d8 + 0x38) + (long)(int)uVar4 * 0x10);
              uVar32 = *puVar7;
              uVar6 = puVar22[-2];
              puVar8 = (undefined8 *)(*(long *)(local_c0 + 0x38) + (long)(int)uVar6 * 0x10);
              uVar31 = *puVar8;
              fVar26 = (float)uVar32 - (float)uVar31;
              fVar28 = (float)((ulong)uVar32 >> 0x20) - (float)((ulong)uVar31 >> 0x20);
              fVar29 = (float)puVar7[1] - (float)puVar8[1];
              fVar26 = fVar26 * fVar26;
              fVar28 = fVar28 * fVar28;
              fVar29 = fVar29 * fVar29;
              fVar27 = fVar26 + fVar28 + fVar29;
              uVar32 = CONCAT44(fVar26 + fVar28 + fVar29,fVar27);
              uVar31 = NEON_frsqrte(uVar32,4);
              fVar26 = (float)uVar31;
              fVar28 = (float)((ulong)uVar31 >> 0x20);
              uVar31 = NEON_frsqrts(uVar32,CONCAT44(fVar28 * fVar28,fVar26 * fVar26),4);
              fVar26 = fVar26 * (float)uVar31;
              fVar28 = fVar28 * (float)((ulong)uVar31 >> 0x20);
              uVar32 = NEON_frsqrts(uVar32,CONCAT44(fVar28 * fVar28,fVar26 * fVar26),4);
              iVar30 = -(uint)(fVar27 <= 0.0);
              fVar27 = fVar27 * (float)uVar32 * fVar26;
              fVar27 = (float)CONCAT13((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                                       CONCAT12((byte)((uint)fVar27 >> 0x10) &
                                                ~(byte)((uint)iVar30 >> 0x10),
                                                CONCAT11((byte)((uint)fVar27 >> 8) &
                                                         ~(byte)((uint)iVar30 >> 8),
                                                         SUB41(fVar27,0) & ~(byte)iVar30)));
              local_90 = (undefined4 *)0x0;
              fVar26 = fVar27;
              if (0.0 <= (float)((uint)*(ushort *)(puVar22 + 1) << 0x10)) {
                fVar26 = (float)((uint)*(ushort *)(puVar22 + 1) << 0x10);
              }
              local_b0[0] = puVar22[-3];
              if (0.0 <= (float)((uint)*(ushort *)((long)puVar22 + 6) << 0x10)) {
                fVar27 = (float)((uint)*(ushort *)((long)puVar22 + 6) << 0x10);
              }
              puVar11 = (undefined2 *)FUN_0315bf58(local_d8,local_b0,&local_90,0);
              *puVar11 = (short)((uint)(fVar26 * 1.0039062) >> 0x10);
              *(uint *)(puVar11 + 2) = uVar6 | iVar3 << 0x16;
              puVar11[1] = 0x40;
              if (local_90 != (undefined4 *)0x0) {
                *local_90 = puVar22[-1];
              }
              local_90 = (undefined4 *)0x0;
              local_b8[0] = puVar22[-2];
              puVar11 = (undefined2 *)FUN_0315bf58(local_c0,local_b8,&local_90,0);
              *puVar11 = (short)((uint)(fVar27 * 1.0039062) >> 0x10);
              *(uint *)(puVar11 + 2) = uVar4 | iVar2 << 0x16;
              puVar11[1] = 0x40;
              if (local_90 != (undefined4 *)0x0) {
                *local_90 = *puVar22;
              }
              puVar1 = puVar22 + 2;
              puVar22 = puVar22 + 5;
            } while (puVar1 != (undefined4 *)(lVar13 + (long)iVar5 * 0x14));
          }
        }
      }
      else if (*(int *)(lVar17 + 0x1c) == *(int *)(lVar13 + 0x5c)) {
        iVar3 = *(int *)(lVar13 + 0x60);
        FUN_0317842c(local_a8,param_2);
        iVar2 = local_a8[0];
        iVar5 = local_a8[0];
        goto joined_r0x03184b24;
      }
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  if ((__dest != (undefined *)0x0) && (*(int *)(__dest + 4) != -2)) {
    lVar13 = tpidr_el0;
    lVar17 = *(long *)(lVar13 + 0x38d490);
    if (lVar17 == 0) {
      lVar17 = FUN_0333d16c(0,1);
      *(long *)(lVar13 + 0x38d490) = lVar17;
    }
    uVar15 = (ulong)iVar16;
    plVar19 = *(long **)(*(long *)(lVar17 + 8) + 0x58);
    uStack_94 = 8;
    local_98 = iVar16;
    if ((uVar15 & 0x1ffffffff0000000) != 0) {
      local_90 = (undefined4 *)0x2;
      puStack_88 = &DAT_0411b3a0;
      local_80 = &uStack_94;
      piStack_78 = &local_98;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_90);
    }
    (**(code **)(*plVar19 + 0x18))
              (plVar19,__dest,
               -(uVar15 >> 0x1c & 1) & 0xffffffff00000000 | (uVar15 & 0x1fffffff) << 3);
  }
  if (iVar24 != 0) {
    uVar25 = -(uVar25 >> 0x1f) & 0xfffffff000000000 | uVar25 << 4;
    do {
      if (*(long *)(lVar14 + -8 + uVar25) != 0) {
        FUN_032d647c();
      }
      uVar25 = uVar25 - 0x10;
    } while (uVar25 != 0);
  }
  if ((-1 < (int)uVar23) && (lVar14 != 0)) {
    FUN_032cf244(puVar9,lVar14,0x10,uVar23 & 0x3fffffff);
  }
  return;
}


