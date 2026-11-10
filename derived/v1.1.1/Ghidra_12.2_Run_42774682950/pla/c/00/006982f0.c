/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006982f0; name: FUN_006982f0
 */


void FUN_006982f0(long param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined *puVar8;
  
  if (*(int *)(param_1 + 0x1c) != 2) {
    if (*(int *)(param_1 + 0x1c) == 1) {
      puVar8 = *(undefined **)(param_1 + 0x10);
      if ((puVar8 == PTR_DAT_04375d68) || (*(long *)(puVar8 + 0x10) == 0)) {
        uVar2 = 0;
        uVar6 = *(ulong *)(puVar8 + 8);
      }
      else {
        uVar2 = FUN_0068ed18();
        uVar2 = uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
        uVar6 = *(ulong *)(puVar8 + 8);
      }
      if ((uVar6 & 1) != 0) {
        bVar1 = *(byte *)((uVar6 & 0xfffffffffffffffe) + 8);
        if ((bVar1 & 1) == 0) {
          uVar5 = (uint)(bVar1 >> 1);
        }
        else {
          uVar5 = (uint)*(undefined8 *)((uVar6 & 0xfffffffffffffffe) + 0x10);
        }
        uVar2 = uVar5 + uVar2;
      }
      *(uint *)(puVar8 + 0x18) = uVar2;
      iVar3 = uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      uVar6 = *(ulong *)(param_1 + 8);
    }
    else {
      iVar3 = 0;
      uVar6 = *(ulong *)(param_1 + 8);
    }
    goto joined_r0x00698400;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  pbVar7 = *(byte **)(lVar4 + 0x10);
  bVar1 = *pbVar7;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) goto LAB_00698374;
LAB_00698410:
    uVar2 = 0;
    uVar6 = *(ulong *)(lVar4 + 8);
  }
  else {
    if (*(long *)(pbVar7 + 8) == 0) goto LAB_00698410;
LAB_00698374:
    uVar2 = (uint)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar2 = (uint)*(undefined8 *)(pbVar7 + 8);
    }
    uVar2 = uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    uVar6 = *(ulong *)(lVar4 + 8);
  }
  if ((uVar6 & 1) != 0) {
    bVar1 = *(byte *)((uVar6 & 0xfffffffffffffffe) + 8);
    if ((bVar1 & 1) == 0) {
      uVar5 = (uint)(bVar1 >> 1);
    }
    else {
      uVar5 = (uint)*(undefined8 *)((uVar6 & 0xfffffffffffffffe) + 0x10);
    }
    uVar2 = uVar5 + uVar2;
  }
  *(uint *)(lVar4 + 0x18) = uVar2;
  iVar3 = uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  uVar6 = *(ulong *)(param_1 + 8);
joined_r0x00698400:
  if ((uVar6 & 1) == 0) {
    *(int *)(param_1 + 0x18) = iVar3;
    return;
  }
  bVar1 = *(byte *)((uVar6 & 0xfffffffffffffffe) + 8);
  if ((bVar1 & 1) == 0) {
    uVar2 = (uint)(bVar1 >> 1);
  }
  else {
    uVar2 = (uint)*(undefined8 *)((uVar6 & 0xfffffffffffffffe) + 0x10);
  }
  *(uint *)(param_1 + 0x18) = uVar2 + iVar3;
  return;
}


