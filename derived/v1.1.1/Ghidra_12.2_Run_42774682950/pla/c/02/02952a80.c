/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02952a80; name: FUN_02952a80
 */


void FUN_02952a80(long param_1,char param_2,ushort param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ushort uVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  bool bVar10;
  undefined2 uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  short sVar17;
  long *plVar18;
  
  plVar18 = *(long **)(param_1 + 0x60);
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 10;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  *(char *)(param_1 + 0x369) = param_2;
  *(ushort *)(param_1 + 0x87) = *(ushort *)(param_1 + 0x87) & 0xfeff | (param_3 & 1) << 8;
  bVar8 = *(char *)(plVar18[0x13] + 0x19) == '\0';
  if (bVar8) {
    FUN_02c66480();
  }
  FUN_02c62fcc(plVar18,param_2,0);
  FUN_0294fc84(param_1,1,1);
  lVar13 = *(long *)(*(long *)(param_1 + 0x60) + 0x98);
  uVar5 = *(ushort *)(param_1 + 0x74);
  uVar6 = *(ushort *)(param_1 + 0x72);
  if (*(long *)(lVar13 + 8) == 0) {
    uVar12 = FUN_02c5e31c();
    uVar12 = uVar12 & 0xffff;
  }
  else {
    uVar12 = FUN_02c66e84(lVar13);
  }
  uVar3 = uVar12 & 0xffff;
  *(short *)(param_1 + 0x72) = (short)uVar12;
  if (uVar6 < uVar3) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x74) + (uVar12 - uVar6);
    uVar11 = (short)uVar12;
    if ((uVar2 & 0xffff) <= (uVar12 & 0xffff)) {
      uVar11 = (short)uVar2;
    }
    *(undefined2 *)(param_1 + 0x74) = uVar11;
  }
  if ((uVar3 < uVar6) && (uVar3 < uVar5)) {
    iVar9 = uVar5 - uVar12;
    uVar12 = (uint)*(ushort *)(param_1 + 0x74) * 0x10000;
    uVar11 = 0;
    if ((uint)(iVar9 * 0x10000) <= uVar12) {
      uVar11 = (short)(uVar12 + iVar9 * -0x10000 >> 0x10);
    }
    *(undefined2 *)(param_1 + 0x74) = uVar11;
  }
  uVar5 = *(ushort *)(param_1 + 0x70);
  uVar14 = (ulong)uVar5;
  bVar10 = (uVar5 | 1) != 0x38b;
  uVar12 = 0;
  if (uVar14 < 0x38a && bVar10) {
    uVar12 = (uint)*(byte *)(param_1 + 0x369);
  }
  uVar15 = (ulong)uVar12;
  if (uVar12 < 0x1c) {
    uVar4 = 0;
    if (uVar14 < 0x38a && bVar10) {
      uVar4 = uVar14;
    }
    lVar13 = *(&DAT_043f23a0)[uVar4 * 4];
    uVar14 = (&DAT_043f23a0)[uVar4 * 4][1] - lVar13 >> 3;
    if ((uVar15 < uVar14) && (*(long *)(lVar13 + uVar15 * 8) != 0)) goto LAB_02952c0c;
  }
  uVar15 = 0;
  lVar13 = *DAT_043f23a0;
  uVar14 = DAT_043f23a0[1] - lVar13 >> 3;
LAB_02952c0c:
  if (uVar14 <= uVar15) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar16 = *(int **)(lVar13 + uVar15 * 8);
  if (((*(ushort *)((long)piVar16 - (long)*piVar16) < 0x2f) ||
      (uVar14 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[0x17], uVar14 == 0)) ||
     (sVar17 = *(short *)((long)piVar16 + uVar14), sVar17 == 0)) {
    sVar17 = 1;
  }
  *(short *)(param_1 + 0x366) = sVar17;
  if ((param_2 == '\0') && (uVar5 == 0x1ec)) {
    *(ushort *)(param_1 + 0x87) = *(ushort *)(param_1 + 0x87) & 0xffe0;
    uVar11 = FUN_02c69538(plVar18[0x13]);
    *(undefined2 *)(param_1 + 0x364) = uVar11;
  }
  if (bVar8 && *(char *)(plVar18[0x13] + 0x19) != '\0') {
    FUN_02c66640();
  }
  plVar1 = plVar18 + 10;
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *(int *)plVar1 = iVar9;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (iVar9 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02952ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar18 + 0x10))(plVar18);
    return;
  }
  return;
}


