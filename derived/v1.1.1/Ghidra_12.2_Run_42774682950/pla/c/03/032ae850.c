/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ae850; name: FUN_032ae850
 */


undefined8 FUN_032ae850(undefined8 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int local_1b8;
  undefined1 local_1b4;
  int local_1ac;
  undefined1 auStack_1a0 [336];
  
  lVar5 = FUN_032af29c(param_1,param_2,0x80);
  if (lVar5 != 0x80) {
    if ((DAT_044408c8 == '\0') && (uVar6 = FUN_03327170(), (uVar6 & 1) == 0)) {
      return 0x80040200;
    }
    uVar6 = FUN_03327170();
    if ((uVar6 & 1) != 0) {
      FUN_03326a7c(auStack_1a0,&DAT_04440878,1);
      lVar5 = FUN_03326338(auStack_1a0,"Failed to read file header.",PTR_DAT_04372528);
      uVar7 = 0xff;
      goto LAB_032aee2c;
    }
    FUN_03326994(auStack_1a0,&DAT_04440878,1);
    lVar5 = FUN_03326338(auStack_1a0,"Failed to read file header.",PTR_DAT_04372528);
    uVar7 = 0xff;
    goto LAB_032ae9e8;
  }
  if (*param_2 != 0x20534444) {
    if ((DAT_044408c8 == '\0') && (uVar6 = FUN_03327170(), (uVar6 & 1) == 0)) {
      return 0x80040200;
    }
    uVar6 = FUN_03327170();
    if ((uVar6 & 1) == 0) {
      FUN_03326994(auStack_1a0,&DAT_04440878,1);
      lVar5 = FUN_03326338(auStack_1a0,"The file is not a recognized DDS file.",PTR_DAT_04372528);
      uVar7 = 0x105;
      goto LAB_032ae9e8;
    }
    FUN_03326a7c(auStack_1a0,&DAT_04440878,1);
    lVar5 = FUN_03326338(auStack_1a0,"The file is not a recognized DDS file.",PTR_DAT_04372528);
    uVar7 = 0x105;
    goto LAB_032aee2c;
  }
  piVar8 = param_2 + 1;
  if (*piVar8 != 0x7c) {
    if ((DAT_044408c8 == '\0') && (uVar6 = FUN_03327170(), (uVar6 & 1) == 0)) {
      return 0x80040200;
    }
    uVar6 = FUN_03327170();
    if ((uVar6 & 1) == 0) {
      FUN_03326994(auStack_1a0,&DAT_04440878,1);
      lVar5 = FUN_03326338(auStack_1a0,
                           "The file header size {} doesn\'t match the expected size of 124.",
                           &DAT_04346bf0,piVar8);
      uVar7 = 0x10b;
      goto LAB_032ae9e8;
    }
    FUN_03326a7c(auStack_1a0,&DAT_04440878,1);
    lVar5 = FUN_03326338(auStack_1a0,
                         "The file header size {} doesn\'t match the expected size of 124.",
                         &DAT_04346bf0,piVar8);
    uVar7 = 0x10b;
    goto LAB_032aee2c;
  }
  piVar8 = param_2 + 0x13;
  *(byte *)(param_2 + 0x20) = *(byte *)(param_2 + 2) >> 3 & 1;
  if (*piVar8 != 0x20) {
    if ((DAT_044408c8 == '\0') && (uVar6 = FUN_03327170(), (uVar6 & 1) == 0)) {
      return 0x80040200;
    }
    uVar6 = FUN_03327170();
    if ((uVar6 & 1) == 0) {
      FUN_03326994(auStack_1a0,&DAT_04440878,1);
      lVar5 = FUN_03326338(auStack_1a0,
                           "The pixel format size {} doesn\'t match the expected value of 32.",
                           &DAT_04346bf0,piVar8);
      uVar7 = 0x113;
      goto LAB_032ae9e8;
    }
    FUN_03326a7c(auStack_1a0,&DAT_04440878,1);
    lVar5 = FUN_03326338(auStack_1a0,
                         "The pixel format size {} doesn\'t match the expected value of 32.",
                         &DAT_04346bf0,piVar8);
    uVar7 = 0x113;
    goto LAB_032aee2c;
  }
  if (((uint)param_2[0x14] >> 2 & 1) == 0) {
    if ((param_2[0x14] & 0x20043U) == 0) {
      if ((DAT_044408c8 == '\0') && (uVar6 = FUN_03327170(), (uVar6 & 1) == 0)) {
        return 0x80040200;
      }
      uVar6 = FUN_03327170();
      if ((uVar6 & 1) == 0) {
        FUN_03326994(auStack_1a0,&DAT_04440878,1);
        lVar5 = FUN_03326338(auStack_1a0,
                             "The image format is neither specified as a pixel mask nor as a FourCC code."
                             ,PTR_DAT_04372528);
        uVar7 = 0x152;
        goto LAB_032ae9e8;
      }
      FUN_03326a7c(auStack_1a0,&DAT_04440878,1);
      lVar5 = FUN_03326338(auStack_1a0,
                           "The image format is neither specified as a pixel mask nor as a FourCC code."
                           ,PTR_DAT_04372528);
      uVar7 = 0x152;
      goto LAB_032aee2c;
    }
    piVar8 = param_2 + 0x16;
    piVar9 = param_2 + 0x17;
    piVar10 = param_2 + 0x18;
    piVar11 = param_2 + 0x19;
    piVar12 = param_2 + 0x1a;
    iVar4 = FUN_032b5638(*piVar9,*piVar10,*piVar11,*piVar12,*piVar8);
    if (iVar4 == 0) {
      if ((DAT_044408c8 == '\0') && (uVar6 = FUN_03327170(), (uVar6 & 1) == 0)) {
        return 0x80040200;
      }
      uVar6 = FUN_03327170();
      if ((uVar6 & 1) == 0) {
        FUN_03326994(auStack_1a0,&DAT_04440878,1);
        lVar5 = FUN_03326338(auStack_1a0,
                             "The pixel mask specified was not recognized (R: 0x{%08x}, G: 0x{%08x}, B: 0x{%08x}, A: 0x{%08x}, BPP: {})."
                             ,&DAT_04346c98,piVar9,piVar10,piVar11,piVar12,piVar8);
        uVar7 = 0x14c;
        goto LAB_032ae9e8;
      }
      FUN_03326a7c(auStack_1a0,&DAT_04440878,1);
      lVar5 = FUN_03326338(auStack_1a0,
                           "The pixel mask specified was not recognized (R: 0x{%08x}, G: 0x{%08x}, B: 0x{%08x}, A: 0x{%08x}, BPP: {})."
                           ,&DAT_04346c98,piVar9,piVar10,piVar11,piVar12,piVar8);
      uVar7 = 0x14c;
      goto LAB_032aee2c;
    }
LAB_032ae90c:
    local_1ac = 0;
  }
  else {
    iVar2 = param_2[0x15];
    if (iVar2 != 0x30315844) {
      iVar4 = FUN_032afc50(iVar2);
      if (iVar4 == 0) {
        local_1b4 = 0;
        local_1b8 = iVar2;
        if ((DAT_044408c8 != '\0') || (uVar6 = FUN_03327170(), (uVar6 & 1) != 0)) {
          uVar6 = FUN_03327170();
          if ((uVar6 & 1) == 0) {
            FUN_03326994(auStack_1a0,&DAT_04440878,1);
            lVar5 = FUN_03326338(auStack_1a0,"The FourCC code \'{}\' was not recognized.",
                                 PTR_DAT_04389018,&local_1b8);
            *(char **)(lVar5 + 0x38) =
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/ImageUtilities/FileFormats/hkDdsFileFormat.cpp"
            ;
            *(undefined8 *)(lVar5 + 0x40) = 0x13c;
            FUN_033269dc(auStack_1a0);
          }
          else {
            FUN_03326a7c(auStack_1a0,&DAT_04440878,1);
            lVar5 = FUN_03326338(auStack_1a0,"The FourCC code \'{}\' was not recognized.",
                                 PTR_DAT_04389018,&local_1b8);
            *(char **)(lVar5 + 0x38) =
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/ImageUtilities/FileFormats/hkDdsFileFormat.cpp"
            ;
            *(undefined8 *)(lVar5 + 0x40) = 0x13c;
            FUN_03326adc(auStack_1a0);
          }
        }
        return 0x80040200;
      }
      goto LAB_032ae90c;
    }
    lVar5 = FUN_032af29c(param_1,&local_1b8,0x14);
    if (lVar5 != 0x14) {
      if ((DAT_044408c8 == '\0') && (uVar6 = FUN_03327170(), (uVar6 & 1) == 0)) {
        return 0x80040200;
      }
      uVar6 = FUN_03327170();
      if ((uVar6 & 1) == 0) {
        FUN_03326994(auStack_1a0,&DAT_04440878,1);
        lVar5 = FUN_03326338(auStack_1a0,"Failed to read file header.",PTR_DAT_04372528);
        uVar7 = 0x122;
        goto LAB_032ae9e8;
      }
      FUN_03326a7c(auStack_1a0,&DAT_04440878,1);
      lVar5 = FUN_03326338(auStack_1a0,"Failed to read file header.",PTR_DAT_04372528);
      uVar7 = 0x122;
      goto LAB_032aee2c;
    }
    iVar4 = FUN_032b5740(local_1b8);
    if (iVar4 == 0) {
      if ((DAT_044408c8 == '\0') && (uVar6 = FUN_03327170(), (uVar6 & 1) == 0)) {
        return 0x80040200;
      }
      uVar6 = FUN_03327170();
      if ((uVar6 & 1) == 0) {
        FUN_03326994(auStack_1a0,&DAT_04440878,1);
        lVar5 = FUN_03326338(auStack_1a0,"The DXGI format {} has no equivalent image format.",
                             &DAT_04346bf0,&local_1b8);
        uVar7 = 0x12a;
        goto LAB_032ae9e8;
      }
      FUN_03326a7c(auStack_1a0,&DAT_04440878,1);
      lVar5 = FUN_03326338(auStack_1a0,"The DXGI format {} has no equivalent image format.",
                           &DAT_04346bf0,&local_1b8);
      uVar7 = 0x12a;
      goto LAB_032aee2c;
    }
  }
  uVar1 = param_2[0x1c];
  *(byte *)(param_2 + 0x22) = *(byte *)(param_2 + 0x1b) >> 3 & 1;
  uVar3 = uVar1 >> 9 & 1;
  param_2[0x21] = iVar4;
  *(byte *)((long)param_2 + 0x8a) = (byte)(uVar1 >> 0x15) & 1;
  *(char *)((long)param_2 + 0x89) = (char)uVar3;
  if (((uVar1 >> 0x15 & 1) == 0) || (uVar3 == 0)) {
    if (local_1ac < 2) {
      local_1ac = 1;
    }
    param_2[0x23] = local_1ac;
    return 0;
  }
  if ((DAT_044408c8 == '\0') && (uVar6 = FUN_03327170(), (uVar6 & 1) == 0)) {
    return 0x80040200;
  }
  uVar6 = FUN_03327170();
  if ((uVar6 & 1) != 0) {
    FUN_03326a7c(auStack_1a0,&DAT_04440878,1);
    lVar5 = FUN_03326338(auStack_1a0,"The header specifies both the VOLUME and CUBEMAP flags.",
                         PTR_DAT_04372528);
    uVar7 = 0x15f;
LAB_032aee2c:
    *(char **)(lVar5 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/ImageUtilities/FileFormats/hkDdsFileFormat.cpp"
    ;
    *(undefined8 *)(lVar5 + 0x40) = uVar7;
    FUN_03326adc(auStack_1a0);
    return 0x80040200;
  }
  FUN_03326994(auStack_1a0,&DAT_04440878,1);
  lVar5 = FUN_03326338(auStack_1a0,"The header specifies both the VOLUME and CUBEMAP flags.",
                       PTR_DAT_04372528);
  uVar7 = 0x15f;
LAB_032ae9e8:
  *(char **)(lVar5 + 0x38) =
       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/ImageUtilities/FileFormats/hkDdsFileFormat.cpp"
  ;
  *(undefined8 *)(lVar5 + 0x40) = uVar7;
  FUN_033269dc(auStack_1a0);
  return 0x80040200;
}


