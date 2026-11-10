/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337d694; name: FUN_0337d694
 */


void FUN_0337d694(int *param_1,ulong *param_2,ulong param_3,long param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  undefined8 uVar10;
  long local_1f0;
  undefined1 auStack_1e8 [328];
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  
  if ((param_3 & 1) != 0) {
    if (param_4 == 0) {
      FUN_032dba50(&local_1f0);
      local_80 = *param_2;
      uStack_78 = param_2[1];
      local_70 = param_2[2];
      uStack_68 = param_2[3];
      FUN_03388344(param_1,&local_80,&local_1f0);
      FUN_032dc210(&local_1f0);
      return;
    }
    local_1f0 = param_4;
    FUN_032e80d0(auStack_1e8,0xffffffffffffffff);
    local_a0 = *param_2;
    uStack_98 = param_2[1];
    local_90 = param_2[2];
    uStack_88 = param_2[3];
    FUN_033888b4(param_1,&local_a0,&local_1f0);
    FUN_032e8100(auStack_1e8);
    return;
  }
  if (param_1[0x4e] != 2) {
    return;
  }
  uVar6 = FUN_03384ab0(param_2);
  if (uVar6 >> 0x1f == 0) {
    if ((byte)param_2[3] != 0) goto LAB_0337d74c;
    if (-1 < *param_1) {
      if ((int)(param_1[0x5f] & 0x3fffffffU) < (int)uVar6) {
        uVar10 = FUN_03388e24(PTR_PTR_0434a080,uVar6 & 0xffffffff,*(undefined8 *)(param_1 + 0x5c),
                              param_1[0x5e],param_1 + 0x5f);
        *(undefined8 *)(param_1 + 0x5c) = uVar10;
      }
      puVar5 = PTR_PTR_0434a080;
      if ((int)uVar6 < 1) {
        return;
      }
      while( true ) {
        uVar8 = FUN_03384ab0(param_2);
        if (uVar8 >> 0x1f != 0) {
          *(byte *)(param_2 + 3) = (byte)param_2[3] | 2;
        }
        puVar1 = (undefined4 *)*param_2 + 1;
        if ((undefined4 *)param_2[1] < puVar1) break;
        uVar3 = *(undefined4 *)*param_2;
        *param_2 = (ulong)puVar1;
        if ((char)param_2[3] != '\0') goto LAB_0337d930;
        if (*param_1 < 0) goto LAB_0337d93c;
        iVar9 = param_1[0x5e];
        lVar7 = *(long *)(param_1 + 0x5c);
        iVar2 = iVar9 + 1;
        if ((int)(param_1[0x5f] & 0x3fffffffU) <= iVar9) {
          lVar7 = FUN_03388e24(puVar5,iVar2,lVar7,iVar9,param_1 + 0x5f);
          iVar9 = param_1[0x5e];
          *(long *)(param_1 + 0x5c) = lVar7;
        }
        puVar1 = (undefined4 *)(lVar7 + (long)iVar9 * 8);
        uVar4 = (int)uVar6 - 1;
        uVar6 = (ulong)uVar4;
        *puVar1 = (int)uVar8;
        puVar1[1] = uVar3;
        param_1[0x5e] = iVar2;
        if (uVar4 == 0) {
          return;
        }
      }
      *param_2 = param_2[1];
      *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
LAB_0337d930:
      *param_1 = -0x7ffbfe00;
LAB_0337d93c:
      if (DAT_04450900 == '\0') {
        if (DAT_04350668 == '\0') {
          return;
        }
      }
      else if (DAT_04350668 == '\0') {
        FUN_03326994(&local_1f0,&DAT_044508b0,1);
        lVar7 = FUN_03326338(&local_1f0,"Error in input stream.",PTR_DAT_04372528);
        uVar10 = 0x956;
        goto LAB_0337d7a8;
      }
      FUN_03326a7c(&local_1f0,&DAT_044508b0,1);
      lVar7 = FUN_03326338(&local_1f0,"Error in input stream.",PTR_DAT_04372528);
      uVar10 = 0x956;
      goto LAB_0337d878;
    }
  }
  else {
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 2;
LAB_0337d74c:
    *param_1 = -0x7ffbfe00;
  }
  if (DAT_04450900 == '\0') {
    if (DAT_04350668 == '\0') {
      return;
    }
  }
  else if (DAT_04350668 == '\0') {
    FUN_03326994(&local_1f0,&DAT_044508b0,1);
    lVar7 = FUN_03326338(&local_1f0,"Error in input stream.",PTR_DAT_04372528);
    uVar10 = 0x94e;
LAB_0337d7a8:
    *(char **)(lVar7 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar7 + 0x40) = uVar10;
    FUN_033269dc(&local_1f0);
    return;
  }
  FUN_03326a7c(&local_1f0,&DAT_044508b0,1);
  lVar7 = FUN_03326338(&local_1f0,"Error in input stream.",PTR_DAT_04372528);
  uVar10 = 0x94e;
LAB_0337d878:
  *(char **)(lVar7 + 0x38) =
       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar7 + 0x40) = uVar10;
  FUN_03326adc(&local_1f0);
  return;
}


