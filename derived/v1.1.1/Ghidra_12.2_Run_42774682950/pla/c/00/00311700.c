/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00311700; name: FUN_00311700
 */


void FUN_00311700(long *param_1)

{
  long *plVar1;
  int iVar2;
  
  if ((char)param_1[7] != '\0') {
    param_1[8] = param_1[8];
    return;
  }
                    /* try { // try from 00311720 to 0031173f has its CatchHandler @ 00311754 */
  iVar2 = FUN_00310abc(param_1);
  if (iVar2 != 0) {
    (**(code **)(*(long *)param_1[6] + 0x18))();
  }
  plVar1 = param_1 + 2;
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar1;
  param_1[8] = (long)plVar1;
  return;
}


