/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032af320; name: FUN_032af320
 */


undefined8 FUN_032af320(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint uVar20;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined1 auStack_298 [336];
  int local_148;
  undefined4 local_144;
  undefined4 local_140;
  uint local_13c;
  undefined4 local_138;
  undefined8 local_130;
  uint local_128;
  uint local_124;
  uint local_120;
  undefined4 local_11c;
  uint local_118;
  uint local_114;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  undefined4 local_c4;
  uint local_c0;
  uint local_ac;
  undefined1 auStack_a8 [72];
  
  FUN_0332205c(auStack_a8);
  FUN_03322094(auStack_a8,param_1);
  uVar14 = *param_2;
  uVar3 = param_2[1];
  uVar1 = param_2[5];
  uVar4 = param_2[6];
  uVar2 = param_2[2];
  local_120 = param_2[3];
  uVar5 = param_2[4];
  if (local_120 < 2) {
    local_120 = 1;
  }
  uVar20 = uVar5;
  if (uVar5 < 2) {
    uVar20 = 1;
  }
  uVar17 = uVar1;
  if (uVar1 < 2) {
    uVar17 = 1;
  }
  local_ac = uVar3;
  FUN_032c4b00(&local_130,0,0x80);
  FUN_032c4b00(&local_148,0,0x14);
  local_130 = 0x7c20534444;
  local_124 = uVar20;
  if (uVar14 < 2) {
    uVar20 = 0x1007;
    if (uVar1 < 2) goto LAB_032af488;
LAB_032af3dc:
    if (uVar2 < 2) {
      uVar20 = uVar20 | 0x800000;
      local_118 = uVar17;
      goto LAB_032af488;
    }
    uVar19 = 0x80040200;
    if ((DAT_044408c8 == '\0') && (uVar15 = FUN_03327170(), (uVar15 & 1) == 0)) goto LAB_032af444;
    uVar15 = FUN_03327170();
    if ((uVar15 & 1) != 0) {
      FUN_03326a7c(auStack_298,&DAT_04440878,1);
      lVar16 = FUN_03326338(auStack_298,
                            "The image is both an array and volume texture. This is not supported.",
                            PTR_DAT_04372528);
      uVar18 = 0x1ed;
      goto LAB_032af960;
    }
    FUN_03326994(auStack_298,&DAT_04440878,1);
    lVar16 = FUN_03326338(auStack_298,
                          "The image is both an array and volume texture. This is not supported.",
                          PTR_DAT_04372528);
    uVar18 = 0x1ed;
  }
  else {
    uVar20 = 0x21007;
    local_114 = uVar14;
    if (1 < uVar1) goto LAB_032af3dc;
LAB_032af488:
    uVar15 = FUN_032b555c(param_2[6]);
    if ((uVar15 & 1) == 0) {
      uVar17 = param_2[3];
      if (uVar17 < 2) {
        uVar17 = 1;
      }
      uVar20 = uVar20 | 8;
      local_11c = FUN_032b5574(param_2[6],uVar17);
    }
    else {
      local_11c = 0;
      uVar20 = uVar20 | 0x80000;
    }
    if (1 < uVar3) {
      if (local_ac == 6) {
        if (1 < uVar1) {
          uVar19 = 0x80040200;
          if ((DAT_044408c8 == '\0') && (uVar15 = FUN_03327170(), (uVar15 & 1) == 0))
          goto LAB_032af444;
          uVar15 = FUN_03327170();
          if ((uVar15 & 1) != 0) {
            FUN_03326a7c(auStack_298,&DAT_04440878,1);
            lVar16 = FUN_03326338(auStack_298,
                                  "The image is both a cubemap and volume texture. This is not supported."
                                  ,PTR_DAT_04372528);
            uVar18 = 0x20d;
            goto LAB_032af960;
          }
          FUN_03326994(auStack_298,&DAT_04440878,1);
          lVar16 = FUN_03326338(auStack_298,
                                "The image is both a cubemap and volume texture. This is not supported."
                                ,PTR_DAT_04372528);
          uVar18 = 0x20d;
          goto LAB_032af438;
        }
        uVar17 = 0xfe00;
        uVar11 = 0x1008;
        goto LAB_032af538;
      }
      uVar19 = 0x80040200;
      if ((DAT_044408c8 == '\0') && (uVar15 = FUN_03327170(), (uVar15 & 1) == 0)) goto LAB_032af444;
      uVar15 = FUN_03327170();
      if ((uVar15 & 1) == 0) {
        FUN_03326994(auStack_298,&DAT_04440878,1);
        lVar16 = FUN_03326338(auStack_298,
                              "The image is a cubemap, but has {} faces instead of the expected 6.",
                              PTR_DAT_04389020,&local_ac);
        uVar18 = 0x207;
        goto LAB_032af438;
      }
      FUN_03326a7c(auStack_298,&DAT_04440878,1);
      lVar16 = FUN_03326338(auStack_298,
                            "The image is a cubemap, but has {} faces instead of the expected 6.",
                            PTR_DAT_04389020,&local_ac);
      uVar18 = 0x207;
LAB_032af960:
      uVar19 = 0x80040200;
      *(char **)(lVar16 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/ImageUtilities/FileFormats/hkDdsFileFormat.cpp"
      ;
      *(undefined8 *)(lVar16 + 0x40) = uVar18;
      FUN_03326adc(auStack_298);
      goto LAB_032af444;
    }
    uVar17 = 0;
    uVar11 = 0x1000;
LAB_032af538:
    if (1 < (uVar1 | uVar2)) {
      uVar11 = 0x1008;
    }
    local_c0 = uVar17 | 0x200000;
    if (uVar1 < 2) {
      local_c0 = uVar17;
    }
    local_e4 = 0x20;
    local_c4 = 0x401008;
    if (uVar14 < 2) {
      local_c4 = uVar11;
    }
    local_128 = uVar20;
    iVar7 = FUN_032b5510(uVar4,0);
    iVar8 = FUN_032b5510(uVar4,1);
    iVar9 = FUN_032b5510(uVar4,2);
    iVar10 = FUN_032b5510(uVar4,3);
    uVar11 = FUN_032b5430(uVar4);
    iVar12 = FUN_032afac0(uVar4);
    iVar13 = FUN_032b5788(uVar4);
    if (uVar2 < 2) {
      if ((((iVar8 == 0 && iVar7 == 0) && iVar9 == 0) && iVar10 == 0) ||
         (uVar14 = FUN_032b5638(iVar7,iVar8,iVar9,iVar10,uVar11), uVar4 != uVar14)) {
        if (iVar12 == 0) goto LAB_032af5e8;
        bVar6 = false;
        local_e0 = CONCAT44(iVar12,4);
      }
      else {
        local_e0 = CONCAT44(local_e0._4_4_,0x41);
        bVar6 = false;
        local_d8 = uVar11;
        local_d4 = iVar7;
        local_d0 = iVar8;
        local_cc = iVar9;
        local_c8 = iVar10;
      }
    }
    else {
LAB_032af5e8:
      if (iVar13 == 0) {
        uVar19 = 0x80040200;
        if ((DAT_044408c8 == '\0') && (uVar15 = FUN_03327170(), (uVar15 & 1) == 0))
        goto LAB_032af444;
        uVar15 = FUN_03327170();
        if ((uVar15 & 1) == 0) {
          FUN_03326994(auStack_298,&DAT_04440878,1);
          local_2a0 = FUN_032b5388(uVar4);
          lVar16 = FUN_03326338(auStack_298,
                                "The image needs to be written as a DXT10 file, but no matching DXGI format was found for \'{}\'."
                                ,&DAT_0411bac8,&local_2a0);
          uVar18 = 0x25a;
          goto LAB_032af438;
        }
        FUN_03326a7c(auStack_298,&DAT_04440878,1);
        local_2a8 = FUN_032b5388(uVar4);
        lVar16 = FUN_03326338(auStack_298,
                              "The image needs to be written as a DXT10 file, but no matching DXGI format was found for \'{}\'."
                              ,&DAT_0411bac8,&local_2a8);
        uVar18 = 0x25a;
        goto LAB_032af960;
      }
      local_e0 = 0x3031584400000004;
      uVar11 = 2;
      if (1 < uVar5) {
        uVar11 = 3;
      }
      local_144 = 4;
      if (uVar1 < 2) {
        local_144 = uVar11;
      }
      if (1 < uVar3) {
        local_140 = 4;
      }
      bVar6 = true;
      local_138 = 0;
      local_148 = iVar13;
      local_13c = uVar2;
    }
    lVar16 = FUN_032afb80(auStack_a8,&local_130,0x80);
    if (lVar16 == 0x80) {
      if ((bVar6) && (lVar16 = FUN_032afb80(auStack_a8,&local_148,0x14), lVar16 != 0x14)) {
        uVar19 = 0x80040200;
        if ((DAT_044408c8 == '\0') && (uVar15 = FUN_03327170(), (uVar15 & 1) == 0))
        goto LAB_032af444;
        uVar15 = FUN_03327170();
        if ((uVar15 & 1) != 0) {
          FUN_03326a7c(auStack_298,&DAT_04440878,1);
          lVar16 = FUN_03326338(auStack_298,"Failed to write image DX10 header.",PTR_DAT_04372528);
          uVar18 = 0x286;
          goto LAB_032af960;
        }
        FUN_03326994(auStack_298,&DAT_04440878,1);
        lVar16 = FUN_03326338(auStack_298,"Failed to write image DX10 header.",PTR_DAT_04372528);
        uVar18 = 0x286;
      }
      else {
        lVar16 = FUN_032afb80(auStack_a8,*(undefined8 *)(param_2 + 0x4c),
                              *(undefined8 *)(param_2 + 0x4e));
        if (lVar16 == *(long *)(param_2 + 0x4e)) {
          uVar19 = 0;
          goto LAB_032af444;
        }
        uVar19 = 0x80040200;
        if ((DAT_044408c8 == '\0') && (uVar15 = FUN_03327170(), (uVar15 & 1) == 0))
        goto LAB_032af444;
        uVar15 = FUN_03327170();
        if ((uVar15 & 1) != 0) {
          FUN_03326a7c(auStack_298,&DAT_04440878,1);
          lVar16 = FUN_03326338(auStack_298,"Failed to write image data.",PTR_DAT_04372528);
          uVar18 = 0x28d;
          goto LAB_032af960;
        }
        FUN_03326994(auStack_298,&DAT_04440878,1);
        lVar16 = FUN_03326338(auStack_298,"Failed to write image data.",PTR_DAT_04372528);
        uVar18 = 0x28d;
      }
    }
    else {
      uVar19 = 0x80040200;
      if ((DAT_044408c8 == '\0') && (uVar15 = FUN_03327170(), (uVar15 & 1) == 0)) goto LAB_032af444;
      uVar15 = FUN_03327170();
      if ((uVar15 & 1) != 0) {
        FUN_03326a7c(auStack_298,&DAT_04440878,1);
        lVar16 = FUN_03326338(auStack_298,"Failed to write image header.",PTR_DAT_04372528);
        uVar18 = 0x27e;
        goto LAB_032af960;
      }
      FUN_03326994(auStack_298,&DAT_04440878,1);
      lVar16 = FUN_03326338(auStack_298,"Failed to write image header.",PTR_DAT_04372528);
      uVar18 = 0x27e;
    }
  }
LAB_032af438:
  uVar19 = 0x80040200;
  *(char **)(lVar16 + 0x38) =
       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/ImageUtilities/FileFormats/hkDdsFileFormat.cpp"
  ;
  *(undefined8 *)(lVar16 + 0x40) = uVar18;
  FUN_033269dc(auStack_298);
LAB_032af444:
  FUN_03322120(auStack_a8);
  return uVar19;
}


