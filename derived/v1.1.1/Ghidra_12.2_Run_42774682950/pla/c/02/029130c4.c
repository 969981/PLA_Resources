/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029130c4; name: FUN_029130c4
 */


bool FUN_029130c4(long param_1,undefined4 *param_2,undefined4 *param_3,undefined1 (*param_4) [16],
                 undefined8 param_5)

{
  int iVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  local_20 = *param_2;
  uStack_1c = param_2[1];
  local_18 = param_2[2];
  local_38 = *param_3;
  uStack_34 = param_3[1];
  auVar3._4_4_ = param_3[2];
  auVar3._0_4_ = local_38;
  auVar3._8_4_ = local_38;
  auVar3._12_4_ = param_3[2];
  auVar4 = NEON_ext(*param_4,*param_4,8,1);
  uStack_28 = NEON_ext(*(undefined8 *)*param_4,auVar4._0_8_,4,1);
  auVar3 = NEON_ext(auVar3,*param_4,0xc,1);
  local_30 = auVar3._0_8_;
  plVar2 = *(long **)(*(long *)(param_1 + 0x158) + 0x60);
  iVar1 = (**(code **)(*plVar2 + 0x60))(plVar2,param_5,&local_38);
  return iVar1 == 1;
}


