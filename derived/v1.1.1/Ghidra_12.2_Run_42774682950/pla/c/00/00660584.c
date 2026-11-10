/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00660584; name: FUN_00660584
 */


void FUN_00660584(long *param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,0x2f8,8);
  lVar3 = *param_2;
  puVar1 = PTR_DAT_04375930 + 0x10;
  plVar2[2] = 0;
  plVar2[3] = lVar3;
  *plVar2 = (long)puVar1;
  plVar2[1] = 0;
                    /* try { // try from 006605d8 to 006605df has its CatchHandler @ 00660624 */
  FUN_003c6e6c(plVar2 + 4);
  FUN_002934f8(plVar2 + 0x37,param_3);
  FUN_002934f8(plVar2 + 0x41,param_3);
  FUN_002934f8(plVar2 + 0x4b,param_3);
  FUN_002934f8(plVar2 + 0x55,param_3);
  *param_1 = (long)(plVar2 + 4);
  param_1[1] = (long)plVar2;
  return;
}


