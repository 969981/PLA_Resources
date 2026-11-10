/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe9af0; name: FUN_02fe9af0
 */


void FUN_02fe9af0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x40);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + param_1 + 0x40;
  }
                    /* WARNING: Could not recover jumptable at 0x02fe9b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x38))();
  return;
}


