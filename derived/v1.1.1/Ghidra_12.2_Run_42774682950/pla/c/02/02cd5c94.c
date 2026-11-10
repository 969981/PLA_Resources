/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cd5c94; name: FUN_02cd5c94
 */


void FUN_02cd5c94(long param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_02cd5c94(param_1,*param_2);
  FUN_02cd5c94(param_1,param_2[1]);
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    (**(code **)(*(long *)param_2[7] + 0x18))
              ((long *)param_2[7],param_2[6],param_2[4] & 0xfffffffffffffffe,1);
  }
                    /* WARNING: Could not recover jumptable at 0x02cd5d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),param_2,0x48,8);
  return;
}


