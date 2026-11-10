/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030ff594; name: FUN_030ff594
 */


void FUN_030ff594(long param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  int *piVar4;
  ulong uVar5;
  undefined4 *puVar6;
  
  if (param_2 != param_3) {
    cVar3 = (*(float *)(param_1 + 0x40) == 0.0) << 2;
    uVar5 = (long)param_3 + (-4 - (long)param_2);
    piVar4 = param_2;
    if (((uint)uVar5 >> 2 & 1) == 0) {
      piVar4 = param_2 + 1;
      puVar6 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)*param_2 * 6);
      *puVar6 = 0;
      *(char *)((long)puVar6 + 5) = cVar3;
    }
    if (3 < uVar5) {
      do {
        puVar6 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)*piVar4 * 6);
        *puVar6 = 0;
        *(char *)((long)puVar6 + 5) = cVar3;
        puVar6 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)piVar4[1] * 6);
        piVar4 = piVar4 + 2;
        *puVar6 = 0;
        *(char *)((long)puVar6 + 5) = cVar3;
      } while (piVar4 != param_3);
    }
    piVar4 = param_2;
    if (((uint)uVar5 >> 2 & 1) == 0) {
      piVar4 = param_2 + 1;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)*param_2 * 0x10);
      *(undefined8 *)((long)puVar2 + 5) = 0;
      *puVar2 = 0;
    }
    if (3 < uVar5) {
      do {
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)*piVar4 * 0x10);
        *(undefined8 *)((long)puVar2 + 5) = 0;
        *puVar2 = 0;
        piVar1 = piVar4 + 1;
        piVar4 = piVar4 + 2;
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)*piVar1 * 0x10);
        *(undefined8 *)((long)puVar2 + 5) = 0;
        *puVar2 = 0;
      } while (piVar4 != param_3);
    }
  }
  return;
}


