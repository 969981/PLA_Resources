/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c925c; name: FUN_032c925c
 */


void FUN_032c925c(undefined1 (*param_1) [16])

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar2 = *(undefined8 *)*param_1;
  pauVar1 = param_1 + 1;
  uVar4 = *(undefined8 *)*pauVar1;
  auVar6 = NEON_ext(*pauVar1,*pauVar1,8,1);
  pauVar1 = param_1 + 2;
  uVar3 = *(undefined8 *)*pauVar1;
  auVar7 = NEON_ext(*pauVar1,*pauVar1,8,1);
  auVar5 = NEON_ext(*param_1,*param_1,8,1);
  auVar8._4_12_ = auVar7._4_12_;
  auVar8._0_4_ = (int)((ulong)uVar3 >> 0x20);
  *(long *)(param_1[2] + 8) = auVar7._0_8_;
  *(ulong *)param_1[2] = CONCAT44(auVar6._0_4_,auVar5._0_4_);
  *(undefined8 *)(*param_1 + 8) = uVar3;
  *(ulong *)*param_1 = CONCAT44((int)uVar4,(int)uVar2);
  *(long *)(param_1[1] + 8) = auVar8._0_8_;
  *(ulong *)param_1[1] = CONCAT44((int)((ulong)uVar4 >> 0x20),(int)((ulong)uVar2 >> 0x20));
  return;
}


