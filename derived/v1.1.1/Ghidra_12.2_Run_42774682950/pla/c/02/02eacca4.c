/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eacca4; name: FUN_02eacca4
 */


undefined8 FUN_02eacca4(int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  
  if ((DAT_0440a440 == 0) || (*DAT_0440a438 == param_1)) {
    piVar4 = DAT_0440a438;
  }
  else {
    lVar3 = (ulong)DAT_0440a440 * 0x28;
    piVar5 = DAT_0440a438;
    do {
      lVar3 = lVar3 + -0x28;
      if (lVar3 == 0) {
        return 0;
      }
      piVar1 = piVar5 + 10;
      piVar4 = piVar5 + 10;
      piVar5 = piVar5 + 10;
    } while (*piVar1 != param_1);
  }
  if ((piVar4 == DAT_0440a438 + (ulong)DAT_0440a440 * 10) || (*(code **)(piVar4 + 8) == (code *)0x0)
     ) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x02eacd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(piVar4 + 8))();
  return uVar2;
}


