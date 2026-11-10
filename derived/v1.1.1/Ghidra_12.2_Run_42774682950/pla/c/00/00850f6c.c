/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00850f6c; name: FUN_00850f6c
 */


void FUN_00850f6c(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    do {
      lVar1 = *(long *)(param_1 + 0x18);
      if (lVar1 == 0) break;
      FUN_007e8fec((long *)(param_1 + 0x18),lVar1);
      FUN_007e8fc4(param_1 + 0x30,param_1 + 0x30,lVar1 + *(int *)(param_1 + 0x44));
    } while (*(int *)(param_1 + 0x28) != 0);
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    do {
      lVar1 = *(long *)(param_1 + 0x58);
      if (lVar1 == 0) break;
      FUN_007e8fec((long *)(param_1 + 0x58),lVar1);
      FUN_007e8fc4(param_1 + 0x70,param_1 + 0x70,lVar1 + *(int *)(param_1 + 0x84));
    } while (*(int *)(param_1 + 0x68) != 0);
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_0081a840(lVar1);
    FUN_0081a800(lVar1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_0081a840(lVar1);
    FUN_0081a800(lVar1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


