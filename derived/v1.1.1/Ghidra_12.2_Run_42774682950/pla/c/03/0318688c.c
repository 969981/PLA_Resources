/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318688c; name: FUN_0318688c
 */


void FUN_0318688c(long param_1,uint param_2)

{
  undefined8 *puVar1;
  short sVar2;
  undefined *puVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  float local_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90;
  uint local_78 [2];
  long local_70;
  undefined8 local_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  puVar3 = PTR_PTR_0434a090;
  param_2 = param_2 & 0x3fffff;
  lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 0x20);
  uVar8 = param_2 - *(int *)(lVar7 + 0x20);
  if ((int)param_2 < *(int *)(lVar7 + 0x20)) {
    uVar8 = param_2;
    if ((*(int *)(lVar7 + 0x98) != 0) &&
       (uVar8 = *(uint *)(*(long *)(lVar7 + 0x90) + (ulong)param_2 * 4), uVar8 == 0xffffffff)) {
      lVar7 = *(long *)(lVar7 + 0x18) + (ulong)param_2 * 0x10;
      goto LAB_031868ec;
    }
    lVar7 = *(long *)(lVar7 + 0xb0);
  }
  else {
    lVar7 = *(long *)(lVar7 + 0xd0);
  }
  lVar7 = lVar7 + (long)(int)uVar8 * 0x10;
LAB_031868ec:
  local_70 = 0;
  local_68 = -0x8000000000000000;
  sVar2 = *(short *)(lVar7 + 8);
  uVar8 = (int)sVar2 + 1;
  if (sVar2 < 0) {
    iVar6 = 0;
  }
  else {
    local_70 = FUN_032bd1d4(PTR_PTR_0434a090,uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU),0x10,0,0,
                            (long)&local_68 + 4);
    iVar6 = (int)local_68;
  }
  if (iVar6 <= sVar2 || (int)uVar8 < iVar6) {
    local_68 = CONCAT44(local_68._4_4_,uVar8);
  }
  thunk_FUN_031932b0(*(undefined8 *)(param_1 + 0x48),lVar7,&local_70);
  local_78[0] = param_2;
  uVar4 = FUN_03189ba4(&local_70,local_78,param_1 + 0x20,param_1 + 0x30,param_1 + 0x10,auStack_50,
                       auStack_60);
  if (((uVar4 & 1) != 0) &&
     (FUN_03186a80(&local_c0,param_1 + 0x20,param_1 + 0x30,auStack_50,auStack_60),
     local_90 = param_2, (float)*(undefined8 *)(param_1 + 0x40) < fStack_bc - local_c0)) {
    plVar9 = *(long **)(param_1 + 0x50);
    iVar5 = (int)plVar9[1];
    lVar7 = *plVar9;
    iVar6 = iVar5 + 1;
    if ((int)(*(uint *)((long)plVar9 + 0xc) & 0x3fffffff) <= iVar5) {
      lVar7 = FUN_03186b14(puVar3,iVar6);
      iVar5 = (int)plVar9[1];
      *plVar9 = lVar7;
    }
    puVar1 = (undefined8 *)(lVar7 + (long)iVar5 * 0x40);
    puVar1[3] = local_a8;
    puVar1[5] = local_98;
    puVar1[1] = local_b8;
    puVar1[2] = uStack_b0;
    *puVar1 = CONCAT44(fStack_bc,local_c0);
    puVar1[4] = local_a0;
    *(uint *)(puVar1 + 6) = param_2;
    *(int *)(plVar9 + 1) = iVar6;
  }
  lVar7 = local_68;
  uVar4 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_70 != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3,local_70,(uVar4 & 0x3fffffff) << 4);
  }
  return;
}


