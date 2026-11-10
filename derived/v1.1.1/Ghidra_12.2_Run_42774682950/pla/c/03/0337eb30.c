/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337eb30; name: FUN_0337eb30
 */


void FUN_0337eb30(int *param_1,ulong *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  undefined1 auStack_170 [336];
  
  piVar2 = (int *)param_2[1];
  piVar1 = (int *)*param_2 + 1;
  if (piVar2 < piVar1) {
    *param_2 = (ulong)piVar2;
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
  }
  else {
    iVar3 = *(int *)*param_2;
    *param_2 = (ulong)piVar1;
    if ((char)param_2[3] == '\0') {
      if (*param_1 < 0) goto LAB_0337eb70;
      if (iVar3 == param_1[0x42]) {
        if (piVar1 == piVar2) {
          return;
        }
        if (DAT_04450900 == '\0') {
          if (DAT_04350668 == '\0') goto LAB_0337ed14;
        }
        else if (DAT_04350668 == '\0') {
          FUN_03326994(auStack_170,&DAT_044508b0,1);
          lVar4 = FUN_03326338(auStack_170,"Oversized type sequence section (TSEQ).",
                               PTR_DAT_04372528);
          *(char **)(lVar4 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar4 + 0x40) = 0x828;
          *(undefined4 *)(lVar4 + 0x1c) = 0x6e8537db;
LAB_0337ed0c:
          FUN_033269dc(auStack_170);
          goto LAB_0337ed14;
        }
        FUN_03326a7c(auStack_170,&DAT_044508b0,1);
        lVar4 = FUN_03326338(auStack_170,"Oversized type sequence section (TSEQ).",PTR_DAT_04372528)
        ;
        *(char **)(lVar4 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar4 + 0x40) = 0x828;
        *(undefined4 *)(lVar4 + 0x1c) = 0x6e8537db;
      }
      else {
        if (DAT_04450900 == '\0') {
          if (DAT_04350668 == '\0') goto LAB_0337ed14;
        }
        else if (DAT_04350668 == '\0') {
          FUN_03326994(auStack_170,&DAT_044508b0,1);
          lVar4 = FUN_03326338(auStack_170,
                               "Sequence number incorrect. This reader didn\'t read the stream as it was written"
                               ,PTR_DAT_04372528);
          *(char **)(lVar4 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar4 + 0x40) = 0x827;
          goto LAB_0337ed0c;
        }
        FUN_03326a7c(auStack_170,&DAT_044508b0,1);
        lVar4 = FUN_03326338(auStack_170,
                             "Sequence number incorrect. This reader didn\'t read the stream as it was written"
                             ,PTR_DAT_04372528);
        *(char **)(lVar4 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar4 + 0x40) = 0x827;
      }
      FUN_03326adc(auStack_170);
LAB_0337ed14:
      *param_1 = -0x7ffbfe00;
      return;
    }
  }
  *param_1 = -0x7ffbfe00;
LAB_0337eb70:
  if (DAT_04450900 == '\0') {
    if (DAT_04350668 == '\0') {
      return;
    }
  }
  else if (DAT_04350668 == '\0') {
    FUN_03326994(auStack_170,&DAT_044508b0,1);
    lVar4 = FUN_03326338(auStack_170,"Error in input stream.",PTR_DAT_04372528);
    *(char **)(lVar4 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar4 + 0x40) = 0x826;
    FUN_033269dc(auStack_170);
    return;
  }
  FUN_03326a7c(auStack_170,&DAT_044508b0,1);
  lVar4 = FUN_03326338(auStack_170,"Error in input stream.",PTR_DAT_04372528);
  *(char **)(lVar4 + 0x38) =
       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar4 + 0x40) = 0x826;
  FUN_03326adc(auStack_170);
  return;
}


