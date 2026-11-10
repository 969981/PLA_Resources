/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01106acc; name: FUN_01106acc
 */


void FUN_01106acc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)
   (*(long *)(param_1 + 0x70) + (ulong)*(uint *)(*(long *)(param_1 + 0x68) + 0xc) * 0x18 + 8) =
       param_2;
  *(undefined8 *)
   (*(long *)(param_1 + 0x70) + (ulong)*(uint *)(*(long *)(param_1 + 0x68) + 0xc) * 0x18 + 0x10) =
       param_3;
  *(undefined8 *)
   (*(long *)(param_1 + 0x70) +
   (ulong)*(uint *)((long)*(undefined8 **)(param_1 + 0x68) + 0xc) * 0x18) =
       **(undefined8 **)(param_1 + 0x68);
  *(int *)(*(long *)(param_1 + 0x68) + 0xc) = *(int *)(*(long *)(param_1 + 0x68) + 0xc) + 1;
  if (*(uint *)(*(long *)(param_1 + 0x68) + 0xc) < *(uint *)(param_1 + 0x78)) {
    return;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x68) + 0xc) = 0;
  return;
}


