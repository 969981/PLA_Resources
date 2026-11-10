/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331f800; name: FUN_0331f800
 */


undefined8 FUN_0331f800(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = FUN_032e35d8(*(undefined8 *)(param_3 + 8));
  uVar2 = FUN_032e35d8(*(undefined8 *)(param_2 + 8));
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (uVar2 & 0x1f) * 0x48 + (uVar1 & 0x1f) * 8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0331f858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3);
  return uVar3;
}


