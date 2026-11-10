/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00691360; name: FUN_00691360
 */


void FUN_00691360(long param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  undefined *puVar6;
  
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    uVar2 = FUN_00693da4(*(undefined8 *)(param_1 + 0x10));
    break;
  case 2:
    puVar6 = *(undefined **)(param_1 + 0x10);
    if ((puVar6 == PTR_DAT_04375cf8) || (*(long *)(puVar6 + 0x10) == 0)) {
      uVar2 = 0;
      uVar4 = *(ulong *)(puVar6 + 8);
    }
    else {
      uVar2 = FUN_0068dff4();
      uVar2 = uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      uVar4 = *(ulong *)(puVar6 + 8);
    }
    if ((uVar4 & 1) != 0) {
      bVar1 = *(byte *)((uVar4 & 0xfffffffffffffffe) + 8);
      if ((bVar1 & 1) == 0) {
        uVar5 = (uint)(bVar1 >> 1);
      }
      else {
        uVar5 = (uint)*(undefined8 *)((uVar4 & 0xfffffffffffffffe) + 0x10);
      }
      uVar2 = uVar5 + uVar2;
    }
    *(uint *)(puVar6 + 0x18) = uVar2;
    iVar3 = uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    uVar4 = *(ulong *)(param_1 + 8);
    goto joined_r0x0069148c;
  case 3:
    uVar2 = FUN_00694fdc(*(undefined8 *)(param_1 + 0x10));
    break;
  case 4:
    uVar2 = FUN_006958b4(*(undefined8 *)(param_1 + 0x10));
    break;
  default:
    iVar3 = 0;
    uVar4 = *(ulong *)(param_1 + 8);
    goto joined_r0x0069148c;
  }
  iVar3 = uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  uVar4 = *(ulong *)(param_1 + 8);
joined_r0x0069148c:
  if ((uVar4 & 1) == 0) {
    *(int *)(param_1 + 0x18) = iVar3;
    return;
  }
  bVar1 = *(byte *)((uVar4 & 0xfffffffffffffffe) + 8);
  if ((bVar1 & 1) == 0) {
    uVar2 = (uint)(bVar1 >> 1);
  }
  else {
    uVar2 = (uint)*(undefined8 *)((uVar4 & 0xfffffffffffffffe) + 0x10);
  }
  *(uint *)(param_1 + 0x18) = uVar2 + iVar3;
  return;
}


