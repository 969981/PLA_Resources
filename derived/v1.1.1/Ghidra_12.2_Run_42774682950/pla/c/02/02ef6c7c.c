/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef6c7c; name: FUN_02ef6c7c
 */


void FUN_02ef6c7c(long param_1,long *param_2)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  undefined1 auStack_24 [4];
  
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    *(undefined2 *)((long)param_2 + 0x14) = 0;
  }
  else {
    if ((*(int *)(lVar3 + 0xdc) == 0) || (*(float *)(lVar3 + 0xc4) <= DAT_042ac98c)) {
      *(undefined1 *)((long)param_2 + 0x14) = 0;
    }
    else {
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
      lVar3 = param_2[1];
      *(undefined1 *)((long)param_2 + 0x14) = 1;
      if (lVar3 == 0) {
        *(undefined1 *)((long)param_2 + 0x15) = 0;
        goto LAB_02ef6cd4;
      }
    }
    uVar1 = (ushort)(1 < (ushort)((*(ushort *)(lVar3 + 0x134) & 7) - 1)) &
            *(ushort *)(lVar3 + 0x134) >> 9;
    if (uVar1 == 0) {
      *(undefined1 *)((long)param_2 + 0x15) = 0;
    }
    else {
      *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
      lVar3 = param_2[1];
      *(char *)((long)param_2 + 0x15) = (char)uVar1;
      if (lVar3 == 0) goto LAB_02ef6cd4;
    }
    iVar2 = *(int *)(lVar3 + 0xdc);
    if (iVar2 != 0) {
      lVar3 = FUN_02ef7d40(param_1 + 0x60,iVar2,auStack_24);
      if (lVar3 != 0) {
        *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
      }
      *(int *)(param_2 + 2) = iVar2;
    }
  }
LAB_02ef6cd4:
  fVar4 = (float)FUN_02ef8138(param_2);
  if (*(float *)(param_1 + 0xf0) < fVar4) {
    *(float *)(param_1 + 0xf0) = fVar4;
    lVar3 = *(long *)(param_1 + 0xe0);
  }
  else {
    lVar3 = *(long *)(param_1 + 0xe0);
  }
  if (lVar3 == 0) {
    *(long **)(param_1 + 0xe0) = param_2;
    *param_2 = 0;
  }
  else {
    *param_2 = lVar3;
    *(long **)(param_1 + 0xe0) = param_2;
  }
  *(undefined1 *)(param_1 + 0xf8) = 1;
  *(undefined1 *)(param_1 + 0xfb) = 1;
  return;
}


