/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e53e6c; name: FUN_02e53e6c
 */


undefined8 FUN_02e53e6c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar4;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (*(int *)(param_1 + 0x30) != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x28);
      do {
        puVar4 = puVar3 + 1;
        uVar2 = FUN_02e50580(*puVar3);
        if ((uVar2 & 1) != 0) goto LAB_02e53e80;
        puVar3 = puVar4;
      } while (puVar4 != (undefined8 *)
                         (*(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x30) * 8));
    }
    uVar1 = 0;
  }
  else {
LAB_02e53e80:
    uVar1 = 1;
  }
  return uVar1;
}


