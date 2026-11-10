/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0192a434; name: FUN_0192a434
 */


undefined8 FUN_0192a434(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  if (1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0192a750();
  }
  lVar1 = *(long *)(*(long *)(param_1 + (long)(int)param_2 * 8 + 0xe8) + 0x2e8);
  lVar2 = *(long *)(lVar1 + 0xe8);
  if ((((lVar2 == 0) || (*(int *)(lVar1 + 0xf0) != *(int *)(lVar2 + 0x2c))) ||
      (lVar1 = FUN_002669c8(), lVar1 == 0)) ||
     ((*(int *)(lVar1 + 0x17c) < 1 || (*(char *)(lVar1 + 0xc) == '\0')))) {
    return 0;
  }
  return 1;
}


