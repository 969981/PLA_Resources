/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e09b80; name: FUN_01e09b80
 */


void FUN_01e09b80(long param_1)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  
  FUN_01e09f20(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70));
  if (*(long **)(param_1 + 0x70) != *(long **)(param_1 + 0x68)) {
    lVar1 = **(long **)(param_1 + 0x68);
    if (((*(uint *)(lVar1 + 0x358) | *(uint *)(lVar1 + 0x354)) & 0xffffefff) == 0) {
      uVar3 = (uint)(0 < *(int *)(param_1 + 0xa0));
      bVar2 = *(int *)(param_1 + 0xa0) < 1;
    }
    else {
      uVar3 = 0;
      bVar2 = false;
    }
    FUN_015916d0(lVar1,bVar2,0x1000,4);
    lVar1 = *(long *)(param_1 + 0x68);
    if (1 < (ulong)(*(long *)(param_1 + 0x70) - lVar1 >> 3)) {
      uVar4 = 1;
      do {
        lVar1 = *(long *)(lVar1 + uVar4 * 8);
        if (((*(uint *)(lVar1 + 0x358) | *(uint *)(lVar1 + 0x354)) & 0xffffefff) == 0) {
          bVar2 = *(int *)(param_1 + 0xa0) <= (int)uVar3;
          if ((int)uVar3 < *(int *)(param_1 + 0xa0)) {
            uVar3 = uVar3 + 1;
          }
        }
        else {
          bVar2 = false;
        }
        FUN_015916d0(lVar1,bVar2,0x1000,4);
        lVar1 = *(long *)(param_1 + 0x68);
        uVar4 = uVar4 + 1;
      } while (uVar4 < (ulong)(*(long *)(param_1 + 0x70) - lVar1 >> 3));
    }
  }
  return;
}


