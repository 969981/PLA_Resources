/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ff3f0; name: FUN_028ff3f0
 */


void FUN_028ff3f0(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_3;
  uVar1 = FUN_028ca890(*param_1 + 0x28);
  if (((uVar1 & 1) != 0) && (0.0 < *(float *)(lVar2 + 4))) {
                    /* WARNING: Could not recover jumptable at 0x028ff444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)param_1[2])(param_1[1],param_2,lVar2 + 8);
    return;
  }
  return;
}


