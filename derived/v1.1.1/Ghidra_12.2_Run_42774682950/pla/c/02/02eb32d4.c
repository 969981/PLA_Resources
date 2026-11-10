/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb32d4; name: FUN_02eb32d4
 */


void FUN_02eb32d4(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  FUN_02f2b7ac(param_1,0);
  plVar1 = (long *)param_1[0x26];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x68))(plVar1,0);
    puVar2 = (undefined8 *)param_1[0x26];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (*DAT_0442d150)(5,puVar2);
    }
    param_1[0x26] = 0;
  }
  (**(code **)*param_1)(param_1);
                    /* WARNING: Could not recover jumptable at 0x02eb331c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0442d150)(5,param_1);
  return;
}


