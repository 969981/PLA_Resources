/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03385878; name: FUN_03385878
 */


void FUN_03385878(ulong *param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  code *pcVar9;
  int *piVar11;
  int *piVar10;
  undefined8 uVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  undefined1 local_1e0;
  undefined1 local_1df;
  undefined1 local_1de;
  undefined1 local_1dd;
  undefined1 local_1dc;
  ulong local_1d8;
  long lStack_1d0;
  ulong local_1c8;
  undefined1 local_1c0;
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  puVar3 = PTR_PTR_0434a090;
  local_80 = -0x7ffffff000000000;
  iVar6 = (int)((ulong)((long)param_4 - (long)param_3) >> 4);
  uVar2 = iVar6 * -0x55555555;
  local_88 = auStack_78;
  if ((int)uVar2 < 0x11) {
    local_80._0_4_ = 0;
    bVar4 = SBORROW4(0,uVar2);
    iVar6 = iVar6 * 0x55555555;
    bVar5 = uVar2 == 0;
    if ((int)uVar2 < 1) goto LAB_0338596c;
LAB_033858ec:
    lVar7 = (long)(int)(uint)local_80;
    uVar8 = ~(uint)local_80;
    local_80 = CONCAT44(local_80._4_4_,uVar2);
    memset(local_88 + lVar7,0,(ulong)(uVar8 + uVar2) + 1);
  }
  else {
    if ((int)uVar2 < 0x40000000) {
      uVar8 = 0x20;
    }
    else {
      FUN_032bd0a8(uVar2);
      uVar8 = (local_80._4_4_ & 0x3fffffff) * 2;
      if (0x3ffffffe < uVar8) {
        uVar8 = 0x3fffffff;
      }
    }
    uVar1 = uVar2;
    if ((int)uVar2 <= (int)uVar8) {
      uVar1 = uVar8;
    }
    local_88 = (undefined1 *)FUN_032bd1d4(puVar3,uVar1,1,auStack_78,0,(long)&local_80 + 4);
    bVar4 = SBORROW4((uint)local_80,uVar2);
    iVar6 = (uint)local_80 + iVar6 * 0x55555555;
    bVar5 = (uint)local_80 == uVar2;
    if ((int)(uint)local_80 < (int)uVar2) goto LAB_033858ec;
LAB_0338596c:
    if (!bVar5 && iVar6 < 0 == bVar4) {
      local_80 = CONCAT44(local_80._4_4_,uVar2);
      iVar6 = *param_2;
      goto joined_r0x03385978;
    }
  }
  iVar6 = *param_2;
joined_r0x03385978:
  if (-1 < iVar6) {
LAB_033859b8:
    do {
      iVar6 = FUN_03385724(param_1,0);
      if (iVar6 == 0) goto LAB_03385bfc;
      if (iVar6 == 1) {
        if (DAT_04450900 < 2) {
          if (DAT_04350668 != '\0') goto LAB_03385d34;
        }
        else {
          if (DAT_04350668 != '\0') {
LAB_03385d34:
            FUN_03326a7c(&local_1d8,&DAT_044508b0,2);
            lVar7 = FUN_03326338(&local_1d8,"IO error",PTR_DAT_04372528);
            uVar12 = 0x50e;
            goto LAB_03385d20;
          }
          FUN_03326994(&local_1d8,&DAT_044508b0,2);
          lVar7 = FUN_03326338(&local_1d8,"IO error",PTR_DAT_04372528);
          uVar12 = 0x50e;
LAB_03385be8:
          *(char **)(lVar7 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar7 + 0x40) = uVar12;
          FUN_033269dc(&local_1d8);
        }
LAB_03385bf4:
        *param_2 = -0x7ffbfe00;
        break;
      }
      if (param_3 == param_4) {
LAB_03385b18:
        local_1e0 = (undefined1)((uint)iVar6 >> 0x18);
        local_1df = (undefined1)((uint)iVar6 >> 0x10);
        local_1de = (undefined1)((uint)iVar6 >> 8);
        local_1dd = (undefined1)iVar6;
        local_1dc = 0;
        if (DAT_04450900 < 2) {
          if (DAT_04350668 == '\0') goto LAB_03385bf4;
        }
        else if (DAT_04350668 == '\0') {
          FUN_03326994(&local_1d8,&DAT_044508b0,2);
          lVar7 = FUN_03326338(&local_1d8,"Unexpected section {}",PTR_DAT_04389018,&local_1e0);
          uVar12 = 0x538;
          goto LAB_03385be8;
        }
        FUN_03326a7c(&local_1d8,&DAT_044508b0,2);
        lVar7 = FUN_03326338(&local_1d8,"Unexpected section {}",PTR_DAT_04389018,&local_1e0);
        uVar12 = 0x538;
LAB_03385d20:
        *(char **)(lVar7 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar7 + 0x40) = uVar12;
        FUN_03326adc(&local_1d8);
        goto LAB_03385bf4;
      }
      piVar10 = param_3;
      while (piVar11 = piVar10 + 0xc, *piVar10 != iVar6) {
        piVar10 = piVar11;
        if (param_4 == piVar11) goto LAB_03385b18;
      }
      if (piVar10 == (int *)0x0) goto LAB_03385b18;
      iVar6 = (int)((ulong)((long)piVar10 - (long)param_3) >> 4) * -0x55555555;
      if (local_88[iVar6] != '\0') {
        if (DAT_04450900 < 2) {
          if (DAT_04350668 == '\0') goto LAB_03385bf4;
        }
        else if (DAT_04350668 == '\0') {
          FUN_03326994(&local_1d8,&DAT_044508b0,2);
          lVar7 = FUN_03326338(&local_1d8,"Duplicate section",PTR_DAT_04372528);
          uVar12 = 0x531;
          goto LAB_03385be8;
        }
        FUN_03326a7c(&local_1d8,&DAT_044508b0,2);
        lVar7 = FUN_03326338(&local_1d8,"Duplicate section",PTR_DAT_04372528);
        uVar12 = 0x531;
        goto LAB_03385d20;
      }
      local_88[iVar6] = 1;
      pcVar9 = *(code **)(piVar10 + 10);
      if (pcVar9 == (code *)0x0) {
        uVar15 = (((ulong)*(uint *)(param_1[5] + (long)(int)param_1[6] * 0x18 + -0x14) & 0x3fffffff)
                 + *param_1) - 8;
        if (param_1[1] < uVar15) {
          *param_1 = param_1[1];
          *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
          *param_2 = -0x7ffbfe00;
        }
        else {
          iVar6 = 0;
          if ((char)param_1[3] != '\0') {
            iVar6 = -0x7ffbfe00;
          }
          *param_1 = uVar15;
          *param_2 = iVar6;
          if (-1 < iVar6) goto LAB_03385a84;
        }
LAB_033859b0:
        if (*param_2 < 0) break;
        goto LAB_033859b8;
      }
      puVar13 = (uint *)(param_1[5] + (long)(int)param_1[6] * 0x18 + -0x14);
      local_1d8 = *param_1;
      uVar15 = (((ulong)*puVar13 & 0x3fffffff) + local_1d8) - 8;
      if (param_1[1] < uVar15) {
        *param_1 = param_1[1];
        *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
      }
      else {
        *param_1 = uVar15;
      }
      local_1c0 = 0;
      lStack_1d0 = ((ulong)*puVar13 & 0x3fffffff) + local_1d8 + -8;
      local_1c8 = local_1d8;
      (*pcVar9)(&local_1d8,param_2);
      if (*param_2 < 0) goto LAB_033859b0;
LAB_03385a84:
      lVar7 = (long)(int)param_1[6] + -1;
      lVar14 = param_1[5] + lVar7 * 0x18;
      if (*param_1 - param_1[2] !=
          *(long *)(lVar14 + 8) + ((ulong)*(uint *)(lVar14 + 4) & 0x3fffffff)) {
        *(byte *)(param_1 + 3) = (byte)param_1[3] | 2;
        goto LAB_033859b0;
      }
      param_1[4] = *(ulong *)(param_1[5] + lVar7 * 0x18 + 0x10);
      *(int *)(param_1 + 6) = (int)lVar7;
    } while (-1 < *param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0;
LAB_03385bfc:
  lVar7 = local_80;
  uVar2 = local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_88 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3,local_88,uVar2 & 0x3fffffff);
  }
  return;
}


