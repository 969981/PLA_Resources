/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f9fbf8; name: FUN_02f9fbf8
 */


void FUN_02f9fbf8(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined2 *local_108;
  undefined8 local_100;
  undefined2 local_f8 [64];
  long local_78;
  undefined8 local_70;
  
  if ((int)*(uint *)((long)param_2 + 0xc) < 0) {
    uVar7 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
    if ((int)uVar7 <= (int)*(uint *)(param_2 + 1)) {
      uVar7 = *(uint *)(param_2 + 1);
    }
    lVar14 = 0;
    if (*param_2 != 0) {
      lVar14 = *param_2 + (long)param_2;
    }
    lVar15 = tpidr_el0;
    lVar13 = *(long *)(lVar15 + 0x38d490);
    if (lVar13 == 0) {
      lVar13 = FUN_0333d16c(0,1);
      *(long *)(lVar15 + 0x38d490) = lVar13;
    }
    plVar11 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar14,(ulong)uVar7 << 5);
  }
  *(undefined2 *)(param_2 + 2) = 0;
  *(undefined2 *)((long)param_2 + 0x1c) = 0;
  *(undefined8 *)((long)param_2 + 0x14) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_02f9c618(param_2,*(int *)((long)param_1 + 0x14) << 1);
  puVar9 = PTR_PTR_0434a080;
  if (*(short *)((long)param_1 + 0x1c) == 0) goto LAB_02f9ff48;
  local_78 = 0;
  local_70 = -0x8000000000000000;
  iVar3 = (int)param_1[1];
  if (iVar3 < 1) {
    local_70._0_4_ = 0;
LAB_02f9fd0c:
    if (iVar3 < (int)(uint)local_70) {
      local_70 = CONCAT44(local_70._4_4_,iVar3);
    }
  }
  else {
    if (0x3fffffff < iVar3) {
      FUN_032bd0a8(iVar3);
    }
    local_78 = FUN_032bd1d4(puVar9,iVar3,2,0,0,(long)&local_70 + 4);
    if (iVar3 <= (int)(uint)local_70) goto LAB_02f9fd0c;
    lVar14 = (long)(int)(uint)local_70;
    uVar7 = ~(uint)local_70;
    local_70 = CONCAT44(local_70._4_4_,iVar3);
    memset((void *)(local_78 + lVar14 * 2),0,(ulong)(iVar3 + uVar7) * 2 + 2);
  }
  local_f8[0] = 0;
  local_108 = local_f8;
  lVar14 = 0;
  local_100 = 0x8000004000000001;
  uVar16 = (ulong)*(ushort *)((long)param_1 + 0x1c);
  do {
    while( true ) {
      lVar15 = 0;
      if (*param_1 != 0) {
        lVar15 = *param_1 + (long)param_1;
      }
      puVar1 = (undefined8 *)(lVar15 + uVar16 * 0x20);
      uVar6 = *(ushort *)(local_78 + uVar16 * 2);
      uVar20 = puVar1[1];
      uVar19 = *puVar1;
      uVar18 = puVar1[3];
      uVar17 = puVar1[2];
      uVar4 = *(ushort *)(param_2 + 2);
      if (uVar4 == 0) {
        FUN_02f9c618(param_2,1);
        uVar4 = *(ushort *)(param_2 + 2);
      }
      uVar10 = local_100;
      lVar15 = *param_2 + (long)param_2;
      lVar13 = 0;
      if (*param_2 != 0) {
        lVar13 = lVar15;
      }
      puVar2 = (undefined8 *)(lVar13 + (ulong)uVar4 * 0x20);
      *(undefined2 *)(param_2 + 2) = *(undefined2 *)(lVar15 + (ulong)uVar4 * 0x20);
      *(uint *)((long)puVar2 + 0xc) = uVar6 | 0x3f000000;
      puVar2[1] = CONCAT44(*(undefined4 *)((long)puVar2 + 0xc),(int)uVar20);
      *puVar2 = uVar19;
      puVar2[3] = CONCAT44(*(undefined4 *)((long)puVar2 + 0x1c),(int)uVar18);
      puVar2[2] = uVar17;
      if (uVar6 == 0) {
        *(ushort *)((long)param_2 + 0x1c) = uVar4;
      }
      else {
        lVar15 = *param_2;
        if (lVar15 != 0) {
          lVar15 = lVar15 + (long)param_2;
        }
        *(ushort *)(lVar15 + (ulong)uVar6 * 0x20 + lVar14 * 2 + 0x1c) = uVar4;
      }
      uVar6 = *(ushort *)((long)puVar1 + 0x1c);
      uVar16 = (ulong)uVar6;
      uVar5 = *(ushort *)((long)puVar1 + 0x1e);
      if (uVar16 == 0) break;
      *(ushort *)(local_78 + uVar16 * 2) = uVar4;
      *(ushort *)(local_78 + (ulong)uVar5 * 2) = uVar4;
      uVar7 = (int)local_100 + 1;
      if ((int)(local_100._4_4_ & 0x3fffffff) <= (int)local_100) {
        if (0x3ffffffe < (int)local_100) {
          FUN_032bd0a8(uVar7);
        }
        uVar12 = (local_100._4_4_ & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar12) {
          uVar12 = 0x3fffffff;
        }
        uVar8 = uVar7;
        if ((int)uVar7 <= (int)uVar12) {
          uVar8 = uVar12;
        }
        local_108 = (undefined2 *)
                    FUN_032bd1d4(puVar9,uVar8,2,local_108,uVar10 & 0xffffffff,(long)&local_100 + 4);
      }
      lVar14 = 0;
      local_108[(int)local_100] = uVar5;
      local_100 = CONCAT44(local_100._4_4_,uVar7);
      if (uVar6 == 0) goto LAB_02f9fef0;
    }
    *(undefined2 *)((long)puVar2 + 0x1c) = 0;
    lVar14 = 1;
    *(ushort *)((long)puVar2 + 0x1e) = uVar5;
    lVar15 = (long)(int)local_100;
    uVar16 = (ulong)(ushort)local_108[lVar15 + -1];
    local_100 = CONCAT44(local_100._4_4_,(int)(lVar15 + -1));
  } while (local_108[lVar15 + -1] != 0);
LAB_02f9fef0:
  uVar16 = local_100;
  uVar7 = local_100._4_4_;
  local_100 = (ulong)local_100._4_4_ << 0x20;
  if ((-1 < (long)uVar16) && (local_108 != (undefined2 *)0x0)) {
    (**(code **)(*(long *)puVar9 + 0x18))(puVar9,local_108,(uVar7 & 0x3fffffff) << 1);
  }
  lVar14 = local_70;
  uVar7 = local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < lVar14) && (local_78 != 0)) {
    (**(code **)(*(long *)puVar9 + 0x18))(puVar9,local_78,(uVar7 & 0x3fffffff) << 1);
  }
LAB_02f9ff48:
  *(undefined4 *)((long)param_2 + 0x14) = *(undefined4 *)((long)param_1 + 0x14);
  *(int *)(param_2 + 3) = (int)param_1[3];
  return;
}


