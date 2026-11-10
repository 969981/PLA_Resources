/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a47560; name: FUN_02a47560
 */


void FUN_02a47560(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_2;
  plVar1 = (long *)PTR_DAT_04379c88;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 0xb;
  }
  plVar2 = (long *)PTR_PTR_04379d00;
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 0xc;
  }
  lVar3 = *plVar2;
  if (plVar5 == (long *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = plVar5[0xd];
  }
  *param_1 = *plVar1;
  param_1[1] = lVar3;
  param_1[2] = lVar4;
  param_1[3] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  param_1[3] = (long)plVar5;
  return;
}


