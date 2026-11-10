/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d7338; name: FUN_032d7338
 */


void FUN_032d7338(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  ulong *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auVar16 [12];
  ulong local_270;
  ulong uStack_268;
  undefined1 local_260 [16];
  ulong local_250;
  ulong local_110;
  ulong uStack_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  
  auVar16 = FUN_032d6950(param_2,&DAT_039a01c1);
  plVar5 = auVar16._0_8_;
  if (-1 < *(int *)(*plVar5 + (long)auVar16._8_4_ * 0x18 + 0x10)) {
    lVar11 = (long)auVar16._8_4_;
    FUN_032c4d3c(&local_100);
    FUN_032e260c(param_3,&local_100,0,0);
    plVar1 = (long *)(plVar5[0x1a] + (long)*(int *)(*plVar5 + lVar11 * 0x18 + 0x10) * 0x10);
    lVar13 = *plVar1;
    uVar6 = FUN_032c4c80(lVar13,plVar1[1] - lVar13,local_100);
    if ((uVar6 & 1) == 0) {
      puVar2 = (ulong *)(plVar5[0x1a] + (long)*(int *)(*plVar5 + lVar11 * 0x18 + 0x10) * 0x10);
      local_110 = *puVar2;
      uStack_108 = puVar2[1];
      FUN_032c4e24(local_260,&local_110);
      param_3 = FUN_032e0b20(local_260._0_8_);
      FUN_032c4ce8(local_260);
      if (param_3 == 0) {
        auVar16 = FUN_032d6950(param_2,"builtinType");
        iVar4 = *(int *)(*auVar16._0_8_ + (long)auVar16._8_4_ * 0x18 + 0x10);
        if (iVar4 < 0) {
LAB_032d7828:
          if ((1 < DAT_04449fe8) || (uVar6 = FUN_03327170(), (uVar6 & 1) != 0)) {
            uVar6 = FUN_03327170();
            if ((uVar6 & 1) == 0) {
              FUN_03326994(local_260,&DAT_04449f98,2);
              puVar2 = (ulong *)(plVar5[0x1a] +
                                (long)*(int *)(*plVar5 + lVar11 * 0x18 + 0x10) * 0x10);
              local_110 = *puVar2;
              uStack_108 = puVar2[1];
              lVar13 = FUN_03326338(local_260,"Invalid value type name: \'{}\'",PTR_DAT_043891c0,
                                    &local_110);
              *(char **)(lVar13 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Attributes/hkAttributes.cpp"
              ;
              *(undefined8 *)(lVar13 + 0x40) = 0xdd;
              FUN_033269dc(local_260);
            }
            else {
              FUN_03326a7c(local_260,&DAT_04449f98,2);
              puVar2 = (ulong *)(plVar5[0x1a] +
                                (long)*(int *)(*plVar5 + lVar11 * 0x18 + 0x10) * 0x10);
              local_270 = *puVar2;
              uStack_268 = puVar2[1];
              lVar13 = FUN_03326338(local_260,"Invalid value type name: \'{}\'",PTR_DAT_043891c0,
                                    &local_270);
              *(char **)(lVar13 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Attributes/hkAttributes.cpp"
              ;
              *(undefined8 *)(lVar13 + 0x40) = 0xdd;
              FUN_03326adc(local_260);
            }
          }
          param_1[1] = 0;
          param_1[2] = 0;
          *param_1 = 0;
          FUN_032c4ce8(&local_100);
          return;
        }
        puVar2 = (ulong *)(auVar16._0_8_[0x1a] + (long)iVar4 * 0x10);
        local_110 = *puVar2;
        uStack_108 = puVar2[1];
        FUN_032c4e24(local_260,&local_110);
        param_3 = FUN_032e0b20(local_260._0_8_);
        FUN_032c4ce8(local_260);
        if (param_3 == 0) goto LAB_032d7828;
      }
    }
    FUN_032c4ce8(&local_100);
  }
  local_270 = local_270 & 0xffffffffffffff00;
  auVar16 = FUN_032d6950(param_2,"strict");
  plVar5 = auVar16._0_8_;
  if (*(int *)(*plVar5 + (long)auVar16._8_4_ * 0x18 + 0x10) < 0) {
LAB_032d74d8:
    auVar16 = FUN_032d6950(param_2,"values");
    puVar3 = PTR_PTR_0434a090;
    lVar13 = *auVar16._0_8_;
    iVar4 = *(int *)(lVar13 + (long)auVar16._8_4_ * 0x18 + 0x10);
    if (-1 < iVar4) {
      lVar8 = auVar16._0_8_[0x1a];
      lVar11 = lVar8 + (long)iVar4 * 0x10;
      uVar12 = (lVar8 + (long)*(int *)(lVar13 + (long)auVar16._8_4_ * 0x18 + 0x14) * 0x10) - lVar11;
      uVar6 = uVar12 >> 4;
      if ((int)uVar6 < 1) {
        lVar8 = 0;
        local_110 = local_110 & 0xffffffff00000000;
        lVar13 = 0;
        uVar6 = 0;
        uVar10 = 0x80000000;
        uVar9 = 0x80000000;
      }
      else {
        FUN_032bd100(uVar6 & 0xffffffff,0x10,0x80000000,local_260);
        lVar13 = (**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_260._0_8_,local_260);
        if ((ulong)local_260._0_8_ < 0x3fffffff0) {
          uVar9 = (uint)((ulong)local_260._0_8_ >> 4);
        }
        else {
          uVar9 = 0x3fffffff;
        }
        FUN_032bd100(uVar6 & 0xffffffff,0x10,0x80000000,local_260);
        lVar8 = (**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_260._0_8_,local_260);
        if ((ulong)local_260._0_8_ < 0x3fffffff0) {
          uVar10 = (uint)((ulong)local_260._0_8_ >> 4);
        }
        else {
          uVar10 = 0x3fffffff;
        }
        lVar14 = 0;
        local_110 = local_110 & 0xffffffff00000000;
        uVar15 = 0;
        uVar6 = uVar12 >> 4 & 0xffffffff;
        do {
          FUN_032d7ae0(&local_100,lVar11 + lVar14,0x3d,0);
          if ((local_100 == lStack_f8) || (local_f0 == lStack_e8)) {
            if (DAT_04449fe8 < 2) {
              uVar6 = FUN_03327170();
              if ((uVar6 & 1) != 0) goto LAB_032d76e4;
            }
            else {
LAB_032d76e4:
              uVar6 = FUN_03327170();
              if ((uVar6 & 1) == 0) {
                FUN_03326994(local_260,&DAT_04449f98,2);
                lVar11 = FUN_03326338(local_260,
                                      "Element {} is not a valid \"name = value\" pair (\'{}\')",
                                      &DAT_0434ab50,&local_110,lVar11 + (long)(int)local_110 * 0x10)
                ;
                *(char **)(lVar11 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Attributes/hkAttributes.cpp"
                ;
                *(undefined8 *)(lVar11 + 0x40) = 0x104;
                FUN_033269dc(local_260);
              }
              else {
                FUN_03326a7c(local_260,&DAT_04449f98,2);
                lVar11 = FUN_03326338(local_260,
                                      "Element {} is not a valid \"name = value\" pair (\'{}\')",
                                      &DAT_0434ab50,&local_110,lVar11 + (long)(int)local_110 * 0x10)
                ;
                *(char **)(lVar11 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Attributes/hkAttributes.cpp"
                ;
                *(undefined8 *)(lVar11 + 0x40) = 0x104;
                FUN_03326adc(local_260);
              }
            }
            param_1[1] = 0;
            param_1[2] = 0;
            *param_1 = 0;
            goto joined_r0x032d78c8;
          }
          *(long *)(lVar13 + lVar14) = local_100;
          ((long *)(lVar13 + lVar14))[1] = lStack_f8;
          uVar15 = uVar15 + 1;
          plVar5 = (long *)(lVar8 + lVar14);
          lVar14 = lVar14 + 0x10;
          *plVar5 = local_f0;
          plVar5[1] = lStack_e8;
          local_110 = CONCAT44(local_110._4_4_,(int)uVar15);
        } while (uVar6 != uVar15);
      }
      FUN_032d7b44(param_1,lVar13,lVar13 + uVar6 * 0x10,lVar8,lVar8 + uVar6 * 0x10,param_3,
                   local_270 & 0xff,param_4);
joined_r0x032d78c8:
      if ((lVar8 != 0) && (-1 < (int)uVar10)) {
        FUN_032cf244(puVar3,lVar8,0x10,uVar10 & 0x3fffffff);
      }
      if ((int)uVar9 < 0) {
        return;
      }
      if (lVar13 == 0) {
        return;
      }
      FUN_032cf244(puVar3,lVar13,0x10,uVar9 & 0x3fffffff);
      return;
    }
    if (DAT_04449fe8 < 2) {
      uVar6 = FUN_03327170();
      if ((uVar6 & 1) == 0) goto LAB_032d76a8;
    }
    uVar6 = FUN_03327170();
    if ((uVar6 & 1) != 0) {
      FUN_03326a7c(local_260,&DAT_04449f98,2);
      lVar13 = FUN_03326338(local_260,"Missing presets values",PTR_DAT_04372528);
      uVar7 = 0xf4;
LAB_032d792c:
      *(char **)(lVar13 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Attributes/hkAttributes.cpp"
      ;
      *(undefined8 *)(lVar13 + 0x40) = uVar7;
      FUN_03326adc(local_260);
      goto LAB_032d76a8;
    }
    FUN_03326994(local_260,&DAT_04449f98,2);
    lVar13 = FUN_03326338(local_260,"Missing presets values",PTR_DAT_04372528);
    uVar7 = 0xf4;
  }
  else {
    local_260._8_8_ = 0;
    local_250 = 0;
    local_260 = FUN_032e0ab0(&local_270,&DAT_0434b3e8);
    if (local_260._8_8_ == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_032e3508(local_260._8_8_);
      if ((uVar6 & 1) != 0) {
        FUN_032e0c28(uVar6 & 0xfffffffffffffffe);
      }
    }
    lVar13 = (long)auVar16._8_4_;
    if ((local_250 & 1) != 0) {
      uVar12 = local_250 & 0xfffffffffffffffe;
      local_250 = uVar6;
      FUN_032e0c40(uVar12);
      uVar6 = local_250;
    }
    local_250 = uVar6;
    plVar1 = (long *)(plVar5[0x1a] + (long)*(int *)(*plVar5 + lVar13 * 0x18 + 0x10) * 0x10);
    local_100 = *plVar1;
    lStack_f8 = plVar1[1];
    iVar4 = FUN_032e6110(local_260,&local_100);
    if ((local_250 & 1) != 0) {
      FUN_032e0c40(local_250 & 0xfffffffffffffffe);
    }
    if (-1 < iVar4) goto LAB_032d74d8;
    if (DAT_04449fe8 < 2) {
      uVar6 = FUN_03327170();
      if ((uVar6 & 1) == 0) goto LAB_032d76a8;
    }
    uVar6 = FUN_03327170();
    if ((uVar6 & 1) != 0) {
      FUN_03326a7c(local_260,&DAT_04449f98,2);
      puVar2 = (ulong *)(plVar5[0x1a] + (long)*(int *)(*plVar5 + lVar13 * 0x18 + 0x10) * 0x10);
      local_110 = *puVar2;
      uStack_108 = puVar2[1];
      lVar13 = FUN_03326338(local_260,"Invalid value for \'strict\' field: \'{}\'",PTR_DAT_043891c0,
                            &local_110);
      uVar7 = 0xec;
      goto LAB_032d792c;
    }
    FUN_03326994(local_260,&DAT_04449f98,2);
    plVar5 = (long *)(plVar5[0x1a] + (long)*(int *)(*plVar5 + lVar13 * 0x18 + 0x10) * 0x10);
    local_100 = *plVar5;
    lStack_f8 = plVar5[1];
    lVar13 = FUN_03326338(local_260,"Invalid value for \'strict\' field: \'{}\'",PTR_DAT_043891c0,
                          &local_100);
    uVar7 = 0xec;
  }
  *(char **)(lVar13 + 0x38) =
       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Attributes/hkAttributes.cpp";
  *(undefined8 *)(lVar13 + 0x40) = uVar7;
  FUN_033269dc(local_260);
LAB_032d76a8:
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


