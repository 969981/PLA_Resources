/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331dd44; name: FUN_0331dd44
 */


undefined4 FUN_0331dd44(long *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  ulong *puVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  uint local_1cc;
  undefined4 local_1c8;
  uint local_1c4;
  uint local_1c0;
  undefined4 local_1bc;
  undefined1 auStack_1b8 [336];
  ulong *local_68;
  undefined4 local_58;
  uint local_54;
  
  local_58 = 0;
  puVar4 = param_2;
  do {
    if (((byte)*puVar4 >> 1 & 1) != 0) {
      puVar4 = (ulong *)puVar4[3];
      local_68 = puVar4;
      if (puVar4 == (ulong *)0x0) goto LAB_0331ddd0;
      uVar2 = FUN_032e35d8(puVar4);
      if ((uVar2 & 0x1f) == 1) {
        return local_58;
      }
      pcVar5 = *(code **)(*param_1 + 0x10);
      if ((pcVar5 != (code *)0x0) &&
         (uVar2 = (*pcVar5)(puVar4,*(undefined8 *)(*param_1 + 0x18)), (uVar2 & 1) == 0)) {
        FUN_03319240(&local_58);
        lVar8 = *(long *)(*param_1 + 0x28);
        if ((lVar8 != 0) &&
           ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar8 + 0x50) ||
            (uVar2 = FUN_03327170(), (uVar2 & 1) != 0)))) {
          uVar2 = FUN_03327170();
          if ((uVar2 & 1) == 0) {
            FUN_03326994(auStack_1b8,*(undefined8 *)(*param_1 + 0x28),
                         *(undefined1 *)(*param_1 + 0x30));
            lVar8 = FUN_03326338(auStack_1b8,"Array type \'{}\' has unreachable element type.",
                                 &DAT_0434fbc0,param_2);
            *(char **)(lVar8 + 0x38) =
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            *(undefined8 *)(lVar8 + 0x40) = 0x305;
            FUN_033269dc(auStack_1b8);
          }
          else {
            FUN_03326a7c(auStack_1b8,*(undefined8 *)(*param_1 + 0x28),
                         *(undefined1 *)(*param_1 + 0x30));
            lVar8 = FUN_03326338(auStack_1b8,"Array type \'{}\' has unreachable element type.",
                                 &DAT_0434fbc0,param_2);
            *(char **)(lVar8 + 0x38) =
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            *(undefined8 *)(lVar8 + 0x40) = 0x305;
            FUN_03326adc(auStack_1b8);
          }
        }
        if (*(char *)*param_1 != '\0') {
          return local_58;
        }
      }
      puVar1 = (undefined8 *)FUN_032e20b0(param_2,1);
      if (puVar1 == (undefined8 *)0x0) {
        return local_58;
      }
      if ((int)((ulong)*puVar1 >> 8) < 1) {
        return local_58;
      }
      puVar4 = param_2;
      goto LAB_0331dec0;
    }
    puVar4 = (ulong *)puVar4[1];
  } while (puVar4 != (ulong *)0x0);
  local_68 = (ulong *)0x0;
