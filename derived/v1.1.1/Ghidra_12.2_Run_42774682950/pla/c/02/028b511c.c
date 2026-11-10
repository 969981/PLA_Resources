/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b511c; name: FUN_028b511c
 */


bool FUN_028b511c(undefined8 *param_1,ulong param_2)

{
  uint *puVar1;
  int *piVar2;
  ulong uVar3;
  
  piVar2 = (int *)*param_1;
  puVar1 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0xc - (long)*piVar2)));
  puVar1 = (uint *)((long)puVar1 + (param_2 >> 0x1e & 0x3fffffffc) + (ulong)*puVar1 + 4);
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar1 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (8 - (long)*piVar2)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
     (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar3 == 0)) {
    return false;
  }
  return *(char *)((long)piVar2 + uVar3) != '\0';
}


