/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0336f600; name: FUN_0336f600
 */


void FUN_0336f600(undefined8 param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auStack_120 [64];
  undefined1 auStack_e0 [64];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_50 = *(undefined8 *)(*param_2 + 8);
  uStack_58 = *(undefined8 *)*param_2;
  uStack_48 = *(undefined8 *)(param_2[1] + 8);
  local_60 = *(undefined8 *)param_2[1];
  auVar1 = NEON_ext(*param_2,param_2[1],8,1);
  uStack_38 = auVar1._8_8_;
  local_40 = auVar1._0_8_;
  uStack_90 = *(undefined8 *)(*param_3 + 8);
  uStack_98 = *(undefined8 *)*param_3;
  uStack_88 = *(undefined8 *)(param_3[1] + 8);
  local_a0 = *(undefined8 *)param_3[1];
  auVar1 = NEON_ext(*param_3,param_3[1],8,1);
  uStack_78 = auVar1._8_8_;
  local_80 = auVar1._0_8_;
  uStack_70 = uStack_98;
  uStack_68 = uStack_88;
  uStack_30 = uStack_58;
  uStack_28 = uStack_48;
  FUN_0336f710(auStack_e0,&local_40,&local_a0);
  FUN_0336f710(auStack_120,&local_60,&local_80);
  FUN_0336f7d4(param_1,auStack_e0,auStack_120);
  return;
}