LAB_0331ddd0:
  puVar1 = (undefined8 *)FUN_032e20b0(param_2,1);
  if (puVar1 == (undefined8 *)0x0) {
    return local_58;
  }
  if ((int)((ulong)*puVar1 >> 8) == 0) {
    return local_58;
  }
  FUN_03319240(&local_58);
  lVar8 = *(long *)(*param_1 + 0x28);
  if (lVar8 == 0) {
    return local_58;
  }
  if ((*(byte *)(lVar8 + 0x50) < *(byte *)(*param_1 + 0x30)) &&
     (uVar2 = FUN_03327170(), (uVar2 & 1) == 0)) {
    return local_58;
  }
  uVar2 = FUN_03327170();
  if ((uVar2 & 1) != 0) {
    FUN_03326a7c(auStack_1b8,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
    lVar8 = FUN_03326338(auStack_1b8,"Fixed array type {} must have a subtype",&DAT_0434fbc0,param_2
                        );
    uVar9 = 0x311;
    goto LAB_0331e1b8;
  }
  FUN_03326994(auStack_1b8,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
  lVar8 = FUN_03326338(auStack_1b8,"Fixed array type {} must have a subtype",&DAT_0434fbc0,param_2);
  uVar9 = 0x311;
  goto LAB_0331de5c;
LAB_0331dec0:
  uVar6 = (uint)*puVar4;
  if ((uVar6 >> 0x14 & 1) == 0) {
    if (((*puVar4 & 1) != 0) || (puVar4 = (ulong *)puVar4[1], puVar4 == (ulong *)0x0))
    goto LAB_0331ded4;
    goto LAB_0331dec0;
  }
  if (puVar4 != (ulong *)0x0) {
    uVar6 = (uVar6 & 0xfffff) - (uVar6 >> 1 & 0x55555);
    uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
    uVar6 = (uint)(ushort)puVar4[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2
                                ];
    goto LAB_0331df10;
  }
LAB_0331ded4:
  uVar6 = 0;
LAB_0331df10:
  puVar4 = local_68;
  while( true ) {
    uVar7 = (uint)*puVar4;
    if ((uVar7 >> 0x14 & 1) != 0) break;
    if (((*puVar4 & 1) != 0) || (puVar4 = (ulong *)puVar4[1], puVar4 == (ulong *)0x0))
    goto LAB_0331df28;
  }
  if (puVar4 != (ulong *)0x0) {
    uVar7 = (uVar7 & 0xfffff) - (uVar7 >> 1 & 0x55555);
    uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
    uVar7 = (uint)(ushort)puVar4[(ulong)((uVar7 + (uVar7 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2
                                ];
    goto LAB_0331df64;
  }
LAB_0331df28:
  uVar7 = 0;
LAB_0331df64:
  puVar1 = (undefined8 *)FUN_032e20b0(param_2,1);
  if (puVar1 == (undefined8 *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)((ulong)*puVar1 >> 8);
  }
  if (uVar6 == iVar3 * uVar7) {
    return local_58;
  }
  FUN_03319240(&local_58);
  lVar8 = *(long *)(*param_1 + 0x28);
  if (lVar8 == 0) {
    return local_58;
  }
  if ((*(byte *)(lVar8 + 0x50) < *(byte *)(*param_1 + 0x30)) &&
     (uVar2 = FUN_03327170(), (uVar2 & 1) == 0)) {
    return local_58;
  }
  uVar2 = FUN_03327170();
  if ((uVar2 & 1) != 0) {
    FUN_03326a7c(auStack_1b8,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
    puVar4 = param_2;
    do {
      uVar6 = (uint)*puVar4;
      if ((uVar6 >> 0x14 & 1) != 0) {
        local_1c4 = 0;
        if (puVar4 != (ulong *)0x0) {
          uVar6 = (uVar6 & 0xfffff) - (uVar6 >> 1 & 0x55555);
          uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
          local_1c4 = (uint)(ushort)puVar4[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >>
                                                  0x18) + 2];
        }
        goto LAB_0331e278;
      }
      if ((*puVar4 & 1) != 0) {
        local_1c4 = 0;
        goto LAB_0331e278;
      }
      puVar4 = (ulong *)puVar4[1];
    } while (puVar4 != (ulong *)0x0);
    local_1c4 = 0;
LAB_0331e278:
    puVar1 = (undefined8 *)FUN_032e20b0(param_2,1);
    if (puVar1 == (undefined8 *)0x0) {
      local_1c8 = 0;
    }
    else {
      local_1c8 = (undefined4)((ulong)*puVar1 >> 8);
    }
    puVar4 = local_68;
    do {
      uVar6 = (uint)*puVar4;
      if ((uVar6 >> 0x14 & 1) != 0) {
        local_1cc = 0;
        if (puVar4 != (ulong *)0x0) {
          uVar6 = (uVar6 & 0xfffff) - (uVar6 >> 1 & 0x55555);
          uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
          local_1cc = (uint)(ushort)puVar4[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >>
                                                  0x18) + 2];
        }
        goto LAB_0331e2e8;
      }
      if ((*puVar4 & 1) != 0) {
        local_1cc = 0;
        goto LAB_0331e2e8;
      }
      puVar4 = (ulong *)puVar4[1];
    } while (puVar4 != (ulong *)0x0);
    local_1cc = 0;
LAB_0331e2e8:
    lVar8 = FUN_03326338(auStack_1b8,
                         "Fixed size array type \'{}\' ({} bytes) contains {} \'{}\' ({} bytes each), sizes mismatch."
                         ,&DAT_0434fbd0,param_2,&local_1c4,&local_1c8,&local_68,&local_1cc);
    uVar9 = 0x30b;
LAB_0331e1b8:
    *(char **)(lVar8 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
    ;
    *(undefined8 *)(lVar8 + 0x40) = uVar9;
    FUN_03326adc(auStack_1b8);
    return local_58;
  }
  FUN_03326994(auStack_1b8,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
  puVar4 = param_2;
  do {
    uVar6 = (uint)*puVar4;
    if ((uVar6 >> 0x14 & 1) != 0) {
      local_54 = 0;
      if (puVar4 != (ulong *)0x0) {
        uVar6 = (uVar6 & 0xfffff) - (uVar6 >> 1 & 0x55555);
        uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
        local_54 = (uint)(ushort)puVar4[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >>
                                               0x18) + 2];
      }
      goto LAB_0331e0b4;
    }
    if ((*puVar4 & 1) != 0) {
      local_54 = 0;
      goto LAB_0331e0b4;
    }
    puVar4 = (ulong *)puVar4[1];
  } while (puVar4 != (ulong *)0x0);
  local_54 = 0;
LAB_0331e0b4:
  puVar1 = (undefined8 *)FUN_032e20b0(param_2,1);
  if (puVar1 == (undefined8 *)0x0) {
    local_1bc = 0;
  }
  else {
    local_1bc = (undefined4)((ulong)*puVar1 >> 8);
  }
  puVar4 = local_68;
  do {
    uVar6 = (uint)*puVar4;
    if ((uVar6 >> 0x14 & 1) != 0) {
      local_1c0 = 0;
      if (puVar4 != (ulong *)0x0) {
        uVar6 = (uVar6 & 0xfffff) - (uVar6 >> 1 & 0x55555);
        uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
        local_1c0 = (uint)(ushort)puVar4[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >>
                                                0x18) + 2];
      }
      goto LAB_0331e124;
    }
    if ((*puVar4 & 1) != 0) {
      local_1c0 = 0;
      goto LAB_0331e124;
    }
    puVar4 = (ulong *)puVar4[1];
  } while (puVar4 != (ulong *)0x0);
  local_1c0 = 0;
LAB_0331e124:
  lVar8 = FUN_03326338(auStack_1b8,
                       "Fixed size array type \'{}\' ({} bytes) contains {} \'{}\' ({} bytes each), sizes mismatch."
                       ,&DAT_0434fbd0,param_2,&local_54,&local_1bc,&local_68,&local_1c0);
  uVar9 = 0x30b;
LAB_0331de5c:
  *(char **)(lVar8 + 0x38) =
       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
  ;
  *(undefined8 *)(lVar8 + 0x40) = uVar9;
  FUN_033269dc(auStack_1b8);
  return local_58;
}


