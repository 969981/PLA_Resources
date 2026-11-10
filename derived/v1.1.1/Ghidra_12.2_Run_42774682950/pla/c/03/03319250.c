/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03319250; name: FUN_03319250
 */


undefined4 FUN_03319250(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  int local_1dc;
  undefined8 local_1d8;
  undefined1 auStack_1d0 [336];
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined4 local_70 [4];
  
  local_78[0] = 0;
  lVar3 = FUN_032e21f4(param_2);
  if (lVar3 == 0) {
    local_70[0] = 0;
  }
  else {
    uVar2 = *(ushort *)(lVar3 + 8);
    if (uVar2 < 0x100) {
      local_70[0] = 0;
      local_1dc = 0;
      if (uVar2 != 0) {
        do {
          plVar1 = (long *)(lVar3 + 0x10 + (long)local_1dc * 0x10);
          if (*(char *)plVar1[1] == 't') {
            if (*plVar1 == 0) {
              FUN_03319240(local_78);
              lVar6 = *(long *)(*param_1 + 0x28);
              if ((lVar6 != 0) &&
                 ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar6 + 0x50) ||
                  (uVar4 = FUN_03327170(), (uVar4 & 1) != 0)))) {
                uVar4 = FUN_03327170();
                if ((uVar4 & 1) == 0) {
                  FUN_03326994(auStack_1d0,*(undefined8 *)(*param_1 + 0x28),
                               *(undefined1 *)(*param_1 + 0x30));
                  local_80 = FUN_032e239c(param_2);
                  lVar6 = FUN_03326338(auStack_1d0,
                                       "Template type \'{}\' has invalid NULL template type parameter #{}."
                                       ,&DAT_0434f9c0,&local_80,&local_1dc);
                  *(char **)(lVar6 + 0x38) =
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  *(undefined8 *)(lVar6 + 0x40) = 0x415;
                  FUN_033269dc(auStack_1d0);
                }
                else {
                  FUN_03326a7c(auStack_1d0,*(undefined8 *)(*param_1 + 0x28),
                               *(undefined1 *)(*param_1 + 0x30));
                  local_1d8 = FUN_032e239c(param_2);
                  lVar6 = FUN_03326338(auStack_1d0,
                                       "Template type \'{}\' has invalid NULL template type parameter #{}."
                                       ,&DAT_0434f9c0,&local_1d8,&local_1dc);
                  *(char **)(lVar6 + 0x38) =
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  *(undefined8 *)(lVar6 + 0x40) = 0x415;
                  FUN_03326adc(auStack_1d0);
                }
              }
              pcVar5 = (char *)*param_1;
              if (*pcVar5 != '\0') break;
            }
            else {
              pcVar5 = (char *)*param_1;
            }
            if ((*(code **)(pcVar5 + 0x10) != (code *)0x0) &&
               (uVar4 = (**(code **)(pcVar5 + 0x10))(*plVar1,*(undefined8 *)(pcVar5 + 0x18)),
               (uVar4 & 1) == 0)) {
              FUN_03319240(local_78);
              lVar6 = *(long *)(*param_1 + 0x28);
              if ((lVar6 != 0) &&
                 ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar6 + 0x50) ||
                  (uVar4 = FUN_03327170(), (uVar4 & 1) != 0)))) {
                uVar4 = FUN_03327170();
                if ((uVar4 & 1) == 0) {
                  FUN_03326994(auStack_1d0,*(undefined8 *)(*param_1 + 0x28),
                               *(undefined1 *)(*param_1 + 0x30));
                  local_80 = FUN_032e239c(param_2);
                  lVar6 = FUN_03326338(auStack_1d0,
                                       "Template type \'{}\' has unreachable template type parameter #{}."
                                       ,&DAT_0434f9c0,&local_80,&local_1dc);
                  *(char **)(lVar6 + 0x38) =
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  *(undefined8 *)(lVar6 + 0x40) = 0x416;
                  FUN_033269dc(auStack_1d0);
                }
                else {
                  FUN_03326a7c(auStack_1d0,*(undefined8 *)(*param_1 + 0x28),
                               *(undefined1 *)(*param_1 + 0x30));
                  local_1d8 = FUN_032e239c(param_2);
                  lVar6 = FUN_03326338(auStack_1d0,
                                       "Template type \'{}\' has unreachable template type parameter #{}."
                                       ,&DAT_0434f9c0,&local_1d8,&local_1dc);
                  *(char **)(lVar6 + 0x38) =
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  *(undefined8 *)(lVar6 + 0x40) = 0x416;
                  FUN_03326adc(auStack_1d0);
                }
              }
              if (*(char *)*param_1 != '\0') break;
            }
          }
          local_1dc = local_1dc + 1;
        } while (local_1dc < (int)(uint)uVar2);
        local_70[0] = local_78[0];
      }
    }
    else {
      lVar3 = *(long *)(*param_1 + 0x28);
      if ((lVar3 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar3 + 0x50) ||
          (uVar4 = FUN_03327170(), (uVar4 & 1) != 0)))) {
        uVar4 = FUN_03327170();
        if ((uVar4 & 1) == 0) {
          FUN_03326994(auStack_1d0,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30)
                      );
          local_80 = FUN_032e239c(param_2);
          lVar3 = FUN_03326338(auStack_1d0,
                               "Template type \'{}\' has invalid number of template parameters greater than 255."
                               ,&DAT_0411bac8,&local_80);
          *(undefined4 *)(lVar3 + 0x1c) = 0;
          *(char **)(lVar3 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar3 + 0x40) = 0x40f;
          FUN_033269dc(auStack_1d0);
        }
        else {
          FUN_03326a7c(auStack_1d0,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30)
                      );
          local_1d8 = FUN_032e239c(param_2);
          lVar3 = FUN_03326338(auStack_1d0,
                               "Template type \'{}\' has invalid number of template parameters greater than 255."
                               ,&DAT_0411bac8,&local_1d8);
          *(undefined4 *)(lVar3 + 0x1c) = 0;
          *(char **)(lVar3 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar3 + 0x40) = 0x40f;
          FUN_03326adc(auStack_1d0);
        }
      }
      local_70[0] = 0;
      FUN_03319240(local_70);
    }
  }
  return local_70[0];
}


