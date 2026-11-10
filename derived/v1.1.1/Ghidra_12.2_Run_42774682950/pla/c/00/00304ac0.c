/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00304ac0; name: FUN_00304ac0
 */


void FUN_00304ac0(long *param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = (long)param_1 + 9;
  if (*param_1 != 0) {
    lVar1 = param_1[2];
  }
  uVar2 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uVar2 = param_1[1];
  }
  FUN_002ec720(lVar1,uVar2,param_2);
  return;
}


