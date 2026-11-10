/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f30b0; name: FUN_032f30b0
 */


undefined4 FUN_032f30b0(char *param_1,undefined8 param_2,undefined1 (*param_3) [16],long *param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  undefined *puVar10;
  int iVar11;
  char *pcVar12;
  undefined1 auVar13 [16];
  char *local_1d0;
  char *pcStack_1c8;
  char *local_198;
  undefined8 uStack_190;
  char *local_80;
  undefined8 uStack_78;
  undefined4 local_70 [4];
  
  *(char **)*param_3 = param_1;
  *(undefined8 *)(*param_3 + 8) = param_2;
  local_80 = param_1;
  uStack_78 = param_2;
  iVar3 = FUN_032c40ec(&local_80,0x3c,0);
  if (iVar3 == -1) {
    local_1d0 = *(char **)*param_3;
    if ((local_1d0 != *(char **)(*param_3 + 8)) &&
       (pcStack_1c8 = *(char **)(*param_3 + 8) + -1, *pcStack_1c8 == '*')) {
      auVar13 = FUN_032c3fa4(&local_1d0);
      iVar4 = (int)param_4[1];
      lVar6 = *param_4;
      iVar3 = iVar4 + 1;
      if ((int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff) <= iVar4) {
        lVar6 = FUN_032c4584(PTR_PTR_0434a090,iVar3);
        iVar4 = (int)param_4[1];
        *param_4 = lVar6;
      }
      *(undefined1 (*) [16])(lVar6 + (long)iVar4 * 0x10) = auVar13;
      *(int *)(param_4 + 1) = iVar3;
      *(undefined **)*param_3 = &DAT_0395cb67;
      *(undefined **)(*param_3 + 8) = &DAT_0395cb69;
    }
  }
  else {
    if (iVar3 == 0) {
      if ((1 < DAT_0444aaf8) || (uVar5 = FUN_03327170(), (uVar5 & 1) != 0)) {
        uVar5 = FUN_03327170();
        if ((uVar5 & 1) == 0) {
          FUN_03326994(&local_1d0,&DAT_0444aaa8,2);
          lVar6 = FUN_03326338(&local_1d0,"Invalid type name: \'{}\' (empty root)",PTR_DAT_043891c0,
                               &local_80);
          *(char **)(lVar6 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
          ;
          *(undefined8 *)(lVar6 + 0x40) = 0x139;
          FUN_033269dc(&local_1d0);
        }
        else {
          FUN_03326a7c(&local_1d0,&DAT_0444aaa8,2);
          lVar6 = FUN_03326338(&local_1d0,"Invalid type name: \'{}\' (empty root)",PTR_DAT_043891c0,
                               &local_80);
          *(char **)(lVar6 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
          ;
          *(undefined8 *)(lVar6 + 0x40) = 0x139;
          FUN_03326adc(&local_1d0);
        }
      }
      return 0x80040200;
    }
    lVar6 = (long)iVar3;
    pcStack_1c8 = local_80 + lVar6;
    local_1d0 = local_80;
    auVar13 = FUN_032c3fa4(&local_1d0);
    *param_3 = auVar13;
    iVar4 = FUN_032c4124(&local_80,0x3e);
    puVar10 = PTR_PTR_0434a090;
    local_70[0] = 0x80040257;
    if (iVar4 < iVar3) {
      if (DAT_0444aaf8 == 0) {
        return 0x80040257;
      }
      FUN_03326994(&local_1d0,&DAT_0444aaa8,1);
      local_198 = 
      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
      ;
      uStack_190 = 0x145;
      uVar7 = FUN_03326338(&local_1d0,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_0434d0d8,
                           "indexOfClose < indexOfOpen",local_70);
      pcVar8 = "Invalid type name: \'{}\' (invalid arguments)";
LAB_032f32a8:
      FUN_03326338(uVar7,pcVar8,PTR_DAT_043891c0,&local_80);
      FUN_033269dc(&local_1d0);
      return local_70[0];
    }
    pcVar1 = local_80 + iVar4;
    pcVar8 = local_80 + lVar6 + 2;
    pcVar12 = local_80 + lVar6 + 1;
    if (pcVar8 < pcVar1) {
      iVar3 = 0;
      lVar6 = (iVar4 - lVar6) + -2;
      do {
        cVar2 = *pcVar8;
        if (cVar2 == '>') {
          local_70[0] = 0x80040257;
          if (iVar3 < 1) {
            if (DAT_0444aaf8 == 0) {
              return 0x80040257;
            }
            FUN_03326994(&local_1d0,&DAT_0444aaa8,1);
            uStack_190 = 0x15c;
            pcVar8 = "bracketNesting <= 0";
            puVar10 = PTR_DAT_043890f0;
            goto LAB_032f347c;
          }
          iVar3 = iVar3 + -1;
        }
        else if (cVar2 == '<') {
          iVar3 = iVar3 + 1;
        }
        else if ((iVar3 == 0) && (cVar2 == ',')) {
          local_1d0 = pcVar12;
          pcStack_1c8 = pcVar8;
          auVar13 = FUN_032c3fa4(&local_1d0);
          iVar11 = (int)param_4[1];
          lVar9 = *param_4;
          iVar4 = iVar11 + 1;
          if ((int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff) <= iVar11) {
            lVar9 = FUN_032c4584(puVar10,iVar4,lVar9,iVar11,(long)param_4 + 0xc);
            iVar11 = (int)param_4[1];
            *param_4 = lVar9;
          }
          iVar3 = 0;
          *(undefined1 (*) [16])(lVar9 + (long)iVar11 * 0x10) = auVar13;
          pcVar12 = pcVar8 + 1;
          *(int *)(param_4 + 1) = iVar4;
        }
        pcVar8 = pcVar8 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      local_70[0] = 0x80040257;
      if (iVar3 != 0) {
        if (DAT_0444aaf8 == 0) {
          return 0x80040257;
        }
        FUN_03326994(&local_1d0,&DAT_0444aaa8,1);
        uStack_190 = 0x165;
        pcVar8 = "bracketNesting";
        puVar10 = &DAT_0434d178;
LAB_032f347c:
        local_198 = 
        "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
        ;
        uVar7 = FUN_03326338(&local_1d0,"HK_RETURN_RES_IF({}) returning {}. ",puVar10,pcVar8,
                             local_70);
        pcVar8 = "Invalid type name: {} (invalid brackets nesting)";
        goto LAB_032f32a8;
      }
    }
    local_70[0] = 0x80040257;
    if (pcVar12 < pcVar1) {
      local_1d0 = pcVar12;
      pcStack_1c8 = pcVar1;
      auVar13 = FUN_032c3fa4(&local_1d0);
      iVar4 = (int)param_4[1];
      lVar6 = *param_4;
      iVar3 = iVar4 + 1;
      if ((int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff) <= iVar4) {
        lVar6 = FUN_032c4584(PTR_PTR_0434a090,iVar3);
        iVar4 = (int)param_4[1];
        *param_4 = lVar6;
      }
      *(undefined1 (*) [16])(lVar6 + (long)iVar4 * 0x10) = auVar13;
      *(int *)(param_4 + 1) = iVar3;
    }
  }
  return 0;
}


