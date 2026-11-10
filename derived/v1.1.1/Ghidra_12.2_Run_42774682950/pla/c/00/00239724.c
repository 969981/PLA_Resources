/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00239724; name: FUN_00239724
 */


void FUN_00239724(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  
  (**(code **)(*param_1 + 0x100))();
  uVar1 = FUN_00229ee8(param_2);
  if (param_4 < (int)(uVar1 & 0xffff)) {
    lVar2 = FUN_00229f00(param_2);
    lVar2 = FUN_00230558(param_3,lVar2 + (long)param_4 * 0x24);
    (**(code **)(*param_1 + 0x58))(param_1,lVar2);
    param_1[9] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x002397bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1,param_5 & 1);
    return;
  }
  return;
}


