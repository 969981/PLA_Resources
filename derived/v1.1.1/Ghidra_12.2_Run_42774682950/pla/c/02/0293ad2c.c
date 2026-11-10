/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293ad2c; name: FUN_0293ad2c
 */


bool FUN_0293ad2c(long param_1,byte param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x58) + 0x110);
  if (param_2 < 6) {
    lVar3 = 0;
  }
  else if (param_2 < 0xc) {
    lVar3 = 2;
  }
  else if (param_2 < 0x12) {
    lVar3 = 1;
  }
  else if (param_2 < 0x18) {
    lVar3 = 3;
  }
  else {
    lVar3 = (ulong)(param_2 < 0x1e) << 2;
  }
  if (uVar1 < 3) {
    uVar2 = (ulong)(byte)(&PTR_DAT_042764e0)[(int)uVar1][lVar3];
  }
  else {
    uVar2 = 2;
  }
  if (param_3 == 0x13) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x88) + 0x48);
    if ((((((*(int *)(*(long *)(lVar3 + uVar2 * 0x260 + 8) + 0x1c) == 0) &&
           (*(int *)(*(long *)(lVar3 + uVar2 * 0x260 + 0x28) + 0x1c) == 0)) &&
          ((*(int *)(*(long *)(lVar3 + uVar2 * 0x260 + 0x48) + 0x1c) == 0 &&
           ((*(int *)(*(long *)(lVar3 + uVar2 * 0x260 + 0x68) + 0x1c) == 0 &&
            (*(int *)(*(long *)(lVar3 + uVar2 * 0x260 + 0x88) + 0x1c) == 0)))))) &&
         (*(int *)(*(long *)(lVar3 + uVar2 * 0x260 + 0xa8) + 0x1c) == 0)) &&
        ((((*(int *)(*(long *)(lVar3 + uVar2 * 0x260 + 200) + 0x1c) == 0 &&
           (*(int *)(*(long *)(lVar3 + uVar2 * 0x260 + 0xe8) + 0x1c) == 0)) &&
          (*(int *)(*(long *)(lVar3 + uVar2 * 0x260 + 0x108) + 0x1c) == 0)) &&
         ((*(int *)(*(long *)(lVar3 + uVar2 * 0x260 + 0x128) + 0x1c) == 0 &&
          (*(int *)(*(long *)(lVar3 + uVar2 * 0x260 + 0x148) + 0x1c) == 0)))))) &&
       (((*(int *)(*(long *)(lVar3 + uVar2 * 0x260 + 0x168) + 0x1c) == 0 &&
         ((*(int *)(*(long *)(lVar3 + uVar2 * 0x260 + 0x188) + 0x1c) == 0 &&
          (*(int *)(*(long *)(lVar3 + uVar2 * 0x260 + 0x1a8) + 0x1c) == 0)))) &&
        ((*(int *)(*(long *)(lVar3 + uVar2 * 0x260 + 0x1c8) + 0x1c) == 0 &&
         (((*(int *)(*(long *)(lVar3 + uVar2 * 0x260 + 0x1e8) + 0x1c) == 0 &&
           (*(int *)(*(long *)(lVar3 + uVar2 * 0x260 + 0x208) + 0x1c) == 0)) &&
          (*(int *)(*(long *)(lVar3 + uVar2 * 0x260 + 0x228) + 0x1c) == 0)))))))) {
      return *(int *)(*(long *)(lVar3 + uVar2 * 0x260 + 0x248) + 0x1c) == 0;
    }
  }
  else if ((((int)param_3 < 0x13) && ((uint)uVar2 < 2)) &&
          (lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + uVar2 * 0x260 +
                             (ulong)param_3 * 0x20 + 8), lVar3 != 0)) {
    return *(int *)(lVar3 + 0x1c) != 0;
  }
  return false;
}


