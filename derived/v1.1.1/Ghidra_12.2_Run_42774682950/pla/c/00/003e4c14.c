/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e4c14; name: FUN_003e4c14
 */


void FUN_003e4c14(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  
  *param_1 = 0;
  param_1[9] = 0;
                    /* try { // try from 003e4c28 to 003e4c4b has its CatchHandler @ 003e4c7c */
  iVar1 = FUN_002f8bb0();
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_002f8bb0();
  }
  param_1[9] = uVar2 & 0xffffffff;
  FUN_003ea300(param_1);
  if (param_1[9] != 0) {
    uVar2 = 0;
    do {
                    /* try { // try from 003e4c58 to 003e4c5f has its CatchHandler @ 003e4c8c */
      FUN_003ea3e8(param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulong)param_1[9]);
  }
  return;
}


