/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e2ae0; name: FUN_031e2ae0
 */


/* WARNING: Removing unreachable block (ram,0x031e2e90) */

bool FUN_031e2ae0(undefined8 param_1,long param_2,undefined8 param_3,short *param_4,int *param_5)

{
  ulong uVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  short *psVar18;
  long lVar19;
  int local_a0 [2];
  int local_98 [2];
  int local_90 [2];
  int local_88 [2];
  undefined4 local_80 [2];
  undefined4 local_78;
  int local_74;
  int *local_70;
  undefined8 local_68;
  
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar10 = *(long *)(param_2 + 0x20);
    lVar9 = lVar10;
  }
  else {
    lVar9 = FUN_02898b44();
    lVar10 = *(long *)(param_2 + 0x20);
  }
  puVar6 = PTR_PTR_0434a090;
  lVar19 = *(long *)(lVar9 + 0xd0) + (long)*param_5 * 0x10;
  iVar17 = *(int *)(lVar10 + 0x20);
  psVar18 = (short *)(lVar19 + 10);
  if (*psVar18 == 0) {
    return false;
  }
  iVar4 = *(int *)(lVar10 + 0x30);
  local_70 = (int *)0x0;
  local_68 = -0x8000000000000000;
  local_70 = (int *)FUN_032bd1d4(PTR_PTR_0434a090,8,4,0,0,(long)&local_68 + 4);
  iVar4 = *(int *)(lVar19 + 4) - iVar4;
  iVar16 = iVar4 + *psVar18;
  local_74 = iVar16;
  if (0 < *psVar18) {
    lVar19 = (long)iVar4;
    lVar10 = (long)iVar4 * 0x14 + 0xc;
    do {
      if ((*(short *)(*(long *)(lVar9 + 0x110) + lVar19 * 2) == *param_4) &&
         (*(int *)(*(long *)(*(long *)(param_2 + 0x20) + 0xe0) + lVar10) == -1)) {
        local_78 = (int)lVar19;
        FUN_031e29c0(&local_78,&local_70);
      }
      else {
        local_80[0] = (int)lVar19;
        FUN_031e2a40(local_80,&local_70);
      }
      lVar19 = lVar19 + 1;
      lVar10 = lVar10 + 0x14;
    } while (lVar19 < iVar16);
  }
  local_88[0] = iVar16;
  FUN_031e2a40(local_88,&local_70);
  if ((int)local_68 == 0) {
    bVar8 = false;
    goto LAB_031e2e60;
  }
  local_90[0] = *param_5 + iVar17;
  FUN_0318ac98(param_2,local_90);
  if ((int)local_68 < 1) {
    iVar17 = 0;
  }
  else {
    uVar13 = (long)(int)local_68 - 1U >> 1;
    uVar1 = uVar13 + 1;
    uVar11 = uVar1 & 1;
    if (uVar13 == 0) {
      iVar17 = 0;
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      iVar17 = 0;
      lVar19 = uVar1 - uVar11;
      do {
        puVar2 = (uint *)(local_70 + lVar10);
        lVar10 = lVar10 + 4;
        lVar19 = lVar19 + -2;
        iVar17 = iVar17 + ~*puVar2 + puVar2[1] + ~puVar2[2] + puVar2[3];
      } while (lVar19 != 0);
      if (uVar11 == 0) goto LAB_031e2d10;
    }
    iVar17 = iVar17 + ~local_70[lVar10] + *(int *)((long)local_70 + (lVar10 * 4 | 4U));
  }
LAB_031e2d10:
  *psVar18 = *psVar18 - (short)iVar17;
  *(int *)(lVar9 + 0x164) = *(int *)(lVar9 + 0x164) + iVar17;
  if (0 < (int)local_68) {
    lVar19 = 2;
    lVar10 = 4;
    iVar16 = *local_70;
    iVar4 = iVar16;
    while( true ) {
      *(undefined4 *)(*(long *)(lVar9 + 0xe0) + (long)iVar4 * 0x14 + 4) =
           *(undefined4 *)
            (*(long *)(*(long *)(param_2 + 0x20) + 0xe0) +
             (long)*(int *)((long)local_70 + lVar10) * 0x14 + -0x10);
      local_a0[0] = *(int *)((long)local_70 + lVar10);
      piVar3 = (int *)((long)local_70 + lVar10) + 1;
      if ((int)local_68 <= (int)lVar19) {
        piVar3 = &local_74;
      }
      iVar4 = *piVar3 - local_a0[0];
      local_98[0] = iVar16 + 1;
      FUN_031de0f0(param_1,param_2,local_98,local_a0,iVar4);
      if ((int)local_68 <= (int)lVar19) break;
      iVar16 = iVar4 + iVar16 + 1;
      lVar10 = lVar10 + 8;
      iVar4 = local_70[lVar19];
      lVar19 = lVar19 + 2;
      if (iVar16 != iVar4) {
        puVar14 = (undefined4 *)(*(long *)(lVar9 + 0xe0) + (long)iVar4 * 0x14);
        puVar12 = (undefined4 *)(*(long *)(lVar9 + 0xe0) + (long)iVar16 * 0x14);
        *puVar12 = *puVar14;
        puVar12[1] = puVar14[1];
        uVar15 = *(undefined8 *)(puVar14 + 2);
        *(undefined2 *)(puVar12 + 4) = *(undefined2 *)(puVar14 + 4);
        *(undefined8 *)(puVar12 + 2) = uVar15;
        *(undefined2 *)((long)puVar12 + 0x12) = *(undefined2 *)((long)puVar14 + 0x12);
        *(undefined2 *)(*(long *)(lVar9 + 0x110) + (long)iVar16 * 2) =
             *(undefined2 *)(*(long *)(lVar9 + 0x110) + (long)iVar4 * 2);
        iVar5 = *(int *)(lVar9 + 0x60);
        memcpy((void *)(*(long *)(lVar9 + 0x150) + (long)(iVar5 * iVar16) * 4),
               (void *)(*(long *)(lVar9 + 0x150) + (long)(iVar5 * iVar4) * 4),(long)iVar5 << 2);
        iVar4 = iVar16;
      }
    }
  }
  bVar8 = iVar17 != 0;
LAB_031e2e60:
  lVar9 = local_68;
  uVar7 = local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar9) && (local_70 != (int *)0x0)) {
    FUN_032cf244(puVar6,local_70,4,uVar7 & 0x3fffffff);
  }
  return bVar8;
}


