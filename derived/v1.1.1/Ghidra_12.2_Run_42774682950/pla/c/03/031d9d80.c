/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d9d80; name: FUN_031d9d80
 */


void FUN_031d9d80(long *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  long local_70;
  undefined8 local_68;
  
  puVar4 = PTR_PTR_0434a090;
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 == 0) {
    return;
  }
  if ((int)uVar5 < 1) {
    puVar6 = (undefined8 *)0x0;
    local_70 = CONCAT44(local_70._4_4_,uVar5);
    lVar7 = 0;
    uVar13 = 0x80000000;
    uVar14 = 0x80000000;
  }
  else {
    local_70._0_4_ = uVar5;
    puVar6 = (undefined8 *)FUN_032cf190(PTR_PTR_0434a090,8,&local_70);
    uVar13 = (uint)local_70;
    uVar5 = *(uint *)(param_1 + 1);
    local_70 = CONCAT44(local_70._4_4_,uVar5);
    if ((int)uVar5 < 1) {
      lVar7 = 0;
      uVar14 = 0x80000000;
    }
    else {
      lVar7 = FUN_032cf190(puVar4,8,&local_70);
      uVar5 = *(uint *)(param_1 + 1);
      uVar14 = (uint)local_70;
    }
  }
  uVar5 = FUN_031dd080(*param_1,uVar5,puVar6,lVar7);
  uVar12 = (ulong)uVar5;
  local_70 = 0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0x80000000;
  if ((int)uVar5 < 1) {
    if (uVar5 == 0) goto LAB_031d9e64;
  }
  else {
    local_70 = FUN_031dcbe0(PTR_PTR_0434a080,uVar12,0,0,(long)&local_68 + 4);
    if ((uint)local_68 == uVar5) goto LAB_031d9e64;
  }
  local_68._0_4_ = uVar5;
LAB_031d9e64:
  lVar9 = local_70;
  FUN_033299e0(0x893cc3ad);
  if (0 < (int)uVar5) {
    lVar8 = 0;
    puVar10 = puVar6;
    while( true ) {
      uVar12 = uVar12 - 1;
      puVar11 = (undefined4 *)*puVar10;
      puVar1 = (undefined4 *)(lVar9 + lVar8);
      *puVar1 = *puVar11;
      puVar1[1] = puVar11[1];
      *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(puVar11 + 2);
      *(undefined2 *)((long)puVar1 + 10) = *(undefined2 *)((long)puVar11 + 10);
      *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(puVar11 + 3);
      if (uVar12 == 0) break;
      lVar8 = lVar8 + 0x10;
      puVar10 = puVar10 + 1;
      lVar9 = local_70;
    }
  }
  puVar3 = PTR_PTR_0434a080;
  if (&local_70 != param_1) {
    if (*(int *)((long)param_1 + 0xc) < 0) {
      FUN_031dd310(PTR_PTR_0434a080,param_1);
    }
    if ((int)local_68._4_4_ < 0) {
      FUN_031dd310(puVar3,&local_70);
    }
    lVar9 = *param_1;
    *param_1 = local_70;
    uVar5 = *(uint *)(param_1 + 1);
    uVar2 = *(uint *)((long)param_1 + 0xc);
    *(uint *)(param_1 + 1) = (uint)local_68;
    *(uint *)((long)param_1 + 0xc) = local_68._4_4_;
    local_70 = lVar9;
    local_68._0_4_ = uVar5;
    local_68._4_4_ = uVar2;
  }
  FUN_033299e0(0x2bef7e60);
  uVar5 = local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < (int)uVar5) && (local_70 != 0)) {
    FUN_032cf244(puVar3,local_70,0x10,uVar5 & 0x3fffffff);
  }
  if ((lVar7 != 0) && (-1 < (int)uVar14)) {
    FUN_032cf244(puVar4,lVar7,8,uVar14 & 0x3fffffff);
  }
  if ((-1 < (int)uVar13) && (puVar6 != (undefined8 *)0x0)) {
    FUN_032cf244(puVar4,puVar6,8,uVar13 & 0x3fffffff);
  }
  return;
}


