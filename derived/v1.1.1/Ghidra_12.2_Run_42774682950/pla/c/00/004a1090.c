/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004a1090; name: FUN_004a1090
 */


undefined8 FUN_004a1090(long *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  
  if (*(int *)((long)param_1 + 0x2c) != param_3) {
    return 0;
  }
  uVar6 = param_1[1];
  uVar5 = *param_1 << 0x38;
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  switch((int)param_1[5]) {
  case 7:
    uVar5 = uVar5 | (ulong)*(byte *)((long)param_1 + 0x3e) << 0x30;
  case 6:
    uVar5 = uVar5 | (ulong)*(byte *)((long)param_1 + 0x3d) << 0x28;
  case 5:
    uVar5 = uVar5 | (ulong)*(byte *)((long)param_1 + 0x3c) << 0x20;
  case 4:
    uVar5 = uVar5 | (ulong)*(byte *)((long)param_1 + 0x3b) << 0x18;
  case 3:
    uVar5 = uVar5 | (ulong)*(byte *)((long)param_1 + 0x3a) << 0x10;
  case 2:
    uVar5 = uVar5 | (ulong)*(byte *)((long)param_1 + 0x39) << 8;
  case 1:
    uVar5 = uVar5 | *(byte *)(param_1 + 7);
  default:
    uVar3 = uVar5 ^ param_1[4];
    if (0 < (int)param_1[6]) {
      iVar7 = 0;
      do {
        uVar6 = uVar2 + uVar6;
        uVar1 = uVar6 ^ (uVar2 >> 0x33 | uVar2 << 0xd);
        uVar2 = uVar3 + uVar4 + uVar1;
        uVar4 = uVar3 + uVar4 ^ (uVar3 >> 0x30 | uVar3 << 0x10);
        uVar6 = uVar4 + (uVar6 >> 0x20 | uVar6 << 0x20);
        uVar3 = uVar6 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
        uVar4 = uVar2 >> 0x20 | uVar2 << 0x20;
        uVar2 = uVar2 ^ (uVar1 >> 0x2f | uVar1 << 0x11);
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)param_1[6]);
    }
    uVar6 = uVar6 ^ uVar5;
    uVar5 = 0xee;
    if (*(int *)((long)param_1 + 0x2c) != 0x10) {
      uVar5 = 0xff;
    }
    uVar4 = uVar4 ^ uVar5;
    if (0 < *(int *)((long)param_1 + 0x34)) {
      iVar7 = 0;
      do {
        uVar6 = uVar2 + uVar6;
        uVar5 = uVar6 ^ (uVar2 >> 0x33 | uVar2 << 0xd);
        uVar2 = uVar3 + uVar4 + uVar5;
        uVar4 = uVar3 + uVar4 ^ (uVar3 >> 0x30 | uVar3 << 0x10);
        uVar6 = uVar4 + (uVar6 >> 0x20 | uVar6 << 0x20);
        uVar3 = uVar6 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
        uVar4 = uVar2 >> 0x20 | uVar2 << 0x20;
        uVar2 = uVar2 ^ (uVar5 >> 0x2f | uVar5 << 0x11);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)((long)param_1 + 0x34));
    }
    *param_2 = uVar2 ^ uVar6 ^ uVar4 ^ uVar3;
    if (*(int *)((long)param_1 + 0x2c) != 8) {
      uVar2 = uVar2 ^ 0xdd;
      if (0 < *(int *)((long)param_1 + 0x34)) {
        iVar7 = 0;
        do {
          uVar6 = uVar2 + uVar6;
          uVar5 = uVar6 ^ (uVar2 >> 0x33 | uVar2 << 0xd);
          uVar2 = uVar3 + uVar4 + uVar5;
          uVar4 = uVar3 + uVar4 ^ (uVar3 >> 0x30 | uVar3 << 0x10);
          uVar6 = uVar4 + (uVar6 >> 0x20 | uVar6 << 0x20);
          uVar3 = uVar6 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
          uVar4 = uVar2 >> 0x20 | uVar2 << 0x20;
          uVar2 = uVar2 ^ (uVar5 >> 0x2f | uVar5 << 0x11);
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)((long)param_1 + 0x34));
      }
      param_2[1] = uVar2 ^ uVar6 ^ uVar4 ^ uVar3;
    }
    return 1;
  }
}


