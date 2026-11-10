/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333c57c; name: FUN_0333c57c
 */


void FUN_0333c57c(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if ((*(int *)(param_1 + 0x20) != 0) &&
     ((**(code **)(*param_2 + 0x20))
                (param_2,*(long *)(param_1 + 0x18) + 0x10,*(int *)(param_1 + 0x20),0x18),
     0 < *(int *)(param_1 + 0x20))) {
    lVar1 = 0;
    lVar2 = 0x10;
    do {
      *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar2) = 0;
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x18;
    } while (lVar1 < *(int *)(param_1 + 0x20));
  }
  return;
}


