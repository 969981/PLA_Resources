/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008775f4; name: FUN_008775f4
 */


void FUN_008775f4(long param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  uVar1 = FUN_0087c008(param_2);
  uVar2 = FUN_0087c05c(param_3);
  uVar3 = FUN_0087c07c(*param_4,param_4[1]);
                    /* WARNING: Could not recover jumptable at 0x00877688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_043784e0)(uVar4,uVar1,uVar2,param_5,uVar3,param_6,param_8,param_7);
  return;
}


