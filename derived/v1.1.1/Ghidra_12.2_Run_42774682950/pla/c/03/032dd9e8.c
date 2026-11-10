/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032dd9e8; name: FUN_032dd9e8
 */


void FUN_032dd9e8(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  if ((char)param_2[1] == '\x02') {
    plVar3 = (long *)param_2[2];
  }
  else if ((char)param_2[1] == '\x01') {
    plVar3 = param_2 + 2;
  }
  else {
    plVar3 = (long *)0x0;
  }
  lVar1 = *param_2;
  *param_1 = (long)plVar3;
  param_1[1] = lVar1;
  if (lVar1 == 0) {
    param_1[2] = 0;
  }
  else {
    uVar2 = FUN_032e3508();
    param_1[2] = uVar2;
    if ((uVar2 & 1) != 0) {
      FUN_032e0c28(uVar2 & 0xfffffffffffffffe);
      return;
    }
  }
  return;
}


