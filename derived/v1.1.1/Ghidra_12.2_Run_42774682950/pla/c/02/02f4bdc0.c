/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4bdc0; name: FUN_02f4bdc0
 */


undefined8 FUN_02f4bdc0(long *param_1,undefined8 *param_2,long *param_3,long param_4)

{
  int *piVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  void *__s;
  undefined8 uVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  int *piVar12;
  size_t __n;
  ushort local_50 [2];
  byte local_4c [4];
  int local_48;
  undefined1 auStack_44 [4];
  
  uVar5 = (**(code **)*param_2)(param_2,&local_48,4,auStack_44);
  if ((uVar5 & 1) == 0) {
    return 2;
  }
  uVar5 = (**(code **)*param_2)(param_2,local_4c,1,auStack_44);
  if ((uVar5 & 1) == 0) {
    return 2;
  }
  lVar10 = *param_3;
  if (*(int *)(lVar10 + 0x10) != local_48) {
    plVar8 = *(long **)(lVar10 + 0x20);
    uVar2 = *(uint *)(lVar10 + 0x28);
    plVar6 = plVar8;
    if (uVar2 != 0) {
      lVar10 = (ulong)uVar2 << 3;
      while (*(int *)(*plVar6 + 0x10) != local_48) {
        plVar6 = plVar6 + 1;
        lVar10 = lVar10 + -8;
        if (lVar10 == 0) {
          return 2;
        }
      }
    }
    if (plVar6 == plVar8 + uVar2) {
      return 2;
    }
    lVar10 = *plVar6;
    *param_3 = lVar10;
  }
  *param_1 = lVar10;
  if ((local_4c[0] | 2) == 3) {
    piVar9 = *(int **)(param_4 + 0x30);
    uVar2 = *(uint *)(param_4 + 0x38);
    if ((uVar2 == 0) || (*piVar9 == local_48)) {
      piVar11 = piVar9;
    }
    else {
      lVar10 = (ulong)uVar2 * 0x18;
      piVar12 = piVar9;
      do {
        lVar10 = lVar10 + -0x18;
        if (lVar10 == 0) goto LAB_02f4c048;
        piVar11 = piVar12 + 6;
        piVar1 = piVar12 + 6;
        piVar12 = piVar11;
      } while (*piVar1 != local_48);
    }
    if (piVar11 == piVar9 + (ulong)uVar2 * 6) {
LAB_02f4c048:
      param_1[2] = 0;
      return 2;
    }
    lVar10 = *(long *)(piVar11 + 2);
    param_1[2] = lVar10;
    if (lVar10 == 0) {
      return 2;
    }
  }
  else {
    uVar5 = (**(code **)*param_2)(param_2,local_50,2,auStack_44);
    uVar3 = local_50[0];
    if ((uVar5 & 1) == 0) {
      return 2;
    }
    uVar5 = (ulong)local_50[0];
    if (local_4c[0] - 2 < 2) {
      if (local_50[0] == 0) {
        return 2;
      }
      plVar6 = (long *)(*DAT_0442d138)(0,0x38);
      if (plVar6 != (long *)0x0) {
        *plVar6 = (long)&PTR_FUN_042ab0b0;
        *(uint *)(plVar6 + 1) = (uint)uVar3 * 50000;
        *(uint *)((long)plVar6 + 0xc) = (uint)uVar3 * 50000;
        *(ushort *)(plVar6 + 2) = uVar3;
        *(ushort *)((long)plVar6 + 0x12) = uVar3;
        plVar6[3] = 0;
        plVar6[4] = 0;
        uVar5 = uVar5 + 7 >> 3;
        plVar6[5] = 0;
        plVar6[6] = 0;
        __n = uVar5 << 1;
        __s = (void *)(*DAT_0442d138)(0,__n);
        plVar6[5] = (long)__s;
        if (__s == (void *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          return 2;
        }
        plVar6[6] = (long)__s + uVar5;
        memset(__s,0,__n);
      }
    }
    else {
      if (1 < local_4c[0]) {
        return 2;
      }
      if (local_50[0] == 0) {
        return 2;
      }
      plVar6 = (long *)(*DAT_0442d138)(0,0x10);
      if (plVar6 != (long *)0x0) {
        *plVar6 = (long)&PTR_LAB_042ab0f8;
        *(undefined1 *)(plVar6 + 1) = 1;
        *(undefined2 *)((long)plVar6 + 10) = 0xffff;
      }
    }
    if (plVar6 == (long *)0x0) {
      return 2;
    }
    iVar4 = (**(code **)(*plVar6 + 0x30))(plVar6,param_2,local_50[0]);
    if (iVar4 != 1) {
      return 2;
    }
    param_1[2] = (long)plVar6;
  }
  uVar7 = FUN_02f4c08c(param_1 + 1,param_2);
  if ((int)uVar7 == 1) {
    return uVar7;
  }
  return 2;
}


