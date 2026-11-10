/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00374a08; name: FUN_00374a08
 */


undefined8
FUN_00374a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,long *param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  void *pvVar8;
  size_t sVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  undefined1 auStack_e0 [8];
  long *local_d8;
  byte local_d0;
  undefined8 local_c0;
  int local_b8;
  undefined8 local_a0;
  long *local_98;
  byte local_90 [16];
  undefined8 local_80;
  int local_78;
  undefined1 auStack_70 [16];
  
  FUN_0038e920(param_2,param_1);
  uVar4 = FUN_00395cbc();
  if ((uVar4 & 1) == 0) {
    lVar5 = FUN_00342dac(param_3);
    plVar7 = (long *)(**(code **)(*param_4 + 0x10))(param_4,lVar5);
    FUN_0038e180(&local_a0,param_2,param_1,param_3);
    while( true ) {
                    /* try { // try from 00374bf0 to 00374c03 has its CatchHandler @ 00374e74 */
      FUN_0038e2b4(auStack_e0,param_2,param_1,param_3);
                    /* try { // try from 00374c10 to 00374c1b has its CatchHandler @ 00374e78 */
      uVar4 = (**(code **)(*local_98 + 0x28))(local_98,&local_a0,auStack_e0);
                    /* try { // try from 00374c2c to 00374c33 has its CatchHandler @ 00374ebc */
      (**(code **)(*local_d8 + 0x80))(local_d8,auStack_e0);
      if ((local_b8 == 9) && ((local_d0 & 1) != 0)) {
        FUN_002e2ea0(PTR_LAB_04373088,local_c0);
      }
      if ((uVar4 & 1) != 0) break;
                    /* try { // try from 00374c64 to 00374c93 has its CatchHandler @ 00374ed0 */
      uVar6 = (**(code **)(*plVar7 + 0x18))(plVar7);
      FUN_00374f20(local_90,uVar6,*(undefined8 *)(lVar5 + 0x28));
      FUN_003751cc(auStack_70,uVar6,*(long *)(lVar5 + 0x28) + 0x98);
      puVar1 = (undefined8 *)param_5[1];
      if (puVar1 < (undefined8 *)param_5[2]) {
        *puVar1 = uVar6;
        param_5[1] = param_5[1] + 8;
      }
      else {
        lVar13 = (long)puVar1 - *param_5 >> 3;
        uVar4 = lVar13 + 1;
        if (uVar4 >> 0x3d != 0) {
                    /* try { // try from 00374e30 to 00374e37 has its CatchHandler @ 00374e40 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar10 = param_5[2] - *param_5;
        if ((ulong)(lVar10 >> 3) < 0xfffffffffffffff) {
          uVar11 = lVar10 >> 2;
          if (uVar4 <= uVar11) {
            uVar4 = uVar11;
          }
          if (uVar4 != 0) goto LAB_00374ce4;
          lVar10 = 0;
        }
        else {
          uVar4 = 0x1fffffffffffffff;
LAB_00374ce4:
          lVar10 = FUN_002e2e80(PTR_FUN_04373078,uVar4 << 3);
        }
        puVar1 = (undefined8 *)(lVar10 + lVar13 * 8);
        *puVar1 = uVar6;
        pvVar8 = (void *)*param_5;
        sVar9 = param_5[1] - (long)pvVar8;
        if (0 < (long)sVar9) {
          memcpy((void *)((long)puVar1 - sVar9),pvVar8,sVar9);
          pvVar8 = (void *)*param_5;
        }
        *param_5 = (long)((long)puVar1 - sVar9);
        param_5[1] = (long)(puVar1 + 1);
        param_5[2] = lVar10 + uVar4 * 8;
        if (pvVar8 != (void *)0x0) {
          FUN_002e2ea0(PTR_LAB_04373088);
        }
      }
                    /* try { // try from 00374be8 to 00374bef has its CatchHandler @ 00374e70 */
      (**(code **)(*local_98 + 0x90))(local_98,&local_a0);
    }
                    /* try { // try from 00374d4c to 00374d53 has its CatchHandler @ 00374e44 */
    (**(code **)(*local_98 + 0x80))(local_98,&local_a0);
    if ((local_78 == 9) && ((local_90[0] & 1) != 0)) {
      FUN_002e2ea0(PTR_LAB_04373088,local_80);
    }
    uVar6 = 1;
  }
  else {
    lVar5 = FUN_0038dc64(param_2,param_1,param_3,10,0xffffffff,0);
    puVar3 = PTR_LAB_04373088;
    puVar2 = PTR_FUN_04373078;
    if (0 < *(int *)(lVar5 + 8)) {
      iVar12 = 0;
      do {
        while( true ) {
          uVar6 = FUN_0037d560(lVar5,iVar12);
          puVar1 = (undefined8 *)param_5[1];
          if ((undefined8 *)param_5[2] <= puVar1) break;
          *puVar1 = uVar6;
          param_5[1] = param_5[1] + 8;
LAB_00374aa4:
          iVar12 = iVar12 + 1;
          if (*(int *)(lVar5 + 8) <= iVar12) goto LAB_00374b70;
        }
        lVar13 = (long)puVar1 - *param_5 >> 3;
        uVar4 = lVar13 + 1;
        if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar10 = param_5[2] - *param_5;
        if ((ulong)(lVar10 >> 3) < 0xfffffffffffffff) {
          uVar11 = lVar10 >> 2;
          if (uVar4 <= uVar11) {
            uVar4 = uVar11;
          }
          if (uVar4 != 0) goto LAB_00374b10;
          lVar10 = 0;
        }
        else {
          uVar4 = 0x1fffffffffffffff;
LAB_00374b10:
          lVar10 = FUN_002e2e80(puVar2,uVar4 << 3);
        }
        puVar1 = (undefined8 *)(lVar10 + lVar13 * 8);
        *puVar1 = uVar6;
        pvVar8 = (void *)*param_5;
        sVar9 = param_5[1] - (long)pvVar8;
        if (0 < (long)sVar9) {
          memcpy((void *)((long)puVar1 - sVar9),pvVar8,sVar9);
          pvVar8 = (void *)*param_5;
        }
        *param_5 = (long)((long)puVar1 - sVar9);
        param_5[1] = (long)(puVar1 + 1);
        param_5[2] = lVar10 + uVar4 * 8;
        if (pvVar8 == (void *)0x0) goto LAB_00374aa4;
        FUN_002e2ea0(puVar3);
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(lVar5 + 8));
    }
LAB_00374b70:
    uVar6 = 0;
  }
  lVar5 = FUN_00342dac(param_3);
  puVar2 = PTR_nothrow_04373ab8;
  local_a0 = *(undefined8 *)(lVar5 + 0x28);
  lVar5 = *param_5;
  lVar13 = param_5[1];
  lVar10 = lVar13 - lVar5;
  uVar4 = lVar10 >> 3;
  if (lVar10 < 0x401) {
    pvVar8 = (void *)0x0;
    uVar11 = 0;
  }
  else {
    uVar11 = uVar4;
    if (0xffffffffffffffe < (long)uVar4) {
      uVar11 = 0xfffffffffffffff;
    }
    do {
      pvVar8 = operator_new(uVar11 << 3,(nothrow_t *)puVar2);
      if (pvVar8 != (void *)0x0) goto LAB_00374de4;
      uVar11 = uVar11 >> 1;
    } while (uVar11 != 0);
    pvVar8 = (void *)0x0;
  }
LAB_00374de4:
                    /* try { // try from 00374de4 to 00374dff has its CatchHandler @ 00374e58 */
  FUN_0037d650(lVar5,lVar13,&local_a0,uVar4,pvVar8,uVar11);
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  return uVar6;
}


