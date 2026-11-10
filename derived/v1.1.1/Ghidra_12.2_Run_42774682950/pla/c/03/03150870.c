/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03150870; name: FUN_03150870
 */


void FUN_03150870(long param_1,undefined1 (*param_2) [12],undefined2 *param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  *param_3 = 0;
  pauVar1 = (undefined1 (*) [12])(param_2[2] + 8);
  uVar7 = (undefined4)((ulong)*(undefined8 *)(param_2[3] + 4) >> 0x20);
  uVar6 = *(undefined8 *)*pauVar1;
  auVar11._12_4_ = uVar7;
  auVar11._0_12_ = *pauVar1;
  auVar12._12_4_ = uVar7;
  auVar12._0_12_ = *pauVar1;
  auVar12 = NEON_ext(auVar11,auVar12,8,1);
  uVar7 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  uVar4 = *(undefined8 *)*param_2;
  pauVar2 = (undefined1 (*) [16])(param_2[1] + 4);
  uVar8 = *(undefined8 *)*pauVar2;
  auVar11 = NEON_ext(*pauVar2,*pauVar2,8,1);
  auVar10._12_4_ = uVar7;
  auVar10._0_12_ = *param_2;
  auVar3._12_4_ = uVar7;
  auVar3._0_12_ = *param_2;
  auVar10 = NEON_ext(auVar10,auVar3,8,1);
  *(undefined8 *)(param_3 + 0x24) = uVar6;
  *(ulong *)(param_3 + 0x20) = CONCAT44((int)uVar8,(int)uVar4);
  *(ulong *)(param_3 + 0x2c) = CONCAT44(auVar12._4_4_,(int)((ulong)uVar6 >> 0x20));
  *(ulong *)(param_3 + 0x28) =
       CONCAT26((short)((ulong)uVar8 >> 0x30),
                CONCAT24((short)((ulong)uVar8 >> 0x20),(int)((ulong)uVar4 >> 0x20)));
  *(long *)(param_3 + 0x34) = auVar12._0_8_;
  *(ulong *)(param_3 + 0x30) = CONCAT44(auVar11._0_4_,auVar10._0_4_);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  *(ulong *)(param_3 + 0x1c) =
       CONCAT44((int)(short)((ulong)uVar4 >> 0x30) << 0x10,
                (int)(short)((ulong)uVar4 >> 0x20) << 0x10);
  *(ulong *)(param_3 + 0x18) = CONCAT26((short)((ulong)uVar4 >> 0x10),(uint6)(ushort)uVar4 << 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_3 + 8) = uVar4;
  dVar5 = *(double *)(param_1 + 0x10);
  dVar9 = *(double *)(param_1 + 0x18);
  *(ulong *)(param_3 + 0x3c) = (ulong)(uint)(float)*(double *)(param_1 + 0x20);
  *(ulong *)(param_3 + 0x38) = CONCAT44((float)dVar9,(float)dVar5);
  FUN_03016510(param_1,param_3 + 0x10);
  *(undefined8 *)(param_3 + 2) = 0x3f80000000000000;
  return;
}


