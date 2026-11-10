/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0295124c; name: FUN_0295124c
 */


void FUN_0295124c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ushort uVar3;
  bool bVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  char cVar8;
  short sVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  
  if ((*(byte *)(param_1 + 0x87) >> 5 & 1) == 0) {
    return;
  }
  uVar7 = FUN_02c68e44(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98));
  *(undefined4 *)(param_1 + 0x6c) = uVar7;
  FUN_0294fc84(param_1,1,1);
  uVar6 = FUN_02c69538(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98));
  *(undefined2 *)(param_1 + 0x364) = uVar6;
  bVar5 = FUN_02c6f924(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98));
  uVar3 = *(ushort *)(param_1 + 0x70);
  uVar12 = (ulong)uVar3;
  bVar4 = (uVar3 | 1) != 0x38b;
  uVar1 = 0;
  if (uVar12 < 0x38a && bVar4) {
    uVar1 = (uint)bVar5;
  }
  uVar10 = (ulong)uVar1;
  *(byte *)(param_1 + 0x369) = bVar5;
  if (uVar1 < 0x1c) {
    uVar2 = 0;
    if (uVar12 < 0x38a && bVar4) {
      uVar2 = uVar12;
    }
    lVar13 = *(&DAT_043f23a0)[uVar2 * 4];
    uVar12 = (&DAT_043f23a0)[uVar2 * 4][1] - lVar13 >> 3;
    if ((uVar10 < uVar12) && (*(long *)(lVar13 + uVar10 * 8) != 0)) goto LAB_02951320;
  }
  uVar10 = 0;
  lVar13 = *DAT_043f23a0;
  uVar12 = DAT_043f23a0[1] - lVar13 >> 3;
LAB_02951320:
  if (uVar12 <= uVar10) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar11 = *(int **)(lVar13 + uVar10 * 8);
  if (((*(ushort *)((long)piVar11 - (long)*piVar11) < 0x2f) ||
      (uVar12 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[0x17], uVar12 == 0)) ||
     (sVar9 = *(short *)((long)piVar11 + uVar12), sVar9 == 0)) {
    sVar9 = 1;
  }
  *(short *)(param_1 + 0x366) = sVar9;
  *(undefined1 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x2f4);
  *(undefined4 *)(param_1 + 0x307) = *(undefined4 *)(param_1 + 0x2fb);
  cVar8 = (int)*(undefined8 *)(param_1 + 0x2f4) != 0;
  if ((bool)cVar8) {
    *(undefined1 *)(param_1 + 0x368) = 1;
  }
  *(undefined1 *)(param_1 + 0x30c) = 1;
  *(undefined8 *)(param_1 + 0x31c) = *(undefined8 *)(param_1 + 0x310);
  *(undefined4 *)(param_1 + 0x323) = *(undefined4 *)(param_1 + 0x317);
  if ((int)*(undefined8 *)(param_1 + 0x310) != 0) {
    cVar8 = cVar8 + '\x01';
    *(char *)(param_1 + 0x368) = cVar8;
  }
  *(undefined1 *)(param_1 + 0x328) = 1;
  *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 0x32c);
  *(undefined4 *)(param_1 + 0x33f) = *(undefined4 *)(param_1 + 0x333);
  if ((int)*(undefined8 *)(param_1 + 0x32c) != 0) {
    cVar8 = cVar8 + '\x01';
    *(char *)(param_1 + 0x368) = cVar8;
  }
  *(undefined1 *)(param_1 + 0x344) = 1;
  *(undefined8 *)(param_1 + 0x354) = *(undefined8 *)(param_1 + 0x348);
  *(undefined4 *)(param_1 + 0x35b) = *(undefined4 *)(param_1 + 0x34f);
  if ((int)*(undefined8 *)(param_1 + 0x348) != 0) {
    *(char *)(param_1 + 0x368) = cVar8 + '\x01';
  }
  *(undefined1 *)(param_1 + 0x360) = 1;
  *(ushort *)(param_1 + 0x87) = *(ushort *)(param_1 + 0x87) & 0xffdf;
  return;
}


