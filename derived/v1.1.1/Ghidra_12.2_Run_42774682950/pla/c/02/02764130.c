/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02764130; name: FUN_02764130
 */


void FUN_02764130(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0426b9d8;
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    (**(code **)(*(long *)param_1[0xc] + 0x18))
              ((long *)param_1[0xc],param_1[0xb],param_1[9] & 0xfffffffffffffffe,1);
  }
  FUN_02764720(param_1 + 5);
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x027641ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x18))
            ((long *)param_1[4],param_1[3],param_1[1] & 0xfffffffffffffffe,1);
  return;
}


