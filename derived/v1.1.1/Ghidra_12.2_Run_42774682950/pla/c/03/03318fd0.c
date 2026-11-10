/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03318fd0; name: FUN_03318fd0
 */


undefined4 FUN_03318fd0(long *param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_198;
  undefined4 local_190 [84];
  undefined8 local_38;
  
  lVar4 = *(long *)(param_2 + 8);
  if (lVar4 != 0) {
    lVar5 = param_2;
    do {
      pcVar2 = *(code **)(*param_1 + 0x10);
      if ((pcVar2 != (code *)0x0) &&
         (uVar1 = (*pcVar2)(lVar4,*(undefined8 *)(*param_1 + 0x18)), (uVar1 & 1) == 0)) {
LAB_03319118:
        lVar4 = *(long *)(*param_1 + 0x28);
        if ((lVar4 == 0) ||
           ((*(byte *)(lVar4 + 0x50) < *(byte *)(*param_1 + 0x30) &&
            (uVar1 = FUN_03327170(), (uVar1 & 1) == 0)))) goto LAB_03319104;
        uVar1 = FUN_03327170();
        if ((uVar1 & 1) != 0) {
          FUN_03326a7c(local_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
          local_198 = FUN_032e239c(param_2);
          lVar4 = FUN_03326338(local_190,"Type \'{}\' has an unreachable type in parents chain",
                               &DAT_0411bac8,&local_198);
          *(undefined4 *)(lVar4 + 0x1c) = 0;
          uVar3 = 0xc3;
LAB_033191e0:
          *(char **)(lVar4 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar4 + 0x40) = uVar3;
          FUN_03326adc(local_190);
          goto LAB_03319104;
        }
        FUN_03326994(local_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        local_38 = FUN_032e239c(param_2);
        lVar4 = FUN_03326338(local_190,"Type \'{}\' has an unreachable type in parents chain",
                             &DAT_0411bac8,&local_38);
        *(undefined4 *)(lVar4 + 0x1c) = 0;
        uVar3 = 0xc3;
LAB_033190f8:
        *(char **)(lVar4 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar4 + 0x40) = uVar3;
        FUN_033269dc(local_190);
LAB_03319104:
        local_190[0] = 0;
        FUN_03319240(local_190);
        return local_190[0];
      }
      if (lVar4 == lVar5) {
LAB_03319078:
        lVar4 = *(long *)(*param_1 + 0x28);
        if ((lVar4 == 0) ||
           ((*(byte *)(lVar4 + 0x50) < *(byte *)(*param_1 + 0x30) &&
            (uVar1 = FUN_03327170(), (uVar1 & 1) == 0)))) goto LAB_03319104;
        uVar1 = FUN_03327170();
        if ((uVar1 & 1) != 0) {
          FUN_03326a7c(local_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
          local_198 = FUN_032e239c(param_2);
          lVar4 = FUN_03326338(local_190,"Type \'{}\' has a loop in parents chain",&DAT_0411bac8,
                               &local_198);
          *(undefined4 *)(lVar4 + 0x1c) = 0xa62e68d9;
          uVar3 = 0xc4;
          goto LAB_033191e0;
        }
        FUN_03326994(local_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        local_38 = FUN_032e239c(param_2);
        lVar4 = FUN_03326338(local_190,"Type \'{}\' has a loop in parents chain",&DAT_0411bac8,
                             &local_38);
        *(undefined4 *)(lVar4 + 0x1c) = 0xa62e68d9;
        uVar3 = 0xc4;
        goto LAB_033190f8;
      }
      lVar4 = *(long *)(lVar4 + 8);
      if (lVar4 == 0) {
        return 0;
      }
      pcVar2 = *(code **)(*param_1 + 0x10);
      if ((pcVar2 != (code *)0x0) &&
         (uVar1 = (*pcVar2)(lVar4,*(undefined8 *)(*param_1 + 0x18)), (uVar1 & 1) == 0))
      goto LAB_03319118;
      if (lVar4 == lVar5) goto LAB_03319078;
      lVar5 = *(long *)(lVar5 + 8);
      lVar4 = *(long *)(lVar4 + 8);
    } while (lVar4 != 0);
  }
  return 0;
}


