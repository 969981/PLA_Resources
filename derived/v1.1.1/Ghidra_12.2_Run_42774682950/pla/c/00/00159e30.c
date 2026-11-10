/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00159e30; name: FUN_00159e30
 */


void FUN_00159e30(long param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  iVar4 = *(int *)(param_1 + 0xc0) + -1;
  uVar2 = *(uint *)(param_1 + 200);
  plVar8 = *(long **)(param_1 + 0x20);
  *(int *)(param_1 + 0xc0) = iVar4;
  uVar1 = (uint)(iVar4 == 0) & uVar2 >> 3;
  if (uVar1 == 1) {
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xbc);
    uVar3 = *(ushort *)((long)plVar8 + 0x42);
  }
  else {
    if ((uVar2 >> 2 & 1) == 0) {
      return;
    }
    uVar3 = *(ushort *)((long)plVar8 + 0x42);
  }
  if ((uVar3 >> 6 & 1) != 0) {
    *(ushort *)((long)plVar8 + 0x42) = uVar3 & 0xffbf;
    return;
  }
  if (uVar1 != 0) {
    FUN_0015a800(param_1,3,0xffffffff);
  }
  if ((uVar2 >> 2 & 1) == 0) goto LAB_00159f3c;
  lVar6 = *(long *)(*(long *)(*(long *)*plVar8 + 0x18) + 0x38);
  lVar7 = *(long *)(*(long *)(*(long *)*plVar8 + 0x18) + 0x48);
  iVar4 = (int)((ulong)(plVar8[5] - lVar6) >> 2) + -1;
  if (lVar7 == 0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *(int *)(lVar7 + (long)iVar4 * 4);
  }
  if ((iVar4 != 0) && (*(ulong *)(param_1 + 0x28) < (ulong)plVar8[5])) {
    if (lVar7 == 0) {
      if (iVar5 == -1) goto LAB_00159f3c;
    }
    else if (iVar5 == *(int *)(lVar7 + ((long)((*(ulong *)(param_1 + 0x28) - lVar6) * 0x40000000 +
                                              -0x100000000) >> 0x1e))) goto LAB_00159f3c;
  }
  FUN_0015a800(param_1,2);
LAB_00159f3c:
  *(long *)(param_1 + 0x28) = plVar8[5];
  if (*(char *)(param_1 + 0xc) != '\x01') {
    return;
  }
  if (uVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 1;
  }
  plVar8[5] = plVar8[5] + -4;
  *(ushort *)((long)plVar8 + 0x42) = *(ushort *)((long)plVar8 + 0x42) | 0x40;
  *plVar8 = *(long *)(param_1 + 0x10) + -0x10;
                    /* WARNING: Subroutine does not return */
  FUN_0015a320(param_1,1);
}


