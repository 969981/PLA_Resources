/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001a5e00; name: FUN_001a5e00
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001a5e00(long param_1,int param_2,long param_3,long *param_4,long *param_5,ulong param_6,
                 uint param_7,int param_8)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  ushort uVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  bool bVar16;
  int iVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  ushort *puVar30;
  ushort *puVar31;
  uint uVar32;
  undefined1 (*pauVar33) [16];
  uint uVar34;
  int iVar35;
  ulong uVar36;
  float *pfVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float fVar43;
  undefined1 auVar44 [12];
  float fVar50;
  undefined1 auVar45 [16];
  float fVar51;
  float fVar54;
  undefined1 auVar46 [16];
  float fVar42;
  float fVar52;
  float fVar55;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar53;
  float fVar56;
  undefined1 auVar49 [16];
  undefined1 auVar57 [12];
  undefined1 auVar58 [16];
  undefined8 local_3c0;
  undefined8 local_3b0;
  undefined8 local_3a0;
  undefined1 auStack_340 [16];
  undefined1 auStack_330 [512];
  undefined8 local_130;
  float local_128;
  undefined8 local_124;
  float local_11c;
  undefined8 local_118;
  float local_110;
  undefined8 local_10c;
  float local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  long lStack_c0;
  byte local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  ushort *local_88;
  uint local_80;
  undefined8 local_7c;
  
  if (((param_6 & 1) == 0) && (FUN_0333e7e4(param_3), param_4 != (long *)0x0)) {
    *(undefined4 *)(param_4 + 1) = 0;
  }
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_b8 = *(byte *)(param_1 + 0x3c);
  local_80 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = (ushort *)0x0;
  local_7c = 0xffffffffffffffff;
  auVar45 = *(undefined1 (*) [16])(param_1 + 0x10);
  auStack_f0._0_4_ =
       (*(float *)(param_1 + 0x20) - auVar45._0_4_) * (float)*(undefined8 *)PTR_DAT_04372410;
  auStack_f0._4_4_ =
       (*(float *)(param_1 + 0x24) - auVar45._4_4_) *
       (float)((ulong)*(undefined8 *)PTR_DAT_04372410 >> 0x20);
  auVar58._8_4_ =
       (*(float *)(param_1 + 0x28) - auVar45._8_4_) * (float)*(undefined8 *)(PTR_DAT_04372410 + 8);
  auVar58._0_8_ = auStack_f0._0_8_;
  auVar58._12_4_ =
       (*(float *)(param_1 + 0x2c) - auVar45._12_4_) *
       (float)((ulong)*(undefined8 *)(PTR_DAT_04372410 + 8) >> 0x20);
  uStack_f8 = auVar45._8_8_;
  local_100 = auVar45._0_8_;
  auStack_f0._8_8_ = auVar58._8_8_;
  if (param_2 != -1) {
    local_7c = CONCAT44(param_2,param_2);
    local_b0 = param_1 + 0x40 + (long)param_2 * 0x60 + *(long *)(param_1 + 0x40);
    lVar25 = *(long *)(param_1 + 0x70);
    local_a0 = 0;
    if (lVar25 != 0) {
      local_a0 = lVar25 + param_1 + 0x70;
    }
    local_a0 = local_a0 + (ulong)*(uint *)(local_b0 + 0x48) * 4;
    lVar25 = *(long *)(param_1 + 0x80);
    local_98 = 0;
    if (lVar25 != 0) {
      local_98 = lVar25 + param_1 + 0x80;
    }
    local_98 = local_98 + (ulong)*(byte *)(local_b0 + 0x5b) * 0x80000;
    lVar26 = *(long *)(param_1 + 0x60);
    lVar25 = 0;
    if (lVar26 != 0) {
      lVar25 = lVar26 + param_1 + 0x60;
    }
    lVar29 = *(long *)(param_1 + 0x90);
    lVar26 = 0;
    if (lVar29 != 0) {
      lVar26 = lVar29 + param_1 + 0x90;
    }
    local_88 = (ushort *)(lVar26 + (ulong)*(uint *)(local_b0 + 0x54) * 4);
    local_80 = (uint)*(byte *)(local_b0 + 0x58);
    lVar26 = *(long *)(param_1 + 0x50);
    local_a8 = 0;
    if (lVar26 != 0) {
      local_a8 = lVar26 + param_1 + 0x50;
    }
    local_a8 = local_a8 + (ulong)*(uint *)(local_b0 + 0x50) * 4;
    local_e0 = *(undefined8 *)(local_b0 + 0x30);
    uStack_d8 = *(undefined8 *)(local_b0 + 0x38);
    uStack_c8 = (ulong)SUB124(*(undefined1 (*) [12])(local_b0 + 0x3c),8);
    local_d0 = SUB128(*(undefined1 (*) [12])(local_b0 + 0x3c),0);
    local_90 = lVar25 + (ulong)*(uint *)(local_b0 + 0x4c) * 2 +
               (ulong)*(byte *)(local_b0 + 0x58) * -2;
  }
  lVar25 = local_a8;
  lVar26 = local_b0;
  lStack_c0 = param_1;
  auVar45 = (**(code **)(*param_5 + 0x28))(param_5);
  fVar50 = auVar45._4_4_;
  fVar40 = auVar45._0_4_;
  auVar58 = NEON_ext(auVar45,auVar45,8,1);
  bVar16 = 0.0 <= auVar58._0_4_ * fVar40 * fVar50;
  iVar19 = 2;
  if (bVar16) {
    iVar19 = 1;
  }
  iVar20 = 2;
  if (!bVar16) {
    iVar20 = 1;
  }
  bVar6 = *(byte *)(lVar26 + 0x59);
  if ((ulong)bVar6 == 0) {
LAB_001a6a94:
    if ((param_7 & 1) != 0) {
      FUN_032916ec(param_3);
    }
    return;
  }
  uVar22 = *(undefined8 *)PTR_PTR_04372408;
  puVar2 = (uint *)(param_3 + 0x34);
  puVar3 = (uint *)((long)param_4 + 0xc);
  uVar36 = 0;
  do {
    lVar26 = lVar25 + uVar36 * 4;
    bVar7 = *(byte *)(lVar26 + 1);
    bVar8 = *(byte *)(lVar26 + 3);
    bVar9 = *(byte *)(lVar26 + 2);
    uVar34 = (uint)bVar9;
    iVar35 = (int)uVar36;
    if ((uint)bVar7 == (uint)bVar8) {
      if (uVar34 == 3) {
        uVar18 = (**(code **)(*param_5 + 0x10))(param_5,(int)local_7c << 8 | iVar35 << 1);
        lVar25 = local_a8;
        if ((uVar18 & 1) != 0) {
          (**(code **)(*param_5 + 0x18))(param_5,&local_100,uVar36 & 0xffffffff,param_3);
          lVar25 = local_a8;
        }
      }
      else {
        lVar25 = local_a8;
        if (uVar34 == 4) {
          (**(code **)(*param_5 + 0x20))(param_5,&local_100,uVar36 & 0xffffffff,param_3,param_4);
          lVar25 = local_a8;
        }
      }
    }
    else {
      iVar24 = *(byte *)(local_b0 + 0x5a) - 1;
      if (iVar24 < 4) {
        bVar10 = (byte)local_88[1];
        puVar31 = local_88;
      }
      else {
        iVar17 = 0;
        do {
          while( true ) {
            iVar4 = iVar17 + iVar24 >> 1;
            iVar12 = iVar35 - (uint)(byte)local_88[(long)iVar4 * 2 + 1];
            if (iVar12 < 0) break;
            puVar31 = local_88 + ((long)((ulong)(uint)(iVar17 + iVar24) << 0x20) >> 0x21) * 2;
            if (iVar12 < (int)(uint)*(byte *)((long)puVar31 + 3)) goto LAB_001a614c;
            iVar17 = iVar4 + 1;
            if (iVar24 - iVar17 < 4) goto LAB_001a6108;
          }
          iVar24 = iVar4;
        } while (3 < iVar4 - iVar17);
LAB_001a6108:
        puVar31 = local_88 + (long)iVar17 * 2;
        bVar10 = (byte)puVar31[1];
      }
      iVar24 = iVar35 - (uint)bVar10;
      puVar30 = puVar31;
      if (-1 < iVar24) goto LAB_001a6140;
      do {
        do {
          puVar31 = puVar30 + 2;
          iVar24 = iVar35 - (uint)(byte)puVar30[3];
          puVar30 = puVar31;
        } while (iVar24 < 0);
LAB_001a6140:
        puVar30 = puVar31;
      } while ((int)(uint)*(byte *)((long)puVar31 + 3) <= iVar24);
LAB_001a614c:
      bVar10 = *(byte *)(lVar25 + uVar36 * 4);
      uVar11 = *puVar31;
      if ((int)(uint)bVar10 < (int)local_80) {
        uVar32 = *(uint *)(local_a0 + (ulong)bVar10 * 4);
        uVar27 = uVar32 & 0x7ff;
        uVar28 = uVar32 >> 0xb & 0x7ff;
        uVar32 = uVar32 >> 0x16;
        puVar23 = &local_e0;
        pauVar33 = (undefined1 (*) [16])&local_d0;
      }
      else {
        puVar23 = &local_100;
        uVar18 = *(ulong *)(local_98 + (ulong)*(ushort *)(local_90 + (ulong)bVar10 * 2) * 8);
        uVar27 = (uint)uVar18 & 0x1fffff;
        uVar28 = (uint)(uVar18 >> 0x15) & 0x1fffff;
        uVar32 = (uint)(uVar18 >> 0x2a);
        pauVar33 = &auStack_f0;
      }
      auVar48._4_4_ = uVar28;
      auVar48._0_4_ = uVar27;
      auVar48._8_4_ = uVar32;
      auVar48._12_4_ = 0;
      auVar58 = NEON_scvtf(auVar48,4);
      fVar41 = (float)*puVar23 + *(float *)*pauVar33 * auVar58._0_4_;
      fVar51 = (float)((ulong)*puVar23 >> 0x20) + *(float *)(*pauVar33 + 4) * auVar58._4_4_;
      fVar54 = (float)puVar23[1] + *(float *)(*pauVar33 + 8) * auVar58._8_4_;
      local_130 = CONCAT44(fVar51,fVar41);
      local_3a0 = CONCAT44(fVar51,fVar41);
      if (local_80 == bVar7 || (int)local_80 < (int)(uint)bVar7) {
        puVar23 = &local_100;
        uVar18 = *(ulong *)(local_98 + (ulong)*(ushort *)(local_90 + (ulong)(uint)bVar7 * 2) * 8);
        uVar27 = (uint)uVar18 & 0x1fffff;
        uVar28 = (uint)(uVar18 >> 0x15) & 0x1fffff;
        uVar32 = (uint)(uVar18 >> 0x2a);
        pauVar33 = &auStack_f0;
      }
      else {
        uVar32 = *(uint *)(local_a0 + (ulong)bVar7 * 4);
        uVar27 = uVar32 & 0x7ff;
        uVar28 = uVar32 >> 0xb & 0x7ff;
        uVar32 = uVar32 >> 0x16;
        puVar23 = &local_e0;
        pauVar33 = (undefined1 (*) [16])&local_d0;
      }
      auVar46._4_4_ = uVar28;
      auVar46._0_4_ = uVar27;
      auVar46._8_4_ = uVar32;
      auVar46._12_4_ = 0;
      auVar58 = NEON_scvtf(auVar46,4);
      fVar42 = (float)*puVar23 + *(float *)*pauVar33 * auVar58._0_4_;
      fVar52 = (float)((ulong)*puVar23 >> 0x20) + *(float *)(*pauVar33 + 4) * auVar58._4_4_;
      fVar55 = (float)puVar23[1] + *(float *)(*pauVar33 + 8) * auVar58._8_4_;
      local_124 = CONCAT44(fVar52,fVar42);
      local_3c0 = CONCAT44(fVar52,fVar42);
      local_11c = fVar55;
      if ((int)uVar34 < (int)local_80) {
        uVar32 = *(uint *)(local_a0 + (ulong)bVar9 * 4);
        uVar27 = uVar32 & 0x7ff;
        uVar28 = uVar32 >> 0xb & 0x7ff;
        uVar32 = uVar32 >> 0x16;
        puVar23 = &local_e0;
        pauVar33 = (undefined1 (*) [16])&local_d0;
      }
      else {
        puVar23 = &local_100;
        uVar18 = *(ulong *)(local_98 + (ulong)*(ushort *)(local_90 + (ulong)bVar9 * 2) * 8);
        uVar27 = (uint)uVar18 & 0x1fffff;
        uVar28 = (uint)(uVar18 >> 0x15) & 0x1fffff;
        uVar32 = (uint)(uVar18 >> 0x2a);
        pauVar33 = &auStack_f0;
      }
      auVar47._4_4_ = uVar28;
      auVar47._0_4_ = uVar27;
      auVar58 = *pauVar33;
      auVar47._8_4_ = uVar32;
      auVar47._12_4_ = 0;
      auVar48 = NEON_scvtf(auVar47,4);
      fVar43 = (float)*puVar23 + auVar58._0_4_ * auVar48._0_4_;
      fVar53 = (float)((ulong)*puVar23 >> 0x20) + auVar58._4_4_ * auVar48._4_4_;
      local_3b0 = CONCAT44(fVar53,fVar43);
      fVar56 = (float)puVar23[1] + auVar58._8_4_ * auVar48._8_4_;
      if (uVar34 == bVar8) {
        uVar34 = 1;
        local_10c = local_3b0;
        local_104 = fVar56;
      }
      else {
        if ((int)(uint)bVar8 < (int)local_80) {
          uVar34 = *(uint *)(local_a0 + (ulong)bVar8 * 4);
          auVar15._8_8_ = uStack_c8;
          auVar15._0_8_ = local_d0;
          auVar57 = auVar15._0_12_;
          auVar44._0_8_ = CONCAT44(uVar34 >> 0xb,uVar34) & 0x7ff000007ff;
          auVar44._8_4_ = uVar34 >> 0x16;
          uVar38 = local_e0;
          uVar39 = uStack_d8;
        }
        else {
          auVar14._8_8_ = auStack_f0._8_8_;
          auVar14._0_8_ = auStack_f0._0_8_;
          auVar57 = auVar14._0_12_;
          uVar18 = *(ulong *)(local_98 + (ulong)*(ushort *)(local_90 + (ulong)bVar8 * 2) * 8);
          auVar44._0_8_ = CONCAT44((int)(uVar18 >> 0x15),(int)uVar18) & 0x1fffff001fffff;
          auVar44._8_4_ = (uint)(uVar18 >> 0x2a);
          uVar38 = local_100;
          uVar39 = uStack_f8;
        }
        auVar49._12_4_ = 0;
        auVar49._0_12_ = auVar44;
        auVar58 = NEON_scvtf(auVar49,4);
        local_10c = CONCAT44((float)((ulong)uVar38 >> 0x20) + auVar57._4_4_ * auVar58._4_4_,
                             (float)uVar38 + auVar57._0_4_ * auVar58._0_4_);
        local_104 = (float)uVar39 + auVar57._8_4_ * auVar58._8_4_;
        uVar34 = 2;
      }
      iVar24 = *(int *)(param_3 + 0x20);
      local_128 = fVar54;
      local_118 = local_3b0;
      local_110 = fVar56;
      if (param_8 == 0) {
        bVar16 = false;
        uVar27 = 0;
        do {
          uVar18 = (**(code **)(*param_5 + 0x10))(param_5,uVar27 | iVar35 << 1 | (int)local_7c << 8)
          ;
          if ((uVar18 & 1) != 0) {
            iVar17 = *(int *)(param_3 + 0x30);
            uVar28 = *(uint *)(param_3 + 0x34);
            uVar32 = iVar17 + 1;
            if (iVar17 < (int)(uVar28 & 0x3fffffff)) {
              lVar25 = *(long *)(param_3 + 0x28);
            }
            else {
              uVar38 = *(undefined8 *)(param_3 + 0x28);
              if (0x3ffffffe < iVar17) {
                FUN_032bd0a8(uVar32);
                uVar28 = *puVar2;
              }
              uVar28 = (uVar28 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar28) {
                uVar28 = 0x3fffffff;
              }
              uVar21 = uVar32;
              if ((int)uVar32 <= (int)uVar28) {
                uVar21 = uVar28;
              }
              lVar25 = FUN_032bd1d4(uVar22,uVar21,0x10,uVar38,iVar17,puVar2);
              iVar17 = *(int *)(param_3 + 0x30);
              *(long *)(param_3 + 0x28) = lVar25;
            }
            piVar1 = (int *)(lVar25 + (long)iVar17 * 0x10);
            *(uint *)(param_3 + 0x30) = uVar32;
            *piVar1 = iVar24;
            piVar1[1] = iVar19 + iVar24 + uVar27;
            piVar1[2] = iVar20 + iVar24 + uVar27;
            piVar1[3] = (uint)uVar11;
            bVar16 = true;
          }
          uVar27 = uVar27 + 1;
        } while (uVar34 != uVar27);
      }
      else {
        bVar16 = false;
        uVar27 = 0;
        do {
          uVar32 = uVar27 | iVar35 << 1 | (int)local_7c << 8;
          uVar18 = (**(code **)(*param_5 + 0x10))(param_5,uVar32);
          if ((uVar18 & 1) != 0) {
            if (param_8 != 1) {
              FUN_0331fefc(auStack_340,auStack_330,0x200);
              FUN_0332448c(auStack_340,"Triangle material type not supported.");
              iVar17 = FUN_03320b30(0xde9101f6,auStack_330,
                                    "../..\\Geometry/Collide/DataStructures/StaticMeshTree/hkcdStaticMeshTreeDecoder.inl"
                                    ,0x2dc);
              if (iVar17 != 0) {
                CallSupervisor(0x26);
              }
              FUN_0331ff7c(auStack_340);
              uVar32 = 0;
            }
            iVar17 = *(int *)(param_3 + 0x30);
            uVar21 = *(uint *)(param_3 + 0x34);
            uVar28 = iVar17 + 1;
            if (iVar17 < (int)(uVar21 & 0x3fffffff)) {
              lVar25 = *(long *)(param_3 + 0x28);
            }
            else {
              uVar38 = *(undefined8 *)(param_3 + 0x28);
              if (0x3ffffffe < iVar17) {
                FUN_032bd0a8(uVar28);
                uVar21 = *puVar2;
              }
              uVar21 = (uVar21 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar21) {
                uVar21 = 0x3fffffff;
              }
              uVar5 = uVar28;
              if ((int)uVar28 <= (int)uVar21) {
                uVar5 = uVar21;
              }
              lVar25 = FUN_032bd1d4(uVar22,uVar5,0x10,uVar38,iVar17,puVar2);
              iVar17 = *(int *)(param_3 + 0x30);
              *(long *)(param_3 + 0x28) = lVar25;
            }
            piVar1 = (int *)(lVar25 + (long)iVar17 * 0x10);
            *(uint *)(param_3 + 0x30) = uVar28;
            *piVar1 = iVar24;
            piVar1[1] = iVar19 + iVar24 + uVar27;
            piVar1[2] = iVar20 + iVar24 + uVar27;
            piVar1[3] = uVar32;
            bVar16 = true;
          }
          uVar27 = uVar27 + 1;
        } while (uVar34 != uVar27);
      }
      if (bVar16) {
        local_3a0 = CONCAT44(fVar50 * fVar51,fVar40 * fVar41);
        fVar41 = auVar45._8_4_;
        fVar54 = fVar41 * fVar54;
        local_3c0 = CONCAT44(fVar50 * fVar52,fVar40 * fVar42);
        fVar55 = fVar41 * fVar55;
        local_3b0 = CONCAT44(fVar50 * fVar53,fVar40 * fVar43);
        fVar56 = fVar41 * fVar56;
        local_124 = local_3c0;
        local_11c = fVar55;
        local_118 = local_3b0;
        local_110 = fVar56;
        uVar18 = (ulong)(uVar34 + 2);
        local_10c = CONCAT44(fVar50 * (float)((ulong)local_10c >> 0x20),fVar40 * (float)local_10c);
        local_104 = fVar41 * local_104;
        pfVar37 = &local_11c;
        uVar38 = local_3a0;
        fVar41 = fVar54;
        local_130 = local_3a0;
        local_128 = fVar54;
        while( true ) {
          uVar18 = uVar18 - 1;
          iVar35 = *(int *)(param_3 + 0x20);
          uVar27 = *(uint *)(param_3 + 0x24);
          uVar34 = iVar35 + 1;
          if (iVar35 < (int)(uVar27 & 0x3fffffff)) {
            *(uint *)(param_3 + 0x20) = uVar34;
            puVar23 = (undefined8 *)(*(long *)(param_3 + 0x18) + (long)iVar35 * 0x10);
            puVar23[1] = CONCAT44(fVar41,fVar41);
            *puVar23 = uVar38;
          }
          else {
            uVar39 = *(undefined8 *)(param_3 + 0x18);
            if (0x3ffffffe < iVar35) {
              FUN_032bd0a8(uVar34);
              uVar27 = *(uint *)(param_3 + 0x24);
            }
            uVar27 = (uVar27 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar27) {
              uVar27 = 0x3fffffff;
            }
            uVar32 = uVar34;
            if ((int)uVar34 <= (int)uVar27) {
              uVar32 = uVar27;
            }
            lVar25 = FUN_032bd1d4(uVar22,uVar32,0x10,uVar39,iVar35,(uint *)(param_3 + 0x24));
            *(long *)(param_3 + 0x18) = lVar25;
            iVar35 = *(int *)(param_3 + 0x20);
            *(uint *)(param_3 + 0x20) = uVar34;
            puVar23 = (undefined8 *)(lVar25 + (long)iVar35 * 0x10);
            puVar23[1] = CONCAT44(fVar41,fVar41);
            *puVar23 = uVar38;
          }
          if (uVar18 == 0) break;
          uVar38 = *(undefined8 *)(pfVar37 + -2);
          fVar41 = *pfVar37;
          pfVar37 = pfVar37 + 3;
        }
      }
      lVar25 = local_a8;
      if (param_4 != (long *)0x0) {
        iVar35 = (int)param_4[1];
        if (bVar9 == bVar8) {
          uVar34 = iVar35 + 6;
          uVar27 = *puVar3;
          if ((int)(uVar27 & 0x3fffffff) < (int)uVar34) {
            lVar25 = *param_4;
            if (0x3fffffff < (int)uVar34) {
              FUN_032bd0a8(uVar34);
              uVar27 = *puVar3;
            }
            uVar27 = (uVar27 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar27) {
              uVar27 = 0x3fffffff;
            }
            uVar32 = uVar34;
            if ((int)uVar34 <= (int)uVar27) {
              uVar32 = uVar27;
            }
            lVar25 = FUN_032bd1d4(uVar22,uVar32,0x10,lVar25,iVar35,puVar3);
            *param_4 = lVar25;
          }
          else {
            lVar25 = *param_4;
          }
          *(uint *)(param_4 + 1) = uVar34;
          puVar23 = (undefined8 *)(lVar25 + (long)iVar35 * 0x10);
          puVar23[1] = CONCAT44(fVar54,fVar54);
          *puVar23 = local_3a0;
          puVar23[3] = CONCAT44(fVar55,fVar55);
          puVar23[2] = local_3c0;
          puVar23[5] = CONCAT44(fVar55,fVar55);
          puVar23[4] = local_3c0;
          puVar23[7] = CONCAT44(fVar56,fVar56);
          puVar23[6] = local_3b0;
          puVar23[9] = CONCAT44(fVar56,fVar56);
          puVar23[8] = local_3b0;
          puVar23[0xb] = CONCAT44(fVar54,fVar54);
          puVar23[10] = local_3a0;
          lVar25 = local_a8;
        }
        else {
          uVar34 = iVar35 + 8;
          uVar27 = *puVar3;
          if ((int)(uVar27 & 0x3fffffff) < (int)uVar34) {
            lVar25 = *param_4;
            if (0x3fffffff < (int)uVar34) {
              FUN_032bd0a8(uVar34);
              uVar27 = *puVar3;
            }
            uVar27 = (uVar27 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar27) {
              uVar27 = 0x3fffffff;
            }
            uVar32 = uVar34;
            if ((int)uVar34 <= (int)uVar27) {
              uVar32 = uVar27;
            }
            lVar25 = FUN_032bd1d4(uVar22,uVar32,0x10,lVar25,iVar35,puVar3);
            *param_4 = lVar25;
          }
          else {
            lVar25 = *param_4;
          }
          *(uint *)(param_4 + 1) = uVar34;
          uVar38 = CONCAT44(fVar54,fVar54);
          puVar23 = (undefined8 *)(lVar25 + (long)iVar35 * 0x10);
          puVar23[1] = uVar38;
          *puVar23 = local_3a0;
          puVar23[3] = CONCAT44(fVar55,fVar55);
          puVar23[2] = local_3c0;
          puVar23[5] = CONCAT44(fVar55,fVar55);
          puVar23[4] = local_3c0;
          puVar23[7] = CONCAT44(fVar56,fVar56);
          puVar23[6] = local_3b0;
          puVar23[9] = CONCAT44(fVar56,fVar56);
          puVar23[8] = local_3b0;
          puVar23[0xf] = uVar38;
          puVar23[0xe] = local_3a0;
          puVar23[0xb] = CONCAT44(local_104,local_104);
          puVar23[10] = local_10c;
          puVar23[0xd] = CONCAT44(local_104,local_104);
          puVar23[0xc] = local_10c;
          lVar26 = local_a8 + uVar36 * 4;
          lVar25 = local_a8;
          if ((*(byte *)(lVar26 + 1) & local_b8) <= *(byte *)(lVar26 + 3)) {
            iVar35 = (int)param_4[1];
            uVar27 = *(uint *)((long)param_4 + 0xc);
            uVar34 = iVar35 + 2;
            if ((int)(uVar27 & 0x3fffffff) < (int)uVar34) {
              lVar25 = *param_4;
              if (0x3fffffff < (int)uVar34) {
                FUN_032bd0a8(uVar34);
                uVar27 = *puVar3;
              }
              uVar27 = (uVar27 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar27) {
                uVar27 = 0x3fffffff;
              }
              uVar32 = uVar34;
              if ((int)uVar34 <= (int)uVar27) {
                uVar32 = uVar27;
              }
              lVar25 = FUN_032bd1d4(uVar22,uVar32,0x10,lVar25,iVar35,puVar3);
              *param_4 = lVar25;
            }
            else {
              lVar25 = *param_4;
            }
            puVar23 = (undefined8 *)(lVar25 + (long)iVar35 * 0x10);
            *(uint *)(param_4 + 1) = uVar34;
            puVar23[1] = uVar38;
            *puVar23 = local_3a0;
            auVar13._8_4_ = fVar56;
            auVar13._0_8_ = local_3b0;
            auVar13._12_4_ = fVar56;
            puVar23[3] = auVar13._8_8_;
            puVar23[2] = local_3b0;
            lVar25 = local_a8;
          }
        }
      }
    }
    local_a8 = lVar25;
    if (uVar36 + 1 == (ulong)bVar6) goto LAB_001a6a94;
    uVar36 = uVar36 + 1;
  } while( true );
}


