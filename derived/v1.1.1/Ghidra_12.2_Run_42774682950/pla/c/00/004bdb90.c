/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bdb90; name: FUN_004bdb90
 */


undefined8 FUN_004bdb90(long *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_00406f10(*param_1);
  uVar5 = 0;
  if (lVar3 != 0) {
    iVar1 = FUN_00407950();
    while ((0 < iVar1 && (lVar4 = FUN_00407970(lVar3,0), *(int *)(lVar4 + 0x2c) == 0x304))) {
      FUN_00407680(lVar3,0);
      iVar1 = FUN_00407950(lVar3);
    }
    iVar1 = FUN_00407950(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        uVar5 = FUN_00407970(param_3,iVar1);
        FUN_00407470(lVar3,uVar5,iVar1);
        iVar1 = iVar1 + 1;
        iVar2 = FUN_00407950(param_3);
      } while (iVar1 < iVar2);
    }
    lVar4 = FUN_00406f10(lVar3);
    uVar5 = 0;
    if (lVar4 != 0) {
      FUN_00407010(*param_2);
      *param_2 = lVar4;
      FUN_00406ef0(lVar4,PTR_LAB_04374630);
      FUN_004079e0(*param_2);
      FUN_00407010(*param_1);
      uVar5 = 1;
      *param_1 = lVar3;
    }
  }
  return uVar5;
}


