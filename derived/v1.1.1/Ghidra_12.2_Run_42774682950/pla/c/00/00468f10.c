/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00468f10; name: FUN_00468f10
 */


undefined8 FUN_00468f10(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  
  iVar2 = FUN_00407950(*(undefined8 *)(param_1 + 0x98));
  iVar9 = iVar2 + -1;
  lVar4 = FUN_00407970(*(undefined8 *)(param_1 + 0x98),iVar9);
  lVar6 = lVar4;
  if (*(int *)(param_1 + 0xf0) == 0) {
    iVar3 = (**(code **)(param_1 + 0x48))(param_1,lVar4,lVar4);
    if (iVar3 != 0) {
      if (-1 < iVar9) goto LAB_00469038;
      return 1;
    }
    lVar10 = lVar4;
    if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x1a) >> 3 & 1) == 0) {
      if (1 < iVar2) {
        iVar9 = iVar2 + -2;
        *(int *)(param_1 + 0xac) = iVar9;
        lVar6 = FUN_00407970(*(undefined8 *)(param_1 + 0x98),iVar9);
        goto LAB_00469030;
      }
      *(undefined4 *)(param_1 + 0xac) = 0;
      if (lVar4 == 0) {
        lVar4 = FUN_00407970(*(undefined8 *)(param_1 + 0x98),0);
      }
      *(long *)(param_1 + 0xb8) = lVar4;
      *(undefined4 *)(param_1 + 0xb0) = 0x15;
                    /* WARNING: Could not recover jumptable at 0x00468fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
      return uVar5;
    }
  }
  else {
    lVar10 = 0;
  }
LAB_00468fe8:
  do {
    while( true ) {
      lVar4 = lVar6;
      uVar5 = FUN_00468560(param_1,lVar4,iVar9);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      *(long *)(param_1 + 0xb8) = lVar4;
      *(long *)(param_1 + 0xc0) = lVar10;
      *(int *)(param_1 + 0xac) = iVar9;
      uVar5 = (**(code **)(param_1 + 0x38))(1,param_1);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      iVar2 = iVar9 + -1;
      bVar1 = 0 < iVar9;
      lVar6 = lVar4;
      iVar9 = iVar2;
      if (bVar1) {
        lVar6 = FUN_00407970(*(undefined8 *)(param_1 + 0x98),iVar2);
LAB_00469030:
        lVar10 = lVar4;
      }
      lVar4 = lVar10;
      if (iVar9 < 0) {
        return 1;
      }
LAB_00469038:
      lVar10 = lVar4;
      if ((lVar6 != lVar4) || ((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) >> 6 & 1) != 0)) break;
      lVar6 = lVar4;
    }
    lVar7 = FUN_0044e660(lVar4);
    if (lVar7 == 0) {
      iVar2 = iVar9;
      if (lVar6 != lVar4) {
        iVar2 = iVar9 + 1;
      }
      *(int *)(param_1 + 0xac) = iVar2;
      if (lVar4 == 0) {
        lVar4 = FUN_00407970(*(undefined8 *)(param_1 + 0x98));
      }
      uVar8 = 6;
      *(long *)(param_1 + 0xb8) = lVar4;
    }
    else {
      iVar2 = FUN_004648f0(lVar6,lVar7);
      if (0 < iVar2) goto LAB_00468fe8;
      *(int *)(param_1 + 0xac) = iVar9;
      lVar4 = lVar6;
      if (lVar6 == 0) {
        lVar4 = FUN_00407970(*(undefined8 *)(param_1 + 0x98),iVar9);
      }
      *(long *)(param_1 + 0xb8) = lVar4;
      uVar8 = 7;
    }
    *(undefined4 *)(param_1 + 0xb0) = uVar8;
    uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  } while( true );
}


