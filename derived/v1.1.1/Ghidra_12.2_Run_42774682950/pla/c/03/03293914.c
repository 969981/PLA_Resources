/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03293914; name: FUN_03293914
 */


/* WARNING: Removing unreachable block (ram,0x03293af4) */
/* WARNING: Removing unreachable block (ram,0x03293c90) */

undefined4 FUN_03293914(undefined8 *param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  void *__s;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160 [7];
  char *local_128;
  undefined8 uStack_120;
  undefined1 local_110 [16];
  undefined1 *local_100;
  undefined8 local_f8;
  undefined1 auStack_f0 [64];
  undefined8 local_b0;
  undefined8 uStack_a8;
  void *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_68;
  uint local_64;
  
  puVar3 = PTR_PTR_0434a080;
  local_88 = (undefined8 *)0x0;
  local_80 = 0x8000000000000000;
  if ((int)param_2 < 1) {
    local_88 = (undefined8 *)0x0;
    local_80 = 0x8000000000000000;
    uVar13 = 0;
    puVar14 = (undefined8 *)0x0;
    local_64 = 0x80000000;
  }
  else {
    local_100._0_4_ = param_2;
    local_88 = (undefined8 *)FUN_032cf190(PTR_PTR_0434a080,0x10,&local_100);
    local_80 = CONCAT44((uint)local_100,param_2);
    local_64 = (uint)local_100;
    uVar13 = param_2;
    if (local_88 == param_1) {
      puVar14 = param_1;
    }
    else {
      uVar9 = (ulong)param_2;
      uVar6 = uVar9 & 3;
      if (uVar9 - 1 < 3) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        puVar14 = param_1 + 4;
        puVar11 = local_88 + 4;
        do {
          uVar15 = puVar14[-4];
          puVar11[-3] = puVar14[-3];
          puVar11[-4] = uVar15;
          uVar15 = puVar14[-2];
          puVar11[-1] = puVar14[-1];
          puVar11[-2] = uVar15;
          uVar15 = *puVar14;
          lVar7 = lVar7 + 4;
          puVar11[1] = puVar14[1];
          *puVar11 = uVar15;
          puVar10 = puVar14 + 3;
          uVar15 = puVar14[2];
          puVar14 = puVar14 + 8;
          puVar11[3] = *puVar10;
          puVar11[2] = uVar15;
          puVar11 = puVar11 + 8;
        } while (uVar9 - uVar6 != lVar7);
      }
      if ((param_2 & 3) != 0) {
        lVar7 = lVar7 << 4;
        do {
          uVar15 = *(undefined8 *)((long)param_1 + lVar7);
          uVar6 = uVar6 - 1;
          ((undefined8 *)((long)local_88 + lVar7))[1] = ((undefined8 *)((long)param_1 + lVar7))[1];
          *(undefined8 *)((long)local_88 + lVar7) = uVar15;
          lVar7 = lVar7 + 0x10;
        } while (uVar6 != 0);
      }
      puVar14 = local_88;
    }
  }
  puVar11 = local_88;
  local_100 = (undefined1 *)CONCAT44(local_100._4_4_,param_2);
  local_98 = (void *)0x0;
  local_90 = 0x8000000000000000;
  if ((int)param_2 < 1) {
    __s = (void *)0x0;
    uVar12 = 0x80000000;
    local_98 = (void *)0x0;
    local_90 = 0x8000000000000000;
  }
  else {
    __s = (void *)FUN_032cf190(puVar3,1,&local_100);
    uVar12 = (uint)local_100;
    local_90 = CONCAT44((uint)local_100,param_2);
    local_98 = __s;
    memset(__s,0,(ulong)param_2);
  }
  local_170 = *param_3;
  auVar16 = ZEXT816(0);
  uStack_168 = CONCAT44(0x3f800000,(int)param_3[1]);
  local_100 = auStack_f0;
  uVar6 = (ulong)(int)uVar13;
  local_f8 = -0x7ffffffc00000000;
  local_b0 = local_170;
  uStack_a8 = uStack_168;
  if ((int)uVar13 < 1) {
    iVar5 = 0;
    do {
      bVar4 = iVar5 != 4;
      local_160[0] = 0x7f7fffee7f7fffee;
      local_110 = auVar16;
      iVar5 = FUN_03293f50(&local_88,&local_98,&local_b0,local_110,&local_100,local_160);
      if (iVar5 == -1) {
        auVar16 = ZEXT816(0);
        iVar5 = (int)local_f8;
        if ((int)local_f8 < 3) goto LAB_03293e48;
      }
      else {
        *(undefined1 *)((long)__s + (long)iVar5) = 1;
        local_170._0_4_ = (float)local_170 + (float)local_160[0] * local_110._0_4_;
        local_170._4_4_ = local_170._4_4_ + (float)((ulong)local_160[0] >> 0x20) * local_110._4_4_;
        uStack_168._0_4_ = (float)uStack_168 + (float)local_160[0] * local_110._8_4_;
        uStack_a8 = CONCAT44(0x3f800000,(float)uStack_168);
        local_b0 = CONCAT44(local_170._4_4_,(float)local_170);
        uStack_168 = CONCAT44(0x3f800000,(float)uStack_168);
        uVar2 = (puVar14 + (long)iVar5 * 2)[1];
        uVar15 = puVar14[(long)iVar5 * 2];
        iVar5 = (int)local_f8 + 1;
        *(ulong *)((long)(local_100 + (long)(int)local_f8 * 0x10) + 8) =
             CONCAT44(0.0 - (float)((ulong)uVar2 >> 0x20),0.0 - (float)uVar2);
        *(ulong *)(local_100 + (long)(int)local_f8 * 0x10) =
             CONCAT44(0.0 - (float)((ulong)uVar15 >> 0x20),0.0 - (float)uVar15);
        local_f8 = CONCAT44(local_f8._4_4_,iVar5);
        auVar16 = local_110;
        if (iVar5 < 4) {
          auVar16 = FUN_03294320(&local_100);
        }
      }
      local_68 = 0;
    } while ((auVar16._8_4_ != 0.0 || (auVar16._0_4_ != 0.0 || auVar16._4_4_ != 0.0)) && (bVar4));
  }
  else {
    uVar9 = uVar6 & 3;
    iVar5 = 0;
    auVar16 = ZEXT816(0);
    do {
      bVar4 = iVar5 != 4;
      local_160[0] = 0x7f7fffee7f7fffee;
      local_110 = auVar16;
      iVar5 = FUN_03293f50(&local_88,&local_98,&local_b0,local_110,&local_100,local_160);
      if (iVar5 == -1) {
        auVar16 = ZEXT816(0);
        iVar5 = (int)local_f8;
        if ((int)local_f8 < 3) goto LAB_03293e48;
      }
      else {
        *(undefined1 *)((long)__s + (long)iVar5) = 1;
        fVar19 = (float)local_160[0];
        local_170 = CONCAT44((float)((ulong)local_170 >> 0x20) +
                             (float)((ulong)local_160[0] >> 0x20) * local_110._4_4_,
                             (float)local_170 + fVar19 * local_110._0_4_);
        uStack_168 = CONCAT44(0x3f800000,(float)uStack_168 + fVar19 * local_110._8_4_);
        if (uVar6 - 1 < 3) {
          lVar7 = 0;
        }
        else {
          lVar7 = 0;
          puVar10 = puVar14 + 4;
          do {
            lVar7 = lVar7 + 4;
            *(undefined4 *)(puVar10 + -3) = *(undefined4 *)(puVar10 + -3);
            *(float *)((long)puVar10 + -0x14) = fVar19 + *(float *)((long)puVar10 + -0x14);
            *(undefined4 *)(puVar10 + -4) = *(undefined4 *)(puVar10 + -4);
            *(undefined4 *)((long)puVar10 + -0x1c) = *(undefined4 *)((long)puVar10 + -0x1c);
            puVar10[-1] = CONCAT44(fVar19 + (float)((ulong)puVar10[-1] >> 0x20),(int)puVar10[-1]);
            puVar10[-2] = puVar10[-2];
            puVar10[1] = CONCAT44(fVar19 + (float)((ulong)puVar10[1] >> 0x20),(int)puVar10[1]);
            *puVar10 = *puVar10;
            puVar10[3] = CONCAT44(fVar19 + (float)((ulong)puVar10[3] >> 0x20),(int)puVar10[3]);
            puVar10[2] = puVar10[2];
            puVar10 = puVar10 + 8;
          } while (uVar6 - uVar9 != lVar7);
        }
        if (uVar9 != 0) {
          uVar8 = uVar9;
          puVar10 = puVar14 + lVar7 * 2;
          do {
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar10 + 1);
            *(float *)((long)puVar10 + 0xc) = fVar19 + *(float *)((long)puVar10 + 0xc);
            *(undefined4 *)puVar10 = *(undefined4 *)puVar10;
            *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)((long)puVar10 + 4);
            uVar8 = uVar8 - 1;
            puVar10 = puVar10 + 2;
          } while (uVar8 != 0);
        }
        uVar2 = (puVar14 + (long)iVar5 * 2)[1];
        uVar15 = puVar14[(long)iVar5 * 2];
        iVar5 = (int)local_f8 + 1;
        *(ulong *)((long)(local_100 + (long)(int)local_f8 * 0x10) + 8) =
             CONCAT44(0.0 - (float)((ulong)uVar2 >> 0x20),0.0 - (float)uVar2);
        *(ulong *)(local_100 + (long)(int)local_f8 * 0x10) =
             CONCAT44(0.0 - (float)((ulong)uVar15 >> 0x20),0.0 - (float)uVar15);
        local_f8 = CONCAT44(local_f8._4_4_,iVar5);
        local_b0 = local_170;
        uStack_a8 = uStack_168;
        auVar16 = local_110;
        if (iVar5 < 4) {
          auVar16 = FUN_03294320(&local_100);
        }
      }
      local_68 = 0;
    } while ((auVar16._8_4_ != 0.0 || (auVar16._0_4_ != 0.0 || auVar16._4_4_ != 0.0)) && (bVar4));
  }
  uVar15 = 0x7f7fffee7f7fffee;
  if (0 < (int)uVar13) {
    do {
      uVar6 = uVar6 - 1;
      fVar17 = (float)local_170 * (float)*param_1;
      fVar18 = (float)((ulong)local_170 >> 0x20) * (float)((ulong)*param_1 >> 0x20);
      fVar19 = (float)uStack_168 * (float)param_1[1];
      fVar20 = (float)((ulong)uStack_168 >> 0x20) * (float)((ulong)param_1[1] >> 0x20);
      auVar21._4_4_ = fVar18;
      auVar21._0_4_ = fVar17;
      auVar21._8_4_ = fVar19;
      auVar21._12_4_ = fVar20;
      auVar1._4_4_ = fVar18;
      auVar1._0_4_ = fVar17;
      auVar1._8_4_ = fVar19;
      auVar1._12_4_ = fVar20;
      auVar21 = NEON_ext(auVar21,auVar1,8,1);
      fVar19 = auVar21._0_4_ + auVar21._4_4_;
      uVar15 = NEON_fmin(uVar15,CONCAT44(-(fVar17 + fVar18 + fVar19),-(fVar17 + fVar18 + fVar19)),4)
      ;
      param_1 = param_1 + 2;
    } while (uVar6 != 0);
  }
  local_110 = auVar16;
  if (-1.1920929e-07 <= (float)uVar15) {
    uVar15 = NEON_fmax(uVar15,0x3400000034000000,4);
    param_4[1] = CONCAT44((int)uVar15,(float)uStack_168);
    *param_4 = local_170;
    local_68 = 0;
  }
  else {
    local_68 = 0x80040200;
  }
