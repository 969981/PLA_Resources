/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b2190; name: FUN_032b2190
 */


/* WARNING: Removing unreachable block (ram,0x032b26f4) */
/* WARNING: Removing unreachable block (ram,0x032b271c) */
/* WARNING: Removing unreachable block (ram,0x032b2724) */
/* WARNING: Removing unreachable block (ram,0x032b274c) */
/* WARNING: Removing unreachable block (ram,0x032b2328) */
/* WARNING: Removing unreachable block (ram,0x032b22d4) */
/* WARNING: Removing unreachable block (ram,0x032b26dc) */
/* WARNING: Removing unreachable block (ram,0x032b26e4) */
/* WARNING: Removing unreachable block (ram,0x032b26ec) */
/* WARNING: Removing unreachable block (ram,0x032b2770) */
/* WARNING: Removing unreachable block (ram,0x032b2768) */
/* WARNING: Removing unreachable block (ram,0x032b277c) */
/* WARNING: Removing unreachable block (ram,0x032b279c) */
/* WARNING: Removing unreachable block (ram,0x032b27a8) */
/* WARNING: Removing unreachable block (ram,0x032b27b0) */
/* WARNING: Removing unreachable block (ram,0x032b27c0) */

ulong FUN_032b2190(long *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 local_2e4 [3];
  undefined1 uStack_2e1;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0 [520];
  undefined8 local_c8 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  local_80 = DAT_03888e60;
  uStack_78 = DAT_03888e68;
  iVar3 = FUN_032a895c(*(undefined4 *)(param_3 + 0x18),&local_80,auStack_70);
  if (iVar3 == 0) {
    uVar6 = 0x80040200;
    if ((DAT_044409c0 != '\0') || (uVar7 = FUN_03327170(), (uVar7 & 1) != 0)) {
      uVar7 = FUN_03327170();
      if ((uVar7 & 1) == 0) {
        FUN_03326994(&local_2e0,&DAT_04440970,1);
        local_c8[0] = FUN_032b5388(*(undefined4 *)(param_3 + 0x18));
        lVar8 = FUN_03326338(&local_2e0,
                             "No conversion from format \'{}\' to a format suitable for TGA files known."
                             ,&DAT_0411bac8,local_c8);
        *(char **)(lVar8 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/ImageUtilities/FileFormats/hkTgaFileFormat.cpp"
        ;
        *(undefined8 *)(lVar8 + 0x40) = 0x39;
        FUN_033269dc(&local_2e0);
      }
      else {
        FUN_03326a7c(&local_2e0,&DAT_04440970,1);
        local_88 = FUN_032b5388(*(undefined4 *)(param_3 + 0x18));
        lVar8 = FUN_03326338(&local_2e0,
                             "No conversion from format \'{}\' to a format suitable for TGA files known."
                             ,&DAT_0411bac8,&local_88);
        *(char **)(lVar8 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/ImageUtilities/FileFormats/hkTgaFileFormat.cpp"
        ;
        *(undefined8 *)(lVar8 + 0x40) = 0x39;
        FUN_03326adc(&local_2e0);
      }
    }
  }
  else {
    if (iVar3 == *(int *)(param_3 + 0x18)) {
      FUN_0332205c(local_c8);
      FUN_03322094(local_c8,param_2);
      uVar4 = FUN_032b5430(*(undefined4 *)(param_3 + 0x18));
      FUN_032c4b00(&local_2e0,0,0x12);
      local_2e0._0_3_ = CONCAT12(10,(undefined2)local_2e0);
      uVar1 = *(uint *)(param_3 + 0xc);
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      uVar2 = *(uint *)(param_3 + 0x10);
      local_2d8._0_5_ = CONCAT14((char)uVar1,(undefined4)local_2d8);
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      local_2d8 = CONCAT17((char)(uVar2 >> 8),
                           CONCAT16((char)uVar2,CONCAT15((char)(uVar1 >> 8),(undefined5)local_2d8)))
      ;
      local_2d0[0] = (char)uVar4;
      FUN_032afb80(local_c8,&local_2e0,0x12);
      uVar1 = *(uint *)(param_3 + 0x10);
      local_2e0 = local_2d0;
      local_2d8 = 0x8000008100000000;
      if (uVar1 < 2) {
        uVar1 = 1;
      }
      uStack_2e1 = 0xff;
      uVar5 = FUN_032a68ac(param_3,0,0,0,0,uVar1 - 1,0);
      FUN_032c4a00(local_2e4,uVar5,uVar4 >> 3);
                    /* WARNING: Could not recover jumptable at 0x032b2380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)((ulong)switchD_032b2380::switchdataD_03aaccbc * 4 + 0x32b2384))();
      return uVar6;
    }
    FUN_032a6040(&local_2e0);
    iVar3 = FUN_032a7918(param_3,&local_2e0,iVar3,0);
    if (iVar3 < 0) {
      uVar6 = 0x80040200;
    }
    else {
      uVar6 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_2e0);
    }
    FUN_032a61d4(&local_2e0);
  }
  return uVar6 & 0xffffffff;
}


