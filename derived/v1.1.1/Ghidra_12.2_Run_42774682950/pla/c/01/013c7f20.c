/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c7f20; name: FUN_013c7f20
 */


void FUN_013c7f20(long param_1)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(code **)(param_1 + 0x680) != (code *)0x0) {
    uVar1 = (**(code **)(param_1 + 0x680))(param_1 + 0x6a0);
    if (((uVar1 & 1) != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x688), UNRECOVERED_JUMPTABLE != (code *)0x0))
    {
      *(undefined8 *)(param_1 + 0x690) = 0;
      *(undefined8 *)(param_1 + 0x698) = 0;
      *(undefined8 *)(param_1 + 0x680) = 0;
      *(undefined8 *)(param_1 + 0x688) = 0;
                    /* WARNING: Could not recover jumptable at 0x013c7f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1 + 0x6a0);
      return;
    }
  }
  return;
}


