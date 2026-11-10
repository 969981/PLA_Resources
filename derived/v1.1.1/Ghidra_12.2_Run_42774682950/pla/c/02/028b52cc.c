/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b52cc; name: FUN_028b52cc
 */


void FUN_028b52cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  undefined4 uVar9;
  
  FUN_00b26ad8(param_1 + 1);
  if (param_1[2] == 0) {
    param_1[7] = 0x3c00000000;
    *(undefined4 *)(param_1 + 8) = 0x3f800000;
    *(undefined8 *)((long)param_1 + 0x44) = 0;
    *(undefined8 *)((long)param_1 + 0x4a) = 0;
  }
  else {
    puVar3 = *(uint **)(param_1[2] + 0x250);
    uVar5 = *puVar3;
    param_1[7] = 0x3c00000000;
    *(undefined4 *)(param_1 + 8) = 0x3f800000;
    *(undefined8 *)((long)param_1 + 0x44) = 0;
    *(undefined8 *)((long)param_1 + 0x4a) = 0;
    piVar4 = (int *)((long)puVar3 + (ulong)uVar5);
    if (piVar4 != (int *)0x0) {
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
         (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar6 == 0)) {
        piVar4 = (int *)0x0;
      }
      else {
        puVar3 = (uint *)((long)piVar4 + uVar6);
        piVar4 = (int *)((long)puVar3 + (ulong)*puVar3);
      }
      if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
        uVar5 = 0;
      }
      else {
        uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = (uint)(*(int *)((long)piVar4 + uVar6) != 0);
        }
      }
      *(uint *)(param_1 + 7) = uVar5;
      if (*(ushort *)((long)piVar4 - (long)*piVar4) < 9) {
        uVar9 = 0;
      }
      else {
        uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4];
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = *(undefined4 *)((long)piVar4 + uVar6);
        }
      }
      *(undefined4 *)((long)param_1 + 0x3c) = uVar9;
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
         (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar6 == 0)) {
        fVar8 = 4.2949673e+09;
      }
      else {
        fVar8 = (float)(*(int *)((long)piVar4 + uVar6) - 1);
      }
      *(float *)((long)param_1 + 0x4c) = fVar8;
    }
  }
  plVar7 = (long *)*param_1;
  uVar9 = (**(code **)(*plVar7 + 0x48))(plVar7);
  *(undefined4 *)(param_1 + 0xc) = uVar9;
  uVar9 = (**(code **)(*plVar7 + 0x58))(plVar7);
  *(undefined4 *)((long)param_1 + 100) = uVar9;
  uVar9 = (**(code **)(*plVar7 + 0x68))(plVar7);
  *(undefined4 *)(param_1 + 0xd) = uVar9;
  puVar2 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7);
  uVar1 = puVar2[1];
  param_1[0xe] = *puVar2;
  param_1[0xf] = uVar1;
  puVar2 = (undefined8 *)(**(code **)(*plVar7 + 0x38))(plVar7);
  uVar1 = puVar2[1];
  param_1[0x10] = *puVar2;
  param_1[0x11] = uVar1;
  puVar2 = (undefined8 *)(**(code **)(*plVar7 + 0xc0))(plVar7);
  uVar1 = puVar2[1];
  param_1[0x12] = *puVar2;
  param_1[0x13] = uVar1;
  uVar9 = (**(code **)(*plVar7 + 0xd8))(plVar7);
  *(undefined4 *)(param_1 + 0x14) = uVar9;
  puVar2 = (undefined8 *)(**(code **)(*plVar7 + 0x108))(plVar7);
  param_1[0x17] = puVar2[1];
  param_1[0x16] = *puVar2;
  return;
}


