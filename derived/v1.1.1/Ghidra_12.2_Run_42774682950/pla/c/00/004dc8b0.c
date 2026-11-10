/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dc8b0; name: FUN_004dc8b0
 */


undefined8 FUN_004dc8b0(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_004bda40(*(undefined4 *)(param_1 + 0x10));
      if (lVar1 == 0) {
        return 0;
      }
    }
    if (param_2 != (long *)0x0) {
      *param_2 = lVar1;
    }
    uVar2 = 1;
  }
  return uVar2;
}


