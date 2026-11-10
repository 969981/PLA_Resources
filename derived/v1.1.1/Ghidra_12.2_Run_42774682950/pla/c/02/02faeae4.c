/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02faeae4; name: FUN_02faeae4
 */


void FUN_02faeae4(undefined8 *param_1,long param_2,int param_3,long *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  
  FUN_02fd6728();
  *param_1 = &PTR_LAB_042b8cf0;
  plVar6 = (long *)FUN_032cf5b0(0x110);
  lVar13 = *(long *)(param_2 + 0x48);
  lVar18 = 0;
  if (lVar13 != 0) {
    lVar18 = lVar13 + param_2 + 0x48;
  }
  *plVar6 = (long)(PTR_DAT_04372418 + 0x10);
  plVar6[1] = 0xffffffff;
  plVar6[2] = 1;
  FUN_02fb2a80(plVar6 + 4,lVar18 + 0x20);
  FUN_02f724a8(plVar6 + 0x18,lVar18 + 0xc0);
  FUN_02fb24f8(plVar6 + 0x1b,lVar18 + 0xd8);
  lVar13 = 0;
  if (plVar6 != (long *)0x0) {
    lVar13 = (long)plVar6 - (long)(param_1 + 9);
  }
  *(undefined1 *)(plVar6 + 0x21) = *(undefined1 *)(lVar18 + 0x108);
  param_1[9] = lVar13;
  FUN_02fa07a4(param_1 + 10,param_2 + 0x50);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  uVar3 = *(undefined4 *)(param_2 + 0x6c);
  plVar6 = param_1 + 0xe;
  *plVar6 = 0;
  param_1[0xf] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = uVar3;
  lVar13 = *(long *)(param_2 + 0x70);
  uVar15 = *(uint *)(param_2 + 0x78);
  uVar19 = (ulong)uVar15;
  lVar18 = 0;
  if (lVar13 != 0) {
    lVar18 = lVar13 + param_2 + 0x70;
  }
  if ((0 < (int)uVar15) && (lVar18 != 0)) {
    uVar4 = uVar15 - 1 | (int)(uVar15 - 1) >> 0x10;
    *(undefined4 *)((long)param_1 + 0x7c) = 0;
    uVar4 = uVar4 | (int)uVar4 >> 8;
    uVar4 = uVar4 | (int)uVar4 >> 4;
    uVar4 = uVar4 | (int)uVar4 >> 2;
    uVar4 = (uVar4 | (int)uVar4 >> 1) + 1;
    if ((int)uVar4 < (int)uVar15) {
      local_70[0] = 0;
      local_80 = 0;
      local_78 = PTR_DAT_04372528;
      FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow",&local_80);
    }
    lVar13 = tpidr_el0;
    lVar10 = *(long *)(lVar13 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar13 + 0x38d490) = lVar10;
    }
    plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    lVar8 = (**(code **)(*plVar7 + 0x10))
                      (plVar7,-(ulong)(uVar4 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar4 << 6,0);
    lVar10 = 0;
    if (param_1[0xe] != 0) {
      lVar10 = param_1[0xe] + (long)plVar6;
    }
    uVar12 = (ulong)*(uint *)(param_1 + 0xf);
    if (0 < (int)*(uint *)(param_1 + 0xf)) {
      lVar14 = 0;
      do {
        puVar11 = (undefined8 *)(lVar8 + lVar14);
        *(undefined8 *)((long)puVar11 + 0x14) = 0;
        puVar1 = (undefined8 *)(lVar10 + lVar14);
        *(undefined4 *)((long)puVar11 + 0x1c) = 0x40ffff;
        *(undefined4 *)((long)puVar11 + 0x2c) = 0xffffffff;
        uVar24 = puVar1[4];
        uVar21 = puVar1[1];
        uVar20 = *puVar1;
        uVar23 = puVar1[3];
        uVar22 = puVar1[2];
        uVar25 = puVar1[7];
        lVar16 = puVar1[6];
        puVar11[5] = puVar1[5];
        puVar11[4] = uVar24;
        puVar11[1] = uVar21;
        *puVar11 = uVar20;
        puVar11[3] = uVar23;
        puVar11[2] = uVar22;
        puVar11[7] = uVar25;
        puVar11[6] = lVar16;
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = (long)(puVar1 + 6) + (lVar16 - (long)(puVar11 + 6));
        }
        uVar12 = uVar12 - 1;
        lVar14 = lVar14 + 0x40;
        puVar11[6] = lVar16;
        puVar1[6] = 0;
      } while (uVar12 != 0);
    }
    if ((int)*(uint *)((long)param_1 + 0x7c) < 0) {
      uVar2 = *(uint *)((long)param_1 + 0x7c) & 0x7fffffff;
      if ((int)uVar2 <= (int)*(uint *)(param_1 + 0xf)) {
        uVar2 = *(uint *)(param_1 + 0xf);
      }
      lVar10 = 0;
      if (param_1[0xe] != 0) {
        lVar10 = param_1[0xe] + (long)plVar6;
      }
      lVar14 = *(long *)(lVar13 + 0x38d490);
      if (lVar14 == 0) {
        lVar14 = FUN_0333d16c(0,1);
        *(long *)(lVar13 + 0x38d490) = lVar14;
      }
      plVar7 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar10,(ulong)uVar2 << 6);
    }
    uVar20 = NEON_fmov(0x3f800000,4);
    lVar13 = 0;
    if (lVar8 != 0) {
      lVar13 = lVar8 - (long)plVar6;
    }
    *(uint *)(param_1 + 0xf) = uVar15;
    *(uint *)((long)param_1 + 0x7c) = uVar4 | 0x80000000;
    param_1[0xe] = lVar13;
    uVar22 = DAT_03aae468;
    uVar21 = DAT_03aae460;
    puVar11 = (undefined8 *)(lVar13 + (long)plVar6);
    do {
      *puVar11 = uVar21;
      puVar11[1] = uVar22;
      uVar15 = uVar15 - 1;
      puVar11[4] = uVar20;
      puVar11[7] = 0;
      puVar11[2] = 0;
      puVar11[3] = 0x40ffff00000000;
      puVar11[5] = 0xffffffff3f800000;
      puVar11[6] = 0;
      puVar11 = puVar11 + 8;
    } while (uVar15 != 0);
    lVar10 = *plVar6;
    lVar13 = 0;
    do {
      puVar11 = (undefined8 *)((long)plVar6 + lVar13 + lVar10);
      *(undefined8 *)((long)puVar11 + 0x14) = 0;
      puVar1 = (undefined8 *)(lVar18 + lVar13);
      *(undefined4 *)((long)puVar11 + 0x1c) = 0x40ffff;
      *(undefined4 *)((long)puVar11 + 0x2c) = 0xffffffff;
      uVar21 = puVar1[1];
      uVar20 = *puVar1;
      uVar23 = puVar1[3];
      uVar22 = puVar1[2];
      uVar25 = puVar1[5];
      uVar24 = puVar1[4];
      lVar14 = puVar1[6];
      plVar7 = puVar11 + 6;
      puVar11[7] = puVar1[7];
      *plVar7 = lVar14;
      puVar11[1] = uVar21;
      *puVar11 = uVar20;
      puVar11[3] = uVar23;
      puVar11[2] = uVar22;
      lVar8 = 0;
      if (lVar14 != 0) {
        lVar8 = (long)(puVar1 + 6) + (lVar14 - (long)plVar7);
      }
      puVar11[5] = uVar25;
      puVar11[4] = uVar24;
      puVar11[6] = lVar8;
      if ((lVar8 != 0) && (lVar8 + (long)plVar7 != 0)) {
        FUN_032d645c();
      }
      uVar19 = uVar19 - 1;
      lVar13 = lVar13 + 0x40;
    } while (uVar19 != 0);
  }
  if (param_3 == 0) {
    local_80 = 0;
    local_78 = (undefined *)0x8000000000000000;
    FUN_032c2320(local_70);
    puVar5 = PTR_PTR_0434a080;
    plVar7 = &local_80;
    if (param_4 != (long *)0x0) {
      plVar7 = param_4;
    }
    if (0 < *(int *)(param_1 + 0xf)) {
      lVar18 = 0;
      lVar13 = 0x30;
      do {
        plVar17 = (long *)((long)plVar6 + lVar13 + *plVar6);
        lVar10 = *plVar17;
        local_88 = 0;
        if (lVar10 != 0) {
          local_88 = lVar10 + (long)plVar17;
        }
        lVar10 = FUN_02f79850(plVar7,&local_88);
        if ((lVar10 == 0) ||
           ((int)(*(uint *)(lVar10 + 4) | ((int)lVar10 - (int)plVar7[2]) * 0x20000000) < 0)) {
          (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(local_88 + 0x18) * 0x200 + 0x50))
                    (&local_90,local_88,0,plVar7);
          lVar10 = local_90;
          uVar19 = FUN_02f798f0(plVar7,&local_88);
          iVar9 = (int)uVar19;
          if ((int)plVar7[1] == iVar9) {
            lVar8 = *plVar7;
            if ((int)(*(uint *)((long)plVar7 + 0xc) & 0x3fffffff) <= iVar9) {
              lVar8 = FUN_02f799f8(puVar5,iVar9 + 1,lVar8,uVar19,(long)plVar7 + 0xc);
              uVar19 = (ulong)*(uint *)(plVar7 + 1);
              *plVar7 = lVar8;
            }
            plVar17 = (long *)(lVar8 + (long)(int)uVar19 * 0x10);
            *plVar17 = local_88;
            plVar17[1] = lVar10;
            if (lVar10 != 0) {
              FUN_032d645c(lVar10);
            }
            *(int *)(plVar7 + 1) = iVar9 + 1;
          }
          else {
            plVar17 = (long *)(*plVar7 + ((long)(uVar19 << 0x20) >> 0x1c) + 8);
            lVar8 = *plVar17;
            if (lVar8 != lVar10) {
              if (lVar10 == 0) {
                *plVar17 = 0;
              }
              else {
                FUN_032d645c(lVar10);
                lVar8 = *plVar17;
                *plVar17 = lVar10;
              }
              if (lVar8 != 0) {
                FUN_032d647c();
              }
            }
          }
        }
        else {
          lVar10 = FUN_02f79850(plVar7,&local_88);
          if ((lVar10 == 0) ||
             (plVar17 = (long *)(*plVar7 + (long)*(int *)(lVar10 + 4) * 0x10 + 8), *plVar17 == 0)) {
            lVar10 = 0;
          }
          else {
            FUN_032d645c();
            lVar10 = *plVar17;
          }
        }
        FUN_02fa2744((long)plVar6 + lVar13 + *plVar6 + -0x30,lVar10);
        if (lVar10 != 0) {
          FUN_032d647c(lVar10);
        }
        lVar18 = lVar18 + 1;
        lVar13 = lVar13 + 0x40;
      } while (lVar18 < *(int *)(param_1 + 0xf));
    }
    FUN_032c20d0(local_70);
    if ((int)local_78 != 0) {
      lVar13 = local_80 + -8;
      lVar18 = (long)(int)local_78 << 4;
      do {
        if (*(long *)(lVar13 + lVar18) != 0) {
          FUN_032d647c();
        }
        lVar18 = lVar18 + -0x10;
      } while (lVar18 != 0);
    }
    lVar18 = (long)local_78;
    uVar15 = local_78._4_4_;
    local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
    if ((-1 < lVar18) && (local_80 != 0)) {
      FUN_032cf244(puVar5,local_80,0x10,uVar15 & 0x3fffffff);
    }
  }
  return;
}


