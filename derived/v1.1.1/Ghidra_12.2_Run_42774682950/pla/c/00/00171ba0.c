/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00171ba0; name: FUN_00171ba0
 */


void FUN_00171ba0(undefined8 param_1,long param_2,long param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long local_30;
  undefined4 local_28;
  
  if (param_3 - 1U < (ulong)*(uint *)(param_2 + 0xc)) {
    puVar3 = (undefined8 *)(*(long *)(param_2 + 0x10) + (param_3 - 1U) * 0x10);
  }
  else {
    puVar3 = (undefined8 *)
             (*(long *)(param_2 + 0x18) +
             (long)(int)((uint)param_3 &
                        (-1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f) ^ 0xffffffffU)) * 0x20);
    if (*(int *)(puVar3 + 3) == 0x13) goto LAB_00171c10;
    do {
      do {
        piVar1 = (int *)((long)puVar3 + 0x1c);
        puVar3 = puVar3 + (long)*piVar1 * 4;
        if (*piVar1 == 0) goto LAB_00171c2c;
      } while (*(int *)(puVar3 + 3) != 0x13);
LAB_00171c10:
    } while (puVar3[2] != param_3);
  }
  if (puVar3 == &DAT_039c5c28) {
LAB_00171c2c:
    local_28 = 0x13;
    local_30 = param_3;
    puVar3 = (undefined8 *)FUN_00171da0(param_1,param_2,&local_30);
  }
  uVar2 = param_4[1];
  *puVar3 = *param_4;
  puVar3[1] = uVar2;
  return;
}


