/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031dc8e8; name: FUN_031dc8e8
 */


void FUN_031dc8e8(undefined8 param_1,long *param_2,long param_3,undefined4 *param_4,
                 undefined4 *param_5,long *param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  void *__dest;
  int *piVar10;
  undefined1 *puVar11;
  int iVar12;
  long lVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined4 *local_a0;
  undefined4 local_98 [2];
  undefined4 local_90 [2];
  int local_88;
  undefined2 local_84;
  undefined4 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  uint local_64;
  
  puVar5 = PTR_PTR_0434a080;
  lVar17 = *param_2;
  iVar8 = (int)param_3;
  lVar18 = (long)iVar8;
  lVar13 = lVar17 + (long)iVar8 * 0x28;
  local_88 = *(int *)(lVar13 + 8);
  local_84 = *(undefined2 *)(lVar13 + 0xc);
  local_80 = (undefined4 *)0x0;
  local_78 = 0x8000000000000000;
  uVar3 = *(uint *)(lVar13 + 0x18);
  puVar14 = *(undefined4 **)(lVar13 + 0x10);
  local_64 = uVar3;
  if ((int)uVar3 < 1) {
    local_80 = (undefined4 *)0x0;
    local_78 = 0x8000000000000000;
  }
  else {
    local_80 = (undefined4 *)FUN_032cf190(PTR_PTR_0434a080,4,&local_64);
    local_78 = CONCAT44(local_64,uVar3);
    uVar2 = uVar3 & 3;
    puVar1 = local_80;
    if (2 < uVar3 - 1) {
      iVar12 = uVar2 - uVar3;
      puVar7 = local_80;
      local_a0 = puVar14;
      do {
        puVar14 = local_a0 + 4;
        *puVar7 = *local_a0;
        puVar7[1] = local_a0[1];
        puVar7[2] = local_a0[2];
        puVar1 = puVar7 + 4;
        iVar12 = iVar12 + 4;
        puVar7[3] = local_a0[3];
        puVar7 = puVar1;
        local_a0 = puVar14;
      } while (iVar12 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = *puVar14;
      puVar1 = puVar1 + 1;
      puVar14 = puVar14 + 1;
    }
  }
  puVar14 = local_80;
  local_70 = *(undefined4 *)(lVar17 + lVar18 * 0x28 + 0x20);
  local_88 = local_88 + -1;
  if (((local_88 == 0) && ((char)local_84 == '\0')) && (local_84._1_1_ == '\0')) {
    iVar9 = (int)param_6[1];
    iVar12 = iVar9 + 1;
    uVar4 = *param_4;
    lVar13 = *param_6;
    if ((int)(*(uint *)((long)param_6 + 0xc) & 0x3fffffff) <= iVar9) {
      lVar13 = FUN_031db48c(puVar5,iVar12);
      iVar9 = (int)param_6[1];
      *param_6 = lVar13;
    }
    puVar11 = (undefined1 *)(lVar13 + (long)iVar9 * 0xc);
    *puVar11 = 3;
    *(undefined4 *)(puVar11 + 4) = uVar4;
    *(int *)(param_6 + 1) = iVar12;
    local_90[0] = *param_4;
    local_98[0] = *param_5;
    FUN_031d87ac(param_1,local_90,local_98,param_6 + 2);
    if ((*(uint *)(param_2 + 3) < (uint)((ulong)param_3 >> 0x20)) ||
       (lVar13 = param_2[2] + (param_3 >> 0x20) * 8, *(int *)(lVar13 + 4) != iVar8)) {
      lVar13 = FUN_031dc4f4(param_2,*param_2 + lVar18 * 0x28);
    }
    FUN_031dc578(param_2,lVar13);
  }
  else {
    lVar17 = *param_2;
    lVar13 = lVar17 + lVar18 * 0x28;
    piVar10 = (int *)(lVar13 + 8);
    *piVar10 = local_88;
    *(undefined2 *)(lVar13 + 0xc) = local_84;
    if (piVar10 != &local_88) {
      lVar13 = lVar17 + lVar18 * 0x28;
      puVar16 = (undefined8 *)(lVar13 + 0x10);
      __dest = (void *)*puVar16;
      iVar8 = (int)local_78;
      lVar15 = (long)(int)local_78;
      if ((int)(*(uint *)(lVar13 + 0x1c) & 0x3fffffff) < (int)local_78) {
        __dest = (void *)FUN_032bd1d4(puVar5,local_78 & 0xffffffff,4,__dest,
                                      *(undefined4 *)(lVar17 + lVar18 * 0x28 + 0x18));
        *puVar16 = __dest;
      }
      memcpy(__dest,puVar14,lVar15 << 2);
      *(int *)(lVar17 + lVar18 * 0x28 + 0x18) = iVar8;
    }
    *(undefined4 *)(lVar17 + lVar18 * 0x28 + 0x20) = local_70;
  }
  uVar6 = local_78;
  uVar3 = local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < (long)uVar6) && (local_80 != (undefined4 *)0x0)) {
    FUN_032cf244(puVar5,local_80,4,uVar3 & 0x3fffffff);
  }
  return;
}


