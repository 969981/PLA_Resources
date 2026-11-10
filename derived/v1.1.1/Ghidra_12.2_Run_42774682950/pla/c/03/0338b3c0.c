/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0338b3c0; name: FUN_0338b3c0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0338b3c0(ulong *param_1,long *param_2,int *param_3,int *param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int *piVar11;
  code *pcVar12;
  undefined8 uVar13;
  int *piVar14;
  uint *puVar15;
  ulong uVar16;
  int *piVar17;
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
  
  puVar4 = PTR_PTR_0434a090;
  piVar17 = (int *)*param_2;
  local_80 = -0x7ffffff000000000;
  iVar7 = (int)((ulong)((long)param_4 - (long)param_3) >> 4);
  uVar3 = iVar7 * -0x55555555;
  local_88 = auStack_78;
  if ((int)uVar3 < 0x11) {
    local_80._0_4_ = 0;
    bVar5 = SBORROW4(0,uVar3);
    iVar7 = iVar7 * 0x55555555;
    bVar6 = uVar3 == 0;
    if ((int)uVar3 < 1) goto LAB_0338b648;
LAB_0338b438:
    lVar8 = (long)(int)(uint)local_80;
    uVar10 = ~(uint)local_80;
    local_80 = CONCAT44(local_80._4_4_,uVar3);
    memset(local_88 + lVar8,0,(ulong)(uVar10 + uVar3) + 1);
  }
  else {
    if ((int)uVar3 < 0x40000000) {
      uVar10 = 0x20;
    }
    else {
      FUN_032bd0a8(uVar3);
      uVar10 = (local_80._4_4_ & 0x3fffffff) * 2;
      if (0x3ffffffe < uVar10) {
        uVar10 = 0x3fffffff;
      }
    }
    uVar2 = uVar3;
    if ((int)uVar3 <= (int)uVar10) {
      uVar2 = uVar10;
    }
    local_88 = (undefined1 *)FUN_032bd1d4(puVar4,uVar2,1,auStack_78,0,(long)&local_80 + 4);
    bVar5 = SBORROW4((uint)local_80,uVar3);
    iVar7 = (uint)local_80 + iVar7 * 0x55555555;
    bVar6 = (uint)local_80 == uVar3;
    if ((int)(uint)local_80 < (int)uVar3) goto LAB_0338b438;
LAB_0338b648:
    if (!bVar6 && iVar7 < 0 == bVar5) {
      local_80 = CONCAT44(local_80._4_4_,uVar3);
      iVar7 = *piVar17;
      goto joined_r0x0338b458;
    }
  }
  iVar7 = *piVar17;
joined_r0x0338b458:
  if (-1 < iVar7) {
    do {
      iVar7 = FUN_03385724(param_1,0);
      if (iVar7 == 0) goto LAB_0338b7d8;
      if (iVar7 == 1) {
        if (DAT_04450900 < 2) {
          if (DAT_04350668 != '\0') goto LAB_0338b878;
        }
        else if (DAT_04350668 == '\0') {
          FUN_03326994(&local_1d8,&DAT_044508b0,2);
          lVar8 = FUN_03326338(&local_1d8,"IO error",PTR_DAT_04372528);
          uVar13 = 0x50e;
LAB_0338b7bc:
          *(char **)(lVar8 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar8 + 0x40) = uVar13;
          FUN_033269dc(&local_1d8);
        }
        else {
LAB_0338b878:
          FUN_03326a7c(&local_1d8,&DAT_044508b0,2);
          lVar8 = FUN_03326338(&local_1d8,"IO error",PTR_DAT_04372528);
          uVar13 = 0x50e;
LAB_0338b8a8:
          *(char **)(lVar8 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar8 + 0x40) = uVar13;
          FUN_03326adc(&local_1d8);
        }
LAB_0338b7d0:
        *piVar17 = -0x7ffbfe00;
        break;
      }
      if (param_3 != param_4) {
        piVar14 = param_3;
        do {
          piVar11 = piVar14 + 0xc;
          if (*piVar14 == iVar7) {
            if (piVar14 != (int *)0x0) {
              iVar7 = (int)((ulong)((long)piVar14 - (long)param_3) >> 4) * -0x55555555;
              if (local_88[iVar7] != '\0') {
                if (DAT_04450900 < 2) {
                  if (DAT_04350668 == '\0') goto LAB_0338b7d0;
                }
                else if (DAT_04350668 == '\0') {
                  FUN_03326994(&local_1d8,&DAT_044508b0,2);
                  lVar8 = FUN_03326338(&local_1d8,"Duplicate section",PTR_DAT_04372528);
                  uVar13 = 0x531;
                  goto LAB_0338b7bc;
                }
                FUN_03326a7c(&local_1d8,&DAT_044508b0,2);
                lVar8 = FUN_03326338(&local_1d8,"Duplicate section",PTR_DAT_04372528);
                uVar13 = 0x531;
                goto LAB_0338b8a8;
              }
              local_88[iVar7] = 1;
              pcVar12 = *(code **)(piVar14 + 6);
              uVar16 = *(ulong *)(piVar14 + 8);
              if ((pcVar12 == (code *)0x0) && (uVar16 == 0 || (uVar16 & 1) == 0)) {
                uVar16 = (((ulong)*(uint *)(param_1[5] + (long)(int)param_1[6] * 0x18 + -0x14) &
                          0x3fffffff) + *param_1) - 8;
                if (uVar16 <= param_1[1]) {
                  iVar7 = 0;
                  if ((char)param_1[3] != '\0') {
                    iVar7 = -0x7ffbfe00;
                  }
                  *param_1 = uVar16;
                  *piVar17 = iVar7;
                  goto joined_r0x0338b568;
                }
                *param_1 = param_1[1];
                *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
                *piVar17 = -0x7ffbfe00;
              }
              else {
                lVar8 = param_2[1];
                plVar1 = (long *)(*param_2 + ((long)uVar16 >> 1));
                lVar9 = param_2[2];
                if ((uVar16 & 1) != 0) {
                  pcVar12 = *(code **)(pcVar12 + *plVar1);
                }
                puVar15 = (uint *)(param_1[5] + (long)(int)param_1[6] * 0x18 + -0x14);
                local_1d8 = *param_1;
                uVar16 = (((ulong)*puVar15 & 0x3fffffff) + local_1d8) - 8;
                if (param_1[1] < uVar16) {
                  *param_1 = param_1[1];
                  *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
                }
                else {
                  *param_1 = uVar16;
                }
                local_1c0 = 0;
                lStack_1d0 = ((ulong)*puVar15 & 0x3fffffff) + local_1d8 + -8;
                local_1c8 = local_1d8;
                (*pcVar12)(plVar1,&local_1d8,lVar8,lVar9);
                iVar7 = *piVar17;
joined_r0x0338b568:
                if (-1 < iVar7) {
                  lVar8 = (long)(int)param_1[6] + -1;
                  lVar9 = param_1[5] + lVar8 * 0x18;
                  if (*param_1 - param_1[2] !=
                      *(long *)(lVar9 + 8) + ((ulong)*(uint *)(lVar9 + 4) & 0x3fffffff)) {
                    *(byte *)(param_1 + 3) = (byte)param_1[3] | 2;
                    iVar7 = *piVar17;
                    goto joined_r0x0338b834;
                  }
                  param_1[4] = *(ulong *)(param_1[5] + lVar8 * 0x18 + 0x10);
                  *(int *)(param_1 + 6) = (int)lVar8;
                }
              }
              iVar7 = *piVar17;
              goto joined_r0x0338b834;
            }
            break;
          }
          piVar14 = piVar11;
        } while (param_4 != piVar11);
      }
      local_1e0 = (undefined1)((uint)iVar7 >> 0x18);
      local_1df = (undefined1)((uint)iVar7 >> 0x10);
      local_1de = (undefined1)((uint)iVar7 >> 8);
      local_1dd = (undefined1)iVar7;
      local_1dc = 0;
      if (DAT_04450900 < 2) {
        if (DAT_04350668 != '\0') goto LAB_0338b8d4;
      }
      else if (DAT_04350668 == '\0') {
        FUN_03326994(&local_1d8,&DAT_044508b0,2);
        lVar8 = FUN_03326338(&local_1d8,"Unexpected section {}",PTR_DAT_04389018,&local_1e0);
        *(char **)(lVar8 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar8 + 0x40) = 0x538;
        FUN_033269dc(&local_1d8);
      }
      else {
LAB_0338b8d4:
        FUN_03326a7c(&local_1d8,&DAT_044508b0,2);
        lVar8 = FUN_03326338(&local_1d8,"Unexpected section {}",PTR_DAT_04389018,&local_1e0);
        *(char **)(lVar8 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar8 + 0x40) = 0x538;
        FUN_03326adc(&local_1d8);
      }
      *piVar17 = -0x7ffbfe00;
      iVar7 = *piVar17;
joined_r0x0338b834:
    } while (-1 < iVar7);
  }
  *(undefined4 *)(param_1 + 6) = 0;
LAB_0338b7d8:
  lVar8 = local_80;
  uVar3 = local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_88 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,local_88,uVar3 & 0x3fffffff);
  }
  return;
}


