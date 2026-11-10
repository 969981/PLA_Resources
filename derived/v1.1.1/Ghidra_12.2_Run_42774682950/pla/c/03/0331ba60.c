/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331ba60; name: FUN_0331ba60
 */


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0331ba60(long *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong *local_1a0;
  ulong *local_198;
  undefined1 auStack_190 [336];
  undefined4 local_38 [2];
  
  local_38[0] = 0;
  uVar1 = (uint)*param_2;
  if ((*param_2 & 1) == 0) {
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_03319240(local_38);
      lVar7 = *(long *)(*param_1 + 0x28);
      if ((lVar7 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
          (uVar2 = FUN_03327170(), (uVar2 & 1) != 0)))) {
        uVar2 = FUN_03327170();
        if ((uVar2 & 1) == 0) {
          FUN_03326994(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30)
                      );
          lVar7 = FUN_03326338(auStack_190,"Decorator type \'{}\' has local Opt::SUBTYPE.",
                               &DAT_0434fa00,param_2);
          *(char **)(lVar7 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar7 + 0x40) = 0x1b3;
          FUN_033269dc(auStack_190);
        }
        else {
          FUN_03326a7c(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30)
                      );
          lVar7 = FUN_03326338(auStack_190,"Decorator type \'{}\' has local Opt::SUBTYPE.",
                               &DAT_0434fa00,param_2);
          *(char **)(lVar7 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar7 + 0x40) = 0x1b3;
          FUN_03326adc(auStack_190);
        }
      }
      if (*(char *)*param_1 != '\0') {
        return local_38[0];
      }
      uVar1 = (uint)*param_2;
    }
    if ((uVar1 >> 10 & 1) != 0) {
      FUN_03319240(local_38);
      lVar7 = *(long *)(*param_1 + 0x28);
      if ((lVar7 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
          (uVar2 = FUN_03327170(), (uVar2 & 1) != 0)))) {
        uVar2 = FUN_03327170();
        if ((uVar2 & 1) == 0) {
          FUN_03326994(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30)
                      );
          lVar7 = FUN_03326338(auStack_190,"Decorator type \'{}\' has local Opt::FUNCTIONS.",
                               &DAT_0434fa00,param_2);
          *(char **)(lVar7 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar7 + 0x40) = 0x1b4;
          FUN_033269dc(auStack_190);
        }
        else {
          FUN_03326a7c(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30)
                      );
          lVar7 = FUN_03326338(auStack_190,"Decorator type \'{}\' has local Opt::FUNCTIONS.",
                               &DAT_0434fa00,param_2);
          *(char **)(lVar7 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar7 + 0x40) = 0x1b4;
          FUN_03326adc(auStack_190);
        }
      }
      if (*(char *)*param_1 != '\0') {
        return local_38[0];
      }
      uVar1 = (uint)*param_2;
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      FUN_03319240(local_38);
      lVar7 = *(long *)(*param_1 + 0x28);
      if ((lVar7 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
          (uVar2 = FUN_03327170(), (uVar2 & 1) != 0)))) {
        uVar2 = FUN_03327170();
        if ((uVar2 & 1) == 0) {
          FUN_03326994(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30)
                      );
          lVar7 = FUN_03326338(auStack_190,"Decorator type \'{}\' has local Opt::INTERFACES.",
                               &DAT_0434fa00,param_2);
          *(char **)(lVar7 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar7 + 0x40) = 0x1b5;
          FUN_033269dc(auStack_190);
        }
        else {
          FUN_03326a7c(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30)
                      );
          lVar7 = FUN_03326338(auStack_190,"Decorator type \'{}\' has local Opt::INTERFACES.",
                               &DAT_0434fa00,param_2);
          *(char **)(lVar7 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar7 + 0x40) = 0x1b5;
          FUN_03326adc(auStack_190);
        }
      }
      if (*(char *)*param_1 != '\0') {
        return local_38[0];
      }
      uVar1 = (uint)*param_2;
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      FUN_03319240(local_38);
      lVar7 = *(long *)(*param_1 + 0x28);
      if ((lVar7 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
          (uVar2 = FUN_03327170(), (uVar2 & 1) != 0)))) {
        uVar2 = FUN_03327170();
        if ((uVar2 & 1) == 0) {
          FUN_03326994(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30)
                      );
          lVar7 = FUN_03326338(auStack_190,"Decorator type \'{}\' has local Opt::INHERITANCE.",
                               &DAT_0434fa00,param_2);
          *(char **)(lVar7 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar7 + 0x40) = 0x1b6;
          FUN_033269dc(auStack_190);
        }
        else {
          FUN_03326a7c(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30)
                      );
          lVar7 = FUN_03326338(auStack_190,"Decorator type \'{}\' has local Opt::INHERITANCE.",
                               &DAT_0434fa00,param_2);
          *(char **)(lVar7 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar7 + 0x40) = 0x1b6;
          FUN_03326adc(auStack_190);
        }
      }
      if (*(char *)*param_1 != '\0') {
        return local_38[0];
      }
      uVar1 = (uint)*param_2;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      FUN_03319240(local_38);
      lVar7 = *(long *)(*param_1 + 0x28);
      if ((lVar7 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
          (uVar2 = FUN_03327170(), (uVar2 & 1) != 0)))) {
        uVar2 = FUN_03327170();
        if ((uVar2 & 1) == 0) {
          FUN_03326994(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30)
                      );
          lVar7 = FUN_03326338(auStack_190,"Decorator type \'{}\' has local Opt::DEF_CONSTRUCTOR.",
                               &DAT_0434fa00,param_2);
          *(char **)(lVar7 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar7 + 0x40) = 0x1b7;
          FUN_033269dc(auStack_190);
        }
        else {
          FUN_03326a7c(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30)
                      );
          lVar7 = FUN_03326338(auStack_190,"Decorator type \'{}\' has local Opt::DEF_CONSTRUCTOR.",
                               &DAT_0434fa00,param_2);
          *(char **)(lVar7 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar7 + 0x40) = 0x1b7;
          FUN_03326adc(auStack_190);
        }
      }
      if (*(char *)*param_1 != '\0') {
        return local_38[0];
      }
      uVar1 = (uint)*param_2;
    }
    if ((uVar1 >> 8 & 1) != 0) {
      FUN_03319240(local_38);
      lVar7 = *(long *)(*param_1 + 0x28);
      if ((lVar7 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
          (uVar2 = FUN_03327170(), (uVar2 & 1) != 0)))) {
        uVar2 = FUN_03327170();
        if ((uVar2 & 1) == 0) {
          FUN_03326994(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30)
                      );
          lVar7 = FUN_03326338(auStack_190,"Decorator type \'{}\' has local Opt::DESTRUCTOR.",
                               &DAT_0434fa00,param_2);
          *(char **)(lVar7 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar7 + 0x40) = 0x1b8;
          FUN_033269dc(auStack_190);
        }
        else {
          FUN_03326a7c(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30)
                      );
          lVar7 = FUN_03326338(auStack_190,"Decorator type \'{}\' has local Opt::DESTRUCTOR.",
                               &DAT_0434fa00,param_2);
          *(char **)(lVar7 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar7 + 0x40) = 0x1b8;
          FUN_03326adc(auStack_190);
        }
      }
      if (*(char *)*param_1 != '\0') {
        return local_38[0];
      }
      uVar1 = (uint)*param_2;
    }
    if ((uVar1 >> 0x17 & 1) == 0) {
      return local_38[0];
    }
    FUN_03319240(local_38);
    lVar7 = *(long *)(*param_1 + 0x28);
    if (lVar7 == 0) {
      return local_38[0];
    }
    if ((*(byte *)(lVar7 + 0x50) < *(byte *)(*param_1 + 0x30)) &&
       (uVar2 = FUN_03327170(), (uVar2 & 1) == 0)) {
      return local_38[0];
    }
    uVar2 = FUN_03327170();
    if ((uVar2 & 1) != 0) {
      FUN_03326a7c(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
      lVar7 = FUN_03326338(auStack_190,"Decorator type \'{}\' has local Opt::DECLS.",&DAT_0434fa00,
                           param_2);
      uVar8 = 0x1b9;
      goto LAB_0331c864;
    }
    FUN_03326994(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
    lVar7 = FUN_03326338(auStack_190,"Decorator type \'{}\' has local Opt::DECLS.",&DAT_0434fa00,
                         param_2);
    uVar8 = 0x1b9;
    goto LAB_0331bb18;
  }
  uVar1 = FUN_032e35d8(param_2);
  uVar1 = uVar1 & 0x1f;
  if (8 < uVar1) {
    FUN_03319240(local_38);
    return local_38[0];
  }
  puVar6 = param_2;
  do {
    uVar2 = *puVar6;
    if (((uint)uVar2 >> 2 & 1) != 0) {
      uVar2 = puVar6[(uVar2 >> 1 & 1) + (uVar2 & 1) + 2];
      goto LAB_0331bef0;
    }
    puVar6 = (ulong *)puVar6[1];
  } while (puVar6 != (ulong *)0x0);
  uVar2 = 0;
LAB_0331bef0:
  if ((1 < uVar1) && (uVar2 == 0)) {
    FUN_03319240(local_38);
    lVar7 = *(long *)(*param_1 + 0x28);
    if ((lVar7 != 0) &&
       ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
        (uVar2 = FUN_03327170(), (uVar2 & 1) != 0)))) {
      uVar2 = FUN_03327170();
      if ((uVar2 & 1) == 0) {
        FUN_03326994(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        lVar7 = FUN_03326338(auStack_190,"Invalid Impl for type \'{}\'.",&DAT_0434fa00,param_2);
        *(char **)(lVar7 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar7 + 0x40) = 0x1e4;
        FUN_033269dc(auStack_190);
      }
      else {
        FUN_03326a7c(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        lVar7 = FUN_03326338(auStack_190,"Invalid Impl for type \'{}\'.",&DAT_0434fa00,param_2);
        *(char **)(lVar7 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar7 + 0x40) = 0x1e4;
        FUN_03326adc(auStack_190);
      }
    }
    if (*(char *)*param_1 != '\0') {
      return local_38[0];
    }
  }
  uVar2 = *param_2;
  if ((uVar2 & 0x8008) == 0x8000) {
    FUN_03319240(local_38);
    lVar7 = *(long *)(*param_1 + 0x28);
    if ((lVar7 != 0) &&
       ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
        (uVar3 = FUN_03327170(), (uVar3 & 1) != 0)))) {
      uVar3 = FUN_03327170();
      if ((uVar3 & 1) == 0) {
        FUN_03326994(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        lVar7 = FUN_03326338(auStack_190,
                             "Type \'{}\' has local Opt::TEMPLATE but no local Opt::NAME.",
                             &DAT_0434fa00,param_2);
        *(char **)(lVar7 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar7 + 0x40) = 0x1e8;
        FUN_033269dc(auStack_190);
      }
      else {
        FUN_03326a7c(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        lVar7 = FUN_03326338(auStack_190,
                             "Type \'{}\' has local Opt::TEMPLATE but no local Opt::NAME.",
                             &DAT_0434fa00,param_2);
        *(char **)(lVar7 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar7 + 0x40) = 0x1e8;
        FUN_03326adc(auStack_190);
      }
    }
    if (*(char *)*param_1 != '\0') {
      return local_38[0];
    }
  }
  if (((uint)uVar2 >> 3 & 1) != 0) {
    if (((((byte)*param_2 >> 3 & 1) == 0) ||
        (puVar5 = (undefined8 *)FUN_032e2008(param_2,8), puVar5 == (undefined8 *)0x0)) ||
       ((char *)*puVar5 == (char *)0x0)) {
      FUN_03319240(local_38);
      lVar7 = *(long *)(*param_1 + 0x28);
      if ((lVar7 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
          (uVar2 = FUN_03327170(), (uVar2 & 1) != 0)))) {
        uVar2 = FUN_03327170();
        if ((uVar2 & 1) == 0) {
          FUN_03326994(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30)
                      );
          local_198 = param_2;
          lVar7 = FUN_03326338(auStack_190,"Type {} has a null Opt::NAME",&DAT_0434fa60,&local_198);
          *(char **)(lVar7 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar7 + 0x40) = 0x1ed;
          goto LAB_0331c494;
        }
        FUN_03326a7c(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        local_1a0 = param_2;
        lVar7 = FUN_03326338(auStack_190,"Type {} has a null Opt::NAME",&DAT_0434fa60,&local_1a0);
        *(char **)(lVar7 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar7 + 0x40) = 0x1ed;
LAB_0331c760:
        FUN_03326adc(auStack_190);
      }
    }
    else {
      if (*(char *)*puVar5 != '\0') goto LAB_0331c024;
      FUN_03319240(local_38);
      lVar7 = *(long *)(*param_1 + 0x28);
      if ((lVar7 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
          (uVar2 = FUN_03327170(), (uVar2 & 1) != 0)))) {
        uVar2 = FUN_03327170();
        if ((uVar2 & 1) != 0) {
          FUN_03326a7c(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30)
                      );
          local_1a0 = param_2;
          lVar7 = FUN_03326338(auStack_190,"Type {} has an empty Opt::NAME",&DAT_0434fa60,&local_1a0
                              );
          *(char **)(lVar7 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar7 + 0x40) = 0x1f0;
          goto LAB_0331c760;
        }
        FUN_03326994(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        local_198 = param_2;
        lVar7 = FUN_03326338(auStack_190,"Type {} has an empty Opt::NAME",&DAT_0434fa60,&local_198);
        *(char **)(lVar7 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar7 + 0x40) = 0x1f0;
LAB_0331c494:
        FUN_033269dc(auStack_190);
      }
    }
    if (*(char *)*param_1 != '\0') {
      return local_38[0];
    }
  }
