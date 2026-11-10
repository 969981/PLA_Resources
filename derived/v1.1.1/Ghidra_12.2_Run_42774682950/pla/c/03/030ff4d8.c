/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030ff4d8; name: FUN_030ff4d8
 */


void FUN_030ff4d8(long param_1,int *param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  
  if (param_2 != param_3) {
    piVar5 = param_2;
    do {
      piVar7 = piVar5 + 2;
      puVar9 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)*piVar5 * 6);
      puVar8 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)piVar5[1] * 6);
      uVar4 = *puVar9;
      *(undefined2 *)(puVar8 + 1) = *(undefined2 *)(puVar9 + 1);
      *puVar8 = uVar4;
      piVar5 = piVar7;
    } while (piVar7 != param_3);
    uVar6 = (long)param_3 + (-8 - (long)param_2);
    piVar5 = param_2;
    if (((uint)uVar6 >> 3 & 1) == 0) {
      piVar5 = param_2 + 2;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)*param_2 * 0x10);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)param_2[1] * 0x10);
      uVar10 = *puVar1;
      *(undefined8 *)((long)puVar2 + 5) = *(undefined8 *)((long)puVar1 + 5);
      *puVar2 = uVar10;
    }
    if (7 < uVar6) {
      do {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)*piVar5 * 0x10);
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)piVar5[1] * 0x10);
        uVar10 = *puVar1;
        *(undefined8 *)((long)puVar2 + 5) = *(undefined8 *)((long)puVar1 + 5);
        *puVar2 = uVar10;
        piVar7 = piVar5 + 2;
        piVar3 = piVar5 + 3;
        piVar5 = piVar5 + 4;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)*piVar7 * 0x10);
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)*piVar3 * 0x10);
        uVar10 = *puVar1;
        *(undefined8 *)((long)puVar2 + 5) = *(undefined8 *)((long)puVar1 + 5);
        *puVar2 = uVar10;
      } while (piVar5 != param_3);
    }
  }
  return;
}


