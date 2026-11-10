/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337ce2c; name: FUN_0337ce2c
 */


void FUN_0337ce2c(int *param_1,ulong *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined1 auStack_180 [336];
  int local_24;
  
  piVar1 = (int *)param_2[1];
  piVar4 = (int *)*param_2 + 1;
  if (piVar1 < piVar4) {
    local_24 = 0;
    *param_2 = (ulong)piVar1;
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
    piVar4 = piVar1;
  }
  else {
    local_24 = *(int *)*param_2;
    *param_2 = (ulong)piVar4;
  }
  if (piVar1 < piVar4 + 1) {
    *param_2 = (ulong)piVar1;
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
  }
  else {
    iVar2 = *piVar4;
    *param_2 = (ulong)(piVar4 + 1);
    if ((char)param_2[3] == '\0') {
      if (*param_1 < 0) goto LAB_0337cea4;
      piVar4 = param_1 + 0x48;
      if (local_24 == param_1[0x48]) {
        *piVar4 = iVar2;
        if (param_2[1] == *param_2) {
          return;
        }
        if (DAT_04450900 == '\0') {
          if (DAT_04350668 == '\0') goto LAB_0337d060;
        }
        else if (DAT_04350668 == '\0') {
          FUN_03326994(auStack_180,&DAT_044508b0,1);
          lVar3 = FUN_03326338(auStack_180,"Oversized type rolling hash section (TSHA).",
                               PTR_DAT_04372528);
          *(char **)(lVar3 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar3 + 0x40) = 0x832;
          *(undefined4 *)(lVar3 + 0x1c) = 0x6e8537db;
LAB_0337d058:
          FUN_033269dc(auStack_180);
          goto LAB_0337d060;
        }
        FUN_03326a7c(auStack_180,&DAT_044508b0,1);
        lVar3 = FUN_03326338(auStack_180,"Oversized type rolling hash section (TSHA).",
                             PTR_DAT_04372528);
        *(char **)(lVar3 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar3 + 0x40) = 0x832;
        *(undefined4 *)(lVar3 + 0x1c) = 0x6e8537db;
      }
      else {
        if (DAT_04450900 == '\0') {
          if (DAT_04350668 == '\0') goto LAB_0337d060;
        }
        else if (DAT_04350668 == '\0') {
          FUN_03326994(auStack_180,&DAT_044508b0,1);
          lVar3 = FUN_03326338(auStack_180,
                               "Read format has lost sync: invalid previous type rolling hash (expected 0x{:x8}, got 0x{:x8})."
                               ,PTR_DAT_043894a8,piVar4,&local_24);
          *(char **)(lVar3 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar3 + 0x40) = 0x830;
          goto LAB_0337d058;
        }
        FUN_03326a7c(auStack_180,&DAT_044508b0,1);
        lVar3 = FUN_03326338(auStack_180,
                             "Read format has lost sync: invalid previous type rolling hash (expected 0x{:x8}, got 0x{:x8})."
                             ,PTR_DAT_043894a8,piVar4,&local_24);
        *(char **)(lVar3 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar3 + 0x40) = 0x830;
      }
      FUN_03326adc(auStack_180);
LAB_0337d060:
      *param_1 = -0x7ffbfe00;
      return;
    }
  }
  *param_1 = -0x7ffbfe00;
LAB_0337cea4:
  if (DAT_04450900 == '\0') {
    if (DAT_04350668 == '\0') {
      return;
    }
  }
  else if (DAT_04350668 == '\0') {
    FUN_03326994(auStack_180,&DAT_044508b0,1);
    lVar3 = FUN_03326338(auStack_180,"Error in input stream.",PTR_DAT_04372528);
    *(char **)(lVar3 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar3 + 0x40) = 0x82f;
    FUN_033269dc(auStack_180);
    return;
  }
  FUN_03326a7c(auStack_180,&DAT_044508b0,1);
  lVar3 = FUN_03326338(auStack_180,"Error in input stream.",PTR_DAT_04372528);
  *(char **)(lVar3 + 0x38) =
       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar3 + 0x40) = 0x82f;
  FUN_03326adc(auStack_180);
  return;
}


