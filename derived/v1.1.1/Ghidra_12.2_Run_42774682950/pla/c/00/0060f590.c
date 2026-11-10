/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060f590; name: FUN_0060f590
 */


undefined8
FUN_0060f590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
  if (plVar1 != (long *)0x0) {
    FUN_0060f69c(plVar1,param_1);
  }
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
  if (lVar2 == 0) {
    (**(code **)*plVar1)(plVar1);
    uVar3 = 0;
  }
  else {
                    /* try { // try from 0060f5f8 to 0060f617 has its CatchHandler @ 0060f670 */
    uVar3 = FUN_0060f180(plVar1,param_2,param_3,param_4,param_5,param_6,param_7);
    (**(code **)*plVar1)(plVar1);
  }
  FUN_002e2ea0(PTR_LAB_04373088,plVar1);
  return uVar3;
}


