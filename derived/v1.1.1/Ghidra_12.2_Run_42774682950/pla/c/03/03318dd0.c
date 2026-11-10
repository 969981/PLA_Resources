/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03318dd0; name: FUN_03318dd0
 */


void FUN_03318dd0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 local_28;
  
  if (param_2 != param_3) {
    do {
      local_28 = *param_2;
      lVar1 = FUN_03318f34(param_1,&local_28);
      if (lVar1 != 0) {
        FUN_0331f500(param_1,lVar1);
      }
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}


