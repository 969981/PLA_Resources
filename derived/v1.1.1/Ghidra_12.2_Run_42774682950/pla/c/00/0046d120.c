/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046d120; name: FUN_0046d120
 */


long * FUN_0046d120(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  iVar1 = FUN_00407950(*(undefined8 *)(param_1 + 8));
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      plVar3 = (long *)FUN_00407970(*(undefined8 *)(param_1 + 8),iVar1);
      if ((plVar3[1] == param_2) &&
         (iVar2 = FUN_00413a60(*(undefined8 *)(*plVar3 + 8),param_3), iVar2 == 0)) {
        return plVar3;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_00407950(*(undefined8 *)(param_1 + 8));
    } while (iVar1 < iVar2);
  }
  return (long *)0x0;
}


