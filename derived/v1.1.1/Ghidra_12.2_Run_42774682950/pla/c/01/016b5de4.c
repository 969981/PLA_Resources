/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016b5de4; name: FUN_016b5de4
 */


void FUN_016b5de4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long *param_5)

{
  undefined *puVar1;
  long *plVar2;
  
  param_1 = param_1 + (param_3 & 0xffffffff) * 0x20;
  *(undefined8 *)(param_1 + 0x10) = param_5;
  *(undefined8 *)(param_1 + 0x20) = 0x128;
  plVar2 = (long *)(**(code **)(*param_5 + 0x10))(param_5,0x128,8);
  *(long **)(param_1 + 0x18) = plVar2;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x016b5eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))();
    return;
  }
  FUN_0094801c(plVar2,param_4,param_5,1);
  puVar1 = PTR_DAT_0437a010 + 0xf0;
  *plVar2 = (long)(PTR_DAT_0437a010 + 0x10);
  plVar2[1] = (long)puVar1;
  FUN_02bcf75c(plVar2 + 0xe,param_5);
  *(long **)(param_1 + 8) = plVar2;
                    /* WARNING: Could not recover jumptable at 0x016b5e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,param_2);
  return;
}


