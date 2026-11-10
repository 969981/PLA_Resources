/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331b214; name: FUN_0331b214
 */


undefined4 FUN_0331b214(long *param_1,byte *param_2)

{
  long lVar1;
  ulong uVar2;
  uint local_180 [84];
  
  if ((*param_2 >> 4 & 1) != 0) {
    lVar1 = FUN_032e2008(param_2,0x10);
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(lVar1 + 4) != 0) {
      lVar1 = *(long *)(*param_1 + 0x28);
      if ((lVar1 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar1 + 0x50) ||
          (uVar2 = FUN_03327170(), (uVar2 & 1) != 0)))) {
        uVar2 = FUN_03327170();
        if ((uVar2 & 1) == 0) {
          FUN_03326994(local_180,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
          lVar1 = FUN_03326338(local_180,
                               "Overflow in VERSION of type \'{}\' (should fit on 32 bits).",
                               &DAT_0434fa00,param_2);
          *(undefined4 *)(lVar1 + 0x1c) = 0;
          *(char **)(lVar1 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar1 + 0x40) = 0xfb;
          FUN_033269dc(local_180);
        }
        else {
          FUN_03326a7c(local_180,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
          lVar1 = FUN_03326338(local_180,
                               "Overflow in VERSION of type \'{}\' (should fit on 32 bits).",
                               &DAT_0434fa00,param_2);
          *(undefined4 *)(lVar1 + 0x1c) = 0;
          *(char **)(lVar1 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar1 + 0x40) = 0xfb;
          FUN_03326adc(local_180);
        }
      }
      local_180[0] = 0;
      FUN_03319240(local_180);
      return local_180[0];
    }
  }
  return 0;
}


