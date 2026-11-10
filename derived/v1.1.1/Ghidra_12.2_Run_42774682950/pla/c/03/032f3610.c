/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f3610; name: FUN_032f3610
 */


undefined4
FUN_032f3610(ulong *param_1,long param_2,long param_3,int *param_4,undefined8 param_5,
            undefined8 param_6)

{
  long *plVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  int local_294;
  undefined1 *local_290;
  undefined8 local_288;
  undefined1 auStack_280 [128];
  undefined8 local_200;
  undefined8 uStack_1f8;
  byte *local_1f0;
  byte *pbStack_1e8;
  uint local_1dc;
  undefined8 local_1d8 [7];
  char *local_1a0;
  undefined8 uStack_198;
  ulong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70 [4];
  
  puVar4 = PTR_PTR_0434a090;
  puVar6 = param_1;
  do {
    uVar11 = (uint)*puVar6;
    if ((uVar11 >> 0xf & 1) != 0) {
      uVar11 = (uVar11 & 0x7fff) - (uVar11 >> 1 & 0x1555);
      uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
      uVar13 = puVar6[(ulong)((uVar11 + (uVar11 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
      goto joined_r0x032f3768;
    }
  } while (((*puVar6 & 9) == 0) && (puVar6 = (ulong *)puVar6[1], puVar6 != (ulong *)0x0));
  uVar13 = 0;
joined_r0x032f3768:
  local_88 = param_1;
  uStack_80 = param_5;
  local_78 = param_6;
  if (param_2 == param_3) {
    if (uVar13 == 0) {
LAB_032f3b00:
      *param_4 = 0;
      return 0;
    }
    if ((DAT_0444aaf8 < 4) && (uVar13 = FUN_03327170(), (uVar13 & 1) == 0)) {
      return 0x80040257;
    }
    uVar13 = FUN_03327170();
    if ((uVar13 & 1) != 0) {
      FUN_03326a7c(local_1d8,&DAT_0444aaa8,4);
      local_1f0 = (byte *)FUN_032e239c(local_88);
      lVar8 = FUN_03326338(local_1d8,
                           "Cannot lookup generic template type \'{}\' by root name alone, need to specify a specialization with arguments."
                           ,&DAT_0411bac8,&local_1f0);
      uVar7 = 0x182;
LAB_032f389c:
      *(char **)(lVar8 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
      ;
      *(undefined8 *)(lVar8 + 0x40) = uVar7;
      FUN_03326adc(local_1d8);
      return 0x80040257;
    }
    FUN_03326994(local_1d8,&DAT_0444aaa8,4);
    local_290 = (undefined1 *)FUN_032e239c(local_88);
    lVar8 = FUN_03326338(local_1d8,
                         "Cannot lookup generic template type \'{}\' by root name alone, need to specify a specialization with arguments."
                         ,&DAT_0411bac8,&local_290);
    uVar7 = 0x182;
  }
  else {
    if (uVar13 != 0) {
      uVar11 = (uint)*(ulong *)(uVar13 + 8) & 0xffff;
      uVar12 = (uint)((ulong)(param_3 - param_2) >> 4);
      if (uVar11 != uVar12) {
        iVar5 = 1;
        if ((int)uVar11 < (int)uVar12) {
          iVar5 = -1;
        }
        *param_4 = iVar5;
        return 0;
      }
      local_1dc = 0;
      if ((*(ulong *)(uVar13 + 8) & 0xffff) != 0) {
        uVar10 = 0;
        uVar2 = 0x80040257;
        do {
          uVar10 = -(uVar10 >> 0x1f) & 0xfffffff000000000 | uVar10 << 4;
          plVar1 = (long *)(param_2 + uVar10);
          local_1f0 = (byte *)*plVar1;
          pbStack_1e8 = (byte *)plVar1[1];
          local_70[0] = 0x80040257;
          if (local_1f0 == pbStack_1e8) {
            if (DAT_0444aaf8 == 0) {
              return 0x80040257;
            }
            FUN_03326994(local_1d8,&DAT_0444aaa8,1);
            local_1a0 = 
            "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
            ;
            uStack_198 = 0x1a8;
            uVar7 = FUN_03326338(local_1d8,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_04389258,
                                 "argumentName.isEmpty()",local_70);
            FUN_03326338(uVar7,"Invalid empty name for template argument #{}",&DAT_0411b3b8,
                         &local_1dc);
            FUN_033269dc(local_1d8);
            return local_70[0];
          }
          puVar6 = (ulong *)(uVar13 + 0x10 + uVar10);
          if (9 < *local_1f0 - 0x30 != (*(char *)puVar6[1] == 't')) {
            iVar5 = -1;
            if (9 < (*local_1f0 - 0x30 & 0xff)) {
              iVar5 = 1;
            }
            *param_4 = iVar5;
            return 0;
          }
          if (*(char *)puVar6[1] == 't') {
            local_200 = 0;
            uStack_1f8 = 0;
            local_288 = -0x7ffffff800000000;
            local_290 = auStack_280;
            iVar5 = FUN_032f30b0(local_1f0,pbStack_1e8,&local_200,&local_290);
            if (iVar5 < 0) {
              if ((3 < DAT_0444aaf8) || (uVar10 = FUN_03327170(), (uVar10 & 1) != 0)) {
                uVar10 = FUN_03327170();
                if ((uVar10 & 1) != 0) {
                  FUN_03326a7c(local_1d8,&DAT_0444aaa8,4);
                  lVar8 = FUN_03326338(local_1d8,
                                       "Failed to parse invalid type name \'{}\' for template argument #{}."
                                       ,&DAT_0434d2d0,&local_1f0,&local_1dc);
                  *(char **)(lVar8 + 0x38) =
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
                  ;
                  *(undefined8 *)(lVar8 + 0x40) = 0x1ba;
                  FUN_03326adc(local_1d8);
                  local_70[0] = 0x80040257;
                  goto LAB_032f3964;
                }
                FUN_03326994(local_1d8,&DAT_0444aaa8,4);
                lVar8 = FUN_03326338(local_1d8,
                                     "Failed to parse invalid type name \'{}\' for template argument #{}."
                                     ,&DAT_0434d2d0,&local_1f0,&local_1dc);
                *(char **)(lVar8 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
                ;
                *(undefined8 *)(lVar8 + 0x40) = 0x1ba;
                FUN_033269dc(local_1d8);
              }
              local_70[0] = 0x80040257;
LAB_032f3964:
              bVar3 = true;
            }
            else {
              uVar10 = *puVar6;
              uVar7 = FUN_032e239c(uVar10);
              iVar5 = FUN_032c4150(&local_200,uVar7);
              if (iVar5 != 0) {
                *param_4 = -iVar5;
                local_70[0] = 0;
                goto LAB_032f3964;
              }
              iVar5 = FUN_032f3610(uVar10,local_290,local_290 + (long)(int)local_288 * 0x10,
                                   &local_294,local_1f0,pbStack_1e8);
              if (iVar5 < 0) {
                uVar9 = uVar2;
                if ((3 < DAT_0444aaf8) || (uVar10 = FUN_03327170(), (uVar10 & 1) != 0)) {
                  uVar10 = FUN_03327170();
                  if ((uVar10 & 1) == 0) {
                    FUN_03326994(local_1d8,&DAT_0444aaa8,4);
                    lVar8 = FUN_03326338(local_1d8,
                                         "Failed to parse template arguments of invalid type name \'{}\' for registry lookup."
                                         ,PTR_DAT_043891c0,&local_1f0);
                    *(char **)(lVar8 + 0x38) =
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
                    ;
                    *(undefined8 *)(lVar8 + 0x40) = 0x1cd;
                    FUN_033269dc(local_1d8);
                  }
                  else {
                    FUN_03326a7c(local_1d8,&DAT_0444aaa8,4);
                    lVar8 = FUN_03326338(local_1d8,
                                         "Failed to parse template arguments of invalid type name \'{}\' for registry lookup."
                                         ,PTR_DAT_043891c0,&local_1f0);
                    *(char **)(lVar8 + 0x38) =
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
                    ;
                    *(undefined8 *)(lVar8 + 0x40) = 0x1cd;
                    FUN_03326adc(local_1d8);
                  }
                }
LAB_032f3a64:
                local_70[0] = uVar9;
                goto LAB_032f3964;
              }
              if (local_294 != 0) {
                *param_4 = local_294;
                uVar9 = 0;
                goto LAB_032f3a64;
              }
              bVar3 = false;
            }
            lVar8 = local_288;
            uVar10 = (ulong)local_288._4_4_;
            local_288 = (ulong)local_288._4_4_ << 0x20;
            if ((-1 < lVar8) && (local_290 != (undefined1 *)0x0)) {
              (**(code **)(*(long *)puVar4 + 0x18))(puVar4,local_290,(uVar10 & 0x3fffffff) << 4);
            }
            if (bVar3) {
              return local_70[0];
            }
          }
          else {
            uVar14 = *puVar6;
            FUN_032c4e24(local_1d8,&local_1f0);
            uVar10 = FUN_032c4950(local_1d8[0],0);
            if (uVar10 != uVar14) {
              iVar5 = 1;
              if (uVar14 < uVar10) {
                iVar5 = -1;
              }
              *param_4 = iVar5;
              local_70[0] = 0;
              FUN_032c4ce8(local_1d8);
              return local_70[0];
            }
            FUN_032c4ce8(local_1d8);
          }
          local_1dc = local_1dc + 1;
          uVar10 = (ulong)local_1dc;
        } while ((int)local_1dc < (int)(uint)*(ushort *)(uVar13 + 8));
      }
      goto LAB_032f3b00;
    }
    if ((DAT_0444aaf8 < 4) && (uVar13 = FUN_03327170(), (uVar13 & 1) == 0)) {
      return 0x80040257;
    }
    uVar13 = FUN_03327170();
    if ((uVar13 & 1) != 0) {
      FUN_03326a7c(local_1d8,&DAT_0444aaa8,4);
      lVar8 = FUN_03326338(local_1d8,
                           "Type \'{}\' is not a template type, cannot lookup invalid type name \'{}\'."
                           ,&DAT_0434d218,&local_88,&uStack_80);
      uVar7 = 0x18d;
      goto LAB_032f389c;
    }
    FUN_03326994(local_1d8,&DAT_0444aaa8,4);
    lVar8 = FUN_03326338(local_1d8,
                         "Type \'{}\' is not a template type, cannot lookup invalid type name \'{}\'."
                         ,&DAT_0434d218,&local_88,&uStack_80);
    uVar7 = 0x18d;
  }
  *(char **)(lVar8 + 0x38) =
       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
  ;
  *(undefined8 *)(lVar8 + 0x40) = uVar7;
  FUN_033269dc(local_1d8);
  return 0x80040257;
}


