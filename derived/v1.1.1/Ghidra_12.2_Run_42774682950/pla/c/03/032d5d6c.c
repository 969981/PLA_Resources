/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d5d6c; name: FUN_032d5d6c
 */


void FUN_032d5d6c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  if ((lVar3 != 0) && ((char)param_1[4] != '\0')) {
    lVar2 = param_1[2];
    lVar1 = tpidr_el0;
    lVar4 = *(long *)(lVar1 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar4;
    }
    FUN_032cf244(*(undefined8 *)(*(long *)(lVar4 + 8) + 0x60),lVar3,1,(int)lVar2 - (int)lVar3);
  }
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


