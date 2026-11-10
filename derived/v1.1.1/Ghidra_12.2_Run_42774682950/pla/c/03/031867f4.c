/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031867f4; name: FUN_031867f4
 */


void FUN_031867f4(undefined8 *param_1,long param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(*(long *)(param_2 + 0xe0) + (long)*param_3 * 0x14);
  puVar3 = (undefined4 *)*param_1;
  *puVar1 = *puVar3;
  puVar1[1] = puVar3[1];
  uVar2 = *(undefined8 *)(puVar3 + 2);
  *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(puVar3 + 4);
  *(undefined8 *)(puVar1 + 2) = uVar2;
  *(undefined2 *)((long)puVar1 + 0x12) = *(undefined2 *)((long)puVar3 + 0x12);
  memcpy((void *)(*(long *)(param_2 + 0x150) + (long)(*(int *)(param_2 + 0x60) * *param_3) * 4),
         (void *)param_1[1],(long)*(int *)(param_2 + 0x60) << 2);
  *(undefined2 *)(*(long *)(param_2 + 0x110) + (long)*param_3 * 2) = *(undefined2 *)(param_1 + 3);
  return;
}


