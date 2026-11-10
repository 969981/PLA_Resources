/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da5124; name: FUN_00da5124
 */


void FUN_00da5124(long *param_1,long param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = (long)param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*(long *)*param_4 + 0x10))((long *)*param_4,param_2 * 0x70,8);
    if (lVar1 == 0) {
      (**(code **)(*(long *)*param_4 + 0xb8))();
    }
  }
  lVar2 = lVar1 + param_3 * 0x70;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x70;
  return;
}


