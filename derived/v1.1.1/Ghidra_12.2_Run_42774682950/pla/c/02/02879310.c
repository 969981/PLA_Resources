/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02879310; name: FUN_02879310
 */


void FUN_02879310(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = param_2;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(param_1 + 8) == 0) {
    FUN_028793a0(&local_48,param_2,&local_28);
    uVar1 = local_48;
    local_48 = 0;
    FUN_02879700((long *)(param_1 + 8),uVar1);
    *(undefined8 *)(param_1 + 0x10) = local_40;
    *(undefined8 *)(param_1 + 0x18) = uStack_38;
    *(undefined8 *)(param_1 + 0x20) = local_30;
    FUN_02879700(&local_48,0);
  }
  return;
}


