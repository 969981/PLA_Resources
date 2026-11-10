/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01da7a98; name: FUN_01da7a98
 */


void FUN_01da7a98(undefined8 param_1,int *param_2)

{
  uint *puVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar3 == 0)) {
    lVar5 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar3);
    lVar5 = (long)puVar1 + (ulong)*puVar1;
  }
  if (*(char *)(lVar5 + 4) != '\0') {
    pcVar4 = (char *)(lVar5 + 5);
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
  }
                    /* WARNING: Subroutine does not return */
  FUN_008a93d8(param_1);
}


