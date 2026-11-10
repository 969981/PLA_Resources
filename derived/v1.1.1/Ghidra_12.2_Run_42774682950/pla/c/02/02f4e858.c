/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4e858; name: FUN_02f4e858
 */


undefined8 FUN_02f4e858(long param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  void *__s;
  int *piVar10;
  long lVar11;
  int *piVar12;
  int *piVar13;
  undefined8 uVar14;
  size_t __n;
  ushort uVar15;
  uint uVar16;
  ushort local_74 [2];
  byte local_70 [4];
  int local_6c;
  ushort local_68 [2];
  undefined1 auStack_64 [4];
  
  uVar14 = 2;
  uVar8 = (**(code **)*param_2)(param_2,local_68,2,auStack_64);
  if (((uVar8 & 1) != 0) && (uVar14 = 1, local_68[0] != 0)) {
    uVar15 = 0;
    do {
      uVar8 = (**(code **)*param_2)(param_2,&local_6c,4,auStack_64);
      if ((uVar8 & 1) == 0) {
        return 2;
      }
      bVar6 = true;
      uVar8 = (**(code **)*param_2)(param_2,local_70,1,auStack_64);
      if ((uVar8 & 1) != 0) {
        uVar8 = (**(code **)*param_2)(param_2,local_74,2,auStack_64);
        uVar5 = local_74[0];
        if ((uVar8 & 1) == 0) {
          return 2;
        }
        uVar8 = (ulong)local_74[0];
        if (local_70[0] - 2 < 2) {
          if (local_74[0] == 0) {
            return 2;
          }
          plVar9 = (long *)(*DAT_0442d138)(0,0x38);
          uVar4 = local_74[0];
          iVar7 = local_6c;
          if (plVar9 != (long *)0x0) {
            *plVar9 = (long)&PTR_FUN_042ab0b0;
            *(uint *)(plVar9 + 1) = (uint)uVar5 * 50000;
            *(uint *)((long)plVar9 + 0xc) = (uint)uVar5 * 50000;
            *(ushort *)(plVar9 + 2) = uVar5;
            *(ushort *)((long)plVar9 + 0x12) = uVar5;
            plVar9[3] = 0;
            plVar9[4] = 0;
            uVar8 = uVar8 + 7 >> 3;
            plVar9[5] = 0;
            plVar9[6] = 0;
            __n = uVar8 << 1;
            __s = (void *)(*DAT_0442d138)(0,__n);
            plVar9[5] = (long)__s;
            if (__s == (void *)0x0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
              return 2;
            }
            plVar9[6] = (long)__s + uVar8;
            memset(__s,0,__n);
            uVar4 = local_74[0];
            iVar7 = local_6c;
          }
        }
        else {
          if (1 < local_70[0]) {
            return 2;
          }
          if (local_74[0] == 0) {
            return 2;
          }
          plVar9 = (long *)(*DAT_0442d138)(0,0x10);
          uVar4 = local_74[0];
          iVar7 = local_6c;
          if (plVar9 != (long *)0x0) {
            *plVar9 = (long)&PTR_LAB_042ab0f8;
            *(undefined1 *)(plVar9 + 1) = 1;
            *(undefined2 *)((long)plVar9 + 10) = 0xffff;
          }
        }
        if (plVar9 == (long *)0x0) {
          return 2;
        }
        piVar10 = *(int **)(param_1 + 0x30);
        uVar3 = *(uint *)(param_1 + 0x38);
        local_74[0] = uVar4;
        local_6c = iVar7;
        if ((uVar3 == 0) || (*piVar10 == iVar7)) {
          piVar12 = piVar10;
        }
        else {
          lVar11 = (ulong)uVar3 * 0x18;
          piVar13 = piVar10;
          do {
            lVar11 = lVar11 + -0x18;
            if (lVar11 == 0) goto LAB_02f4ea38;
            piVar12 = piVar13 + 6;
            piVar1 = piVar13 + 6;
            piVar13 = piVar12;
          } while (*piVar1 != iVar7);
        }
        if (piVar12 == piVar10 + (ulong)uVar3 * 6) {
LAB_02f4ea38:
          uVar16 = *(uint *)(param_1 + 0x3c);
          if (uVar16 <= uVar3) {
            iVar2 = uVar16 + (uVar16 >> 1);
            if (uVar16 == 0) {
              iVar2 = 1;
            }
            uVar16 = iVar2 + uVar16;
            piVar10 = (int *)(*DAT_0442d148)(0,piVar10,(ulong)uVar16 * 0x18);
            if (piVar10 == (int *)0x0) {
              return 2;
            }
            *(int **)(param_1 + 0x30) = piVar10;
            *(uint *)(param_1 + 0x3c) = uVar16;
          }
          if (uVar16 <= uVar3) {
            return 2;
          }
          uVar8 = (ulong)*(uint *)(param_1 + 0x38);
          *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) + 1;
          if (piVar10 + uVar8 * 6 == (int *)0x0) {
            return 2;
          }
          piVar10[uVar8 * 6] = iVar7;
          *(long **)(piVar10 + uVar8 * 6 + 2) = plVar9;
          *(ushort *)(piVar10 + uVar8 * 6 + 4) = uVar4;
        }
        else {
          *(long **)(piVar12 + 2) = plVar9;
          *(ushort *)(piVar12 + 4) = uVar4;
        }
        iVar7 = (**(code **)(*plVar9 + 0x30))(plVar9,param_2,local_74[0]);
        bVar6 = iVar7 != 1;
      }
      if (bVar6) {
        return 2;
      }
      uVar15 = uVar15 + 1;
      uVar14 = 1;
    } while (uVar15 < local_68[0]);
  }
  return uVar14;
}


