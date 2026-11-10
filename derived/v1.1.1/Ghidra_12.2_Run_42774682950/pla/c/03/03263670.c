/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03263670; name: FUN_03263670
 */


undefined8 FUN_03263670(long param_1,ushort *param_2,long *param_3,long param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  short *psVar12;
  
  iVar2 = *(int *)(param_4 + 0x10);
  iVar3 = *(int *)(param_1 + 0x128);
  *(int *)(param_4 + 0x10) = iVar2 + 1;
  psVar12 = (short *)(*(long *)(param_4 + 8) + (long)iVar2 * 6);
  psVar12[0] = 0;
  psVar12[1] = 0;
  psVar12[2] = param_2[2];
  lVar5 = tpidr_el0;
  if (iVar3 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar5 + 0x38d490) = lVar7;
    }
    lVar4 = *(long *)(lVar7 + 8);
    uVar6 = (long)iVar3 + 0x7fU & 0xffffffffffffff80;
    if (uVar6 <= *(ulong *)(lVar4 + 0x10)) {
      lVar7 = *(long *)(lVar4 + 0x18);
      uVar6 = lVar7 + uVar6;
      if (uVar6 <= *(ulong *)(lVar4 + 0x20)) {
        *(ulong *)(lVar4 + 0x18) = uVar6;
        goto LAB_0326370c;
      }
    }
    lVar7 = FUN_032ce670();
  }
LAB_0326370c:
  uVar1 = *param_2;
  uVar6 = (ulong)uVar1;
  do {
    iVar2 = *(int *)(param_4 + 0x30);
    *(int *)(param_4 + 0x30) = iVar2 + 1;
    lVar4 = *(long *)(param_4 + 0x28);
    *psVar12 = *psVar12 + 1;
    uVar8 = *(ulong *)(*(long *)(param_1 + 0x120) + (uVar6 & 0xffff) * 8);
    *(short *)(lVar4 + (long)iVar2 * 8) = (short)uVar8;
    uVar9 = (uint)(uVar8 >> 0x20) & 3;
    uVar6 = uVar8 >> 0x10;
    uVar11 = uVar8 >> 0x22 & 0x3fff;
    uVar10 = (undefined4)uVar11;
    if (uVar9 == 2) {
      uVar10 = *(undefined4 *)(*param_3 + uVar11 * 4);
    }
    lVar4 = lVar4 + (long)iVar2 * 8;
    *(undefined4 *)(lVar4 + 4) = uVar10;
    *(byte *)(lVar4 + 2) = (byte)uVar9 | 4;
  } while ((uint)uVar1 != (uint)uVar8 >> 0x10);
  lVar4 = *(long *)(lVar5 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar4;
  }
  lVar5 = *(long *)(lVar4 + 8);
  uVar6 = (ulong)(int)(iVar3 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar5 + 0x10) < uVar6) || (*(long *)(lVar5 + 0x18) != lVar7 + uVar6)) ||
     (*(long *)(lVar5 + 0x28) == lVar7)) {
    FUN_032cedf0(lVar5,lVar7);
  }
  else {
    *(long *)(lVar5 + 0x18) = lVar7;
  }
  return 1;
}


