/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eac8d4; name: FUN_02eac8d4
 */


void FUN_02eac8d4(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (param_1 != (long *)0x0) {
    do {
      while( true ) {
        if ((int)param_1[1] == 1) break;
        iVar1 = FUN_02eac964();
        if (iVar1 == 1) goto LAB_02eac90c;
LAB_02eac914:
        param_1 = (long *)*param_1;
        if (param_1 == (long *)0x0) {
          return;
        }
      }
      iVar1 = FUN_02eac818(*(undefined4 *)((long)param_1 + 0xc),(int)param_1[2],param_1 + 10);
      if (iVar1 != 1) goto LAB_02eac914;
LAB_02eac90c:
      pcVar3 = (code *)param_1[7];
      if (pcVar3 == (code *)0x0) goto LAB_02eac914;
      uVar2 = FUN_02e74d80();
      (*pcVar3)(uVar2,1,param_1[8]);
      param_1 = (long *)*param_1;
    } while (param_1 != (long *)0x0);
  }
  return;
}


