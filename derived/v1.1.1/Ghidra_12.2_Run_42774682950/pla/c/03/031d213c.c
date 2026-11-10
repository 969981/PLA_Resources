/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d213c; name: FUN_031d213c
 */


void FUN_031d213c(long param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int local_28 [2];
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar6 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar6 = FUN_02898b44();
  }
  iVar2 = *param_2;
  if (iVar2 != -1) {
    lVar4 = *(long *)(param_1 + 0x20);
    if (iVar2 < *(int *)(lVar4 + 0x20)) {
      if (*(int *)(lVar4 + 0x98) != 0) {
        lVar5 = (long)iVar2;
        iVar2 = *(int *)(*(long *)(lVar4 + 0x90) + lVar5 * 4);
        if (iVar2 == -1) {
          piVar3 = (int *)(*(long *)(lVar4 + 0x18) + lVar5 * 0x10);
          goto LAB_031d21b8;
        }
      }
      piVar3 = (int *)(*(long *)(lVar4 + 0xb0) + (long)iVar2 * 0x10);
    }
    else {
      piVar3 = (int *)(*(long *)(lVar4 + 0xd0) + (long)(iVar2 - *(int *)(lVar4 + 0x20)) * 0x10);
    }
LAB_031d21b8:
    uVar1 = *(ushort *)(param_2 + 2);
    if ((short)uVar1 < (short)piVar3[2]) {
      local_28[0] = *piVar3 + (uint)uVar1;
      iVar2 = *(int *)(lVar6 + 0x78);
    }
    else {
      local_28[0] = piVar3[1] + ((uint)uVar1 - (int)(short)piVar3[2] & 0xffff);
      iVar2 = *(int *)(lVar6 + 0x78);
    }
    if ((iVar2 != 0) && (-1 < *(int *)(*(long *)(lVar6 + 0x70) + (long)local_28[0] * 4))) {
      FUN_0318f140(lVar6,local_28);
    }
  }
  iVar2 = param_2[1];
  if (iVar2 == -1) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (iVar2 < *(int *)(lVar4 + 0x20)) {
    if (*(int *)(lVar4 + 0x98) != 0) {
      lVar5 = (long)iVar2;
      iVar2 = *(int *)(*(long *)(lVar4 + 0x90) + lVar5 * 4);
      if (iVar2 == -1) {
        piVar3 = (int *)(*(long *)(lVar4 + 0x18) + lVar5 * 0x10);
        goto LAB_031d225c;
      }
    }
    piVar3 = (int *)(*(long *)(lVar4 + 0xb0) + (long)iVar2 * 0x10);
  }
  else {
    piVar3 = (int *)(*(long *)(lVar4 + 0xd0) + (long)(iVar2 - *(int *)(lVar4 + 0x20)) * 0x10);
  }
LAB_031d225c:
  uVar1 = *(ushort *)((long)param_2 + 10);
  if ((short)uVar1 < (short)piVar3[2]) {
    local_28[0] = *piVar3 + (uint)uVar1;
    iVar2 = *(int *)(lVar6 + 0x78);
  }
  else {
    local_28[0] = piVar3[1] + ((uint)uVar1 - (int)(short)piVar3[2] & 0xffff);
    iVar2 = *(int *)(lVar6 + 0x78);
  }
  if ((iVar2 != 0) && (-1 < *(int *)(*(long *)(lVar6 + 0x70) + (long)local_28[0] * 4))) {
    FUN_0318f140(lVar6,local_28);
  }
  return;
}


