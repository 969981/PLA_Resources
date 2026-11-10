/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00877a64; name: FUN_00877a64
 */


void FUN_00877a64(long param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  uVar1 = FUN_0087c07c(*param_3,param_3[1]);
                    /* WARNING: Could not recover jumptable at 0x00877ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04378588)(uVar2,param_2,uVar1,param_5);
  return;
}


