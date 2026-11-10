/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029526c8; name: FUN_029526c8
 */


void FUN_029526c8(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ushort uVar3;
  bool bVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  short sVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  
  uVar7 = FUN_02c68e44(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98));
  *(undefined4 *)(param_1 + 0x6c) = uVar7;
  FUN_0294fc84(param_1,1,1);
  uVar6 = FUN_02c69538(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98));
  *(undefined2 *)(param_1 + 0x364) = uVar6;
  bVar5 = FUN_02c6f924(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98));
  uVar3 = *(ushort *)(param_1 + 0x70);
  uVar11 = (ulong)uVar3;
  bVar4 = (uVar3 | 1) != 0x38b;
  uVar1 = 0;
  if (uVar11 < 0x38a && bVar4) {
    uVar1 = (uint)bVar5;
  }
  uVar9 = (ulong)uVar1;
  *(byte *)(param_1 + 0x369) = bVar5;
  if (uVar1 < 0x1c) {
    uVar2 = 0;
    if (uVar11 < 0x38a && bVar4) {
      uVar2 = uVar11;
    }
    lVar12 = *(&DAT_043f23a0)[uVar2 * 4];
    uVar11 = (&DAT_043f23a0)[uVar2 * 4][1] - lVar12 >> 3;
    if ((uVar9 < uVar11) && (*(long *)(lVar12 + uVar9 * 8) != 0)) goto LAB_02952794;
  }
  uVar9 = 0;
  lVar12 = *DAT_043f23a0;
  uVar11 = DAT_043f23a0[1] - lVar12 >> 3;
LAB_02952794:
  if (uVar11 <= uVar9) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar10 = *(int **)(lVar12 + uVar9 * 8);
  if (((*(ushort *)((long)piVar10 - (long)*piVar10) < 0x2f) ||
      (uVar11 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[0x17], uVar11 == 0)) ||
     (sVar8 = *(short *)((long)piVar10 + uVar11), sVar8 == 0)) {
    sVar8 = 1;
  }
  *(short *)(param_1 + 0x366) = sVar8;
  *(undefined2 *)(param_1 + 0x496) = 0;
  *(undefined4 *)(param_1 + 900) = 0;
  *(undefined4 *)(param_1 + 0x387) = 0;
  *(byte *)(param_1 + 0x307) = *(byte *)(param_1 + 0x307) & 0xf0;
  *(byte *)(param_1 + 0x2fb) = *(byte *)(param_1 + 0x2fb) & 0xf0;
  *(byte *)(param_1 + 0x323) = *(byte *)(param_1 + 0x323) & 0xf0;
  *(byte *)(param_1 + 0x317) = *(byte *)(param_1 + 0x317) & 0xf0;
  *(byte *)(param_1 + 0x33f) = *(byte *)(param_1 + 0x33f) & 0xf0;
  *(byte *)(param_1 + 0x333) = *(byte *)(param_1 + 0x333) & 0xf0;
  *(byte *)(param_1 + 0x35b) = *(byte *)(param_1 + 0x35b) & 0xf0;
  *(byte *)(param_1 + 0x34f) = *(byte *)(param_1 + 0x34f) & 0xf0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined1 *)(param_1 + 0x36d) = 0x12;
  *(undefined2 *)(param_1 + 0x374) = 0;
  memset((void *)(param_1 + 0xd0),0,0x168);
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x265) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
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
  return;
}


