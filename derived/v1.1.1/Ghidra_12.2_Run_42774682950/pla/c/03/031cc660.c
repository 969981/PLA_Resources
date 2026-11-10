/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031cc660; name: FUN_031cc660
 */


void FUN_031cc660(long param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 local_a8 [2];
  undefined4 local_a0 [2];
  undefined4 local_98 [2];
  undefined4 local_90 [2];
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  uint *local_70;
  undefined8 local_68;
  
  local_70 = (uint *)0x0;
  local_68 = -0x8000000000000000;
  local_78[0] = *param_2;
  FUN_03178fcc(*(undefined8 *)(param_1 + 0x18),local_78,&local_70);
  if ((int)local_68 != 0) {
    puVar11 = local_70 + (long)(int)local_68 * 0xe;
    puVar9 = local_70;
    do {
      puVar10 = puVar9 + 0xe;
      local_88 = (undefined4 *)(CONCAT44(local_88._4_4_,*puVar9) & 0xffffffff003fffff);
      FUN_031d5a18(*(undefined8 *)(*(long *)(param_1 + 0x20) + ((ulong)(*puVar9 >> 0x13) & 0x1ff8)),
                   &local_88,puVar9 + 2);
      puVar9 = puVar10;
    } while (puVar10 != puVar11);
  }
  lVar8 = (long)DAT_0444b53c;
  lVar7 = tpidr_el0;
  lVar4 = *(long *)(lVar7 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar4;
  }
  if (*(long *)(lVar4 + lVar8 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  local_88 = (undefined4 *)0x0;
  local_80 = -0x8000000000000000;
  local_90[0] = *param_2;
  plVar1 = (long *)(param_1 + 0xb0);
  lVar4 = FUN_031e5518(plVar1,local_90);
  if ((lVar4 != 0) &&
     (uVar6 = *(uint *)(lVar4 + 4) |
              ((int)lVar4 - (int)*(undefined8 *)(param_1 + 0xc0)) * 0x20000000, -1 < (int)uVar6)) {
    lVar4 = *plVar1;
    iVar14 = *(int *)(lVar4 + (long)(int)uVar6 * 0x28 + 0x10);
    uVar3 = iVar14 - 1;
    if (0 < iVar14) {
      do {
        FUN_031e2f1c(*(long *)(*(long *)(lVar4 + (long)(int)uVar6 * 0x28 + 8) +
                               ((long)((ulong)uVar3 << 0x20) >> 0x1c) + 8) + 0x40,&local_88);
        uVar3 = uVar3 - 1;
      } while (-1 < (int)uVar3);
    }
  }
  if ((int)local_80 != 0) {
    puVar13 = local_88 + (long)(int)local_80 * 3;
    puVar12 = local_88;
    do {
      FUN_031b373c(*(undefined8 *)(param_1 + 0x18),*puVar12,puVar12[1],-puVar12[2],0);
      puVar12 = puVar12 + 3;
    } while (puVar12 != puVar13);
  }
  local_98[0] = *param_2;
  FUN_031e4498(plVar1,local_98);
  lVar4 = local_80;
  puVar2 = PTR_PTR_0434a090;
  uVar5 = (ulong)local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar4) && (local_88 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))
              (PTR_PTR_0434a090,local_88,(uVar5 & 0x3fffffff) * 0xc);
  }
  lVar8 = (long)DAT_0444b53c;
  lVar4 = *(long *)(lVar7 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar4;
  }
  if (*(long *)(lVar4 + lVar8 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  iVar14 = *(int *)(param_1 + 0xd8) + -1;
  if (0 < *(int *)(param_1 + 0xd8)) {
    do {
      while( true ) {
        local_88 = (undefined4 *)0x0;
        local_80 = -0x8000000000000000;
        lVar7 = *(long *)(param_1 + 0xd0) + (long)iVar14 * 0x30 + 8;
        local_a0[0] = *param_2;
        FUN_031e3dd0(lVar7,local_a0,&local_88);
        if ((int)local_80 != 0) {
          puVar13 = local_88 + (long)(int)local_80 * 3;
          puVar12 = local_88;
          do {
            FUN_031b373c(*(undefined8 *)(param_1 + 0x18),*puVar12,puVar12[1],-puVar12[2],0);
            puVar12 = puVar12 + 3;
          } while (puVar12 != puVar13);
        }
        local_a8[0] = *param_2;
        FUN_031e3730(lVar7,local_a8);
        lVar7 = local_80;
        uVar5 = (ulong)local_80._4_4_;
        local_80 = (ulong)local_80._4_4_ << 0x20;
        if ((-1 < lVar7) && (local_88 != (undefined4 *)0x0)) break;
        iVar14 = iVar14 + -1;
        if (iVar14 < 0) goto LAB_031cc778;
      }
      (**(code **)(*(long *)puVar2 + 0x18))(puVar2,local_88,(uVar5 & 0x3fffffff) * 0xc);
      iVar14 = iVar14 + -1;
    } while (-1 < iVar14);
  }
LAB_031cc778:
  puVar9 = local_70;
  if ((int)local_68 != 0) {
    lVar7 = (long)(int)local_68 * 0x38;
    do {
      iVar14 = *(int *)((long)puVar9 + lVar7 + -0x14);
      *(undefined4 *)((long)puVar9 + lVar7 + -0x18) = 0;
      if ((-1 < iVar14) && (lVar4 = *(long *)((long)puVar9 + lVar7 + -0x20), lVar4 != 0)) {
        (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,lVar4,iVar14 << 2);
      }
      uVar6 = *(uint *)((long)puVar9 + lVar7 + -0x24);
      *(undefined8 *)((long)puVar9 + lVar7 + -0x20) = 0;
      *(undefined4 *)((long)puVar9 + lVar7 + -0x14) = 0x80000000;
      *(undefined4 *)((long)puVar9 + lVar7 + -0x28) = 0;
      if ((-1 < (int)uVar6) && (lVar4 = *(long *)((long)puVar9 + lVar7 + -0x30), lVar4 != 0)) {
        (**(code **)(*(long *)puVar2 + 0x18))(puVar2,lVar4,(uVar6 & 0x3fffffff) << 1);
      }
      lVar4 = lVar7 + -0x38;
      *(undefined8 *)((long)puVar9 + lVar7 + -0x30) = 0;
      *(undefined4 *)((long)puVar9 + lVar7 + -0x24) = 0x80000000;
      lVar7 = lVar4;
    } while (lVar4 != 0);
  }
  lVar7 = local_68;
  uVar5 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_70 != (uint *)0x0)) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2,local_70,(uVar5 & 0x3fffffff) * 0x38);
  }
  return;
}


