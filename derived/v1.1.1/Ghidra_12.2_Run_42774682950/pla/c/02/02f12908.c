/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f12908; name: FUN_02f12908
 */


void FUN_02f12908(undefined8 param_1,undefined8 param_2,int *param_3,uint param_4,void *param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  int *piVar5;
  ulong uVar6;
  float fVar7;
  undefined8 local_a0;
  float local_98;
  undefined8 local_90;
  float local_88;
  undefined8 *local_80;
  undefined8 local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  
  fVar7 = cosf((float)param_2);
  local_70 = cosf((float)param_1);
  local_70 = fVar7 * local_70;
  fStack_6c = sinf((float)param_1);
  fStack_6c = fVar7 * fStack_6c;
  local_68 = sinf((float)param_2);
  local_80 = &local_a0 + (ulong)(param_4 << 1) * -3;
  local_78 = (ulong)(param_4 << 1);
  FUN_02f121c0(param_1,param_2,param_3,&local_70,&local_80);
  if (param_4 != 0) {
    memset(param_5,0,(ulong)param_4 << 2);
  }
  puVar3 = local_80;
  uVar4 = local_78._4_4_;
  if (local_78._4_4_ != 0) {
    uVar6 = 0;
    do {
      uVar6 = uVar6 & 0xffff;
      piVar5 = (int *)(puVar3 + uVar6 * 3);
      iVar2 = *param_3 + -1;
      if (((*piVar5 == iVar2) || (*(int *)((long)puVar3 + uVar6 * 0x18 + 4) == iVar2)) ||
         (*(int *)(puVar3 + uVar6 * 3 + 1) == iVar2)) {
        local_90 = CONCAT44(fStack_6c,local_70);
        local_88 = local_68;
        FUN_02f12a88(param_3,piVar5,&local_90,param_5);
      }
      else {
        local_a0 = CONCAT44(fStack_6c,local_70);
        local_98 = local_68;
        FUN_02f12ba4(param_3,piVar5,&local_a0,param_5);
      }
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar1;
    } while ((uVar1 & 0xffff) < uVar4);
  }
  return;
}


