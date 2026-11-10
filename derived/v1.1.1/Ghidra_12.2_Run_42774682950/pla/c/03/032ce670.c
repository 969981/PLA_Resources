/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ce670; name: FUN_032ce670
 */


long FUN_032ce670(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  uint *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long *plVar19;
  ulong local_58;
  
  if (*(ulong *)(param_1 + 0x10) < param_2) {
    *(int *)(*(long *)(param_1 + 8) + 0x20) = *(int *)(*(long *)(param_1 + 8) + 0x20) + 1;
                    /* WARNING: Could not recover jumptable at 0x032ce798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar13 = (**(code **)(**(long **)(param_1 + 0x40) + 0x10))(*(long **)(param_1 + 0x40),param_2,0)
    ;
    return lVar13;
  }
  lVar13 = *(long *)(param_1 + 0x30);
  if (lVar13 == 0) {
    *(int *)(*(long *)(param_1 + 8) + 0x20) = *(int *)(*(long *)(param_1 + 8) + 0x20) + 1;
    lVar13 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))
                       (*(long **)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x10),0);
  }
  else {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  puVar18 = *(undefined8 **)(param_1 + 8);
  if (*(int *)(puVar18 + 3) != 0) {
    uVar7 = *(uint *)(puVar18 + 1);
    uVar16 = (ulong)uVar7;
    uVar5 = *(uint *)((long)puVar18 + 0xc);
    puVar12 = (undefined8 *)*puVar18;
    uVar1 = uVar7 + 1;
    puVar4 = puVar12;
    if ((int)(uVar5 & 0x3fffffff) <= (int)uVar7) {
      plVar19 = *(long **)(param_1 + 0x48);
      if (0x3ffffffe < (int)uVar7) {
        FUN_032bd0a8(uVar1);
        uVar5 = *(uint *)((long)puVar18 + 0xc);
      }
      uVar8 = (uVar5 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar8) {
        uVar8 = 0x3fffffff;
      }
      uVar2 = uVar1;
      if ((int)uVar1 <= (int)uVar8) {
        uVar2 = uVar8;
      }
      FUN_032bd100(uVar2,0x18,uVar5,&local_58);
      uVar5 = *(uint *)((long)puVar18 + 0xc);
      puVar4 = (undefined8 *)(**(code **)(*plVar19 + 0x10))(plVar19,local_58,&local_58);
      if (0 < (int)uVar7) {
        puVar10 = puVar4;
        puVar11 = puVar12;
        do {
          uVar17 = *puVar11;
          uVar16 = uVar16 - 1;
          uVar6 = puVar11[2];
          puVar10[1] = puVar11[1];
          puVar10[2] = uVar6;
          *puVar10 = uVar17;
          puVar11 = puVar11 + 3;
          puVar10 = puVar10 + 3;
        } while (uVar16 != 0);
      }
      if (-1 < (int)uVar5) {
        (**(code **)(*plVar19 + 0x18))(plVar19,puVar12,((ulong)uVar5 & 0x3fffffff) * 0x18);
      }
      if (local_58 < 0x5ffffffe8) {
        uVar9 = (undefined4)(local_58 / 0x18);
      }
      else {
        uVar9 = 0x3fffffff;
      }
      *(undefined4 *)((long)puVar18 + 0xc) = uVar9;
      uVar7 = *(uint *)(puVar18 + 1);
      *puVar18 = puVar4;
    }
    puVar4 = puVar4 + (long)(int)uVar7 * 3;
    *(uint *)(puVar18 + 1) = uVar1;
    puVar4[1] = lVar13;
    *puVar4 = *(undefined8 *)(param_1 + 0x18);
    *(int *)(puVar4 + 2) = *(int *)(*(long *)(param_1 + 8) + 0x18) + -1;
    puVar18 = *(undefined8 **)(param_1 + 8);
    *(long *)(param_1 + 0x28) = lVar13;
  }
  *(ulong *)(param_1 + 0x18) = lVar13 + param_2;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x10) + lVar13;
  uVar17 = *(undefined8 *)(param_1 + 0x48);
  puVar15 = (uint *)((long)puVar18 + 0x1c);
  uVar7 = *puVar15;
  iVar14 = *(int *)(puVar18 + 3);
  uVar1 = iVar14 + 1;
  if (iVar14 < (int)(uVar7 & 0x3fffffff)) {
    lVar3 = puVar18[2];
  }
  else {
    uVar6 = puVar18[2];
    if (0x3ffffffe < iVar14) {
      FUN_032bd0a8(uVar1);
      uVar7 = *puVar15;
    }
    uVar7 = (uVar7 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uVar5 = uVar1;
    if ((int)uVar1 <= (int)uVar7) {
      uVar5 = uVar7;
    }
    lVar3 = FUN_032bd1d4(uVar17,uVar5,8,uVar6,iVar14,puVar15);
    iVar14 = *(int *)(puVar18 + 3);
    puVar18[2] = lVar3;
  }
  *(long *)(lVar3 + (long)iVar14 * 8) = lVar13;
  *(uint *)(puVar18 + 3) = uVar1;
  return lVar13;
}


