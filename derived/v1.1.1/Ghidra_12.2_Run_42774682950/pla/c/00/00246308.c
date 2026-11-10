/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00246308; name: FUN_00246308
 */


void FUN_00246308(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float local_50;
  float fStack_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_28;
  float fStack_24;
  
  uVar5 = FUN_00251430(param_2,*param_1);
  *(uint *)(param_1 + 6) = uVar5;
  lVar7 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  if (lVar7 == 0) goto LAB_00246524;
  lVar7 = lVar7 + (ulong)uVar5;
  lVar8 = param_1[1];
  if ((((lVar8 == 0) || ((*(byte *)(param_1 + 0x45) >> 2 & 1) != 0)) ||
      ((*(byte *)(lVar8 + 4) >> 1 & 1) == 0)) || (*(char *)((long)param_1 + 0x54) == '\0')) {
    FUN_0023e3b4(&local_48,lVar8 + 0x18,param_1 + 2);
    bVar4 = (*(byte *)(param_1[1] + 4) & 1) != 0;
    lVar8 = 0x90;
    if (bVar4) {
      lVar8 = 0x70;
    }
    lVar1 = 0xa0;
    if (bVar4) {
      lVar1 = 0x80;
    }
    *(float *)(lVar7 + lVar8) = local_48;
    lVar8 = 0x94;
    if (bVar4) {
      lVar8 = 0x74;
    }
    lVar2 = 0x98;
    if (bVar4) {
      lVar2 = 0x78;
    }
    lVar3 = 0x9c;
    if (bVar4) {
      lVar3 = 0x7c;
    }
    *(float *)(lVar7 + lVar8) = local_44;
    *(undefined4 *)(lVar7 + lVar2) = 0;
    *(undefined4 *)(lVar7 + lVar3) = local_40;
    *(undefined4 *)(lVar7 + lVar1) = local_3c;
    lVar8 = 0xa4;
    if (bVar4) {
      lVar8 = 0x84;
    }
    lVar1 = 0xa8;
    if (bVar4) {
      lVar1 = 0x88;
    }
    *(undefined4 *)(lVar7 + lVar8) = local_38;
    *(undefined4 *)(lVar7 + lVar1) = 0;
    lVar8 = 0xac;
    if (bVar4) {
      lVar8 = 0x8c;
    }
    *(undefined4 *)(lVar7 + lVar8) = local_34;
    lVar8 = param_1[1];
    if (lVar8 != 0) goto LAB_00246420;
  }
  else {
LAB_00246420:
    if (((*(byte *)(param_1 + 0x45) >> 2 & 1) == 0) && ((*(byte *)(lVar8 + 4) >> 1 & 1) != 0)) {
      fVar9 = (float)NEON_ucvtf((uint)*(byte *)(*param_1 + 0x5a));
      *(float *)(lVar7 + 0xdc) = (fVar9 / 255.0) / 255.0;
    }
  }
  (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,&local_50);
  (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,&local_28);
  (**(code **)(*(long *)*param_1 + 0x68))((long *)*param_1,&local_48);
  fVar9 = (float)(**(code **)(*(long *)*param_1 + 0x70))();
  if ((*(byte *)(*param_1 + 0x5b) & 3) == 2) {
    local_48 = fVar9 + local_48;
  }
  else if ((*(byte *)(*param_1 + 0x5b) & 3) != 0) {
    local_48 = local_48 - fVar9;
  }
  local_48 = local_48 - (local_50 - local_28) * 0.5;
  local_44 = local_44 + (fStack_4c - fStack_24) * 0.5;
  FUN_0022d1f0(param_2,lVar7,&local_48,&local_50,1,&DAT_039cfc04);
LAB_00246524:
  if ((param_1[0xb] != 0) ||
     (((param_1[1] != 0 && ((*(byte *)(param_1 + 0x45) >> 2 & 1) == 0)) &&
      (((*(byte *)(param_1[1] + 4) >> 1 & 1) != 0 && (*(char *)((long)param_1 + 0x54) == '\0'))))))
  {
    uVar6 = FUN_00251430(param_2,*param_1);
    *(undefined4 *)(param_1 + 10) = uVar6;
    FUN_00247628(param_1,param_2);
  }
  return;
}


