/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008774bc; name: FUN_008774bc
 */


void FUN_008774bc(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  uVar1 = FUN_0087c008(param_2);
                    /* WARNING: Could not recover jumptable at 0x00877508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_043784c8)(uVar2,uVar1,param_4,param_3);
  return;
}


