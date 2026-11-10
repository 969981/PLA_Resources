/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331b8e8; name: FUN_0331b8e8
 */


undefined4 FUN_0331b8e8(long *param_1,long param_2)

{
  uint *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined4 local_190 [84];
  uint local_38;
  uint local_34;
  
  if (((*(byte *)(param_2 + 2) >> 5 & 1) == 0) ||
     (puVar1 = (uint *)FUN_032e2008(param_2,0x200000), puVar1 == (uint *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
  }
  lVar3 = *param_1;
  if ((uVar4 & (*(uint *)(lVar3 + 4) ^ 0xffffffff)) == 0) {
    local_190[0] = 0;
  }
  else {
    if ((*(long *)(lVar3 + 0x28) != 0) &&
       ((*(byte *)(lVar3 + 0x30) <= *(byte *)(*(long *)(lVar3 + 0x28) + 0x50) ||
        (uVar2 = FUN_03327170(), (uVar2 & 1) != 0)))) {
      uVar2 = FUN_03327170();
      if ((uVar2 & 1) == 0) {
        FUN_03326994(local_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        local_34 = uVar4 & (*(uint *)(*param_1 + 4) ^ 0xffffffff);
        lVar3 = FUN_03326338(local_190,"Type \'{}\' has invalid forbidden flag(s) 0x{:x8}.",
                             &DAT_0434fa48,param_2,&local_34);
        *(undefined4 *)(lVar3 + 0x1c) = 0xa62e68d8;
        *(char **)(lVar3 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar3 + 0x40) = 0x124;
        FUN_033269dc(local_190);
      }
      else {
        FUN_03326a7c(local_190,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        local_38 = uVar4 & (*(uint *)(*param_1 + 4) ^ 0xffffffff);
        lVar3 = FUN_03326338(local_190,"Type \'{}\' has invalid forbidden flag(s) 0x{:x8}.",
                             &DAT_0434fa48,param_2,&local_38);
        *(undefined4 *)(lVar3 + 0x1c) = 0xa62e68d8;
        *(char **)(lVar3 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar3 + 0x40) = 0x124;
        FUN_03326adc(local_190);
      }
    }
    local_190[0] = 0;
    FUN_03319240(local_190);
  }
  return local_190[0];
}


