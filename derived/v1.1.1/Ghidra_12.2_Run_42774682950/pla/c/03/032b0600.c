/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b0600; name: FUN_032b0600
 */


undefined8 FUN_032b0600(ulong *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  short local_50 [8];
  
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 0;
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  lVar3 = FUN_032af29c(param_1,local_50,0xe);
  if (lVar3 != 0xe) {
    if ((DAT_04440958 == '\0') && (uVar5 = FUN_03327170(), (uVar5 & 1) == 0)) {
      return 0x80040200;
    }
    uVar5 = FUN_03327170();
    if ((uVar5 & 1) == 0) {
      FUN_03326994(&local_1a0,&DAT_04440908,1);
      lVar3 = FUN_03326338(&local_1a0,"Failed to read header data.",PTR_DAT_04372528);
      uVar7 = 0x13e;
      goto LAB_032b06f0;
    }
    FUN_03326a7c(&local_1a0,&DAT_04440908,1);
    lVar3 = FUN_03326338(&local_1a0,"Failed to read header data.",PTR_DAT_04372528);
    uVar7 = 0x13e;
    goto LAB_032b0cd0;
  }
  if (local_50[0] != 0x4d42) {
    if ((DAT_04440958 == '\0') && (uVar5 = FUN_03327170(), (uVar5 & 1) == 0)) {
      return 0x80040200;
    }
    uVar5 = FUN_03327170();
    if ((uVar5 & 1) != 0) {
      FUN_03326a7c(&local_1a0,&DAT_04440908,1);
      lVar3 = FUN_03326338(&local_1a0,
                           "The file is not a BMP file. Expected magic number {:x}, got {:x}.",
                           &DAT_04346d60,&DAT_03aaccba,local_50);
      uVar7 = 0x145;
      goto LAB_032b0cd0;
    }
    FUN_03326994(&local_1a0,&DAT_04440908,1);
    lVar3 = FUN_03326338(&local_1a0,
                         "The file is not a BMP file. Expected magic number {:x}, got {:x}.",
                         &DAT_04346d60,&DAT_03aaccba,local_50);
    uVar7 = 0x145;
    goto LAB_032b06f0;
  }
  lVar3 = FUN_032af29c(param_1,param_2,0x28);
  if (lVar3 != 0x28) {
    if ((DAT_04440958 == '\0') && (uVar5 = FUN_03327170(), (uVar5 & 1) == 0)) {
      return 0x80040200;
    }
    uVar5 = FUN_03327170();
    if ((uVar5 & 1) != 0) {
      FUN_03326a7c(&local_1a0,&DAT_04440908,1);
      lVar3 = FUN_03326338(&local_1a0,"Failed to read header data (V3).",PTR_DAT_04372528);
      uVar7 = 0x14d;
      goto LAB_032b0cd0;
    }
    FUN_03326994(&local_1a0,&DAT_04440908,1);
    lVar3 = FUN_03326338(&local_1a0,"Failed to read header data (V3).",PTR_DAT_04372528);
    uVar7 = 0x14d;
    goto LAB_032b06f0;
  }
  iVar2 = *param_2;
  uVar6 = iVar2 - 0x28;
  if ((int)uVar6 < 0) {
    if ((DAT_04440958 == '\0') && (uVar5 = FUN_03327170(), (uVar5 & 1) == 0)) {
      return 0x80040200;
    }
    uVar5 = FUN_03327170();
    if ((uVar5 & 1) != 0) {
      FUN_03326a7c(&local_1a0,&DAT_04440908,1);
      lVar3 = FUN_03326338(&local_1a0,"The file header was shorter than expected.",PTR_DAT_04372528)
      ;
      uVar7 = 0x156;
      goto LAB_032b0cd0;
    }
    FUN_03326994(&local_1a0,&DAT_04440908,1);
    lVar3 = FUN_03326338(&local_1a0,"The file header was shorter than expected.",PTR_DAT_04372528);
    uVar7 = 0x156;
    goto LAB_032b06f0;
  }
  if (uVar6 < 0x44) {
    uVar8 = 3;
  }
  else {
    lVar3 = FUN_032af29c(param_1,&local_1e8,0x44);
    if (lVar3 != 0x44) {
      if ((DAT_04440958 == '\0') && (uVar5 = FUN_03327170(), (uVar5 & 1) == 0)) {
        return 0x80040200;
      }
      uVar5 = FUN_03327170();
      if ((uVar5 & 1) != 0) {
        FUN_03326a7c(&local_1a0,&DAT_04440908,1);
        lVar3 = FUN_03326338(&local_1a0,"Failed to read header data (V4).",PTR_DAT_04372528);
        uVar7 = 0x161;
        goto LAB_032b0cd0;
      }
      FUN_03326994(&local_1a0,&DAT_04440908,1);
      lVar3 = FUN_03326338(&local_1a0,"Failed to read header data (V4).",PTR_DAT_04372528);
      uVar7 = 0x161;
      goto LAB_032b06f0;
    }
    uVar6 = iVar2 - 0x6c;
    uVar8 = 4;
  }
  lVar3 = (long)(int)uVar6;
  if (param_1[1] < *param_1 + lVar3) {
    lVar4 = FUN_033216d4(param_1,lVar3);
    if (lVar4 != lVar3) {
      if ((DAT_04440958 == '\0') && (uVar5 = FUN_03327170(), (uVar5 & 1) == 0)) {
        return 0x80040200;
      }
      uVar5 = FUN_03327170();
      if ((uVar5 & 1) != 0) {
        FUN_03326a7c(&local_1a0,&DAT_04440908,1);
        lVar3 = FUN_03326338(&local_1a0,"Failed to skip remaining header data.",PTR_DAT_04372528);
        uVar7 = 0x16a;
        goto LAB_032b0cd0;
      }
      FUN_03326994(&local_1a0,&DAT_04440908,1);
      lVar3 = FUN_03326338(&local_1a0,"Failed to skip remaining header data.",PTR_DAT_04372528);
      uVar7 = 0x16a;
      goto LAB_032b06f0;
    }
  }
  else {
    *param_1 = *param_1 + lVar3;
  }
  uVar1 = *(ushort *)((long)param_2 + 0xe);
  uVar6 = (uint)uVar1;
  param_2[0xb] = (uint)uVar1;
  param_2[0xc] = 0;
  *(undefined2 *)(param_2 + 10) = 0;
  switch(param_2[4]) {
  case 0:
    iVar2 = 0x5e;
    switch(uVar1) {
    case 1:
    case 4:
    case 8:
      *(undefined1 *)(param_2 + 10) = 1;
    case 0x20:
switchD_032b092c_caseD_20:
      iVar2 = 0x5c;
    case 0x18:
      param_2[0xc] = iVar2;
      break;
    default:
      goto switchD_032b0904_default;
    }
    goto LAB_032b09c4;
  case 1:
    if (uVar1 == 8) {
LAB_032b09b4:
      *(undefined2 *)(param_2 + 10) = 0x101;
      goto switchD_032b092c_caseD_20;
    }
    break;
  case 2:
    if (uVar1 == 4) goto LAB_032b09b4;
    break;
  case 3:
    if ((uVar1 != 0x20) && (uVar1 != 0x10)) break;
    if (uVar8 < 4) {
      lVar3 = FUN_032af29c(param_1,&local_1a0,0xc);
      if (lVar3 != 0xc) {
        return 0x80040200;
      }
      uStack_1dc = 0;
      uVar6 = param_2[0xb];
    }
    else {
      local_1a0 = local_1e8;
      uStack_19c = uStack_1e4;
      local_198 = local_1e0;
    }
    iVar2 = FUN_032b5638(local_1a0,uStack_19c,local_198,uStack_1dc,uVar6);
    param_2[0xc] = iVar2;
    if (iVar2 == 0) break;
LAB_032b09c4:
    if ((uint)param_2[1] < 0x10001) {
      if (0x10000 < (uint)param_2[2]) {
        if ((DAT_04440958 == '\0') && (uVar5 = FUN_03327170(), (uVar5 & 1) == 0)) {
          return 0x80040200;
        }
        uVar5 = FUN_03327170();
        if ((uVar5 & 1) != 0) {
          FUN_03326a7c(&local_1a0,&DAT_04440908,1);
          lVar3 = FUN_03326338(&local_1a0,"Image specifies height > 65536. Header corrupted?",
                               PTR_DAT_04372528);
          uVar7 = 0x1db;
          goto LAB_032b0cd0;
        }
        FUN_03326994(&local_1a0,&DAT_04440908,1);
        lVar3 = FUN_03326338(&local_1a0,"Image specifies height > 65536. Header corrupted?",
                             PTR_DAT_04372528);
        uVar7 = 0x1db;
        goto LAB_032b06f0;
      }
      uVar6 = param_2[5];
      param_2[0xd] = uVar6;
      if (uVar6 < 0x40000001) {
        uVar8 = param_2[0xb] * param_2[1] + 0x1fU >> 3 & 0x1ffffffc;
        param_2[0xe] = uVar8;
        if (uVar6 != 0) {
          return 0;
        }
        if (param_2[4] == 0) {
          param_2[0xd] = uVar8 * param_2[2];
          return 0;
        }
        if ((DAT_04440958 == '\0') && (uVar5 = FUN_03327170(), (uVar5 & 1) == 0)) {
          return 0x80040200;
        }
        uVar5 = FUN_03327170();
        if ((uVar5 & 1) != 0) {
          FUN_03326a7c(&local_1a0,&DAT_04440908,1);
          lVar3 = FUN_03326338(&local_1a0,"The data size wasn\'t specified in the header.",
                               PTR_DAT_04372528);
          uVar7 = 0x1ed;
          goto LAB_032b0cd0;
        }
        FUN_03326994(&local_1a0,&DAT_04440908,1);
        lVar3 = FUN_03326338(&local_1a0,"The data size wasn\'t specified in the header.",
                             PTR_DAT_04372528);
        uVar7 = 0x1ed;
        goto LAB_032b06f0;
      }
      if ((DAT_04440958 == '\0') && (uVar5 = FUN_03327170(), (uVar5 & 1) == 0)) {
        return 0x80040200;
      }
      uVar5 = FUN_03327170();
      if ((uVar5 & 1) == 0) {
        FUN_03326994(&local_1a0,&DAT_04440908,1);
        lVar3 = FUN_03326338(&local_1a0,"Image specifies data size > 1GiB. Header corrupted?",
                             PTR_DAT_04372528);
        uVar7 = 0x1e3;
        goto LAB_032b06f0;
      }
      FUN_03326a7c(&local_1a0,&DAT_04440908,1);
      lVar3 = FUN_03326338(&local_1a0,"Image specifies data size > 1GiB. Header corrupted?",
                           PTR_DAT_04372528);
      uVar7 = 0x1e3;
      goto LAB_032b0cd0;
    }
    if ((DAT_04440958 == '\0') && (uVar5 = FUN_03327170(), (uVar5 & 1) == 0)) {
      return 0x80040200;
    }
    uVar5 = FUN_03327170();
    if ((uVar5 & 1) != 0) {
      FUN_03326a7c(&local_1a0,&DAT_04440908,1);
      lVar3 = FUN_03326338(&local_1a0,"Image specifies width > 65536. Header corrupted?",
                           PTR_DAT_04372528);
      uVar7 = 0x1d3;
      goto LAB_032b0cd0;
    }
    FUN_03326994(&local_1a0,&DAT_04440908,1);
    lVar3 = FUN_03326338(&local_1a0,"Image specifies width > 65536. Header corrupted?",
                         PTR_DAT_04372528);
    uVar7 = 0x1d3;
    goto LAB_032b06f0;
  }
switchD_032b0904_default:
  if ((DAT_04440958 != '\0') || (uVar5 = FUN_03327170(), (uVar5 & 1) != 0)) {
    uVar5 = FUN_03327170();
    if ((uVar5 & 1) == 0) {
      FUN_03326994(&local_1a0,&DAT_04440908,1);
      lVar3 = FUN_03326338(&local_1a0,"Unknown or unsupported BMP encoding.",PTR_DAT_04372528);
      uVar7 = 0x1cb;
LAB_032b06f0:
      *(char **)(lVar3 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
      ;
      *(undefined8 *)(lVar3 + 0x40) = uVar7;
      FUN_033269dc(&local_1a0);
    }
    else {
      FUN_03326a7c(&local_1a0,&DAT_04440908,1);
      lVar3 = FUN_03326338(&local_1a0,"Unknown or unsupported BMP encoding.",PTR_DAT_04372528);
      uVar7 = 0x1cb;
LAB_032b0cd0:
      *(char **)(lVar3 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
      ;
      *(undefined8 *)(lVar3 + 0x40) = uVar7;
      FUN_03326adc(&local_1a0);
    }
  }
  return 0x80040200;
}


