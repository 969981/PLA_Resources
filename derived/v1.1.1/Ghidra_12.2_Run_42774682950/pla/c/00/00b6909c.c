/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b6909c; name: FUN_00b6909c
 */


undefined4 FUN_00b6909c(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  ushort *puVar3;
  ulong uVar4;
  
  piVar2 = (int *)param_1[1];
  if ((piVar2 != (int *)0x0) || (piVar2 = (int *)*param_1, piVar2 != (int *)0x0)) {
    puVar3 = (ushort *)((long)piVar2 - (long)*piVar2);
    if (((6 < *puVar3) &&
        ((((ulong)puVar3[3] != 0 &&
          (8 < *puVar3 && *(char *)((long)piVar2 + (ulong)puVar3[3]) == '\x01')) &&
         ((ulong)puVar3[4] != 0)))) &&
       (((puVar1 = (uint *)((long)piVar2 + (ulong)puVar3[4]),
         piVar2 = (int *)((long)puVar1 + (ulong)*puVar1), piVar2 != (int *)0x0 &&
         (4 < *(ushort *)((long)piVar2 - (long)*piVar2))) &&
        (uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar4 != 0)))) {
      return *(undefined4 *)((long)piVar2 + uVar4);
    }
  }
  return 0;
}


