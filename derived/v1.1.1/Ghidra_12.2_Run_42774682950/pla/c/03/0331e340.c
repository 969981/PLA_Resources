/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331e340; name: FUN_0331e340
 */


undefined4 FUN_0331e340(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 local_180 [84];
  long local_28;
  
  uVar1 = FUN_032e35d8(param_2);
  if ((((uVar1 & 0x1f) != 7) || (local_28 = *(long *)(param_2 + 8), local_28 == 0)) ||
     (uVar1 = FUN_032e35d8(), (uVar1 & 0x1f) == 7)) {
    return 0;
  }
  lVar2 = *(long *)(*param_1 + 0x28);
  if ((lVar2 != 0) &&
     ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar2 + 0x50) ||
      (uVar1 = FUN_03327170(), (uVar1 & 1) != 0)))) {
    uVar1 = FUN_03327170();
    if ((uVar1 & 1) == 0) {
      FUN_03326994(local_180,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
      lVar2 = FUN_03326338(local_180,
                           "Registered record type \'{}\' has as parent type \'{}\', which is a non-record type."
                           ,&DAT_0434fb00,param_2,&local_28);
      *(undefined4 *)(lVar2 + 0x1c) = 0;
      *(char **)(lVar2 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
      ;
      *(undefined8 *)(lVar2 + 0x40) = 0x33d;
      FUN_033269dc(local_180);
    }
    else {
      FUN_03326a7c(local_180,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
      lVar2 = FUN_03326338(local_180,
                           "Registered record type \'{}\' has as parent type \'{}\', which is a non-record type."
                           ,&DAT_0434fb00,param_2,&local_28);
      *(undefined4 *)(lVar2 + 0x1c) = 0;
      *(char **)(lVar2 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
      ;
      *(undefined8 *)(lVar2 + 0x40) = 0x33d;
      FUN_03326adc(local_180);
    }
  }
  local_180[0] = 0;
  FUN_03319240(local_180);
  return local_180[0];
}


