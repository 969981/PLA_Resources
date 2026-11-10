/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011b07ac; name: FUN_011b07ac
 */


undefined8
FUN_011b07ac(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 2) != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar1 = *param_2;
  *param_1 = uVar1;
  uVar2 = FUN_011b0838(*(undefined8 *)PTR_DAT_0437e630,"memoryID",uVar1,param_3,param_4,0);
  *(undefined8 *)(param_1 + 2) = uVar2;
  FUN_00d16158(&local_30,uVar2);
  *(undefined8 *)(param_1 + 4) = local_30;
  *(undefined8 *)(param_1 + 6) = uStack_28;
  return *(undefined8 *)(param_1 + 2);
}