LAB_03293de4:
  lVar7 = local_f8;
  uVar13 = local_f8._4_4_;
  local_f8 = (ulong)local_f8._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_100 != (undefined1 *)0x0)) {
    FUN_032cf244(puVar3,local_100,0x10,uVar13 & 0x3fffffff);
  }
  local_90 = local_90 & 0xffffffff00000000;
  if ((-1 < (int)uVar12) && (__s != (void *)0x0)) {
    FUN_032cf244(puVar3,__s,1,uVar12 & 0x3fffffff);
  }
  local_80 = local_80 & 0xffffffff00000000;
  if ((-1 < (int)local_64) && (puVar14 != (undefined8 *)0x0)) {
    FUN_032cf244(puVar3,puVar11,0x10,local_64 & 0x3fffffff);
  }
  return local_68;
LAB_03293e48:
  local_68 = 0x80040200;
  if (DAT_0443f280 != '\0') {
    FUN_03326994(local_160,&DAT_0443f230,1);
    local_128 = 
    "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/GeometryUtilities/Misc/hkGeometryUtils.cpp";
    uStack_120 = 0x915;
    uVar15 = FUN_03326338(local_160,"HK_RETURN_IF_FAILED({}) returning {}. ",&DAT_0433dc78,
                          "hkGeometryUtils_step(workingPlanes, visitedPlanes, center, velocity, velocities)"
                          ,&local_68);
    FUN_03326338(uVar15,&DAT_03996322,PTR_DAT_04372528);
    FUN_033269dc(local_160);
  }
  goto LAB_03293de4;
}


