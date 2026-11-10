/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020d964; name: FUN_0020d964
 */


void FUN_0020d964(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar1 = param_1[4];
  if (param_1[3] != 0) {
    uVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(*param_1 + (uVar3 + param_1[2] & param_1[1]) * 8);
      FUN_00210478(puVar2[1]);
      FUN_00210478(*puVar2);
      FUN_0020c748(lVar1,puVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)param_1[3]);
  }
  FUN_0020c748(lVar1,*param_1);
  return;
}


