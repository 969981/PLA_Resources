/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00239ae0; name: FUN_00239ae0
 */


void FUN_00239ae0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_4 + 0x60);
  FUN_002326c4();
  puVar1 = PTR_DAT_04372c78 + 0x10;
  param_1[0xc] = lVar2;
  param_1[0xd] = 0;
  *param_1 = (long)puVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 2;
  FUN_00234298(param_1,param_2,param_3,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00239b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd0))(param_1,param_2);
  return;
}


