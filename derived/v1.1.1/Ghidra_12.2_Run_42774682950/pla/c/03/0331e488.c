/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331e488; name: FUN_0331e488
 */


ulong FUN_0331e488(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  ulong *local_1b8 [2];
  ulong local_1a8;
  long local_68;
  long local_58;
  
  uVar3 = FUN_0331e7e4(param_2);
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_032e35d8(param_2);
    if ((uVar3 & 0x1f) != 7) {
      param_2 = 0;
    }
    if (param_2 != 0) {
      local_68 = 0;
      local_58 = param_2;
      auVar10 = FUN_032e31d4(param_2);
      puVar2 = PTR_DAT_04389218;
      puVar1 = PTR_DAT_04389210;
      uVar3 = auVar10._8_8_ - auVar10._0_8_;
      if (0 < (int)(uVar3 >> 3)) {
        uVar9 = 0;
        do {
          puVar8 = *(ulong **)(auVar10._0_8_ + uVar9 * 8);
          local_1b8[0] = puVar8;
          uVar4 = FUN_032e35d8(puVar8);
          if ((puVar8 != (ulong *)0x0) && ((uVar4 & 0x1f) == 8)) {
            puVar5 = puVar8;
            do {
              uVar4 = *puVar5;
              if (((uint)uVar4 >> 2 & 1) != 0) {
                uVar4 = puVar5[(uVar4 >> 1 & 1) + (uVar4 & 1) + 2];
                goto LAB_0331e590;
              }
              puVar5 = (ulong *)puVar5[1];
            } while (puVar5 != (ulong *)0x0);
            uVar4 = 0;
LAB_0331e590:
            puVar5 = (ulong *)puVar1;
            do {
              uVar7 = *puVar5;
              if (((uint)uVar7 >> 2 & 1) != 0) {
                uVar7 = puVar5[(uVar7 >> 1 & 1) + (uVar7 & 1) + 2];
                goto LAB_0331e5bc;
              }
              puVar5 = (ulong *)puVar5[1];
            } while (puVar5 != (ulong *)0x0);
            uVar7 = 0;
LAB_0331e5bc:
            if (uVar7 == uVar4) {
LAB_0331e620:
              local_68 = FUN_032e2c18(local_1b8);
              if (local_68 == 0) {
                return 0;
              }
              FUN_032e2c7c(local_1b8,param_2,&DAT_04357f30);
              puVar8 = local_1b8[0];
              if ((local_1a8 & 1) != 0) {
                FUN_032e0c40(local_1a8 & 0xfffffffffffffffe);
              }
              if ((puVar8 != (ulong *)0x0) && ((char)*puVar8 != '\0')) {
                return 0;
              }
              lVar6 = *(long *)(*param_1 + 0x28);
              if ((lVar6 != 0) &&
                 ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar6 + 0x50) ||
                  (uVar3 = FUN_03327170(), (uVar3 & 1) != 0)))) {
                uVar3 = FUN_03327170();
                if ((uVar3 & 1) == 0) {
                  FUN_03326994(local_1b8,*(undefined8 *)(*param_1 + 0x28),
                               *(undefined1 *)(*param_1 + 0x30));
                  lVar6 = FUN_03326338(local_1b8,
                                       "Record type \'{}\' contains a hkRelArray \'{}\' but is not marked with a hk::ContainsRelArrays attribute."
                                       ,&DAT_0434fc00,&local_58,&local_68);
                  *(undefined4 *)(lVar6 + 0x1c) = 0;
                  *(char **)(lVar6 + 0x38) =
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  *(undefined8 *)(lVar6 + 0x40) = 0x362;
                  FUN_033269dc(local_1b8);
                }
                else {
                  FUN_03326a7c(local_1b8,*(undefined8 *)(*param_1 + 0x28),
                               *(undefined1 *)(*param_1 + 0x30));
                  lVar6 = FUN_03326338(local_1b8,
                                       "Record type \'{}\' contains a hkRelArray \'{}\' but is not marked with a hk::ContainsRelArrays attribute."
                                       ,&DAT_0434fc00,&local_58,&local_68);
                  *(undefined4 *)(lVar6 + 0x1c) = 0;
                  *(char **)(lVar6 + 0x38) =
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  *(undefined8 *)(lVar6 + 0x40) = 0x362;
                  FUN_03326adc(local_1b8);
                }
              }
              local_1b8[0] = (ulong *)((ulong)local_1b8[0] & 0xffffffff00000000);
              FUN_03319240(local_1b8);
              return (ulong)local_1b8[0] & 0xffffffff;
            }
            do {
              uVar4 = *puVar8;
              if (((uint)uVar4 >> 2 & 1) != 0) {
                uVar4 = puVar8[(uVar4 >> 1 & 1) + (uVar4 & 1) + 2];
                goto LAB_0331e5ec;
              }
              puVar8 = (ulong *)puVar8[1];
            } while (puVar8 != (ulong *)0x0);
            uVar4 = 0;
LAB_0331e5ec:
            puVar8 = (ulong *)puVar2;
            do {
              uVar7 = *puVar8;
              if (((uint)uVar7 >> 2 & 1) != 0) {
                uVar7 = puVar8[(uVar7 >> 1 & 1) + (uVar7 & 1) + 2];
                goto LAB_0331e618;
              }
              puVar8 = (ulong *)puVar8[1];
            } while (puVar8 != (ulong *)0x0);
            uVar7 = 0;
LAB_0331e618:
            if (uVar7 == uVar4) goto LAB_0331e620;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 != (uVar3 >> 3 & 0xffffffff));
      }
    }
  }
  return 0;
}


