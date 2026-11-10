/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03026550; name: FUN_03026550
 */


void FUN_03026550(int *param_1,long param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  
  *param_1 = param_3;
  uVar5 = NEON_scvtf(CONCAT44(param_3,param_3),4);
  fVar6 = (float)*(undefined8 *)(param_2 + 0xb0);
  uVar7 = NEON_fmov(0x3f800000,4);
  *(ulong *)(param_1 + 2) =
       CONCAT44((float)((ulong)uVar5 >> 0x20) * fVar6 + (float)((ulong)uVar7 >> 0x20),
                (float)uVar5 * fVar6 + (float)uVar7);
  iVar1 = *(int *)(param_2 + 0x78);
  uVar4 = (uint)(param_4 == 0 && param_3 == 0);
  param_1[4] = uVar4;
  iVar2 = *(int *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 6) = param_5;
  uVar3 = 2;
  if (iVar2 + -1 != param_3 || iVar1 + -1 != param_4) {
    uVar3 = 0;
  }
  param_1[4] = uVar4 | (uint)(param_4 == 0) << 2 | uVar3;
  return;
}


