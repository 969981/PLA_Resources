/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00265560; name: FUN_00265560
 */


void FUN_00265560(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  lVar3 = *(long *)(lVar1 + 0x3e0);
  lVar2 = *(long *)(lVar1 + 1000);
  if ((*(long *)(lVar1 + 0x3f0) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + 0x3f0) + 0x30),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    (*UNRECOVERED_JUMPTABLE)(param_1);
  }
  if ((lVar3 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x30), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    (*UNRECOVERED_JUMPTABLE)(param_1);
  }
  if ((lVar2 == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x30), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002655c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}


