/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031865f0; name: FUN_031865f0
 */


void FUN_031865f0(undefined8 *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined1 (*param_4) [16],undefined8 *param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar1 = *param_1;
  *(undefined8 *)(*param_2 + 8) = param_1[1];
  *(undefined8 *)*param_2 = uVar1;
  uVar1 = param_1[2];
  *(undefined8 *)(*param_3 + 8) = param_1[3];
  *(undefined8 *)*param_3 = uVar1;
  uVar1 = param_1[4];
  *(undefined8 *)(*param_4 + 8) = param_1[5];
  *(undefined8 *)*param_4 = uVar1;
  *param_5 = 0;
  param_5[1] = 0;
  uVar2 = *(ulong *)*param_4;
  uVar1 = *(undefined8 *)*param_2;
  uVar3 = *(undefined8 *)*param_3;
  auVar6 = NEON_ext(*param_4,*param_4,8,1);
  auVar4 = NEON_ext(*param_2,*param_2,8,1);
  auVar5 = NEON_ext(*param_3,*param_3,8,1);
  *(ulong *)(*param_2 + 8) = uVar2 & 0xffffffff;
  *(ulong *)*param_2 = CONCAT44((int)uVar3,(int)uVar1);
  *(ulong *)(*param_3 + 8) = uVar2 >> 0x20;
  *(ulong *)*param_3 = CONCAT44((int)((ulong)uVar3 >> 0x20),(int)((ulong)uVar1 >> 0x20));
  *(ulong *)(*param_4 + 8) = (ulong)auVar6._0_4_;
  *(ulong *)*param_4 = CONCAT44(auVar5._0_4_,auVar4._0_4_);
  param_5[1] = (ulong)auVar6._4_4_;
  *param_5 = CONCAT44(auVar5._4_4_,auVar4._4_4_);
  return;
}


