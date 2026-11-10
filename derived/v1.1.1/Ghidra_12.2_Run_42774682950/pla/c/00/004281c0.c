/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004281c0; name: FUN_004281c0
 */


undefined8 FUN_004281c0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == (long *)0x0) {
    return 1;
  }
  lVar1 = nnosGetSystemTick();
  lVar2 = nnosGetSystemTickFrequency();
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = lVar1 / lVar2;
  }
  *param_1 = lVar3;
  lVar3 = nnosConvertTickToNanoSeconds(lVar1);
  param_1[1] = (lVar3 / 1000) % 1000000;
  return 0;
}


