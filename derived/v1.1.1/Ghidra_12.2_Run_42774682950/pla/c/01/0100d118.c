/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0100d118; name: FUN_0100d118
 */


void FUN_0100d118(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4)

{
  int iVar1;
  double dVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  dVar2 = (double)FUN_00150a90(param_1,iVar1 + 2,0);
  UNRECOVERED_JUMPTABLE = (code *)*param_3;
  if ((param_3[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(param_4 + (param_3[1] >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x0100d16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)((float)dVar2);
  return;
}


