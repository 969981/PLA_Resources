/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4c45c; name: FUN_02f4c45c
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_02f4c45c(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined2 uVar5;
  int iVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  ulong uVar12;
  long *plVar13;
  int *piVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  undefined4 local_58;
  undefined1 local_54;
  
  sVar15 = *(short *)(param_2 + 0x14);
  bVar7 = sVar15 == 0;
  if (sVar15 == 0) {
    sVar15 = 0;
  }
  else if (*(short *)(param_2 + 0x18) != 0 || *(short *)(param_2 + 0x16) != 0) {
    iVar2 = (int)*(short *)(param_2 + 0x16) + (int)sVar15;
    iVar3 = (int)(short)iVar2;
    iVar6 = (int)(short)(*(short *)(param_2 + 0x18) + sVar15);
    if (iVar2 < 1) {
      iVar3 = 1;
    }
    if (iVar3 != iVar6) {
      DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
      iVar2 = (iVar6 - iVar3) + 1;
      sVar15 = 0;
      if (iVar2 != 0) {
        sVar15 = (short)((int)(uint)((ulong)DAT_0440a190 >> 0x21) / iVar2);
      }
      sVar15 = ((short)((ulong)DAT_0440a190 >> 0x21) - sVar15 * (short)iVar2) + (short)iVar3;
    }
  }
  if ((*(uint *)(param_2 + 0x30) | 2) == 3) {
    iVar2 = *(int *)(param_2 + 0x10);
    piVar10 = (int *)param_1[6];
    uVar16 = *(uint *)(param_1 + 7);
    if ((uVar16 == 0) || (*piVar10 == iVar2)) {
      piVar11 = piVar10;
    }
    else {
      lVar9 = (ulong)uVar16 * 0x18;
      piVar14 = piVar10;
      do {
        lVar9 = lVar9 + -0x18;
        if (lVar9 == 0) goto LAB_02f4c610;
        piVar11 = piVar14 + 6;
        piVar1 = piVar14 + 6;
        piVar14 = piVar11;
      } while (*piVar1 != iVar2);
    }
    if (piVar11 == piVar10 + (ulong)uVar16 * 6) {
LAB_02f4c610:
      piVar10 = *(int **)(*param_1 + 0x150);
      uVar16 = *(uint *)(*param_1 + 0x158);
      if ((uVar16 == 0) || (*piVar10 == iVar2)) {
        piVar11 = piVar10;
      }
      else {
        lVar9 = (ulong)uVar16 * 0x10;
        piVar14 = piVar10;
        do {
          lVar9 = lVar9 + -0x10;
          if (lVar9 == 0) goto LAB_02f4c6cc;
          piVar1 = piVar14 + 4;
          piVar11 = piVar14 + 4;
          piVar14 = piVar14 + 4;
        } while (*piVar1 != iVar2);
      }
      if ((piVar11 == piVar10 + (ulong)uVar16 * 4) ||
         (plVar8 = *(long **)(piVar11 + 2), plVar8 == (long *)0x0)) {
LAB_02f4c6cc:
        plVar8 = (long *)FUN_02f4bbb8(param_2);
      }
      else {
        plVar8 = (long *)(**(code **)(*plVar8 + 0x20))(plVar8,*(undefined4 *)(param_2 + 0x28));
      }
      if (plVar8 == (long *)0x0) {
        return 2;
      }
      piVar10 = (int *)param_1[6];
      uVar16 = *(uint *)(param_1 + 7);
      uVar5 = (undefined2)*(undefined4 *)(param_2 + 0x28);
      if ((uVar16 == 0) || (*piVar10 == iVar2)) {
        piVar11 = piVar10;
      }
      else {
        lVar9 = (ulong)uVar16 * 0x18;
        piVar14 = piVar10;
        do {
          lVar9 = lVar9 + -0x18;
          if (lVar9 == 0) goto LAB_02f4c6fc;
          piVar11 = piVar14 + 6;
          piVar1 = piVar14 + 6;
          piVar14 = piVar11;
        } while (*piVar1 != iVar2);
      }
      if (piVar11 == piVar10 + (ulong)uVar16 * 6) {
LAB_02f4c6fc:
        uVar17 = *(uint *)((long)param_1 + 0x3c);
        if (uVar17 <= uVar16) {
          iVar3 = uVar17 + (uVar17 >> 1);
          if (uVar17 == 0) {
            iVar3 = 1;
          }
          uVar17 = iVar3 + uVar17;
          piVar10 = (int *)(*DAT_0442d148)(0,piVar10,(ulong)uVar17 * 0x18);
          if (piVar10 == (int *)0x0) goto LAB_02f4c590;
          param_1[6] = (long)piVar10;
          *(uint *)((long)param_1 + 0x3c) = uVar17;
        }
        if (uVar17 <= uVar16) goto LAB_02f4c590;
        uVar12 = (ulong)*(uint *)(param_1 + 7);
        *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) + 1;
        if (piVar10 + uVar12 * 6 == (int *)0x0) goto LAB_02f4c590;
        piVar10[uVar12 * 6] = iVar2;
        *(long **)(piVar10 + uVar12 * 6 + 2) = plVar8;
        *(undefined2 *)(piVar10 + uVar12 * 6 + 4) = uVar5;
      }
      else {
        *(long **)(piVar11 + 2) = plVar8;
        *(undefined2 *)(piVar11 + 4) = uVar5;
      }
    }
    else {
      plVar8 = *(long **)(piVar11 + 2);
    }
    bVar4 = 3;
  }
  else {
    bVar4 = bVar7 << 1 | 1;
    plVar8 = (long *)FUN_02f4bbb8(param_2);
  }
  if (plVar8 == (long *)0x0) {
    return 2;
  }
  uVar17 = *(uint *)(param_1 + 3);
  uVar16 = *(uint *)((long)param_1 + 0x1c);
  if (uVar17 < uVar16) {
LAB_02f4c514:
    if (uVar17 < uVar16) {
      uVar16 = *(uint *)(param_1 + 3);
      *(uint *)(param_1 + 3) = uVar16 + 1;
      plVar13 = (long *)(param_1[2] + (ulong)uVar16 * 0x18);
      if (plVar13 != (long *)0x0) {
        lVar9 = param_1[2] + (ulong)uVar16 * 0x18;
        *plVar13 = param_2;
        *(short *)(lVar9 + 8) = sVar15;
        *(byte *)(lVar9 + 10) = bVar4;
        *(undefined1 *)(lVar9 + 0xf) = local_54;
        *(undefined4 *)(lVar9 + 0xb) = local_58;
        *(long **)(lVar9 + 0x10) = plVar8;
        return 1;
      }
    }
  }
  else {
    iVar2 = uVar16 + (uVar16 >> 1);
    if (uVar16 == 0) {
      iVar2 = 1;
    }
    uVar16 = iVar2 + uVar16;
    lVar9 = (*DAT_0442d148)(0,param_1[2],(ulong)uVar16 * 0x18);
    if (lVar9 != 0) {
      param_1[2] = lVar9;
      *(uint *)((long)param_1 + 0x1c) = uVar16;
      goto LAB_02f4c514;
    }
  }
  if ((*(uint *)(param_2 + 0x30) | 2) == 3) {
    return 2;
  }
LAB_02f4c590:
  (**(code **)(*plVar8 + 0x10))(plVar8);
  return 2;
}


