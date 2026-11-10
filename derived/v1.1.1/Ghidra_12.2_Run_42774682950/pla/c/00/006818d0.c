/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006818d0; name: FUN_006818d0
 */


void FUN_006818d0(undefined8 *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  puVar3 = PTR_DAT_043737a8;
  puVar2 = PTR_DAT_043737a8;
  if (*(undefined **)(param_3 + 0x28) != (undefined *)0x0) {
    puVar2 = *(undefined **)(param_3 + 0x28);
  }
  uVar4 = FUN_006ddf20(puVar2);
  *param_1 = uVar4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar4 = FUN_00612290();
  param_1[4] = uVar4;
  puVar7 = (undefined8 *)0x0;
  if (*(long *)(param_3 + 0x20) != 0) {
    puVar7 = (undefined8 *)(*(long *)(param_3 + 0x20) + 8);
  }
  if (*(int *)(param_3 + 0x18) == 0) {
    return;
  }
  puVar1 = puVar7 + *(int *)(param_3 + 0x18);
  lVar8 = 0;
  lVar6 = *param_2;
  lVar9 = param_2[1];
  uVar4 = *puVar7;
  if (lVar6 != lVar9) goto LAB_0068198c;
LAB_00681954:
  do {
    puVar2 = puVar3;
    if (*(undefined **)(param_3 + 0x28) != (undefined *)0x0) {
      puVar2 = *(undefined **)(param_3 + 0x28);
    }
                    /* try { // try from 00681960 to 0068196b has its CatchHandler @ 006819ec */
    FUN_00681a08(param_1 + 1,uVar4,puVar2);
    while( true ) {
      puVar7 = puVar7 + 1;
      if (puVar7 == puVar1) {
        return;
      }
      lVar8 = lVar8 + 1;
      lVar6 = *param_2;
      lVar9 = param_2[1];
      uVar4 = *puVar7;
      if (lVar6 == lVar9) break;
LAB_0068198c:
      while (lVar5 = FUN_00676624(lVar6), lVar5 != lVar8) {
        lVar6 = lVar6 + 0x48;
        if (lVar9 == lVar6) goto LAB_00681954;
      }
      FUN_00681cb4(param_1[2] + -0x28,lVar6,uVar4);
    }
  } while( true );
}


