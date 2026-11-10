/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011251c8; name: FUN_011251c8
 */


void FUN_011251c8(long param_1,long param_2,long param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x78);
  if (param_2 == 0) {
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x78) = 0;
    }
  }
  else {
    memset((void *)(param_1 + 0x79),0,0x2f1);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x78) = 1;
    }
    *(undefined1 *)(param_1 + 0x369) = 0;
    FUN_02c65514(param_2,(void *)(param_1 + 0x79));
    if (param_3 != 0) {
      *(undefined1 *)(param_1 + 0x369) = 1;
      FUN_02c65514(param_3,param_1 + 0x1f1);
      return;
    }
  }
  return;
}


