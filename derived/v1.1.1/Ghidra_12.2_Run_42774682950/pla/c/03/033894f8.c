/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033894f8; name: FUN_033894f8
 */


void FUN_033894f8(int *param_1,ulong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  undefined1 auStack_1b8 [344];
  
  lVar9 = *(long *)(param_1 + 4);
  iVar2 = param_1[6];
  uVar5 = FUN_03384ab0(param_2);
  if (uVar5 >> 0x1f == 0) {
    if ((byte)param_2[3] != 0) goto LAB_03389544;
    if (-1 < *param_1) {
      if ((int)uVar5 < 1) {
        return;
      }
      while( true ) {
        uVar6 = FUN_03384ab0(param_2);
        if (uVar6 >> 0x1f != 0) {
          *(byte *)(param_2 + 3) = (byte)param_2[3] | 2;
        }
        iVar8 = (int)uVar6;
        piVar1 = (int *)*param_2 + 1;
        local_1bc = iVar8;
        if ((int *)param_2[1] < piVar1) break;
        iVar3 = *(int *)*param_2;
        *param_2 = (ulong)piVar1;
        local_1c0 = iVar3;
        if ((char)param_2[3] != '\0') goto LAB_033896cc;
        if (*param_1 < 0) goto LAB_033896d8;
        if ((iVar8 < 1) || (iVar2 <= iVar8)) {
          if (DAT_04450900 == '\0') {
            if (DAT_04350668 == '\0') goto LAB_0338988c;
          }
          else if (DAT_04350668 == '\0') {
            FUN_03326994(auStack_1b8,&DAT_044508b0,1);
            lVar9 = FUN_03326338(auStack_1b8,
                                 "Invalid type ID (out of bounds) when reading property hash",
                                 PTR_DAT_04372528);
            uVar7 = 0x970;
LAB_03389880:
            *(char **)(lVar9 + 0x38) =
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
            ;
            *(undefined8 *)(lVar9 + 0x40) = uVar7;
            FUN_033269dc(auStack_1b8);
            goto LAB_0338988c;
          }
          FUN_03326a7c(auStack_1b8,&DAT_044508b0,1);
          lVar9 = FUN_03326338(auStack_1b8,
                               "Invalid type ID (out of bounds) when reading property hash",
                               PTR_DAT_04372528);
          uVar7 = 0x970;
LAB_03389974:
          *(char **)(lVar9 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar9 + 0x40) = uVar7;
          FUN_03326adc(auStack_1b8);
LAB_0338988c:
          *param_1 = -0x7ffbfe00;
          return;
        }
        if (*(long *)(lVar9 + (-(uVar6 >> 0x1f & 1) & 0xfffffff800000000 | (uVar6 & 0xffffffff) << 3
                              )) == 0) {
          if (DAT_04450900 == '\0') {
            if (DAT_04350668 == '\0') goto LAB_0338988c;
          }
          else if (DAT_04350668 == '\0') {
            FUN_03326994(auStack_1b8,&DAT_044508b0,1);
            lVar9 = FUN_03326338(auStack_1b8,
                                 "Type ${} is not initialized; HASHES section must have been loaded before PROPS_HASHES"
                                 ,&DAT_0411b3b8,&local_1bc);
            uVar7 = 0x973;
            goto LAB_03389880;
          }
          FUN_03326a7c(auStack_1b8,&DAT_044508b0,1);
          lVar9 = FUN_03326338(auStack_1b8,
                               "Type ${} is not initialized; HASHES section must have been loaded before PROPS_HASHES"
                               ,&DAT_0411b3b8,&local_1bc);
          uVar7 = 0x973;
          goto LAB_03389974;
        }
        local_1c4 = FUN_032e87c4(param_3);
        if (iVar3 != local_1c4) {
          if (DAT_04450900 == '\0') {
            if (DAT_04350668 == '\0') goto LAB_0338988c;
          }
          else if (DAT_04350668 == '\0') {
            FUN_03326994(auStack_1b8,&DAT_044508b0,1);
            lVar9 = FUN_03326338(auStack_1b8,
                                 "Property hash in file for type ${}, \'{}\' ({}) does not match native hash ({})"
                                 ,&DAT_0436ecb0,&local_1bc,
                                 *(long *)(param_1 + 0x18) + (long)local_1bc * 8,&local_1c0,
                                 &local_1c4);
            uVar7 = 0x97a;
            goto LAB_03389880;
          }
          FUN_03326a7c(auStack_1b8,&DAT_044508b0,1);
          lVar9 = FUN_03326338(auStack_1b8,
                               "Property hash in file for type ${}, \'{}\' ({}) does not match native hash ({})"
                               ,&DAT_0436ecb0,&local_1bc,
                               *(long *)(param_1 + 0x18) + (long)local_1bc * 8,&local_1c0,&local_1c4
                              );
          uVar7 = 0x97a;
          goto LAB_03389974;
        }
        uVar4 = (int)uVar5 - 1;
        uVar5 = (ulong)uVar4;
        *(undefined1 *)(*(long *)(param_1 + 0x76) + (long)iVar8) = 1;
        if (uVar4 == 0) {
          return;
        }
      }
      *param_2 = param_2[1];
      *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
      local_1c0 = 0;
LAB_033896cc:
      *param_1 = -0x7ffbfe00;
LAB_033896d8:
      if (DAT_04450900 == '\0') {
        if (DAT_04350668 == '\0') {
          return;
        }
      }
      else if (DAT_04350668 == '\0') {
        FUN_03326994(auStack_1b8,&DAT_044508b0,1);
        lVar9 = FUN_03326338(auStack_1b8,"Error in input stream.",PTR_DAT_04372528);
        uVar7 = 0x96b;
        goto LAB_033895a0;
      }
      FUN_03326a7c(auStack_1b8,&DAT_044508b0,1);
      lVar9 = FUN_03326338(auStack_1b8,"Error in input stream.",PTR_DAT_04372528);
      uVar7 = 0x96b;
      goto LAB_033896a8;
    }
  }
  else {
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 2;
LAB_03389544:
    *param_1 = -0x7ffbfe00;
  }
  if (DAT_04450900 == '\0') {
    if (DAT_04350668 == '\0') {
      return;
    }
  }
  else if (DAT_04350668 == '\0') {
    FUN_03326994(auStack_1b8,&DAT_044508b0,1);
    lVar9 = FUN_03326338(auStack_1b8,"Error in input stream.",PTR_DAT_04372528);
    uVar7 = 0x965;
LAB_033895a0:
    *(char **)(lVar9 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar9 + 0x40) = uVar7;
    FUN_033269dc(auStack_1b8);
    return;
  }
  FUN_03326a7c(auStack_1b8,&DAT_044508b0,1);
  lVar9 = FUN_03326338(auStack_1b8,"Error in input stream.",PTR_DAT_04372528);
  uVar7 = 0x965;
LAB_033896a8:
  *(char **)(lVar9 + 0x38) =
       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar9 + 0x40) = uVar7;
  FUN_03326adc(auStack_1b8);
  return;
}


