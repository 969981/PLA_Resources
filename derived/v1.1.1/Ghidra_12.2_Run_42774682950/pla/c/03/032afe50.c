/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032afe50; name: FUN_032afe50
 */


undefined4 FUN_032afe50(long *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  undefined8 local_280;
  undefined4 local_278;
  undefined4 local_274;
  undefined2 local_238;
  int local_236;
  undefined4 local_232;
  int local_22e;
  long local_228;
  uint local_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 local_204;
  undefined8 local_200 [8];
  undefined1 auStack_1c0 [336];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 auStack_54 [4];
  
  local_70 = DAT_03aacc8c;
  uStack_68 = DAT_03aacc94;
  local_60 = DAT_03aacc9c;
  local_58 = DAT_03aacca4;
  iVar5 = FUN_032a895c(*(undefined4 *)(param_3 + 0x18),&local_70,auStack_54);
  if (iVar5 == 0) {
    if ((DAT_04440958 == '\0') && (uVar10 = FUN_03327170(), (uVar10 & 1) == 0)) {
      return 0x80040200;
    }
    uVar10 = FUN_03327170();
    if ((uVar10 & 1) == 0) {
      FUN_03326994(auStack_1c0,&DAT_04440908,1);
      local_280 = FUN_032b5388(*(undefined4 *)(param_3 + 0x18));
      lVar9 = FUN_03326338(auStack_1c0,
                           "No conversion from format \'{}\' to a format suitable for BMP files known."
                           ,&DAT_0411bac8,&local_280);
      *(char **)(lVar9 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
      ;
      *(undefined8 *)(lVar9 + 0x40) = 0x86;
      FUN_033269dc(auStack_1c0);
      return 0x80040200;
    }
    FUN_03326a7c(auStack_1c0,&DAT_04440908,1);
    local_200[0] = FUN_032b5388(*(undefined4 *)(param_3 + 0x18));
    lVar9 = FUN_03326338(auStack_1c0,
                         "No conversion from format \'{}\' to a format suitable for BMP files known."
                         ,&DAT_0411bac8,local_200);
    *(char **)(lVar9 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
    ;
    *(undefined8 *)(lVar9 + 0x40) = 0x86;
    FUN_03326adc(auStack_1c0);
    return 0x80040200;
  }
  if (iVar5 != *(int *)(param_3 + 0x18)) {
    FUN_032a6040(auStack_1c0);
    iVar5 = FUN_032a7918(param_3,auStack_1c0,iVar5,0);
    if (iVar5 < 0) {
      uVar8 = 0x80040200;
      uVar10 = FUN_0331fc10(&DAT_04346cd8,
                            "hkImageConversion::Convert failed even though the conversion was to the format returned by findClosestCompatibleFormat."
                           );
      if ((uVar10 & 1) != 0) {
        CallSupervisor(0x26);
      }
    }
    else {
      uVar8 = (**(code **)(*param_1 + 0x10))(param_1,param_2,auStack_1c0);
    }
    FUN_032a61d4(auStack_1c0);
    return uVar8;
  }
  uVar8 = 0x80040200;
  FUN_0332205c(local_200);
  FUN_03322094(local_200,param_2);
  uVar14 = *(uint *)(param_3 + 0xc);
  if (uVar14 < 2) {
    uVar14 = 1;
  }
  iVar6 = FUN_032b5574(*(undefined4 *)(param_3 + 0x18),uVar14);
  uVar14 = *(uint *)(param_3 + 0x10);
  local_210 = 0;
  uStack_20c = 0;
  uStack_208 = 0;
  local_204 = 0;
  local_218 = 0;
  uStack_214 = 0;
  if (uVar14 < 2) {
    uVar14 = 1;
  }
  uVar1 = *(uint *)(param_3 + 0xc);
  bVar3 = true;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  local_228 = (ulong)uVar1 << 0x20;
  _local_220 = CONCAT44(1,uVar14);
  uVar4 = FUN_032b5430(iVar5);
  _local_220 = CONCAT26(uVar4,_local_220);
  uStack_214 = 0;
  local_210 = 0;
  uStack_20c = 0;
  uStack_208 = 0;
  local_204 = 0;
  if (iVar5 - 0x5cU < 4) {
    local_218 = 0;
    bVar2 = false;
    bVar3 = false;
    local_22e = 0xe;
    iVar13 = 0x28;
  }
  else {
    if (iVar5 - 0x5aU < 2) {
      bVar3 = false;
      local_22e = 0xe;
      bVar2 = true;
      iVar13 = 0x6c;
    }
    else {
      if (iVar5 != 0xbe) goto LAB_032b01b8;
      bVar2 = false;
      local_22e = 0x1a;
      iVar13 = 0x28;
    }
    local_218 = 3;
  }
  local_22e = local_22e + iVar13;
  local_238 = 0x4d42;
  local_236 = local_22e + uVar14 * iVar6;
  local_228 = CONCAT44(local_228._4_4_,iVar13);
  local_232 = 0;
  lVar9 = FUN_032afb80(local_200,&local_238,0xe);
  if (lVar9 == 0xe) {
    lVar9 = FUN_032afb80(local_200,&local_228,0x28);
    if (lVar9 == 0x28) {
      if (bVar2) {
        FUN_032c4b00(&local_280,0,0x44);
        uVar7 = FUN_032b5510(iVar5,0);
        local_280 = CONCAT44(local_280._4_4_,uVar7);
        uVar7 = FUN_032b5510(iVar5,1);
        local_280 = CONCAT44(uVar7,(undefined4)local_280);
        local_278 = FUN_032b5510(iVar5,2);
        local_274 = FUN_032b5510(iVar5,3);
        lVar9 = FUN_032afb80(local_200,&local_280,0x44);
        if (lVar9 != 0x44) {
          if ((DAT_04440958 == '\0') && (uVar10 = FUN_03327170(), (uVar10 & 1) == 0))
          goto LAB_032b01b8;
          uVar10 = FUN_03327170();
          if ((uVar10 & 1) != 0) {
            FUN_03326a7c(auStack_1c0,&DAT_04440908,1);
            lVar9 = FUN_03326338(auStack_1c0,"Failed to write fileInfoHeaderV4.",PTR_DAT_04372528);
            uVar12 = 0xfc;
            goto LAB_032b046c;
          }
          FUN_03326994(auStack_1c0,&DAT_04440908,1);
          lVar9 = FUN_03326338(auStack_1c0,"Failed to write fileInfoHeaderV4.",PTR_DAT_04372528);
          uVar12 = 0xfc;
          goto LAB_032b01ac;
        }
      }
      else if (bVar3) {
        uVar7 = FUN_032b5510(iVar5,0);
        local_280 = CONCAT44(local_280._4_4_,uVar7);
        uVar7 = FUN_032b5510(iVar5,1);
        local_280 = CONCAT44(uVar7,(undefined4)local_280);
        local_278 = FUN_032b5510(iVar5,2);
        lVar9 = FUN_032afb80(local_200,&local_280,0xc);
        if (lVar9 != 0xc) {
          if ((DAT_04440958 == '\0') && (uVar10 = FUN_03327170(), (uVar10 & 1) == 0))
          goto LAB_032b01b8;
          uVar10 = FUN_03327170();
          if ((uVar10 & 1) != 0) {
            FUN_03326a7c(auStack_1c0,&DAT_04440908,1);
            lVar9 = FUN_03326338(auStack_1c0,"Failed to write colorMask.",PTR_DAT_04372528);
            uVar12 = 0x111;
            goto LAB_032b046c;
          }
          FUN_03326994(auStack_1c0,&DAT_04440908,1);
          lVar9 = FUN_03326338(auStack_1c0,"Failed to write colorMask.",PTR_DAT_04372528);
          uVar12 = 0x111;
          goto LAB_032b01ac;
        }
      }
      uVar10 = (ulong)(iVar6 + 3U & 0xfffffffc);
      do {
        uVar14 = uVar14 - 1;
        if ((int)uVar14 < 0) {
          uVar8 = 0;
          goto LAB_032b01b8;
        }
        uVar12 = FUN_032a68ac(param_3,0,0,0,0,uVar14,0);
        uVar11 = FUN_032afb80(local_200,uVar12,uVar10);
      } while (uVar11 == uVar10);
      if ((DAT_04440958 == '\0') && (uVar10 = FUN_03327170(), (uVar10 & 1) == 0)) goto LAB_032b01b8;
      uVar10 = FUN_03327170();
      if ((uVar10 & 1) != 0) {
        FUN_03326a7c(auStack_1c0,&DAT_04440908,1);
        lVar9 = FUN_03326338(auStack_1c0,"Failed to write data.",PTR_DAT_04372528);
        uVar12 = 0x11c;
        goto LAB_032b046c;
      }
      FUN_03326994(auStack_1c0,&DAT_04440908,1);
      lVar9 = FUN_03326338(auStack_1c0,"Failed to write data.",PTR_DAT_04372528);
      uVar12 = 0x11c;
    }
    else {
      if ((DAT_04440958 == '\0') && (uVar10 = FUN_03327170(), (uVar10 & 1) == 0)) goto LAB_032b01b8;
      uVar10 = FUN_03327170();
      if ((uVar10 & 1) != 0) {
        FUN_03326a7c(auStack_1c0,&DAT_04440908,1);
        lVar9 = FUN_03326338(auStack_1c0,"Failed to write fileInfoHeader.",PTR_DAT_04372528);
        uVar12 = 0xec;
        goto LAB_032b046c;
      }
      FUN_03326994(auStack_1c0,&DAT_04440908,1);
      lVar9 = FUN_03326338(auStack_1c0,"Failed to write fileInfoHeader.",PTR_DAT_04372528);
      uVar12 = 0xec;
    }
LAB_032b01ac:
    *(char **)(lVar9 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
    ;
    *(undefined8 *)(lVar9 + 0x40) = uVar12;
    FUN_033269dc(auStack_1c0);
  }
  else {
    if ((DAT_04440958 == '\0') && (uVar10 = FUN_03327170(), (uVar10 & 1) == 0)) goto LAB_032b01b8;
    uVar10 = FUN_03327170();
    if ((uVar10 & 1) == 0) {
      FUN_03326994(auStack_1c0,&DAT_04440908,1);
      lVar9 = FUN_03326338(auStack_1c0,"Failed to write header.",PTR_DAT_04372528);
      uVar12 = 0xe6;
      goto LAB_032b01ac;
    }
    FUN_03326a7c(auStack_1c0,&DAT_04440908,1);
    lVar9 = FUN_03326338(auStack_1c0,"Failed to write header.",PTR_DAT_04372528);
    uVar12 = 0xe6;
LAB_032b046c:
    *(char **)(lVar9 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
    ;
    *(undefined8 *)(lVar9 + 0x40) = uVar12;
    FUN_03326adc(auStack_1c0);
  }
LAB_032b01b8:
  FUN_03322120(local_200);
  return uVar8;
}


