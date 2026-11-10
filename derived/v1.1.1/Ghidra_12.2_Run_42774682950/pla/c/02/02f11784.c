/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f11784; name: FUN_02f11784
 */


void FUN_02f11784(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  
  for (plVar1 = DAT_0440ad60; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[8]) {
    (**(code **)(*plVar1 + 0xa0))(plVar1,param_1);
  }
  for (lVar2 = DAT_0440ad48; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x1c8)) {
    FUN_02ecc1f4(lVar2,param_1);
  }
  return;
}


