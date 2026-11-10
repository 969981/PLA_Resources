/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013cda60; name: FUN_013cda60
 */


undefined8 FUN_013cda60(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  
  lVar6 = *param_1;
  switch(*(undefined4 *)(lVar6 + 0x670)) {
  case 0:
    *(int *)(lVar6 + 0x700) = (int)param_1[2];
    FUN_013cae50(lVar6,(int)param_1[2]);
    FUN_013cc774(lVar6,(int)param_1[1]);
    FUN_013c7d70(lVar6,0);
    uVar2 = 1;
    break;
  case 1:
    FUN_013ccb14(lVar6,(int)param_1[1]);
    uVar2 = 2;
    break;
  case 2:
    uVar3 = FUN_013ccb94(lVar6);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    uVar2 = 3;
    break;
  case 3:
    iVar1 = (int)param_1[2];
    if (iVar1 == 0) {
      FUN_013cafb4(lVar6);
      uVar2 = FUN_0281a4fc();
      *(undefined4 *)(lVar6 + 0x710) = uVar2;
      FUN_013cafb4(lVar6);
      uVar2 = FUN_0281a508();
      *(undefined4 *)(lVar6 + 0x714) = uVar2;
      uVar4 = FUN_013cafb4(lVar6);
      FUN_0281e380(uVar4,*(undefined4 *)(lVar6 + 0x708),0);
      uVar4 = FUN_013cafb4(lVar6);
      puVar5 = (undefined4 *)(lVar6 + 0x70c);
LAB_013cdc08:
      FUN_0281e390(uVar4,*puVar5);
      FUN_013c8038(lVar6);
    }
    else {
      if (iVar1 == 1) {
        FUN_013cafb4(lVar6);
        uVar2 = FUN_0281a4fc();
        *(undefined4 *)(lVar6 + 0x708) = uVar2;
        FUN_013cafb4(lVar6);
        uVar2 = FUN_0281a508();
        *(undefined4 *)(lVar6 + 0x70c) = uVar2;
        uVar4 = FUN_013cafb4(lVar6);
        FUN_0281e380(uVar4,*(undefined4 *)(lVar6 + 0x710),0);
        uVar4 = FUN_013cafb4(lVar6);
        puVar5 = (undefined4 *)(lVar6 + 0x714);
        goto LAB_013cdc08;
      }
      if (iVar1 == 2) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
    uVar2 = 4;
    break;
  case 4:
    FUN_013cc850(lVar6,(int)param_1[1]);
    uVar2 = 5;
    break;
  case 5:
    uVar3 = FUN_013cc8d0(lVar6);
    if ((uVar3 & 1) != 0) {
      FUN_013c7d70(lVar6,*(undefined1 *)(lVar6 + 0x705));
      FUN_00d42438(lVar6,1,1);
      FUN_00d428b0(lVar6,0);
      *(undefined4 *)(lVar6 + 0x670) = 0;
      return 1;
    }
  default:
    return 0;
  }
  *(undefined4 *)(lVar6 + 0x670) = uVar2;
  return 0;
}


