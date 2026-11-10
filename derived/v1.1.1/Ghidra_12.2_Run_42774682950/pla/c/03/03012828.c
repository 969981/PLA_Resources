/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03012828; name: FUN_03012828
 */


void FUN_03012828(undefined8 param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_03012520();
                    /* WARNING: Could not recover jumptable at 0x03012864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_0442d408 + (ulong)*(byte *)(lVar1 + 0x20) * 0x80 + 0x70))
            (lVar1,param_2 & 1,param_3);
  return;
}


