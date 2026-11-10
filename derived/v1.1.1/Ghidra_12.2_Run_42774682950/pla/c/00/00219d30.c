/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00219d30; name: FUN_00219d30
 */


void FUN_00219d30(long param_1,void *param_2,size_t param_3,uint param_4)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x1734);
  uVar3 = (uint)*(ushort *)(param_1 + 0x1730) | (param_4 & 0xffff) << (ulong)(uVar1 & 0x1f);
  *(short *)(param_1 + 0x1730) = (short)uVar3;
  if ((int)uVar1 < 0xe) {
    iVar4 = uVar1 + 3;
    *(int *)(param_1 + 0x1734) = iVar4;
    if (iVar4 < 9) goto LAB_00219dbc;
LAB_00219dd8:
    lVar5 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar5 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + lVar5) = (char)uVar3;
    uVar2 = *(undefined1 *)(param_1 + 0x1731);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar5 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + lVar5) = (char)uVar3;
    lVar5 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar5 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar5) = *(undefined1 *)(param_1 + 0x1731);
    uVar3 = (param_4 & 0xffff) >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
    iVar4 = *(int *)(param_1 + 0x1734) + -0xd;
    *(short *)(param_1 + 0x1730) = (short)uVar3;
    *(int *)(param_1 + 0x1734) = iVar4;
    if (8 < iVar4) goto LAB_00219dd8;
LAB_00219dbc:
    uVar2 = (undefined1)uVar3;
    if (iVar4 < 1) goto LAB_00219e0c;
  }
  lVar5 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar5 + 1;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar5) = uVar2;
LAB_00219e0c:
  lVar5 = *(long *)(param_1 + 0x28);
  *(undefined2 *)(param_1 + 0x1730) = 0;
  *(undefined4 *)(param_1 + 0x1734) = 0;
  *(long *)(param_1 + 0x28) = lVar5 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar5) = (char)param_3;
  lVar5 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar5 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar5) = (char)(param_3 >> 8);
  lVar5 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar5 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar5) = (char)~(uint)param_3;
  lVar5 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar5 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar5) = (char)(~(uint)param_3 >> 8);
  memcpy((void *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x28)),param_2,param_3);
  *(size_t *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + param_3;
  return;
}


