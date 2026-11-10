/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03319704; name: FUN_03319704
 */


undefined4 FUN_03319704(long *param_1,ulong *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint local_19c;
  undefined1 auStack_198 [340];
  uint local_44;
  undefined4 local_40 [2];
  undefined4 local_38 [2];
  
  local_40[0] = 0;
  lVar3 = *param_1;
  uVar5 = *param_2;
  if ((uVar5 & (*(ulong *)(lVar3 + 8) ^ 0xffffffffffffffff)) == 0) {
    iVar1 = FUN_0331b214(param_1);
    if ((((((-1 < iVar1) || (FUN_03319240(local_40), *(char *)*param_1 == '\0')) &&
          ((iVar1 = FUN_0331b344(param_1,param_2), -1 < iVar1 ||
           (FUN_03319240(local_40), *(char *)*param_1 == '\0')))) &&
         ((iVar1 = FUN_0331b8e8(param_1,param_2), -1 < iVar1 ||
          (FUN_03319240(local_40), *(char *)*param_1 == '\0')))) &&
        ((iVar1 = FUN_0331ba60(param_1,param_2), -1 < iVar1 ||
         (FUN_03319240(local_40), *(char *)*param_1 == '\0')))) &&
       (((*param_2 & 1) != 0 &&
        (((iVar1 = FUN_0331c99c(param_1,param_2), -1 < iVar1 ||
          (FUN_03319240(local_40), *(char *)*param_1 == '\0')) &&
         (iVar1 = FUN_0331cd70(param_1,param_2), iVar1 < 0)))))) {
      FUN_03319240(local_40);
    }
  }
  else {
    if ((*(long *)(lVar3 + 0x28) != 0) &&
       ((*(byte *)(lVar3 + 0x30) <= *(byte *)(*(long *)(lVar3 + 0x28) + 0x50) ||
        (uVar2 = FUN_03327170(), (uVar2 & 1) != 0)))) {
      uVar2 = FUN_03327170();
      uVar4 = (uint)uVar5;
      if ((uVar2 & 1) == 0) {
        FUN_03326994(auStack_198,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        local_44 = uVar4 & (*(uint *)(*param_1 + 8) ^ 0xffffffff);
        lVar3 = FUN_03326338(auStack_198,"Type has invalid optionals {}.",&DAT_0434f9f0,&local_44);
        *(undefined4 *)(lVar3 + 0x1c) = 0;
        *(char **)(lVar3 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar3 + 0x40) = 0xdf;
        FUN_033269dc(auStack_198);
      }
      else {
        FUN_03326a7c(auStack_198,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        local_19c = uVar4 & (*(uint *)(*param_1 + 8) ^ 0xffffffff);
        lVar3 = FUN_03326338(auStack_198,"Type has invalid optionals {}.",&DAT_0434f9f0,&local_19c);
        *(undefined4 *)(lVar3 + 0x1c) = 0;
        *(char **)(lVar3 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar3 + 0x40) = 0xdf;
        FUN_03326adc(auStack_198);
      }
    }
    local_38[0] = 0;
    FUN_03319240(local_38);
    local_40[0] = local_38[0];
  }
  return local_40[0];
}


