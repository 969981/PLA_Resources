/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01092c60; name: FUN_01092c60
 */


void FUN_01092c60(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,byte param_8)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar2 = FUN_02c6849c(*(undefined8 *)(*param_3 + 0x98));
  uVar1 = FUN_02c6f924(*(undefined8 *)(*param_3 + 0x98));
  uVar3 = FUN_02c6f5e8(*(undefined8 *)(*param_3 + 0x98));
  uVar4 = FUN_02c6d5b0(*(undefined8 *)(*param_3 + 0x98));
  FUN_01092d30(param_1,param_2,uVar2,uVar1,uVar3,uVar4 & 1,param_4,param_5,param_6,param_7,
               param_8 & 1);
  return;
}


