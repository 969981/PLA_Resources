/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3d038; name: FUN_02f3d038
 */


void FUN_02f3d038(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                 byte param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  param_1[6] = 0;
  *param_1 = &PTR_LAB_042adba8;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[8] = 0;
  param_1[9] = 0x3f80000000000000;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xb] = &PTR_LAB_042adbc0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_3 + 0x14);
  param_1[4] = param_3[1];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 2);
  piVar4 = (int *)*param_3;
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  param_1[3] = piVar4;
  param_1[6] = param_4;
  *(byte *)(param_1 + 7) = param_5 & 1;
  *(int *)(param_4 + 0x50) = *(int *)(param_4 + 0x50) + 1;
  lVar1 = DAT_0440a138;
  uVar6 = param_1[6];
  puVar7 = (undefined8 *)(DAT_0440a138 + 0x50);
  puVar2 = (undefined8 *)*puVar7;
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)(*DAT_0442d138)(0,0x20);
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    *puVar2 = *puVar7;
    *puVar7 = puVar2;
    puVar3 = *(undefined8 **)(lVar1 + 0x48);
  }
  else {
    puVar3 = *(undefined8 **)(DAT_0440a138 + 0x48);
  }
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 **)(lVar1 + 0x40) = puVar2;
  }
  else {
    *puVar3 = puVar2;
    puVar2 = (undefined8 *)*puVar7;
  }
  *(undefined8 **)(lVar1 + 0x48) = puVar2;
  *(undefined8 *)(lVar1 + 0x50) = *puVar2;
  *puVar2 = 0;
  lVar5 = *(long *)(lVar1 + 0x48);
  *(int *)(lVar1 + 100) = *(int *)(lVar1 + 100) + 1;
  *(undefined8 **)(lVar5 + 8) = param_1;
  *(undefined4 *)(lVar5 + 0x10) = 0;
  *(undefined8 *)(lVar5 + 0x18) = uVar6;
  return;
}


