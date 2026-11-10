/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed525c; name: FUN_02ed525c
 */


bool FUN_02ed525c(long param_1,undefined8 *param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  
  piVar2 = (int *)*param_2;
  uVar1 = *(uint *)(param_2 + 1);
  piVar3 = piVar2;
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 3;
    do {
      if ((*(int *)(param_1 + 0x10) == *piVar3) &&
         ((*(uint *)(param_1 + 0xaa) >> 0x11 & 1) == (uint)*(byte *)(piVar3 + 1)))
      goto LAB_02ed52b4;
      lVar4 = lVar4 + -8;
      piVar3 = piVar3 + 2;
    } while (lVar4 != 0);
    piVar3 = piVar2 + (ulong)uVar1 * 2;
  }
LAB_02ed52b4:
  return piVar3 != (int *)0x0 && piVar2 + (ulong)uVar1 * 2 != piVar3;
}


