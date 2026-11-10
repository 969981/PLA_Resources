/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004663d0; name: FUN_004663d0
 */


void FUN_004663d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0xd0) + 0x18);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  uVar1 = FUN_0044e540(param_3);
  uVar2 = FUN_0044e490(param_3);
                    /* WARNING: Could not recover jumptable at 0x0046642c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar1,uVar2);
  return;
}


