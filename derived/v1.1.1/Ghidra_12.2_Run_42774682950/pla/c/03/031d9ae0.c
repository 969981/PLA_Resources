/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d9ae0; name: FUN_031d9ae0
 */


void FUN_031d9ae0(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *local_70;
  undefined8 local_68;
  
  puVar3 = PTR_PTR_0434a090;
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 == 0) {
    return;
  }
  if ((int)uVar4 < 1) {
    puVar5 = (undefined8 *)0x0;
    local_70 = (undefined1 *)CONCAT44(local_70._4_4_,uVar4);
    lVar6 = 0;
    uVar12 = 0x80000000;
    uVar13 = 0x80000000;
  }
  else {
    local_70._0_4_ = uVar4;
    puVar5 = (undefined8 *)FUN_032cf190(PTR_PTR_0434a090,8,&local_70);
    uVar12 = (uint)local_70;
    uVar4 = *(uint *)(param_1 + 1);
    local_70 = (undefined1 *)CONCAT44(local_70._4_4_,uVar4);
    if ((int)uVar4 < 1) {
      lVar6 = 0;
      uVar13 = 0x80000000;
    }
    else {
      lVar6 = FUN_032cf190(puVar3,8,&local_70);
      uVar4 = *(uint *)(param_1 + 1);
      uVar13 = (uint)local_70;
    }
  }
  uVar4 = FUN_031dcd10(*param_1,uVar4,puVar5,lVar6);
  local_70 = (undefined1 *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0x80000000;
  if ((int)uVar4 < 1) {
    if (uVar4 == 0) goto LAB_031d9bc4;
  }
  else {
    local_70 = (undefined1 *)FUN_031db48c(PTR_PTR_0434a080,uVar4,0,0,(long)&local_68 + 4);
    if ((uint)local_68 == uVar4) goto LAB_031d9bc4;
  }
  local_68._0_4_ = uVar4;
LAB_031d9bc4:
  puVar11 = local_70;
  FUN_033299e0(0x893cc3ad);
  if (0 < (int)uVar4) {
    puVar7 = (undefined1 *)*puVar5;
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(puVar7 + 4);
    *(undefined4 *)(puVar11 + 8) = *(undefined4 *)(puVar7 + 8);
    if (uVar4 != 1) {
      lVar10 = (ulong)uVar4 - 1;
      lVar8 = 0;
      puVar9 = puVar5;
      do {
        puVar9 = puVar9 + 1;
        puVar11 = (undefined1 *)*puVar9;
        local_70[lVar8 + 0xc] = *puVar11;
        *(undefined4 *)(local_70 + lVar8 + 0x10) = *(undefined4 *)(puVar11 + 4);
        lVar10 = lVar10 + -1;
        *(undefined4 *)(local_70 + lVar8 + 0x14) = *(undefined4 *)(puVar11 + 8);
        lVar8 = lVar8 + 0xc;
      } while (lVar10 != 0);
    }
  }
  puVar2 = PTR_PTR_0434a080;
  if (&local_70 != (undefined1 **)param_1) {
    if (*(int *)((long)param_1 + 0xc) < 0) {
      FUN_031dcf80(PTR_PTR_0434a080,param_1);
    }
    if ((int)local_68._4_4_ < 0) {
      FUN_031dcf80(puVar2,&local_70);
    }
    puVar11 = (undefined1 *)*param_1;
    *param_1 = local_70;
    uVar4 = *(uint *)(param_1 + 1);
    uVar1 = *(uint *)((long)param_1 + 0xc);
    *(uint *)(param_1 + 1) = (uint)local_68;
    *(uint *)((long)param_1 + 0xc) = local_68._4_4_;
    local_70 = puVar11;
    local_68._0_4_ = uVar4;
    local_68._4_4_ = uVar1;
  }
  FUN_033299e0(0x2bef7e60);
  uVar4 = local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < (int)uVar4) && (local_70 != (undefined1 *)0x0)) {
    FUN_032cf244(puVar2,local_70,0xc,uVar4 & 0x3fffffff);
  }
  if ((lVar6 != 0) && (-1 < (int)uVar13)) {
    FUN_032cf244(puVar3,lVar6,8,uVar13 & 0x3fffffff);
  }
  if ((-1 < (int)uVar12) && (puVar5 != (undefined8 *)0x0)) {
    FUN_032cf244(puVar3,puVar5,8,uVar12 & 0x3fffffff);
  }
  return;
}


