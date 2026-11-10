/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03379424; name: FUN_03379424
 */


void FUN_03379424(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = &PTR_LAB_0436e318;
  FUN_03379180(param_1 + 3);
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar3;
  }
  plVar2 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
                    /* WARNING: Could not recover jumptable at 0x03379484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,param_1,0x38);
  return;
}


