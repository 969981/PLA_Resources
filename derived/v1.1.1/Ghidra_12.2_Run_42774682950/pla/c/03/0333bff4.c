/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333bff4; name: FUN_0333bff4
 */


/* WARNING: Removing unreachable block (ram,0x0333c0bc) */

undefined8 FUN_0333bff4(long param_1,long *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  undefined1 *local_1078;
  undefined8 local_1070;
  undefined1 local_1068 [4104];
  
  lVar12 = (long)DAT_0444b53c;
  lVar5 = tpidr_el0;
  lVar9 = *(long *)(lVar5 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar9;
  }
  if (*(long *)(lVar9 + lVar12 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  iVar7 = FUN_0333b190(param_1);
  lVar12 = (long)DAT_0444b53c;
  lVar9 = *(long *)(lVar5 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar9;
  }
  if (*(long *)(lVar9 + lVar12 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar15 = (ulong)uVar3;
  uVar4 = *(uint *)(param_1 + 0x330);
  uVar13 = (ulong)uVar4;
  if ((int)uVar3 < 1) {
    uVar14 = 0;
  }
  else {
    if (uVar3 == 1) {
      lVar9 = 0;
      uVar14 = 0;
    }
    else {
      lVar9 = 0;
      uVar14 = 0;
      plVar11 = (long *)(*(long *)(param_1 + 0x18) + 0x28);
      do {
        if (plVar11[-3] == 0) {
          uVar14 = uVar14 + 1;
        }
        lVar9 = lVar9 + 2;
        if (*plVar11 == 0) {
          uVar14 = uVar14 + 1;
        }
        plVar11 = plVar11 + 6;
      } while (uVar15 - (uVar15 & 1) != lVar9);
      if ((uVar3 & 1) == 0) goto LAB_0333c10c;
    }
    if (*(long *)(*(long *)(param_1 + 0x18) + lVar9 * 0x18 + 0x10) == 0) {
      uVar14 = uVar14 + 1;
    }
  }
LAB_0333c10c:
  local_1078 = local_1068;
  local_1070 = 0x8000010000000000;
  if (0x100 < uVar14) {
    local_1078 = (undefined1 *)
                 FUN_0325b5c4(PTR_PTR_0434a090,uVar14,local_1078,0,(long)&local_1070 + 4);
  }
  local_1070._0_4_ = uVar14;
  (**(code **)(*param_2 + 0x18))(param_2,local_1078,uVar14,8);
  uVar14 = local_1070._4_4_;
  if (0 < (int)uVar3) {
    iVar8 = 0;
    lVar9 = 0x10;
    uVar10 = uVar15;
    do {
      if (*(long *)(*(long *)(param_1 + 0x18) + lVar9) == 0) {
        lVar12 = (long)iVar8;
        iVar8 = iVar8 + 1;
        *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar9) =
             *(undefined8 *)(local_1078 + lVar12 * 8);
      }
      uVar10 = uVar10 - 1;
      lVar9 = lVar9 + 0x18;
    } while (uVar10 != 0);
  }
  puVar6 = PTR_PTR_0434a090;
  uVar10 = (ulong)local_1070._4_4_;
  local_1070 = uVar10 << 0x20;
  if ((-1 < (int)uVar14) && (local_1078 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))
              (PTR_PTR_0434a090,local_1078,(uVar10 & 0x3fffffff) << 3);
  }
  lVar12 = (long)DAT_0444b53c;
  lVar9 = *(long *)(lVar5 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar9;
  }
  if (*(long *)(lVar9 + lVar12 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  if (0 < (int)uVar3) {
    lVar9 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar9);
      (**(code **)(*param_2 + 0x28))(param_2,puVar1[2],*puVar1,*(undefined1 *)((long)puVar1 + 10));
      if (1 < *(ushort *)(puVar1 + 1)) {
        (**(code **)(*param_2 + 0x38))
                  (param_2,puVar1[2],*(ushort *)(puVar1 + 1),*(undefined1 *)((long)puVar1 + 0xb));
      }
      uVar15 = uVar15 - 1;
      lVar9 = lVar9 + 0x18;
    } while (uVar15 != 0);
  }
  lVar12 = (long)DAT_0444b53c;
  lVar9 = *(long *)(lVar5 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar9;
  }
  if (*(long *)(lVar9 + lVar12 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  if ((int)uVar4 < 1) goto LAB_0333c320;
  local_1078 = local_1068;
  local_1070 = -0x7fffff0000000000;
  if ((int)uVar4 < 0x101) {
    if (uVar4 != 0) goto LAB_0333c2a0;
  }
  else {
    local_1078 = (undefined1 *)FUN_0333c798(puVar6,uVar13,local_1078,0,(long)&local_1070 + 4);
    if ((uint)local_1070 != uVar4) {
LAB_0333c2a0:
      local_1070 = CONCAT44(local_1070._4_4_,uVar4);
    }
  }
  lVar9 = 0;
  lVar12 = 0;
  uVar15 = uVar13;
  do {
    puVar2 = (ushort *)(*(long *)(param_1 + 0x328) + lVar9);
    lVar9 = lVar9 + 4;
    puVar1 = (undefined8 *)(local_1078 + lVar12);
    lVar12 = lVar12 + 0x10;
    *puVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)*puVar2 * 0x18 + 0x10);
    puVar1[1] = *(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)puVar2[1] * 0x18 + 0x10);
    uVar15 = uVar15 - 1;
  } while (uVar15 != 0);
  (**(code **)(*param_2 + 0x48))(param_2,local_1078,uVar13);
  lVar9 = local_1070;
  uVar15 = (ulong)local_1070._4_4_;
  local_1070 = (ulong)local_1070._4_4_ << 0x20;
  if ((-1 < lVar9) && (local_1078 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_1078,(uVar15 & 0x3fffffff) << 4);
  }
LAB_0333c320:
  lVar12 = (long)DAT_0444b53c;
  lVar9 = *(long *)(lVar5 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar9;
  }
  if (*(long *)(lVar9 + lVar12 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  (**(code **)(*param_2 + 0x50))
            (param_2,*(long *)(param_1 + 0x18) + 0x10,*(undefined4 *)(param_1 + 0x20),param_3,0x18);
  lVar12 = (long)DAT_0444b53c;
  lVar9 = *(long *)(lVar5 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar9;
  }
  if (*(long *)(lVar9 + lVar12 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar7 * 0x18 + 0x10);
}


