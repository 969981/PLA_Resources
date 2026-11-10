/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033851a0; name: FUN_033851a0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_033851a0(long param_1,int *param_2,int *param_3,int *param_4)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  int *piVar9;
  code *pcVar10;
  undefined8 uVar11;
  int *piVar12;
  undefined1 local_1e0;
  undefined1 local_1df;
  undefined1 local_1de;
  undefined1 local_1dd;
  undefined1 local_1dc;
  undefined1 auStack_1d8 [336];
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  puVar5 = PTR_PTR_0434a090;
  local_80 = -0x7ffffff000000000;
  uVar4 = (int)((ulong)((long)param_4 - (long)param_3) >> 4) * -0x55555555;
  local_88 = auStack_78;
  if ((int)uVar4 < 0x11) {
    local_80._0_4_ = 0;
  }
  else {
    if ((int)uVar4 < 0x40000000) {
      uVar8 = 0x20;
    }
    else {
      FUN_032bd0a8(uVar4);
      uVar8 = (local_80._4_4_ & 0x3fffffff) * 2;
      if (0x3ffffffe < uVar8) {
        uVar8 = 0x3fffffff;
      }
    }
    uVar2 = uVar4;
    if ((int)uVar4 <= (int)uVar8) {
      uVar2 = uVar8;
    }
    local_88 = (undefined1 *)FUN_032bd1d4(puVar5,uVar2,1,auStack_78,0,(long)&local_80 + 4);
  }
  if ((int)(uint)local_80 < (int)uVar4) {
    lVar7 = (long)(int)(uint)local_80;
    uVar8 = ~(uint)local_80;
    local_80 = CONCAT44(local_80._4_4_,uVar4);
    memset(local_88 + lVar7,0,(ulong)(uVar8 + uVar4) + 1);
  }
  else if ((int)uVar4 < (int)(uint)local_80) {
    local_80 = CONCAT44(local_80._4_4_,uVar4);
    iVar6 = *param_2;
    goto joined_r0x033852cc;
  }
  iVar6 = *param_2;
joined_r0x033852cc:
  do {
    if (iVar6 < 0) {
LAB_03385494:
      *(undefined4 *)(param_1 + 0x18) = 0;
LAB_03385498:
      lVar7 = local_80;
      uVar4 = local_80._4_4_;
      local_80 = (ulong)local_80._4_4_ << 0x20;
      if ((-1 < lVar7) && (local_88 != (undefined1 *)0x0)) {
        (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_88,uVar4 & 0x3fffffff);
      }
      return;
    }
    iVar6 = FUN_0338e3bc(param_1,0);
    if (iVar6 == 0) goto LAB_03385498;
    if (iVar6 == 1) {
      if (DAT_04450900 < 2) {
        if (DAT_04350668 != '\0') goto LAB_0338557c;
      }
      else if (DAT_04350668 == '\0') {
        FUN_03326994(auStack_1d8,&DAT_044508b0,2);
        lVar7 = FUN_03326338(auStack_1d8,"IO error",PTR_DAT_04372528);
        uVar11 = 0x50e;
LAB_0338547c:
        *(char **)(lVar7 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar7 + 0x40) = uVar11;
        FUN_033269dc(auStack_1d8);
      }
      else {
LAB_0338557c:
        FUN_03326a7c(auStack_1d8,&DAT_044508b0,2);
        lVar7 = FUN_03326338(auStack_1d8,"IO error",PTR_DAT_04372528);
        uVar11 = 0x50e;
LAB_03385560:
        *(char **)(lVar7 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar7 + 0x40) = uVar11;
        FUN_03326adc(auStack_1d8);
      }
LAB_03385490:
      *param_2 = -0x7ffbfe00;
      goto LAB_03385494;
    }
    if (param_3 != param_4) {
      piVar12 = param_3;
      do {
        piVar9 = piVar12 + 0xc;
        if (*piVar12 == iVar6) {
          if (piVar12 != (int *)0x0) {
            iVar6 = (int)((ulong)((long)piVar12 - (long)param_3) >> 4) * -0x55555555;
            if (local_88[iVar6] != '\0') {
              if (DAT_04450900 < 2) {
                if (DAT_04350668 == '\0') goto LAB_03385490;
              }
              else if (DAT_04350668 == '\0') {
                FUN_03326994(auStack_1d8,&DAT_044508b0,2);
                lVar7 = FUN_03326338(auStack_1d8,"Duplicate section",PTR_DAT_04372528);
                uVar11 = 0x531;
                goto LAB_0338547c;
              }
              FUN_03326a7c(auStack_1d8,&DAT_044508b0,2);
              lVar7 = FUN_03326338(auStack_1d8,"Duplicate section",PTR_DAT_04372528);
              uVar11 = 0x531;
              goto LAB_03385560;
            }
            local_88[iVar6] = 1;
            pcVar10 = *(code **)(piVar12 + 2);
            uVar3 = *(ulong *)(piVar12 + 4);
            if ((pcVar10 == (code *)0x0) && (uVar3 == 0 || (uVar3 & 1) == 0)) {
              iVar6 = FUN_0338e71c(param_1);
              *param_2 = iVar6;
            }
            else {
              plVar1 = (long *)((long)param_2 + ((long)uVar3 >> 1));
              if ((uVar3 & 1) != 0) {
                pcVar10 = *(code **)(pcVar10 + *plVar1);
              }
              (*pcVar10)(plVar1,param_1);
              iVar6 = *param_2;
            }
            if (iVar6 < 0) goto LAB_033852dc;
            FUN_0338e78c(param_1);
            iVar6 = *param_2;
            goto joined_r0x033852cc;
          }
          break;
        }
        piVar12 = piVar9;
      } while (param_4 != piVar9);
    }
    local_1e0 = (undefined1)((uint)iVar6 >> 0x18);
    local_1df = (undefined1)((uint)iVar6 >> 0x10);
    local_1de = (undefined1)((uint)iVar6 >> 8);
    local_1dd = (undefined1)iVar6;
    local_1dc = 0;
    if (DAT_04450900 < 2) {
      if (DAT_04350668 != '\0') goto LAB_033855b0;
    }
    else if (DAT_04350668 == '\0') {
      FUN_03326994(auStack_1d8,&DAT_044508b0,2);
      lVar7 = FUN_03326338(auStack_1d8,"Unexpected section {}",PTR_DAT_04389018,&local_1e0);
      *(char **)(lVar7 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar7 + 0x40) = 0x538;
      FUN_033269dc(auStack_1d8);
    }
    else {
LAB_033855b0:
      FUN_03326a7c(auStack_1d8,&DAT_044508b0,2);
      lVar7 = FUN_03326338(auStack_1d8,"Unexpected section {}",PTR_DAT_04389018,&local_1e0);
      *(char **)(lVar7 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar7 + 0x40) = 0x538;
      FUN_03326adc(auStack_1d8);
    }
    *param_2 = -0x7ffbfe00;
LAB_033852dc:
    iVar6 = *param_2;
  } while( true );
}


