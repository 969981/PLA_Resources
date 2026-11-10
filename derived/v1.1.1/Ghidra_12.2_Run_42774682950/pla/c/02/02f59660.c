/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f59660; name: FUN_02f59660
 */


void FUN_02f59660(undefined4 param_1,long param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = FUN_02f59810(param_2,param_3);
  if ((lVar1 == 0) &&
     (((*(ulong *)(param_2 + 0x8f8) < param_3 ||
       (lVar1 = FUN_02f582b0(param_1,param_2,param_3), lVar1 == 0)) &&
      (lVar1 = FUN_02f59870(param_1,param_2,param_3), lVar1 == 0)))) {
    FUN_02f582b0(param_1,param_2,param_3);
    return;
  }
  return;
}


