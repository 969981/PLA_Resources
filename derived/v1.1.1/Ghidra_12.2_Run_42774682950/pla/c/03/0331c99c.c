/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331c99c; name: FUN_0331c99c
 */


undefined4 FUN_0331c99c(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  char *local_1d0;
  undefined1 auStack_1c8 [336];
  long local_78;
  undefined4 local_70 [4];
  
  local_70[0] = 0;
  auVar4 = FUN_032e31d4(param_2);
  plVar3 = auVar4._0_8_;
  if (plVar3 != auVar4._8_8_) {
    do {
      local_78 = *plVar3;
      if (*(long *)(local_78 + 8) == 0) {
        FUN_03319240(local_70);
        lVar1 = *(long *)(*param_1 + 0x28);
        if ((lVar1 != 0) &&
           ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar1 + 0x50) ||
            (uVar2 = FUN_03327170(), (uVar2 & 1) != 0)))) {
          uVar2 = FUN_03327170();
          if ((uVar2 & 1) == 0) {
            FUN_03326994(auStack_1c8,*(undefined8 *)(*param_1 + 0x28),
                         *(undefined1 *)(*param_1 + 0x30));
            lVar1 = FUN_03326338(auStack_1c8,"Record type \'{}\' has a field with no parent.",
                                 &DAT_0434fa00,param_2);
            *(char **)(lVar1 + 0x38) =
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            *(undefined8 *)(lVar1 + 0x40) = 0x207;
            FUN_033269dc(auStack_1c8);
          }
          else {
            FUN_03326a7c(auStack_1c8,*(undefined8 *)(*param_1 + 0x28),
                         *(undefined1 *)(*param_1 + 0x30));
            lVar1 = FUN_03326338(auStack_1c8,"Record type \'{}\' has a field with no parent.",
                                 &DAT_0434fa00,param_2);
            *(char **)(lVar1 + 0x38) =
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            *(undefined8 *)(lVar1 + 0x40) = 0x207;
            FUN_03326adc(auStack_1c8);
          }
        }
        if (*(char *)*param_1 != '\0') {
          return local_70[0];
        }
      }
      local_1d0 = (char *)FUN_032e2c18(&local_78);
      if (local_1d0 == (char *)0x0) {
        FUN_03319240(local_70);
        lVar1 = *(long *)(*param_1 + 0x28);
        if ((lVar1 != 0) &&
           ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar1 + 0x50) ||
            (uVar2 = FUN_03327170(), (uVar2 & 1) != 0)))) {
          uVar2 = FUN_03327170();
          if ((uVar2 & 1) == 0) {
            FUN_03326994(auStack_1c8,*(undefined8 *)(*param_1 + 0x28),
                         *(undefined1 *)(*param_1 + 0x30));
            lVar1 = FUN_03326338(auStack_1c8,"Record type \'{}\' has a field with no name.",
                                 &DAT_0434fa00,param_2);
            *(char **)(lVar1 + 0x38) =
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            *(undefined8 *)(lVar1 + 0x40) = 0x20b;
            FUN_033269dc(auStack_1c8);
          }
          else {
            FUN_03326a7c(auStack_1c8,*(undefined8 *)(*param_1 + 0x28),
                         *(undefined1 *)(*param_1 + 0x30));
            lVar1 = FUN_03326338(auStack_1c8,"Record type \'{}\' has a field with no name.",
                                 &DAT_0434fa00,param_2);
            *(char **)(lVar1 + 0x38) =
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            *(undefined8 *)(lVar1 + 0x40) = 0x20b;
            FUN_03326adc(auStack_1c8);
          }
        }
        if (*(char *)*param_1 != '\0') {
          return local_70[0];
        }
        if (local_1d0 != (char *)0x0) goto LAB_0331ca50;
      }
      else {
LAB_0331ca50:
        if (*local_1d0 == '\0') {
          FUN_03319240(local_70);
          lVar1 = *(long *)(*param_1 + 0x28);
          if ((lVar1 != 0) &&
             ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar1 + 0x50) ||
              (uVar2 = FUN_03327170(), (uVar2 & 1) != 0)))) {
            uVar2 = FUN_03327170();
            if ((uVar2 & 1) == 0) {
              FUN_03326994(auStack_1c8,*(undefined8 *)(*param_1 + 0x28),
                           *(undefined1 *)(*param_1 + 0x30));
              lVar1 = FUN_03326338(auStack_1c8,"Record type \'{}\' has a field with an empty name.",
                                   &DAT_0434fa00,param_2);
              *(char **)(lVar1 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              *(undefined8 *)(lVar1 + 0x40) = 0x20e;
              FUN_033269dc(auStack_1c8);
            }
            else {
              FUN_03326a7c(auStack_1c8,*(undefined8 *)(*param_1 + 0x28),
                           *(undefined1 *)(*param_1 + 0x30));
              lVar1 = FUN_03326338(auStack_1c8,"Record type \'{}\' has a field with an empty name.",
                                   &DAT_0434fa00,param_2);
              *(char **)(lVar1 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              *(undefined8 *)(lVar1 + 0x40) = 0x20e;
              FUN_03326adc(auStack_1c8);
            }
          }
          if (*(char *)*param_1 != '\0') {
            return local_70[0];
          }
        }
      }
      if ((local_78 == 0) || (lVar1 = FUN_032e2530(), lVar1 != param_2)) {
        FUN_03319240(local_70);
        lVar1 = *(long *)(*param_1 + 0x28);
        if ((lVar1 != 0) &&
           ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar1 + 0x50) ||
            (uVar2 = FUN_03327170(), (uVar2 & 1) != 0)))) {
          uVar2 = FUN_03327170();
          if ((uVar2 & 1) == 0) {
            FUN_03326994(auStack_1c8,*(undefined8 *)(*param_1 + 0x28),
                         *(undefined1 *)(*param_1 + 0x30));
            lVar1 = FUN_03326338(auStack_1c8,
                                 "Record type \'{}\' has field \'{}\' with DECL context missing or pointing to another type."
                                 ,&DAT_0434fa70,param_2,&local_1d0);
            *(char **)(lVar1 + 0x38) =
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            *(undefined8 *)(lVar1 + 0x40) = 0x213;
            FUN_033269dc(auStack_1c8);
          }
          else {
            FUN_03326a7c(auStack_1c8,*(undefined8 *)(*param_1 + 0x28),
                         *(undefined1 *)(*param_1 + 0x30));
            lVar1 = FUN_03326338(auStack_1c8,
                                 "Record type \'{}\' has field \'{}\' with DECL context missing or pointing to another type."
                                 ,&DAT_0434fa70,param_2,&local_1d0);
            *(char **)(lVar1 + 0x38) =
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            *(undefined8 *)(lVar1 + 0x40) = 0x213;
            FUN_03326adc(auStack_1c8);
          }
        }
        if (*(char *)*param_1 != '\0') {
          return local_70[0];
        }
      }
      plVar3 = plVar3 + 1;
    } while (auVar4._8_8_ != plVar3);
  }
  return local_70[0];
}


