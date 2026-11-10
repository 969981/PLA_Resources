/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027d26c; name: FUN_0027d26c
 */


void FUN_0027d26c(undefined8 param_1,long param_2,undefined4 param_3,long param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  undefined8 uVar1;
  
  FUN_00877958(param_1,*(undefined8 *)(param_4 + 8),0x3f);
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  FUN_00877788(param_1,*(long *)(param_2 + 0x238) + 0x120);
  FUN_0087782c(param_1,*(long *)(param_2 + 0x238) + 0x148);
  FUN_0087768c(param_1,*(long *)(param_2 + 0x238) + 0x164);
  FUN_00877904(param_1,*(long *)(param_2 + 0x238) + 0x370);
  FUN_0027d350(uVar1,param_1,param_2,param_4,param_6);
  FUN_0027d558(uVar1,param_1,param_2,param_4,param_6);
  FUN_00284758(*(undefined8 *)(*(long *)(param_2 + 0x78) + 0x20),param_1,param_2,param_3,param_5,
               param_6);
  return;
}


