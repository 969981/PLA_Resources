/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eaa484; name: FUN_02eaa484
 */


void FUN_02eaa484(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  FUN_02ecaee8();
  *param_1 = &PTR_LAB_042a9080;
  param_1[2] = &PTR_LAB_042a9160;
  param_1[3] = &PTR_LAB_042a9178;
  lVar5 = *(long *)(*(long *)(param_2 + 0x88) + 0x18);
  param_1[0x60] = lVar5;
  if (lVar5 != 0) {
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
  }
  *(undefined8 *)((long)param_1 + 0x34c) = 0;
  bVar4 = *(byte *)(param_1 + 0x6b);
  *(undefined4 *)((long)param_1 + 0x354) = 0;
  *(byte *)(param_1 + 0x6b) = bVar4 & 0xf0;
  *(byte *)(param_1 + 0x6b) = bVar4 & 0x80 | (*(byte *)(param_2 + 0x288) >> 1 & 1) << 4;
  (**(code **)(*(long *)param_1[0x45] + 0x10))();
  *(undefined4 *)((long)param_1 + 700) = *(undefined4 *)(*(long *)(param_2 + 0x88) + 0x20);
  if (param_1[0x43] == 0) {
    param_1[0x43] = **(undefined8 **)(param_2 + 0x88);
    **(undefined8 **)(param_2 + 0x88) = 0;
  }
  if (param_1[0x44] == 0) {
    param_1[0x44] = *(undefined8 *)(*(long *)(param_2 + 0x88) + 8);
    *(undefined8 *)(*(long *)(param_2 + 0x88) + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x61] = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar7 = *(undefined8 *)(param_2 + 0x58);
  param_1[100] = *(undefined8 *)(param_2 + 0x50);
  param_1[0x65] = uVar7;
  param_1[0x62] = uVar1;
  param_1[99] = uVar2;
  uVar7 = *(undefined8 *)(param_2 + 0x70);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x69) = *(undefined4 *)(param_2 + 0x78);
  param_1[0x67] = uVar2;
  param_1[0x68] = uVar7;
  param_1[0x66] = uVar1;
  uVar3 = *(uint *)(param_2 + 0x7c);
  iVar6 = *(int *)(param_1 + 0x61);
  *(uint *)((long)param_1 + 0x34c) = uVar3;
  if (iVar6 != 0) {
    uVar8 = (ulong)(iVar6 - 1);
    do {
      if (((uint)uVar8 < 0x20) && ((1L << (uVar8 & 0x3f) & (ulong)uVar3) != 0)) {
        return;
      }
      *(uint *)(param_1 + 0x61) = (uint)uVar8;
      uVar8 = uVar8 - 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}


