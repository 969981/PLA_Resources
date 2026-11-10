/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ca230; name: FUN_001ca230
 */


undefined8 FUN_001ca230(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  char *local_1c8;
  long local_1c0;
  long lStack_1b8;
  char *local_70 [2];
  
  puVar2 = PTR_DAT_04372550;
  if (*(long *)PTR_DAT_04372550 == 0) {
    uVar8 = 0x80040200;
  }
  else {
    iVar5 = FUN_02bfca40();
    puVar4 = PTR_DAT_04372620;
    puVar3 = PTR_DAT_043725f8;
    if (-1 < iVar5) {
      lVar9 = 0;
      lVar10 = 0x18;
      uVar1 = *(uint *)PTR_DAT_043725f8 & 1;
      while( true ) {
        if (((uVar1 != 0) &&
            (FUN_032c3f5c(&local_1c0,*(long *)puVar2 + lVar10), local_1c0 == lStack_1b8)) &&
           ((2 < DAT_0438e858 || (uVar7 = FUN_03327170(), (uVar7 & 1) != 0)))) {
          uVar7 = FUN_03327170();
          uVar1 = (uint)lVar9 & 0xff;
          if ((uVar7 & 1) == 0) {
            FUN_03326994(&local_1c0,&DAT_0438e808,3);
            local_70[0] = "Invalid";
            if (uVar1 < 6) {
              local_70[0] = (&PTR_s_Physics_0411bb28)[(char)lVar9];
            }
            lVar6 = FUN_03326338(&local_1c0,
                                 "  [ERROR: MISSING KEY] Product license key for Havok {} is missing."
                                 ,puVar4,local_70);
            *(char **)(lVar6 + 0x38) =
                 "X:/CI/Stable_Package_Build_nx64/Source/Common/Internal/Keycode/hkKeycodeManager.cpp"
            ;
            *(undefined8 *)(lVar6 + 0x40) = 0x166;
            FUN_033269dc(&local_1c0);
          }
          else {
            FUN_03326a7c(&local_1c0,&DAT_0438e808,3);
            local_1c8 = "Invalid";
            if (uVar1 < 6) {
              local_1c8 = (&PTR_s_Physics_0411bb28)[(char)lVar9];
            }
            lVar6 = FUN_03326338(&local_1c0,
                                 "  [ERROR: MISSING KEY] Product license key for Havok {} is missing."
                                 ,puVar4,&local_1c8);
            *(char **)(lVar6 + 0x38) =
                 "X:/CI/Stable_Package_Build_nx64/Source/Common/Internal/Keycode/hkKeycodeManager.cpp"
            ;
            *(undefined8 *)(lVar6 + 0x40) = 0x166;
            FUN_03326adc(&local_1c0);
          }
        }
        if (lVar9 == 5) break;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 0x101;
        uVar1 = *(uint *)puVar3 & 1 << (ulong)((uint)lVar9 & 0x1f);
      }
    }
    uVar8 = 0;
  }
  return uVar8;
}


