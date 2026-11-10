/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331b344; name: FUN_0331b344
 */


undefined4 FUN_0331b344(long *param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 auStack_1a8 [90];
  ulong local_38;
  
  uVar2 = (uint)*param_2;
  if ((*param_2 & 1) != 0) {
    uVar8 = FUN_032e35d8(param_2);
    puVar4 = param_2;
    if (((uVar8 & 0x1f) == 0) || (uVar8 = FUN_032e35d8(param_2), (uVar8 & 0x1f) == 1)) {
      while( true ) {
        uVar2 = (uint)*puVar4;
        if ((uVar2 >> 0x14 & 1) != 0) break;
        if (((*puVar4 & 1) != 0) || (puVar4 = (ulong *)puVar4[1], puVar4 == (ulong *)0x0))
        goto LAB_0331b4fc;
      }
      uVar2 = (uVar2 & 0xfffff) - (uVar2 >> 1 & 0x55555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      if ((short)puVar4[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] != 0)
      goto LAB_0331b464;
LAB_0331b4fc:
      iVar3 = FUN_032e2188(param_2);
      if (iVar3 == 0) {
        return 0;
      }
LAB_0331b464:
      lVar5 = *(long *)(*param_1 + 0x28);
      if ((lVar5 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar5 + 0x50) ||
          (uVar8 = FUN_03327170(), (uVar8 & 1) != 0)))) {
        uVar8 = FUN_03327170();
        if ((uVar8 & 1) == 0) {
          FUN_03326994(auStack_1a8 + 6,*(undefined8 *)(*param_1 + 0x28),
                       *(undefined1 *)(*param_1 + 0x30));
          lVar5 = FUN_03326338(auStack_1a8 + 6,
                               "Void/opaque type \'{}\' has non-zero size and/or alignment.",
                               &DAT_0434fa00,param_2);
          *(undefined4 *)(lVar5 + 0x1c) = 0;
          *(char **)(lVar5 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar5 + 0x40) = 0x107;
          FUN_033269dc(auStack_1a8 + 6);
        }
        else {
          FUN_03326a7c(auStack_1a8 + 6,*(undefined8 *)(*param_1 + 0x28),
                       *(undefined1 *)(*param_1 + 0x30));
          lVar5 = FUN_03326338(auStack_1a8 + 6,
                               "Void/opaque type \'{}\' has non-zero size and/or alignment.",
                               &DAT_0434fa00,param_2);
          *(undefined4 *)(lVar5 + 0x1c) = 0;
          *(char **)(lVar5 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar5 + 0x40) = 0x107;
          FUN_03326adc(auStack_1a8 + 6);
        }
      }
      auStack_1a8[6] = 0;
      FUN_03319240(auStack_1a8 + 6);
      return auStack_1a8[6];
    }
    uVar2 = (uint)*param_2;
  }
  if (((uVar2 >> 0x14 & 1) == 0) ||
     (puVar4 = (ulong *)FUN_032e2008(param_2,0x100000), puVar4 == (ulong *)0x0)) {
    return 0;
  }
  uVar9 = *puVar4;
  uVar8 = uVar9 >> 0x10 & 0xfff;
  local_38 = uVar8;
  if ((uVar9 & 0xffff) == 0) {
    lVar5 = *(long *)(*param_1 + 0x28);
    if ((lVar5 != 0) &&
       ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar5 + 0x50) ||
        (uVar8 = FUN_03327170(), (uVar8 & 1) != 0)))) {
      uVar8 = FUN_03327170();
      if ((uVar8 & 1) == 0) {
        FUN_03326994(auStack_1a8 + 6,*(undefined8 *)(*param_1 + 0x28),
                     *(undefined1 *)(*param_1 + 0x30));
        lVar5 = FUN_03326338(auStack_1a8 + 6,"Type \'{}\' has zero size.",&DAT_0434fa00,param_2);
        *(undefined4 *)(lVar5 + 0x1c) = 0;
        *(char **)(lVar5 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar5 + 0x40) = 0x110;
        FUN_033269dc(auStack_1a8 + 6);
      }
      else {
        FUN_03326a7c(auStack_1a8 + 6,*(undefined8 *)(*param_1 + 0x28),
                     *(undefined1 *)(*param_1 + 0x30));
        lVar5 = FUN_03326338(auStack_1a8 + 6,"Type \'{}\' has zero size.",&DAT_0434fa00,param_2);
        *(undefined4 *)(lVar5 + 0x1c) = 0;
        *(char **)(lVar5 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar5 + 0x40) = 0x110;
        FUN_03326adc(auStack_1a8 + 6);
      }
    }
    puVar6 = auStack_1a8 + 6;
  }
  else {
    uVar2 = FUN_032e2598(param_2);
    if ((uVar2 >> 1 & 1) != 0) {
      return 0;
    }
    if (uVar8 == 0) {
      lVar5 = *(long *)(*param_1 + 0x28);
      if ((lVar5 == 0) ||
         ((*(byte *)(lVar5 + 0x50) < *(byte *)(*param_1 + 0x30) &&
          (uVar8 = FUN_03327170(), (uVar8 & 1) == 0)))) {
        puVar6 = auStack_1a8 + 4;
      }
      else {
        uVar8 = FUN_03327170();
        if ((uVar8 & 1) == 0) {
          FUN_03326994(auStack_1a8 + 6,*(undefined8 *)(*param_1 + 0x28),
                       *(undefined1 *)(*param_1 + 0x30));
          lVar5 = FUN_03326338(auStack_1a8 + 6,"Non-abstract type \'{}\' has zero alignment.",
                               &DAT_0434fa00,param_2);
          *(undefined4 *)(lVar5 + 0x1c) = 0;
          *(char **)(lVar5 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar5 + 0x40) = 0x116;
          FUN_033269dc(auStack_1a8 + 6);
          puVar6 = auStack_1a8 + 4;
        }
        else {
          FUN_03326a7c(auStack_1a8 + 6,*(undefined8 *)(*param_1 + 0x28),
                       *(undefined1 *)(*param_1 + 0x30));
          lVar5 = FUN_03326338(auStack_1a8 + 6,"Non-abstract type \'{}\' has zero alignment.",
                               &DAT_0434fa00,param_2);
          *(undefined4 *)(lVar5 + 0x1c) = 0;
          *(char **)(lVar5 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar5 + 0x40) = 0x116;
          FUN_03326adc(auStack_1a8 + 6);
          puVar6 = auStack_1a8 + 4;
        }
      }
    }
    else if ((uVar8 & uVar8 - 1) == 0) {
      uVar2 = (uint)uVar9 & 0xffff;
      uVar1 = 0;
      uVar7 = (uint)uVar8;
      if (uVar7 != 0) {
        uVar1 = uVar2 / uVar7;
      }
      if (uVar2 == uVar1 * uVar7) {
        return 0;
      }
      lVar5 = *(long *)(*param_1 + 0x28);
      if ((lVar5 == 0) ||
         ((*(byte *)(lVar5 + 0x50) < *(byte *)(*param_1 + 0x30) &&
          (uVar8 = FUN_03327170(), (uVar8 & 1) == 0)))) {
        puVar6 = auStack_1a8;
      }
      else {
        uVar8 = FUN_03327170();
        if ((uVar8 & 1) == 0) {
          FUN_03326994(auStack_1a8 + 6,*(undefined8 *)(*param_1 + 0x28),
                       *(undefined1 *)(*param_1 + 0x30));
          lVar5 = FUN_03326338(auStack_1a8 + 6,
                               "Non-abstract type \'{}\' has size ({} bytes) not divisible by its alignment ({} bytes)."
                               ,&DAT_0434fa28,param_2,param_2,&local_38);
          *(undefined4 *)(lVar5 + 0x1c) = 0;
          *(char **)(lVar5 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar5 + 0x40) = 0x118;
          FUN_033269dc(auStack_1a8 + 6);
          puVar6 = auStack_1a8;
        }
        else {
          FUN_03326a7c(auStack_1a8 + 6,*(undefined8 *)(*param_1 + 0x28),
                       *(undefined1 *)(*param_1 + 0x30));
          lVar5 = FUN_03326338(auStack_1a8 + 6,
                               "Non-abstract type \'{}\' has size ({} bytes) not divisible by its alignment ({} bytes)."
                               ,&DAT_0434fa28,param_2,param_2,&local_38);
          *(undefined4 *)(lVar5 + 0x1c) = 0;
          *(char **)(lVar5 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar5 + 0x40) = 0x118;
          FUN_03326adc(auStack_1a8 + 6);
          puVar6 = auStack_1a8;
        }
      }
    }
    else {
      lVar5 = *(long *)(*param_1 + 0x28);
      if ((lVar5 == 0) ||
         ((*(byte *)(lVar5 + 0x50) < *(byte *)(*param_1 + 0x30) &&
          (uVar8 = FUN_03327170(), (uVar8 & 1) == 0)))) {
        puVar6 = auStack_1a8 + 2;
      }
      else {
        uVar8 = FUN_03327170();
        if ((uVar8 & 1) == 0) {
          FUN_03326994(auStack_1a8 + 6,*(undefined8 *)(*param_1 + 0x28),
                       *(undefined1 *)(*param_1 + 0x30));
          lVar5 = FUN_03326338(auStack_1a8 + 6,
                               "Non-abstract type \'{}\' has non-power-of-two alignment ({} bytes)."
                               ,&DAT_0434fa10,param_2,&local_38);
          *(undefined4 *)(lVar5 + 0x1c) = 0;
          *(char **)(lVar5 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar5 + 0x40) = 0x117;
          FUN_033269dc(auStack_1a8 + 6);
          puVar6 = auStack_1a8 + 2;
        }
        else {
          FUN_03326a7c(auStack_1a8 + 6,*(undefined8 *)(*param_1 + 0x28),
                       *(undefined1 *)(*param_1 + 0x30));
          lVar5 = FUN_03326338(auStack_1a8 + 6,
                               "Non-abstract type \'{}\' has non-power-of-two alignment ({} bytes)."
                               ,&DAT_0434fa10,param_2,&local_38);
          *(undefined4 *)(lVar5 + 0x1c) = 0;
          *(char **)(lVar5 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar5 + 0x40) = 0x117;
          FUN_03326adc(auStack_1a8 + 6);
          puVar6 = auStack_1a8 + 2;
        }
      }
    }
  }
  *puVar6 = 0;
  FUN_03319240(puVar6);
  return *puVar6;
}


