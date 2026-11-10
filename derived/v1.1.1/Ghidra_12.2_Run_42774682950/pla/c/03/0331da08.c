/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331da08; name: FUN_0331da08
 */


undefined4 FUN_0331da08(long *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong *puVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 local_188 [84];
  ulong local_38;
  
  puVar3 = param_2;
  do {
    if (((byte)*puVar3 >> 1 & 1) != 0) {
      uVar2 = puVar3[3];
      local_38 = uVar2;
      if (uVar2 == 0) goto LAB_0331da74;
      pcVar4 = *(code **)(*param_1 + 0x10);
      bVar1 = false;
      if (pcVar4 == (code *)0x0) goto LAB_0331da78;
      uVar7 = (*pcVar4)(uVar2,*(undefined8 *)(*param_1 + 0x18));
      if ((uVar7 & 1) != 0) {
        bVar1 = false;
        goto LAB_0331da78;
      }
      lVar5 = *(long *)(*param_1 + 0x28);
      if ((lVar5 == 0) ||
         ((*(byte *)(lVar5 + 0x50) < *(byte *)(*param_1 + 0x30) &&
          (uVar2 = FUN_03327170(), (uVar2 & 1) == 0)))) goto LAB_0331dbb8;
      uVar2 = FUN_03327170();
      if ((uVar2 & 1) != 0) {
        FUN_03326a7c(local_188,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        lVar5 = FUN_03326338(local_188,"Pointer type \'{}\' has unreachable pointee type.",
                             &DAT_0434fb98,param_2);
        uVar6 = 0x2e9;
        goto LAB_0331dcac;
      }
      FUN_03326994(local_188,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
      lVar5 = FUN_03326338(local_188,"Pointer type \'{}\' has unreachable pointee type.",
                           &DAT_0434fb98,param_2);
      uVar6 = 0x2e9;
      goto LAB_0331dba8;
    }
    puVar3 = (ulong *)puVar3[1];
  } while (puVar3 != (ulong *)0x0);
  local_38 = 0;
LAB_0331da74:
  bVar1 = true;
  uVar2 = local_38;
LAB_0331da78:
  puVar3 = param_2;
  while (uVar7 = *puVar3, ((uint)uVar7 >> 2 & 1) == 0) {
    puVar3 = (ulong *)puVar3[1];
    if (puVar3 == (ulong *)0x0) {
      return 0;
    }
  }
  if ((undefined8 *)puVar3[(uVar7 >> 1 & 1) + (uVar7 & 1) + 2] != &DAT_0444a8f0) {
    return 0;
  }
  if (bVar1) {
    lVar5 = *(long *)(*param_1 + 0x28);
    if ((lVar5 == 0) ||
       ((*(byte *)(lVar5 + 0x50) < *(byte *)(*param_1 + 0x30) &&
        (uVar2 = FUN_03327170(), (uVar2 & 1) == 0)))) goto LAB_0331dbb8;
    uVar2 = FUN_03327170();
    if ((uVar2 & 1) != 0) {
      FUN_03326a7c(local_188,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
      lVar5 = FUN_03326338(local_188,"Referenced pointer type \'{}\' has no subtype",&DAT_0434fb98,
                           param_2);
      uVar6 = 0x2f1;
      goto LAB_0331dcac;
    }
    FUN_03326994(local_188,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
    lVar5 = FUN_03326338(local_188,"Referenced pointer type \'{}\' has no subtype",&DAT_0434fb98,
                         param_2);
    uVar6 = 0x2f1;
  }
  else {
    uVar7 = FUN_032e37ec(uVar2,&DAT_0435a690);
    if ((uVar7 & 1) != 0) {
      return 0;
    }
    uVar7 = FUN_032e37ec(uVar2,&DAT_0434b3b0);
    if ((uVar7 & 1) != 0) {
      return 0;
    }
    uVar2 = FUN_0331e758(uVar2);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    lVar5 = *(long *)(*param_1 + 0x28);
    if ((lVar5 == 0) ||
       ((*(byte *)(lVar5 + 0x50) < *(byte *)(*param_1 + 0x30) &&
        (uVar2 = FUN_03327170(), (uVar2 & 1) == 0)))) goto LAB_0331dbb8;
    uVar2 = FUN_03327170();
    if ((uVar2 & 1) != 0) {
      FUN_03326a7c(local_188,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
      lVar5 = FUN_03326338(local_188,
                           "Referenced pointer type \'{}\' points to non-referenced type \'{}\'",
                           &DAT_0434fba8,param_2,&local_38);
      uVar6 = 0x2f4;
LAB_0331dcac:
      *(char **)(lVar5 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
      ;
      *(undefined8 *)(lVar5 + 0x40) = uVar6;
      *(undefined4 *)(lVar5 + 0x1c) = 0;
      FUN_03326adc(local_188);
      goto LAB_0331dbb8;
    }
    FUN_03326994(local_188,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
    lVar5 = FUN_03326338(local_188,
                         "Referenced pointer type \'{}\' points to non-referenced type \'{}\'",
                         &DAT_0434fba8,param_2,&local_38);
    uVar6 = 0x2f4;
  }
LAB_0331dba8:
  *(char **)(lVar5 + 0x38) =
       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
  ;
  *(undefined8 *)(lVar5 + 0x40) = uVar6;
  *(undefined4 *)(lVar5 + 0x1c) = 0;
  FUN_033269dc(local_188);
LAB_0331dbb8:
  local_188[0] = 0;
  FUN_03319240(local_188);
  return local_188[0];
}


