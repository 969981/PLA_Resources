/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e5780; name: FUN_032e5780
 */


void FUN_032e5780(long param_1,char param_2,byte *param_3,byte *param_4,undefined8 param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  undefined8 uVar8;
  long local_1a8;
  long local_1a0;
  undefined8 local_198 [42];
  ushort local_44 [2];
  
  bVar7 = 100;
  if (param_2 == '\0') {
    bVar7 = 0x75;
  }
  local_44[0] = 0x3f;
  if (param_3 == param_4) {
    local_44[0] = (ushort)bVar7;
  }
  else {
    bVar1 = *param_3;
    uVar2 = bVar1 - 0x44;
    if (uVar2 < 0x35) {
      if ((1L << ((ulong)uVar2 & 0x3f) & 0x2002100020021U) == 0) {
        if ((1L << ((ulong)uVar2 & 0x3f) & 0x10000000100000U) == 0) goto LAB_032e59b0;
        local_44[0] = (ushort)bVar1;
        if (param_2 == '\0') goto LAB_032e5800;
        if ((DAT_0444a640 != 0) || (uVar5 = FUN_03327170(), (uVar5 & 1) != 0)) {
          uVar5 = FUN_03327170();
          if ((uVar5 & 1) == 0) {
            FUN_03326994(local_198,&DAT_0444a5f0,1);
            local_1a0 = -param_1;
            lVar6 = FUN_03326338(local_198,
                                 "Cannot format negative integer \'{}\' with hexadecimal specifier \'{}\'. Falling back to decimal \'D\'."
                                 ,&DAT_0434bb70,&local_1a0,local_44);
            uVar8 = 0x8c;
            goto LAB_032e592c;
          }
          FUN_03326a7c(local_198,&DAT_0444a5f0,1);
          local_1a8 = -param_1;
          lVar6 = FUN_03326338(local_198,
                               "Cannot format negative integer \'{}\' with hexadecimal specifier \'{}\'. Falling back to decimal \'D\'."
                               ,&DAT_0434bb70,&local_1a8,local_44);
          uVar8 = 0x8c;
          goto LAB_032e5af0;
        }
        goto LAB_032e5938;
      }
      local_44[0] = (ushort)bVar7;
      if ((bVar1 | 0x20) != 100) {
        local_1a0 = CONCAT62(local_1a0._2_6_,0x20);
        local_1a0 = CONCAT71(local_1a0._1_7_,bVar1);
        if ((1 < DAT_0444a640) || (uVar5 = FUN_03327170(), (uVar5 & 1) != 0)) {
          uVar5 = FUN_03327170();
          if ((uVar5 & 1) == 0) {
            FUN_03326994(local_198,&DAT_0444a5f0,2);
            lVar6 = FUN_03326338(local_198,
                                 "Deprecated integer extra format specififer \'{}\'; use \'D\' (decimal) instead."
                                 ,&DAT_0434bad8,&local_1a0);
            *(char **)(lVar6 + 0x38) =
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Core/hkReflectVar.cpp"
            ;
            *(undefined8 *)(lVar6 + 0x40) = 0x84;
            FUN_033269dc(local_198);
          }
          else {
            FUN_03326a7c(local_198,&DAT_0444a5f0,2);
            lVar6 = FUN_03326338(local_198,
                                 "Deprecated integer extra format specififer \'{}\'; use \'D\' (decimal) instead."
                                 ,&DAT_0434bad8,&local_1a0);
            *(char **)(lVar6 + 0x38) =
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Core/hkReflectVar.cpp"
            ;
            *(undefined8 *)(lVar6 + 0x40) = 0x84;
            FUN_03326adc(local_198);
          }
        }
      }
    }
    else {
LAB_032e59b0:
      local_1a0 = CONCAT62(local_1a0._2_6_,0x20);
      local_1a0 = CONCAT71(local_1a0._1_7_,bVar1);
      if ((DAT_0444a640 != 0) || (uVar5 = FUN_03327170(), (uVar5 & 1) != 0)) {
        uVar5 = FUN_03327170();
        if ((uVar5 & 1) == 0) {
          FUN_03326994(local_198,&DAT_0444a5f0,1);
          lVar6 = FUN_03326338(local_198,
                               "Invalid integer extra format specififer \'{}\'. Expected a character among [DdXx] or the deprecated [IiUu]."
                               ,&DAT_0434bad8,&local_1a0);
          uVar8 = 0x94;
LAB_032e592c:
          *(char **)(lVar6 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Core/hkReflectVar.cpp"
          ;
          *(undefined8 *)(lVar6 + 0x40) = uVar8;
          FUN_033269dc(local_198);
        }
        else {
          FUN_03326a7c(local_198,&DAT_0444a5f0,1);
          lVar6 = FUN_03326338(local_198,
                               "Invalid integer extra format specififer \'{}\'. Expected a character among [DdXx] or the deprecated [IiUu]."
                               ,&DAT_0434bad8,&local_1a0);
          uVar8 = 0x94;
LAB_032e5af0:
          *(char **)(lVar6 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Core/hkReflectVar.cpp"
          ;
          *(undefined8 *)(lVar6 + 0x40) = uVar8;
          FUN_03326adc(local_198);
        }
      }
LAB_032e5938:
      local_44[0] = CONCAT11(local_44[0]._1_1_,bVar7);
    }
LAB_032e5800:
    iVar4 = (int)param_4 - (int)param_3;
    iVar3 = iVar4 + -1;
    if (iVar3 != 0 && 0 < iVar4) {
      FUN_032c4de0(local_198,param_3 + 1,iVar3);
      iVar4 = FUN_032c4920(local_198[0],10);
      FUN_032c4ce8(local_198);
      FUN_032c4d7c(param_5,&DAT_039b957d,0xffffffff);
      if (0 < iVar4) {
        FUN_032c5500(param_5,&DAT_039c28cd,iVar4);
      }
      goto LAB_032e587c;
    }
  }
  FUN_032c4d7c(param_5,&DAT_039b957d,0xffffffff);
LAB_032e587c:
  FUN_032c55f0(param_5,&DAT_039b8fc8);
  FUN_032c55f0(param_5,local_44);
  return;
}


