/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01106b34; name: FUN_01106b34
 */


void FUN_01106b34(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)
           (*(long *)(param_1 + 0x70) + (ulong)*(uint *)(*(long *)(param_1 + 0x68) + 8) * 0x18);
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x70) + (ulong)param_2 * 0x18);
  uVar1 = *puVar2;
  uVar3 = puVar2[2];
  puVar4[1] = puVar2[1];
  puVar4[2] = uVar3;
  *puVar4 = uVar1;
  *(undefined8 *)
   (*(long *)(param_1 + 0x70) + (ulong)*(uint *)(*(long *)(param_1 + 0x68) + 8) * 0x18) = 0;
  *(undefined1 **)
   (*(long *)(param_1 + 0x70) + (ulong)*(uint *)(*(long *)(param_1 + 0x68) + 8) * 0x18 + 8) =
       &DAT_cbf29ce484222645;
  *(undefined1 **)
   (*(long *)(param_1 + 0x70) + (ulong)*(uint *)(*(long *)(param_1 + 0x68) + 8) * 0x18 + 0x10) =
       &DAT_cbf29ce484222645;
  *(int *)(*(long *)(param_1 + 0x68) + 8) = *(int *)(*(long *)(param_1 + 0x68) + 8) + 1;
  if (*(uint *)(*(long *)(param_1 + 0x68) + 8) < *(uint *)(param_1 + 0x78)) {
    return;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x68) + 8) = 0;
  return;
}


