/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ba1d4; name: FUN_031ba1d4
 */


void FUN_031ba1d4(long param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
                 undefined4 param_5,undefined1 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_38 = param_3[1];
  local_40 = *param_3;
  uStack_2c = *param_4;
  local_30 = param_5;
  local_28 = param_6;
  FUN_031ba298(param_1,&local_50);
  FUN_031ba344(param_1,&local_50);
  if (0 < *(int *)(param_1 + 0x18)) {
    fVar1 = (float)*(undefined8 *)(param_1 + 0x20) - (float)*param_2;
    fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) -
            (float)((ulong)*param_2 >> 0x20);
    fVar4 = (float)*(undefined8 *)(param_1 + 0x28) - (float)param_2[1];
    fVar1 = fVar1 * fVar1;
    fVar3 = fVar3 * fVar3;
    fVar4 = fVar4 * fVar4;
    fVar2 = fVar1 + fVar3 + fVar4;
    fVar4 = fVar1 + fVar3 + fVar4;
    uVar8 = CONCAT44(fVar4,fVar2);
    uVar7 = NEON_frsqrte(uVar8,4);
    fVar1 = (float)uVar7;
    fVar3 = (float)((ulong)uVar7 >> 0x20);
    uVar7 = NEON_frsqrts(uVar8,CONCAT44(fVar3 * fVar3,fVar1 * fVar1),4);
    fVar1 = fVar1 * (float)uVar7;
    fVar3 = fVar3 * (float)((ulong)uVar7 >> 0x20);
    uVar8 = NEON_frsqrts(uVar8,CONCAT44(fVar3 * fVar3,fVar1 * fVar1),4);
    iVar5 = -(uint)(fVar2 <= 0.0);
    iVar6 = -(uint)(fVar4 <= 0.0);
    fVar2 = fVar2 * (float)uVar8 * fVar1;
    fVar4 = fVar4 * (float)((ulong)uVar8 >> 0x20) * fVar3;
    fVar1 = (float)CONCAT13((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                            CONCAT12((byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                                     CONCAT11((byte)((uint)fVar2 >> 8) & ~(byte)((uint)iVar5 >> 8),
                                              SUB41(fVar2,0) & ~(byte)iVar5)));
    *(ulong *)(param_1 + 0x30) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) +
                  (float)(CONCAT17((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18),
                                   CONCAT16((byte)((uint)fVar4 >> 0x10) &
                                            ~(byte)((uint)iVar6 >> 0x10),
                                            CONCAT15((byte)((uint)fVar4 >> 8) &
                                                     ~(byte)((uint)iVar6 >> 8),
                                                     CONCAT14(SUB41(fVar4,0) & ~(byte)iVar6,fVar1)))
                                  ) >> 0x20),(float)*(undefined8 *)(param_1 + 0x30) + fVar1);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  uVar8 = *param_2;
  *(undefined8 *)(param_1 + 0x28) = param_2[1];
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  return;
}


