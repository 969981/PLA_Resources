/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016d340; name: FUN_0016d340
 */


void FUN_0016d340(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar8 + 0x3c);
  uVar4 = (ulong)uVar1;
  if ((int)uVar1 < (int)param_2) {
    lVar2 = FUN_00161510(param_1,*(undefined8 *)(lVar8 + 0x30),(long)(int)uVar1 << 3,
                         -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3);
    uVar1 = *(uint *)(lVar8 + 0x3c);
    uVar4 = (ulong)uVar1;
    *(long *)(lVar8 + 0x30) = lVar2;
    if ((int)uVar1 < (int)param_2) {
      lVar7 = (long)(int)uVar1;
      lVar5 = (long)(int)param_2;
      lVar6 = lVar7 + 1;
      *(undefined8 *)(lVar2 + lVar7 * 8) = 0;
      if (lVar6 != lVar5) {
        uVar4 = (ulong)(~uVar1 + param_2) & 3;
        if ((~uVar1 + param_2 & 3) != 0) {
          do {
            *(undefined8 *)(*(long *)(lVar8 + 0x30) + lVar6 * 8) = 0;
            lVar6 = lVar6 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (2 < (lVar5 - lVar7) - 2U) {
          do {
            lVar2 = lVar6 * 8;
            lVar6 = lVar6 + 4;
            *(undefined8 *)(*(long *)(lVar8 + 0x30) + lVar2) = 0;
            *(undefined8 *)(*(long *)(lVar8 + 0x30) + lVar2 + 8) = 0;
            *(undefined8 *)(*(long *)(lVar8 + 0x30) + lVar2 + 0x10) = 0;
            *(undefined8 *)(*(long *)(lVar8 + 0x30) + lVar2 + 0x18) = 0;
          } while (lVar5 != lVar6);
        }
      }
      uVar4 = (ulong)*(uint *)(lVar8 + 0x3c);
    }
  }
  if (0 < (int)uVar4) {
    lVar2 = 0;
    do {
      lVar6 = *(long *)(*(long *)(lVar8 + 0x30) + lVar2 * 8);
      *(undefined8 *)(*(long *)(lVar8 + 0x30) + lVar2 * 8) = 0;
      while (lVar6 != 0) {
        lVar5 = (ulong)(*(uint *)(lVar6 + 0xc) & param_2 - 1) * 8;
        lVar7 = *(long *)(lVar6 + 0x10);
        *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(*(long *)(lVar8 + 0x30) + lVar5);
        *(long *)(*(long *)(lVar8 + 0x30) + lVar5) = lVar6;
        lVar6 = lVar7;
      }
      uVar4 = (ulong)*(int *)(lVar8 + 0x3c);
      lVar2 = lVar2 + 1;
    } while (lVar2 < (long)uVar4);
  }
  if ((int)param_2 < (int)uVar4) {
    uVar3 = FUN_00161510(param_1,*(undefined8 *)(lVar8 + 0x30),
                         -(uVar4 >> 0x1f & 1) & 0xfffffff800000000 | (uVar4 & 0xffffffff) << 3,
                         -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3);
    *(undefined8 *)(lVar8 + 0x30) = uVar3;
  }
  *(uint *)(lVar8 + 0x3c) = param_2;
  return;
}


