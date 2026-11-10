/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b572c; name: FUN_028b572c
 */


void FUN_028b572c(undefined8 param_1,undefined1 (*param_2) [16],int *param_3)

{
  uint *puVar1;
  undefined *puVar2;
  ushort uVar3;
  ulong uVar4;
  ushort *puVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  
  puVar5 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar5 < 5) {
    uVar4 = 0;
    lVar6 = 0;
  }
  else {
    uVar4 = 0;
    if ((ulong)puVar5[2] != 0) {
      uVar4 = (ulong)*(byte *)((long)param_3 + (ulong)puVar5[2]);
    }
    if ((*puVar5 < 7) || ((ulong)puVar5[3] == 0)) {
      lVar6 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_3 + (ulong)puVar5[3]);
      lVar6 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  auVar9 = (**(code **)(PTR_PTR_04387f88 + uVar4 * 8))(param_1,lVar6,0);
  *param_2 = auVar9;
  puVar2 = PTR_PTR_04387f90;
  puVar5 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar5 < 9) {
    uVar4 = 0;
    lVar6 = 0;
  }
  else {
    uVar4 = 0;
    if ((ulong)puVar5[4] != 0) {
      uVar4 = (ulong)*(byte *)((long)param_3 + (ulong)puVar5[4]);
    }
    if ((*puVar5 < 0xb) || ((ulong)puVar5[5] == 0)) {
      lVar6 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_3 + (ulong)puVar5[5]);
      lVar6 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  auVar9 = (**(code **)(PTR_PTR_04387f90 + uVar4 * 8))(param_1,lVar6,0);
  param_2[1] = auVar9;
  puVar5 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar5 < 0xd) {
    uVar4 = 0;
    lVar6 = 0;
  }
  else {
    uVar4 = 0;
    if ((ulong)puVar5[6] != 0) {
      uVar4 = (ulong)*(byte *)((long)param_3 + (ulong)puVar5[6]);
    }
    if ((*puVar5 < 0xf) || ((ulong)puVar5[7] == 0)) {
      lVar6 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_3 + (ulong)puVar5[7]);
      lVar6 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  auVar9 = (**(code **)(puVar2 + uVar4 * 8))(param_1,lVar6,0);
  param_2[2] = auVar9;
  puVar5 = (ushort *)((long)param_3 - (long)*param_3);
  lVar6 = -(long)*param_3;
  uVar3 = *puVar5;
  if (uVar3 < 0x15) {
LAB_028b58bc:
    if (uVar3 < 0x11) {
      uVar4 = 0;
      lVar6 = 0;
      goto LAB_028b58f0;
    }
  }
  else if (((ulong)puVar5[10] != 0) &&
          (uVar4 = (ulong)*(byte *)((long)param_3 + (ulong)puVar5[10]), uVar4 != 0)) {
    if ((uVar3 < 0x17) || ((ulong)puVar5[0xb] == 0)) {
      lVar6 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_3 + (ulong)puVar5[0xb]);
      lVar6 = (long)puVar1 + (ulong)*puVar1;
    }
    uVar8 = (*(code *)(&PTR_FUN_04272e08)[uVar4])(param_1,lVar6,0);
    *(undefined4 *)param_2[3] = uVar8;
    lVar6 = -(long)*param_3;
    uVar3 = *(ushort *)((long)param_3 - (long)*param_3);
    goto LAB_028b58bc;
  }
  uVar7 = (ulong)*(ushort *)((long)param_3 + lVar6 + 0x10);
  uVar4 = 0;
  if (uVar7 != 0) {
    uVar4 = (ulong)*(byte *)((long)param_3 + uVar7);
  }
  if ((uVar3 < 0x13) || (uVar7 = (ulong)*(ushort *)((long)param_3 + lVar6 + 0x12), uVar7 == 0)) {
    lVar6 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_3 + uVar7);
    lVar6 = (long)puVar1 + (ulong)*puVar1;
  }
LAB_028b58f0:
  auVar9 = (**(code **)(puVar2 + uVar4 * 8))(param_1,lVar6,0);
  param_2[4] = auVar9;
  return;
}