LAB_0331c024:
  uVar2 = *param_2;
  if ((uVar2 & 1) == 0) {
    FUN_03319240(local_38);
    lVar7 = *(long *)(*param_1 + 0x28);
    if ((lVar7 != 0) &&
       ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
        (uVar2 = FUN_03327170(), (uVar2 & 1) != 0)))) {
      uVar2 = FUN_03327170();
      if ((uVar2 & 1) == 0) {
        FUN_03326994(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        local_198 = (ulong *)0x391733f;
        lVar7 = FUN_03326338(auStack_190,"Type \'{}\' has unexpected Opt::FORMAT ({}).",
                             &DAT_0434fa70,param_2,&local_198);
        *(char **)(lVar7 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar7 + 0x40) = 500;
        FUN_033269dc(auStack_190);
      }
      else {
        FUN_03326a7c(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        local_1a0 = (ulong *)0x391733f;
        lVar7 = FUN_03326338(auStack_190,"Type \'{}\' has unexpected Opt::FORMAT ({}).",
                             &DAT_0434fa70,param_2,&local_1a0);
        *(char **)(lVar7 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar7 + 0x40) = 500;
        FUN_03326adc(auStack_190);
      }
    }
    if (*(char *)*param_1 != '\0') {
      return local_38[0];
    }
    uVar2 = *param_2;
  }
  if (((uint)(uVar1 == 6 || uVar1 == 8) ^ (uint)(uVar2 >> 1) & 1) == 1) {
    FUN_03319240(local_38);
    lVar7 = *(long *)(*param_1 + 0x28);
    if ((lVar7 != 0) &&
       ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
        (uVar2 = FUN_03327170(), (uVar2 & 1) != 0)))) {
      uVar2 = FUN_03327170();
      if ((uVar2 & 1) == 0) {
        FUN_03326994(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        local_198 = (ulong *)0x3966e2e;
        if (uVar1 == 8 || uVar1 == 6) {
          local_198 = (ulong *)0x391733f;
        }
        lVar7 = FUN_03326338(auStack_190,"Type \'{}\' has unexpected Opt::SUBTYPE ({}).",
                             &DAT_0434fa70,param_2,&local_198);
        *(char **)(lVar7 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar7 + 0x40) = 0x1f5;
        FUN_033269dc(auStack_190);
      }
      else {
        FUN_03326a7c(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        local_1a0 = (ulong *)0x3966e2e;
        if (uVar1 == 8 || uVar1 == 6) {
          local_1a0 = (ulong *)0x391733f;
        }
        lVar7 = FUN_03326338(auStack_190,"Type \'{}\' has unexpected Opt::SUBTYPE ({}).",
                             &DAT_0434fa70,param_2,&local_1a0);
        *(char **)(lVar7 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar7 + 0x40) = 0x1f5;
        FUN_03326adc(auStack_190);
      }
    }
    if (*(char *)*param_1 != '\0') {
      return local_38[0];
    }
  }
  if ((uVar1 == 7) && (-1 < (char)*(byte *)((long)param_2 + 2))) {
    FUN_03319240(local_38);
    lVar7 = *(long *)(*param_1 + 0x28);
    if ((lVar7 != 0) &&
       ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
        (uVar2 = FUN_03327170(), (uVar2 & 1) != 0)))) {
      uVar2 = FUN_03327170();
      if ((uVar2 & 1) == 0) {
        FUN_03326994(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        local_198 = (ulong *)0x391733f;
        lVar7 = FUN_03326338(auStack_190,"Type \'{}\' has unexpected Opt::DECLS ({}).",&DAT_0434fa70
                             ,param_2,&local_198);
        *(char **)(lVar7 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar7 + 0x40) = 0x1f6;
        FUN_033269dc(auStack_190);
      }
      else {
        FUN_03326a7c(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        local_1a0 = (ulong *)0x391733f;
        lVar7 = FUN_03326338(auStack_190,"Type \'{}\' has unexpected Opt::DECLS ({}).",&DAT_0434fa70
                             ,param_2,&local_1a0);
        *(char **)(lVar7 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar7 + 0x40) = 0x1f6;
        FUN_03326adc(auStack_190);
      }
    }
    if (*(char *)*param_1 != '\0') {
      return local_38[0];
    }
  }
  uVar1 = FUN_032e2598(param_2);
  if ((uVar1 >> 1 & 1) == 0) {
    return local_38[0];
  }
  plVar4 = (long *)FUN_032e20b0(param_2,0x40);
  if ((plVar4 != (long *)0x0) && (*plVar4 != 0)) {
    FUN_03319240(local_38);
    lVar7 = *(long *)(*param_1 + 0x28);
    if ((lVar7 != 0) &&
       ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
        (uVar2 = FUN_03327170(), (uVar2 & 1) != 0)))) {
      uVar2 = FUN_03327170();
      if ((uVar2 & 1) == 0) {
        FUN_03326994(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        lVar7 = FUN_03326338(auStack_190,
                             "Type \'{}\' is abstract and should not have a default constructor.",
                             &DAT_0434fa00,param_2);
        *(char **)(lVar7 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar7 + 0x40) = 0x1fa;
        FUN_033269dc(auStack_190);
      }
      else {
        FUN_03326a7c(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        lVar7 = FUN_03326338(auStack_190,
                             "Type \'{}\' is abstract and should not have a default constructor.",
                             &DAT_0434fa00,param_2);
        *(char **)(lVar7 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar7 + 0x40) = 0x1fa;
        FUN_03326adc(auStack_190);
      }
    }
    if (*(char *)*param_1 != '\0') {
      return local_38[0];
    }
  }
  plVar4 = (long *)FUN_032e20b0(param_2,0x80);
  if (plVar4 == (long *)0x0) {
    return local_38[0];
  }
  if (*plVar4 == 0) {
    return local_38[0];
  }
  FUN_03319240(local_38);
  lVar7 = *(long *)(*param_1 + 0x28);
  if (lVar7 == 0) {
    return local_38[0];
  }
  if ((*(byte *)(lVar7 + 0x50) < *(byte *)(*param_1 + 0x30)) &&
     (uVar2 = FUN_03327170(), (uVar2 & 1) == 0)) {
    return local_38[0];
  }
  uVar2 = FUN_03327170();
  if ((uVar2 & 1) != 0) {
    FUN_03326a7c(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
    lVar7 = FUN_03326338(auStack_190,
                         "Type \'{}\' is abstract and should not have a copy constructor.",
                         &DAT_0434fa00,param_2);
    uVar8 = 0x1fb;
LAB_0331c864:
    *(char **)(lVar7 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
    ;
    *(undefined8 *)(lVar7 + 0x40) = uVar8;
    FUN_03326adc(auStack_190);
    return local_38[0];
  }
  FUN_03326994(auStack_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
  lVar7 = FUN_03326338(auStack_190,"Type \'{}\' is abstract and should not have a copy constructor."
                       ,&DAT_0434fa00,param_2);
  uVar8 = 0x1fb;
LAB_0331bb18:
  *(char **)(lVar7 + 0x38) =
       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
  ;
  *(undefined8 *)(lVar7 + 0x40) = uVar8;
  FUN_033269dc(auStack_190);
  return local_38[0];
}


