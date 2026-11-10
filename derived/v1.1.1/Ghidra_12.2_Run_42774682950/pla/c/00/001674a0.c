/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001674a0; name: FUN_001674a0
 */


void FUN_001674a0(long *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  long lVar11;
  
  lVar11 = *param_1;
  iVar3 = (int)param_1[4];
  if (*(uint *)(param_1 + 5) != 0xffffffff) {
    lVar6 = lVar11;
    uVar8 = *(uint *)(param_1 + 5);
    do {
      puVar5 = (uint *)(*(long *)(lVar6 + 0x38) + (long)(int)uVar8 * 4);
      uVar7 = *puVar5;
      iVar9 = (uVar7 >> 0xe) - 0x1ffff;
      uVar4 = 0xffffffff;
      if (iVar9 != -1) {
        uVar4 = uVar8 + iVar9 + 1;
      }
      if ((int)uVar8 < 1) {
LAB_00167524:
        puVar10 = puVar5;
        uVar2 = uVar7;
      }
      else {
        uVar2 = puVar5[-1];
        puVar10 = puVar5 + -1;
        if (-1 < (char)(&DAT_039c5e39)[(ulong)uVar2 & 0x3f]) goto LAB_00167524;
      }
      if ((uVar2 & 0x3f) == 0x23) {
        *puVar10 = uVar2 & 0x7fc000 | uVar2 >> 0x11 & 0x7fc0 | 0x22;
        iVar9 = iVar3 + ~uVar8;
        iVar1 = -iVar9;
        if (-1 < iVar9) {
          iVar1 = iVar9;
        }
        if (0x1ffff < iVar1) {
LAB_00167668:
                    /* WARNING: Subroutine does not return */
          FUN_0016a180(param_1[2],"control structure too long");
        }
        puVar5 = (uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar8 * 4);
        uVar7 = *puVar5;
      }
      else {
        iVar9 = iVar3 + ~uVar8;
        iVar1 = -iVar9;
        if (-1 < iVar9) {
          iVar1 = iVar9;
        }
        if (0x1ffff < iVar1) goto LAB_00167668;
      }
      *puVar5 = (uVar7 & 0x3fff | iVar9 << 0xe) + 0x7fffc000;
      if (uVar4 == 0xffffffff) goto LAB_001675ac;
      lVar6 = *param_1;
      uVar8 = uVar4;
    } while( true );
  }
LAB_001675b0:
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  if (iVar3 < *(int *)(lVar11 + 0x18)) {
    lVar6 = *(long *)(lVar11 + 0x38);
  }
  else {
    lVar6 = FUN_00161400(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar11 + 0x38),
                         (int *)(lVar11 + 0x18),4,0x7fffffff,"opcodes");
    *(long *)(lVar11 + 0x38) = lVar6;
    iVar3 = (int)param_1[4];
  }
  *(undefined4 *)(lVar6 + (long)iVar3 * 4) = param_2;
  iVar3 = (int)param_1[4];
  if (iVar3 < *(int *)(lVar11 + 0x1c)) {
    lVar6 = *(long *)(lVar11 + 0x48);
  }
  else {
    lVar6 = FUN_00161400(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar11 + 0x48),
                         (int *)(lVar11 + 0x1c),4,0x7fffffff,"opcodes");
    *(long *)(lVar11 + 0x48) = lVar6;
    iVar3 = (int)param_1[4];
  }
  *(undefined4 *)(lVar6 + (long)iVar3 * 4) = *(undefined4 *)(param_1[2] + 8);
  *(int *)(param_1 + 4) = (int)param_1[4] + 1;
  return;
LAB_001675ac:
  iVar3 = (int)param_1[4];
  goto LAB_001675b0;
}


