/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046e4a0; name: FUN_0046e4a0
 */


undefined8 FUN_0046e4a0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1[2] == 0) {
    lVar2 = FUN_00444930();
    param_1[2] = lVar2;
    if (lVar2 == 0) goto LAB_0046e584;
  }
  if (param_1[3] == 0) {
    lVar2 = FUN_00444930();
    param_1[3] = lVar2;
    if (lVar2 == 0) goto LAB_0046e584;
  }
  if (param_1[1] == 0) {
    lVar2 = FUN_00444930();
    param_1[1] = lVar2;
    if (lVar2 == 0) goto LAB_0046e584;
  }
  iVar1 = FUN_00444d20(param_1[2],param_2[2]);
  if (((iVar1 != 0) && (iVar1 = FUN_00444d20(param_1[3],param_2[3]), iVar1 != 0)) &&
     (iVar1 = FUN_00444d20(param_1[1],param_2[1]), iVar1 != 0)) {
    uVar3 = *(undefined8 *)((long)param_2 + 0x24);
    *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)((long)param_2 + 0x2c);
    *(undefined8 *)((long)param_1 + 0x24) = uVar3;
    uVar4 = *(undefined8 *)((long)param_2 + 0x3c);
    uVar3 = *(undefined8 *)((long)param_2 + 0x34);
    uVar6 = *(undefined8 *)((long)param_2 + 0x4c);
    uVar5 = *(undefined8 *)((long)param_2 + 0x44);
    uVar8 = *(undefined8 *)((long)param_2 + 0x5c);
    uVar7 = *(undefined8 *)((long)param_2 + 0x54);
    uVar9 = *(undefined8 *)((long)param_2 + 100);
    *(undefined8 *)((long)param_1 + 0x6c) = *(undefined8 *)((long)param_2 + 0x6c);
    *(undefined8 *)((long)param_1 + 100) = uVar9;
    *(undefined8 *)((long)param_1 + 0x5c) = uVar8;
    *(undefined8 *)((long)param_1 + 0x54) = uVar7;
    *(undefined8 *)((long)param_1 + 0x4c) = uVar6;
    *(undefined8 *)((long)param_1 + 0x44) = uVar5;
    *(undefined8 *)((long)param_1 + 0x3c) = uVar4;
    *(undefined8 *)((long)param_1 + 0x34) = uVar3;
    uVar4 = *(undefined8 *)((long)param_2 + 0x7c);
    uVar3 = *(undefined8 *)((long)param_2 + 0x74);
    uVar6 = *(undefined8 *)((long)param_2 + 0x8c);
    uVar5 = *(undefined8 *)((long)param_2 + 0x84);
    uVar8 = *(undefined8 *)((long)param_2 + 0x9c);
    uVar7 = *(undefined8 *)((long)param_2 + 0x94);
    uVar9 = *(undefined8 *)((long)param_2 + 0xa4);
    *(undefined8 *)((long)param_1 + 0xac) = *(undefined8 *)((long)param_2 + 0xac);
    *(undefined8 *)((long)param_1 + 0xa4) = uVar9;
    *(undefined8 *)((long)param_1 + 0x9c) = uVar8;
    *(undefined8 *)((long)param_1 + 0x94) = uVar7;
    *(undefined8 *)((long)param_1 + 0x8c) = uVar6;
    *(undefined8 *)((long)param_1 + 0x84) = uVar5;
    *(undefined8 *)((long)param_1 + 0x7c) = uVar4;
    *(undefined8 *)((long)param_1 + 0x74) = uVar3;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *param_1 = *param_2;
    return 1;
  }
LAB_0046e584:
  FUN_00444880(param_1[2]);
  FUN_00444880(param_1[3]);
  FUN_00444880(param_1[1]);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_004006a0((long)param_1 + 0x24,0x90);
  return 0;
}


