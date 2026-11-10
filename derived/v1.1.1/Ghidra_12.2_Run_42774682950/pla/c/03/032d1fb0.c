/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d1fb0; name: FUN_032d1fb0
 */


void FUN_032d1fb0(long param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  
  if ((param_4 == '\0') || (iVar1 = FUN_032d2020(param_1,param_2), iVar1 < 0)) {
                    /* WARNING: Could not recover jumptable at 0x032d201c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))(param_2,param_3,param_4 != '\0',0,*(undefined8 *)(param_1 + 0x20))
    ;
    return;
  }
  return;
}


