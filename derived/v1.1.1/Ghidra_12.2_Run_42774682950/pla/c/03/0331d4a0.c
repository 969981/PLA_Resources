/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331d4a0; name: FUN_0331d4a0
 */


undefined4 FUN_0331d4a0(long *param_1,byte *param_2)

{
  bool bVar1;
  byte *pbVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  ulong uStack_238;
  uint local_230;
  ulong local_228;
  uint local_220;
  ulong local_218;
  uint local_210;
  ulong local_208;
  uint local_200;
  ulong local_1f8;
  uint local_1f0;
  ulong *local_1a8;
  ulong *local_1a0;
  undefined1 auStack_198 [336];
  byte *local_48;
  undefined4 local_40 [2];
  undefined4 local_38 [2];
  
  local_40[0] = 0;
  pbVar2 = (byte *)FUN_032dd938(param_2);
  local_48 = pbVar2;
  if (pbVar2 != param_2) {
    pcVar4 = *(code **)(*param_1 + 0x10);
    if ((pcVar4 != (code *)0x0) &&
       (uVar3 = (*pcVar4)(pbVar2,*(undefined8 *)(*param_1 + 0x18)), (uVar3 & 1) == 0)) {
      lVar5 = *(long *)(*param_1 + 0x28);
      if ((lVar5 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar5 + 0x50) ||
          (uVar3 = FUN_03327170(), (uVar3 & 1) != 0)))) {
        uVar3 = FUN_03327170();
        if ((uVar3 & 1) == 0) {
          FUN_03326994(auStack_198,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30)
                      );
          lVar5 = FUN_03326338(auStack_198,
                               "Type \'{}\' resolved to an unreachable type after resolving typedefs."
                               ,&DAT_0434fa00,param_2);
          *(undefined4 *)(lVar5 + 0x1c) = 0;
          *(char **)(lVar5 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar5 + 0x40) = 0x325;
          FUN_033269dc(auStack_198);
        }
        else {
          FUN_03326a7c(auStack_198,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30)
                      );
          lVar5 = FUN_03326338(auStack_198,
                               "Type \'{}\' resolved to an unreachable type after resolving typedefs."
                               ,&DAT_0434fa00,param_2);
          *(undefined4 *)(lVar5 + 0x1c) = 0;
          *(char **)(lVar5 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar5 + 0x40) = 0x325;
          FUN_03326adc(auStack_198);
        }
      }
      local_38[0] = 0;
      FUN_03319240(local_38);
      return local_38[0];
    }
  }
  if ((*pbVar2 & 1) == 0) {
    FUN_03319240(local_40);
    lVar5 = *(long *)(*param_1 + 0x28);
    if ((lVar5 != 0) &&
       ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar5 + 0x50) ||
        (uVar3 = FUN_03327170(), (uVar3 & 1) != 0)))) {
      uVar3 = FUN_03327170();
      if ((uVar3 & 1) == 0) {
        FUN_03326994(auStack_198,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        lVar5 = FUN_03326338(auStack_198,
                             "Type \'{}\' resolved to type \'{}\' which is a decorator, so not canonical."
                             ,&DAT_0434fb00,param_2,&local_48);
        *(char **)(lVar5 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar5 + 0x40) = 0x326;
        FUN_033269dc(auStack_198);
      }
      else {
        FUN_03326a7c(auStack_198,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        lVar5 = FUN_03326338(auStack_198,
                             "Type \'{}\' resolved to type \'{}\' which is a decorator, so not canonical."
                             ,&DAT_0434fb00,param_2,&local_48);
        *(char **)(lVar5 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar5 + 0x40) = 0x326;
        FUN_03326adc(auStack_198);
      }
    }
    if (*(char *)*param_1 != '\0') {
      return local_40[0];
    }
  }
  local_1a0 = (ulong *)FUN_032e20b0(param_2,0x2000);
  if (local_1a0 != (ulong *)0x0) {
    if (*local_1a0 == 0) {
      FUN_03319240(local_40);
      lVar5 = *(long *)(*param_1 + 0x28);
      if ((lVar5 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar5 + 0x50) ||
          (uVar3 = FUN_03327170(), (uVar3 & 1) != 0)))) {
        uVar3 = FUN_03327170();
        if ((uVar3 & 1) == 0) {
          FUN_03326994(auStack_198,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30)
                      );
          lVar5 = FUN_03326338(auStack_198,"Type \'{}\' has empty Opt::INHERITANCE.",&DAT_0434fa00,
                               param_2);
          *(char **)(lVar5 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar5 + 0x40) = 0x32b;
          FUN_033269dc(auStack_198);
        }
        else {
          FUN_03326a7c(auStack_198,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30)
                      );
          lVar5 = FUN_03326338(auStack_198,"Type \'{}\' has empty Opt::INHERITANCE.",&DAT_0434fa00,
                               param_2);
          *(char **)(lVar5 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar5 + 0x40) = 0x32b;
          FUN_03326adc(auStack_198);
        }
      }
      if (*(char *)*param_1 != '\0') {
        return local_40[0];
      }
    }
    local_1a8 = (ulong *)FUN_032e20b0(local_48,0x2000);
    if (local_1a8 == (ulong *)0x0) {
      local_1a8 = (ulong *)0x0;
    }
    uVar3 = FUN_032ddbec(&local_1a0,&local_1a8);
    if ((uVar3 & 1) == 0) {
      FUN_03319240(local_40);
      lVar5 = *(long *)(*param_1 + 0x28);
      if ((lVar5 != 0) &&
         ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar5 + 0x50) ||
          (uVar3 = FUN_03327170(), (uVar3 & 1) != 0)))) {
        uVar3 = FUN_03327170();
        bVar1 = (uVar3 & 1) != 0;
        if (bVar1) {
          FUN_03326a7c(auStack_198,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30)
                      );
          uVar3 = *local_1a0;
          local_1f0 = (uint)uVar3 & 3;
          local_1f8 = (uVar3 & 0x1fffc) << 0x1e | uVar3 >> 0x11 & 0xffffffff;
          uVar3 = *local_1a0;
          local_200 = (uint)uVar3 & 3;
          local_208 = (uVar3 & 0x1fffc) << 0x1e | uVar3 >> 0x11 & 0xffffffff;
          uVar3 = *local_1a8;
          local_210 = (uint)uVar3 & 3;
          local_218 = (uVar3 & 0x1fffc) << 0x1e | uVar3 >> 0x11 & 0xffffffff;
          uVar3 = *local_1a8;
          local_220 = (uint)uVar3 & 3;
          local_228 = (uVar3 & 0x1fffc) << 0x1e | uVar3 >> 0x11 & 0xffffffff;
          lVar5 = FUN_03326338(auStack_198,
                               "Type \'{}\' has inheritance {}/{} but the corresponding resolved type \'{}\' has a different inheritance {}/{}."
                               ,&DAT_0434fb18,param_2,&local_1f8,(ulong)&local_208 | 4,&local_48,
                               &local_218,(ulong)&local_228 | 4);
        }
        else {
          FUN_03326994(&local_1f8,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30))
          ;
          uVar3 = *local_1a0;
          local_200 = (uint)uVar3 & 3;
          local_208 = (uVar3 & 0x1fffc) << 0x1e | uVar3 >> 0x11 & 0xffffffff;
          uVar3 = *local_1a0;
          local_210 = (uint)uVar3 & 3;
          local_218 = (uVar3 & 0x1fffc) << 0x1e | uVar3 >> 0x11 & 0xffffffff;
          uVar3 = *local_1a8;
          local_220 = (uint)uVar3 & 3;
          local_228 = (uVar3 & 0x1fffc) << 0x1e | uVar3 >> 0x11 & 0xffffffff;
          uVar3 = *local_1a8;
          local_230 = (uint)uVar3 & 3;
          uStack_238 = (uVar3 & 0x1fffc) << 0x1e | uVar3 >> 0x11 & 0xffffffff;
          lVar5 = FUN_03326338(&local_1f8,
                               "Type \'{}\' has inheritance {}/{} but the corresponding resolved type \'{}\' has a different inheritance {}/{}."
                               ,&DAT_0434fb18,param_2,&local_208,(ulong)&local_218 | 4,&local_48,
                               &local_228,(ulong)&uStack_238 | 4);
        }
        *(char **)(lVar5 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar5 + 0x40) = 0x32f;
        if (bVar1) {
          FUN_03326adc(auStack_198);
        }
        else {
          FUN_033269dc(&local_1f8);
        }
      }
    }
  }
  return local_40[0];
}


