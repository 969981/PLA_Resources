/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314b610; name: FUN_0314b610
 */


void FUN_0314b610(long param_1,long param_2,long param_3,float *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 local_40 [8];
  float fStack_38;
  
  fVar4 = *(float *)(param_3 + 8) * *(float *)(param_1 + 0x18);
  *param_4 = fVar4;
  param_4[1] = fVar4;
  uVar2 = (**(code **)(**(long **)(param_2 + 0x28) + 0x80))
                    (*(long **)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20));
  FUN_032cc384(local_40,uVar2,*(long *)(param_2 + 0x38) + 0x50);
  plVar1 = *(long **)(param_2 + 0x28);
  lVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,*(undefined8 *)(param_2 + 0x20));
  lVar3 = (**(code **)(*plVar1 + 0x100))(plVar1,*(undefined4 *)(lVar3 + 0x80));
  fVar4 = (float)*(undefined8 *)(lVar3 + 0x60) * local_40._0_4_;
  fVar5 = (float)((ulong)*(undefined8 *)(lVar3 + 0x60) >> 0x20) * local_40._4_4_;
  fStack_38 = (float)*(undefined8 *)(lVar3 + 0x68) * fStack_38;
  fVar6 = fVar4 + fVar5 + fStack_38;
  uVar2 = CONCAT44(fVar4 + fVar5 + fStack_38,fVar6);
  if (*(float *)(param_1 + 0x1c) < fVar6) {
    uVar7 = NEON_frecpe(uVar2,4);
    uVar8 = NEON_frecps(uVar2,uVar7,4);
    fVar4 = (float)uVar7 * (float)uVar8;
    uVar2 = NEON_frecps(uVar2,CONCAT44((float)((ulong)uVar7 >> 0x20) * (float)((ulong)uVar8 >> 0x20)
                                       ,fVar4),4);
    fVar4 = fVar4 * (float)uVar2 * *(float *)(param_1 + 0x1c);
    *param_4 = *param_4 * fVar4 * fVar4;
  }
  return;
}


