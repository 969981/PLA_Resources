/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080a5e0; name: FUN_0080a5e0
 */


long * FUN_0080a5e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  
  uVar2 = FUN_007e336c();
  plVar3 = (long *)FUN_0081a750(0x528,uVar2);
  if (plVar3 != (long *)0x0) {
    FUN_008021a4(plVar3,param_1,param_2);
    *plVar3 = (long)(PTR_DAT_04377930 + 0x10);
    FUN_007e3400(plVar3 + 0x10);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    puVar1 = PTR_DAT_04377938;
    *plVar3 = (long)(PTR_DAT_04377938 + 0x10);
    plVar3[0xa4] = 0xffffffff;
    (**(code **)(puVar1 + 0x20))(plVar3);
  }
  return plVar3;
}


