/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029fb5f0; name: FUN_029fb5f0
 */


void FUN_029fb5f0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = 0;
  lVar5 = 8;
  do {
    lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + lVar5);
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x1c) != 0)) &&
       (uVar1 = (uint)*(undefined8 *)(lVar6 + 0x10), (uVar1 & 7) == 4 || (uVar1 & 7) == 2)) {
      lVar2 = *(long *)(param_1 + 0x20);
      lVar3 = *(long *)(*(long *)(*(long *)(lVar2 + 0x10) + 0x48) + lVar5);
      if (lVar3 != 0) {
        *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
        FUN_02a3e6b8(*(undefined8 *)(lVar2 + 0x18),0x49,0,uVar4 & 0xffffffff);
        uVar1 = (uint)*(undefined8 *)(lVar6 + 0x10);
      }
      if ((uVar1 >> 8 & 0x3f) <= *(uint *)(lVar6 + 0x18)) {
        lVar6 = *(long *)(param_1 + 0x20);
        lVar2 = *(long *)(*(long *)(*(long *)(lVar6 + 0x10) + 0x48) + lVar5);
        if ((lVar2 != 0) && (*(int *)(lVar2 + 0x1c) != 0)) {
          *(ulong *)(lVar2 + 0x10) = *(ulong *)(lVar2 + 0x10) & 0xfffffffffffffff8;
          *(undefined8 *)(lVar2 + 0x18) = 0;
          FUN_02a3e6b8(*(undefined8 *)(lVar6 + 0x18),0x48,0,uVar4 & 0xffffffff);
          lVar6 = *(long *)(param_1 + 0x20);
          FUN_02a35db0(*(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x18),0,uVar4 & 0xffffffff);
          FUN_02a3e6b8(*(undefined8 *)(lVar6 + 0x18),0x62,0,uVar4 & 0xffffffff);
          lVar6 = *(long *)(param_1 + 0x20);
        }
        if (((uint)uVar4 < 0x12) && ((0x279ffU >> (ulong)((uint)uVar4 & 0x1f) & 1) != 0)) {
          FUN_02a3fa08(*(undefined8 *)(lVar6 + 0x18),0x9c,(&DAT_03a80800)[uVar4],0,0xffff0000);
        }
      }
    }
    uVar4 = uVar4 + 1;
    lVar5 = lVar5 + 0x20;
  } while (uVar4 != 0x13);
  uVar4 = 0;
  lVar5 = 0x268;
  do {
    lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + lVar5);
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x1c) != 0)) &&
       (uVar1 = (uint)*(undefined8 *)(lVar6 + 0x10), (uVar1 & 7) == 4 || (uVar1 & 7) == 2)) {
      lVar2 = *(long *)(param_1 + 0x20);
      lVar3 = *(long *)(*(long *)(*(long *)(lVar2 + 0x10) + 0x48) + lVar5);
      if (lVar3 != 0) {
        *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
        FUN_02a3e6b8(*(undefined8 *)(lVar2 + 0x18),0x49,1,uVar4 & 0xffffffff);
        uVar1 = (uint)*(undefined8 *)(lVar6 + 0x10);
      }
      if ((uVar1 >> 8 & 0x3f) <= *(uint *)(lVar6 + 0x18)) {
        lVar6 = *(long *)(param_1 + 0x20);
        lVar2 = *(long *)(*(long *)(*(long *)(lVar6 + 0x10) + 0x48) + lVar5);
        if ((lVar2 != 0) && (*(int *)(lVar2 + 0x1c) != 0)) {
          *(ulong *)(lVar2 + 0x10) = *(ulong *)(lVar2 + 0x10) & 0xfffffffffffffff8;
          *(undefined8 *)(lVar2 + 0x18) = 0;
          FUN_02a3e6b8(*(undefined8 *)(lVar6 + 0x18),0x48,1,uVar4 & 0xffffffff);
          lVar6 = *(long *)(param_1 + 0x20);
          FUN_02a35db0(*(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x18),1,uVar4 & 0xffffffff);
          FUN_02a3e6b8(*(undefined8 *)(lVar6 + 0x18),0x62,1,uVar4 & 0xffffffff);
          lVar6 = *(long *)(param_1 + 0x20);
        }
        if (((uint)uVar4 < 0x12) && ((0x279ffU >> (ulong)((uint)uVar4 & 0x1f) & 1) != 0)) {
          FUN_02a3fa08(*(undefined8 *)(lVar6 + 0x18),0x9c,(&DAT_03a80800)[uVar4],1,0xffff0000);
        }
      }
    }
    uVar4 = uVar4 + 1;
    lVar5 = lVar5 + 0x20;
  } while (uVar4 != 0x13);
  return;
}


