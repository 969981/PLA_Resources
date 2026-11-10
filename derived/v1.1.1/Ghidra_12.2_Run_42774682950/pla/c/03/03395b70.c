/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03395b70; name: FUN_03395b70
 */


undefined8 FUN_03395b70(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long local_1d0;
  long local_1c8;
  undefined8 local_1c0;
  undefined1 auStack_1b8 [25];
  undefined1 local_19f;
  
  if ((3 < DAT_04450aa8) || (uVar1 = FUN_03327170(), (uVar1 & 1) != 0)) {
    uVar1 = FUN_03327170();
    if ((uVar1 & 1) == 0) {
      FUN_03326994(auStack_1b8,&DAT_04450a58,4);
      lVar2 = FUN_03326338(auStack_1b8,"CalcSig",PTR_DAT_04372528);
      *(char **)(lVar2 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
      ;
      *(undefined8 *)(lVar2 + 0x40) = 0x252;
      *(undefined1 *)(lVar2 + 0x19) = 1;
      FUN_033269dc(auStack_1b8);
    }
    else {
      FUN_03326a7c(auStack_1b8,&DAT_04450a58,4);
      lVar2 = FUN_03326338(auStack_1b8,"CalcSig",PTR_DAT_04372528);
      *(char **)(lVar2 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
      ;
      *(undefined8 *)(lVar2 + 0x40) = 0x252;
      *(undefined1 *)(lVar2 + 0x19) = 1;
      FUN_03326adc(auStack_1b8);
    }
  }
  local_1c0 = FUN_032bb150(0,*(undefined8 *)(param_1 + 0x18),(long)*(int *)(param_1 + 0x20));
  if ((3 < DAT_04450aa8) || (uVar1 = FUN_03327170(), (uVar1 & 1) != 0)) {
    uVar1 = FUN_03327170();
    if ((uVar1 & 1) == 0) {
      FUN_03326994(auStack_1b8,&DAT_04450a58,4);
      local_1c8 = (long)*(int *)(param_1 + 0x20);
      lVar2 = FUN_03326338(auStack_1b8,"Encoded bodies {}b -> {}",&DAT_0436f0e0,&local_1c8,
                           &local_1c0);
      *(char **)(lVar2 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
      ;
      *(undefined8 *)(lVar2 + 0x40) = 0x255;
      FUN_033269dc(auStack_1b8);
    }
    else {
      FUN_03326a7c(auStack_1b8,&DAT_04450a58,4);
      local_1d0 = (long)*(int *)(param_1 + 0x20);
      lVar2 = FUN_03326338(auStack_1b8,"Encoded bodies {}b -> {}",&DAT_0436f0e0,&local_1d0,
                           &local_1c0);
      *(char **)(lVar2 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
      ;
      *(undefined8 *)(lVar2 + 0x40) = 0x255;
      FUN_03326adc(auStack_1b8);
    }
  }
  local_1c0 = FUN_03395f48(param_1 + 0x30,local_1c0);
  iVar6 = *(int *)(param_1 + 0xe0);
  uVar5 = local_1c0;
  if (0 < iVar6) {
    lVar7 = 0;
    lVar2 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0xd8) + lVar7;
      local_1c0 = FUN_032bb150(local_1c0,lVar4,4);
      if ((3 < DAT_04450aa8) || (uVar1 = FUN_03327170(), (uVar1 & 1) != 0)) {
        uVar1 = FUN_03327170();
        if ((uVar1 & 1) == 0) {
          FUN_03326994(auStack_1b8,&DAT_04450a58,4);
          lVar3 = FUN_03326338(auStack_1b8,"NameId {} -> {}",&DAT_0436f110,lVar4,&local_1c0);
          *(char **)(lVar3 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
          ;
          *(undefined8 *)(lVar3 + 0x40) = 0x25b;
          FUN_033269dc(auStack_1b8);
        }
        else {
          FUN_03326a7c(auStack_1b8,&DAT_04450a58,4);
          lVar3 = FUN_03326338(auStack_1b8,"NameId {} -> {}",&DAT_0436f110,lVar4,&local_1c0);
          *(char **)(lVar3 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
          ;
          *(undefined8 *)(lVar3 + 0x40) = 0x25b;
          FUN_03326adc(auStack_1b8);
        }
      }
      local_1c0 = FUN_032bb150(local_1c0,*(undefined8 *)(lVar4 + 8),
                               (long)*(int *)(lVar4 + 0x10) << 4);
      if ((3 < DAT_04450aa8) || (uVar1 = FUN_03327170(), (uVar1 & 1) != 0)) {
        uVar1 = FUN_03327170();
        if ((uVar1 & 1) == 0) {
          FUN_03326994(auStack_1b8,&DAT_04450a58,4);
          local_1c8 = (long)*(int *)(lVar4 + 0x10);
          lVar4 = FUN_03326338(auStack_1b8,"{} ParamId -> {}",&DAT_0436f0e0,&local_1c8,&local_1c0);
          *(char **)(lVar4 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
          ;
          *(undefined8 *)(lVar4 + 0x40) = 0x25d;
          FUN_033269dc(auStack_1b8);
        }
        else {
          FUN_03326a7c(auStack_1b8,&DAT_04450a58,4);
          local_1d0 = (long)*(int *)(lVar4 + 0x10);
          lVar4 = FUN_03326338(auStack_1b8,"{} ParamId -> {}",&DAT_0436f0e0,&local_1d0,&local_1c0);
          *(char **)(lVar4 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
          ;
          *(undefined8 *)(lVar4 + 0x40) = 0x25d;
          FUN_03326adc(auStack_1b8);
        }
      }
      iVar6 = *(int *)(param_1 + 0xe0);
      lVar2 = lVar2 + 1;
      lVar7 = lVar7 + 0x18;
      uVar5 = local_1c0;
    } while (lVar2 < iVar6);
  }
  *(int *)(param_1 + 0xf8) = iVar6;
  *(undefined8 *)(param_1 + 0x100) = uVar5;
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x38);
  if (3 < DAT_04450aa8) {
    local_1c0 = uVar5;
    FUN_03326994(auStack_1b8,&DAT_04450a58,4);
    local_19f = 0xff;
    FUN_033269dc(auStack_1b8);
  }
  return uVar5;
}


