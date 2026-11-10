/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01092070; name: FUN_01092070
 */


int FUN_01092070(uint param_1,uint param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  local_78 = DAT_03a78984;
  uStack_70 = DAT_03a7898c;
  local_68 = DAT_03a78994;
  uStack_60 = DAT_03a7899c;
  local_58 = DAT_03a789a4;
  local_88 = DAT_03a78974;
  local_80 = DAT_03a7897c;
  if (param_1 == 0x1b7) {
LAB_010920c8:
    uVar4 = FUN_02c52760(param_1,param_2,0);
    param_2 = FUN_02c527a0(param_1,param_2,0);
    param_1 = uVar4;
  }
  else {
    bVar2 = param_1 == 0x1b6;
    if (!bVar2) {
      local_80._0_4_ = (uint)DAT_03a7897c;
      bVar2 = bVar2 || (uint)local_80 == param_1;
      if ((uint)local_80 != param_1) {
        lVar9 = 0xc;
        do {
          bVar1 = *(uint *)((long)&local_88 + lVar9) == param_1;
          bVar2 = (bool)(bVar2 | bVar1);
          if (bVar1) break;
          bVar1 = lVar9 != 0x30;
          lVar9 = lVar9 + 4;
        } while (bVar1);
      }
    }
    if (bVar2) goto LAB_010920c8;
  }
  bVar1 = (param_1 | 1) != 0x38b;
  bVar2 = (int)param_1 < 0x38a;
  uVar4 = 0;
  if (bVar2 && bVar1) {
    uVar4 = param_2;
  }
  uVar11 = (ulong)uVar4;
  if ((uVar4 & 0xffff) < 0x1c) {
    uVar8 = 0;
    if (bVar2 && bVar1) {
      uVar8 = (ulong)param_1;
    }
    lVar9 = *(&DAT_043f23a0)[uVar8 * 4];
    uVar8 = (&DAT_043f23a0)[uVar8 * 4][1] - lVar9 >> 3;
    if ((uVar8 <= (uVar11 & 0xffff)) || (*(long *)(lVar9 + (uVar11 & 0xffff) * 8) == 0))
    goto LAB_01092168;
    uVar10 = (ulong)uVar4;
  }
  else {
LAB_01092168:
    uVar10 = 0;
    lVar9 = *DAT_043f23a0;
    uVar8 = DAT_043f23a0[1] - lVar9 >> 3;
  }
  if (uVar8 <= (uVar10 & 0xffff)) goto LAB_010922d4;
  piVar7 = *(int **)(lVar9 + (uVar10 & 0xffff) * 8);
  if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0x57) ||
     (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[0x2b], uVar8 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)((long)piVar7 + uVar8);
  }
  iVar5 = FUN_010922e0(uVar3,param_3);
  if ((uVar4 & 0xffff) < 0x1c) {
    uVar8 = 0;
    if (bVar2 && bVar1) {
      uVar8 = (ulong)param_1;
    }
    lVar9 = *(&DAT_043f23a0)[uVar8 * 4];
    uVar8 = (&DAT_043f23a0)[uVar8 * 4][1] - lVar9 >> 3;
    if ((uVar8 <= (uVar11 & 0xffff)) || (*(long *)(lVar9 + (uVar11 & 0xffff) * 8) == 0))
    goto LAB_01092200;
  }
  else {
LAB_01092200:
    uVar11 = 0;
    lVar9 = *DAT_043f23a0;
    uVar8 = DAT_043f23a0[1] - lVar9 >> 3;
  }
  if ((uVar11 & 0xffff) < uVar8) {
    piVar7 = *(int **)(lVar9 + (uVar11 & 0xffff) * 8);
    if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0x59) ||
       (uVar11 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[0x2c], uVar11 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined1 *)((long)piVar7 + uVar11);
    }
    iVar6 = FUN_010922e0(uVar3,param_3);
    if (iVar5 <= iVar6) {
      iVar6 = iVar5;
    }
    return iVar6;
  }
LAB_010922d4:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


