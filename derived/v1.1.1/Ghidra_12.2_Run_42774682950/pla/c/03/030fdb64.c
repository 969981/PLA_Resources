/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030fdb64; name: FUN_030fdb64
 */


void FUN_030fdb64(long param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  if (param_2 == param_3) {
    return;
  }
  piVar4 = param_2;
  do {
    piVar3 = piVar4 + 2;
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x110) + (long)*piVar4 * 0x20);
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x110) + (long)piVar4[1] * 0x20);
    uVar8 = *puVar6;
    puVar7[1] = puVar6[1];
    *puVar7 = uVar8;
    uVar8 = puVar6[2];
    puVar7[3] = puVar6[3];
    puVar7[2] = uVar8;
    piVar4 = piVar3;
  } while (piVar3 != param_3);
  piVar4 = param_2;
  do {
    piVar3 = piVar4 + 2;
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x15c0) + (long)*piVar4 * 0x14);
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x15c0) + (long)piVar4[1] * 0x14);
    uVar8 = *puVar7;
    uVar1 = puVar7[1];
    *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar7 + 2);
    *puVar6 = uVar8;
    puVar6[1] = uVar1;
    piVar4 = piVar3;
  } while (piVar3 != param_3);
  if (*(long *)(param_1 + 0x1670) != 0) {
    FUN_030ff4d8(*(long *)(param_1 + 0x1670),param_2,param_3);
  }
  if (*(char *)(param_1 + 0x15dc) != '\0') {
    uVar5 = (long)param_3 + (-8 - (long)param_2);
    piVar4 = param_2;
    if (((uint)uVar5 >> 3 & 1) == 0) {
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x120) + (long)*param_2 * 0x10);
      uVar8 = *puVar6;
      puVar7 = (undefined8 *)(*(long *)(param_1 + 0x120) + (long)param_2[1] * 0x10);
      puVar7[1] = puVar6[1];
      *puVar7 = uVar8;
      piVar4 = param_2 + 2;
    }
    if (7 < uVar5) {
      do {
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x120) + (long)*piVar4 * 0x10);
        uVar8 = *puVar6;
        puVar7 = (undefined8 *)(*(long *)(param_1 + 0x120) + (long)piVar4[1] * 0x10);
        puVar7[1] = puVar6[1];
        *puVar7 = uVar8;
        piVar3 = piVar4 + 2;
        piVar2 = piVar4 + 3;
        piVar4 = piVar4 + 4;
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x120) + (long)*piVar3 * 0x10);
        uVar8 = *puVar6;
        puVar7 = (undefined8 *)(*(long *)(param_1 + 0x120) + (long)*piVar2 * 0x10);
        puVar7[1] = puVar6[1];
        *puVar7 = uVar8;
      } while (piVar4 != param_3);
    }
  }
  FUN_030ffe1c(*(undefined8 *)(param_1 + 0x1678),param_2,param_3);
  return;
}


