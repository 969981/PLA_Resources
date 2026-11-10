/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02952038; name: FUN_02952038
 */


void FUN_02952038(long param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  ulong uVar5;
  byte bVar6;
  ushort uVar7;
  short sVar8;
  int iVar9;
  bool bVar10;
  uint uVar11;
  ushort uVar12;
  char cVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  ulong uVar17;
  long *plVar18;
  
  *(undefined4 *)(param_1 + 900) = 0;
  *(undefined4 *)(param_1 + 0x387) = 0;
  FUN_0295124c();
  *(undefined1 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x2f4);
  *(undefined4 *)(param_1 + 0x307) = *(undefined4 *)(param_1 + 0x2fb);
  cVar13 = (int)*(undefined8 *)(param_1 + 0x2f4) != 0;
  if ((bool)cVar13) {
    *(undefined1 *)(param_1 + 0x368) = 1;
  }
  *(undefined1 *)(param_1 + 0x30c) = 1;
  *(undefined8 *)(param_1 + 0x31c) = *(undefined8 *)(param_1 + 0x310);
  *(undefined4 *)(param_1 + 0x323) = *(undefined4 *)(param_1 + 0x317);
  if ((int)*(undefined8 *)(param_1 + 0x310) != 0) {
    cVar13 = cVar13 + '\x01';
    *(char *)(param_1 + 0x368) = cVar13;
  }
  *(undefined1 *)(param_1 + 0x328) = 1;
  *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 0x32c);
  *(undefined4 *)(param_1 + 0x33f) = *(undefined4 *)(param_1 + 0x333);
  if ((int)*(undefined8 *)(param_1 + 0x32c) != 0) {
    cVar13 = cVar13 + '\x01';
    *(char *)(param_1 + 0x368) = cVar13;
  }
  *(undefined1 *)(param_1 + 0x344) = 1;
  *(undefined8 *)(param_1 + 0x354) = *(undefined8 *)(param_1 + 0x348);
  *(undefined4 *)(param_1 + 0x35b) = *(undefined4 *)(param_1 + 0x34f);
  if ((int)*(undefined8 *)(param_1 + 0x348) != 0) {
    *(char *)(param_1 + 0x368) = cVar13 + '\x01';
  }
  *(byte *)(param_1 + 0x307) = *(byte *)(param_1 + 0x307) & 0xf0;
  *(byte *)(param_1 + 0x2fb) = *(byte *)(param_1 + 0x2fb) & 0xf0;
  *(byte *)(param_1 + 0x323) = *(byte *)(param_1 + 0x323) & 0xf0;
  *(byte *)(param_1 + 0x317) = *(byte *)(param_1 + 0x317) & 0xf0;
  *(byte *)(param_1 + 0x33f) = *(byte *)(param_1 + 0x33f) & 0xf0;
  *(byte *)(param_1 + 0x333) = *(byte *)(param_1 + 0x333) & 0xf0;
  *(byte *)(param_1 + 0x35b) = *(byte *)(param_1 + 0x35b) & 0xf0;
  *(byte *)(param_1 + 0x34f) = *(byte *)(param_1 + 0x34f) & 0xf0;
  *(undefined1 *)(param_1 + 0x36d) = 0x12;
  *(undefined1 *)(param_1 + 0x360) = 1;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined2 *)(param_1 + 0x374) = 0;
  *(undefined4 *)(param_1 + 0x38f) = 0;
  *(undefined4 *)(param_1 + 0x38c) = 0;
  if (*(char *)(param_1 + 0x49c) != '\x1f') {
    *(undefined1 *)(param_1 + 0x49c) = 0x1f;
    *(undefined4 *)(param_1 + 0x498) = 0;
  }
  uVar12 = *(ushort *)(param_1 + 0x87);
  *(undefined1 *)(param_1 + 0x28e) = 0x1f;
  *(ushort *)(param_1 + 0x87) = uVar12 & 0xffbf;
  *(undefined1 *)(param_1 + 0x36e) = 1;
  *(undefined2 *)(param_1 + 0x496) = 0;
  memset((void *)(param_1 + 0x90),0,0x1dd);
  if (*(char *)(param_1 + 0x2e4) != '\x01') {
    *(undefined1 *)(param_1 + 0x2e4) = 1;
    *(undefined1 *)(param_1 + 0x2e7) = 0;
  }
  if (*(char *)(param_1 + 0x2e5) != '\x01') {
    *(undefined1 *)(param_1 + 0x2e5) = 1;
    *(undefined1 *)(param_1 + 0x2e8) = 0;
  }
  if (*(char *)(param_1 + 0x2e6) != '\x01') {
    *(undefined1 *)(param_1 + 0x2e6) = 1;
    *(undefined1 *)(param_1 + 0x2e9) = 0;
  }
  *(undefined2 *)(param_1 + 0x364) = *(undefined2 *)(param_1 + 0x7a);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x4a8) + 0x58) + 0x1041) >> 4 & 1) != 0) {
    bVar6 = *(byte *)(param_1 + 0x7d);
    if (bVar6 < 6) {
      cVar13 = '\0';
    }
    else if (bVar6 < 0xc) {
      cVar13 = '\x02';
    }
    else if (bVar6 < 0x12) {
      cVar13 = '\x01';
    }
    else if (bVar6 < 0x18) {
      cVar13 = '\x03';
    }
    else {
      cVar13 = (bVar6 < 0x1e) << 2;
    }
    if (*(char *)(*(long *)(param_1 + 0x4a8) + 0x130) != cVar13) {
      return;
    }
  }
  uVar12 = uVar12 & 0x1f;
  plVar18 = *(long **)(param_1 + 0x60);
  *(char *)(param_1 + 0x369) = (char)uVar12;
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 10;
    do {
      cVar13 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    uVar12 = (ushort)*(byte *)(param_1 + 0x369);
  }
  FUN_02c62fcc(plVar18,uVar12,0);
  lVar14 = *(long *)(*(long *)(param_1 + 0x60) + 0x98);
  uVar12 = *(ushort *)(param_1 + 0x74);
  uVar7 = *(ushort *)(param_1 + 0x72);
  if (*(long *)(lVar14 + 8) == 0) {
    uVar11 = FUN_02c5e31c();
    uVar11 = uVar11 & 0xffff;
  }
  else {
    uVar11 = FUN_02c66e84(lVar14);
  }
  uVar3 = uVar11 & 0xffff;
  *(short *)(param_1 + 0x72) = (short)uVar11;
  if (uVar7 < uVar3) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x74) + (uVar11 - uVar7);
    uVar4 = (short)uVar11;
    if ((uVar2 & 0xffff) <= (uVar11 & 0xffff)) {
      uVar4 = (short)uVar2;
    }
    *(undefined2 *)(param_1 + 0x74) = uVar4;
  }
  if ((uVar3 < uVar7) && (uVar3 < uVar12)) {
    iVar9 = uVar12 - uVar11;
    uVar11 = (uint)*(ushort *)(param_1 + 0x74) * 0x10000;
    uVar4 = 0;
    if ((uint)(iVar9 * 0x10000) <= uVar11) {
      uVar4 = (short)(uVar11 + iVar9 * -0x10000 >> 0x10);
    }
    *(undefined2 *)(param_1 + 0x74) = uVar4;
  }
  uVar12 = *(ushort *)(param_1 + 0x70);
  uVar17 = (ulong)uVar12;
  bVar10 = (uVar12 | 1) != 0x38b;
  uVar11 = 0;
  if (uVar17 < 0x38a && bVar10) {
    uVar11 = (uint)*(byte *)(param_1 + 0x369);
  }
  uVar15 = (ulong)uVar11;
  if (uVar11 < 0x1c) {
    uVar5 = 0;
    if (uVar17 < 0x38a && bVar10) {
      uVar5 = uVar17;
    }
    lVar14 = *(&DAT_043f23a0)[uVar5 * 4];
    uVar17 = (&DAT_043f23a0)[uVar5 * 4][1] - lVar14 >> 3;
    if ((uVar17 <= uVar15) || (*(long *)(lVar14 + uVar15 * 8) == 0)) goto LAB_02952384;
  }
  else {
LAB_02952384:
    uVar15 = 0;
    lVar14 = *DAT_043f23a0;
    uVar17 = DAT_043f23a0[1] - lVar14 >> 3;
  }
  if (uVar17 <= uVar15) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar16 = *(int **)(lVar14 + uVar15 * 8);
  if ((0x2e < *(ushort *)((long)piVar16 - (long)*piVar16)) &&
     (uVar17 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[0x17], uVar17 != 0)) {
    sVar8 = *(short *)((long)piVar16 + uVar17);
    if (sVar8 != 0) {
      *(short *)(param_1 + 0x366) = sVar8;
      goto joined_r0x029523e8;
    }
  }
  *(undefined2 *)(param_1 + 0x366) = 1;
joined_r0x029523e8:
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 10;
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar13 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = iVar9;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (iVar9 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0295245c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar18 + 0x10))(plVar18);
      return;
    }
  }
  return;
}


