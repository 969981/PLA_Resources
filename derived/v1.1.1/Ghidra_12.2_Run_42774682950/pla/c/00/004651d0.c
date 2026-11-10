/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004651d0; name: FUN_004651d0
 */


undefined8
FUN_004651d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x20) + 0xd8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00465208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
    return uVar2;
  }
  iVar1 = FUN_00444ad0(param_1,param_4,param_5);
  if (iVar1 < 1) {
    return 0xffffffff;
  }
  uVar2 = FUN_004650a0(param_1,param_2,param_3);
  return uVar2;
}


