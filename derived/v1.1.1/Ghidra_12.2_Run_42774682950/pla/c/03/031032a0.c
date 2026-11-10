/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031032a0; name: FUN_031032a0
 */


void FUN_031032a0(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = (uint)param_2 & 0xffffff;
  if ((((uVar1 == 0xffffff) || (*(uint *)(param_1 + 2) <= uVar1)) ||
      (lVar2 = param_1[1], (~*(uint *)(lVar2 + (ulong)uVar1 * 0x10 + 8) & 0xffffff) == 0)) ||
     (*(uint *)(*(long *)(lVar2 + (ulong)uVar1 * 0x10) + 0x158) != (uint)param_2)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0310330c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0xe0))
            ((long *)*param_1,*(long *)(lVar2 + (param_2 & 0xffffff) * 0x10) + 0x148,1,0);
  return;
}


