/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01270d70; name: FUN_01270d70
 */


void FUN_01270d70(long param_1)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  uint local_48;
  undefined1 local_44;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x5b0) + 0xb0);
  if (lVar4 != 0 && (int)lVar4 != 0) {
    *(long *)(*(long *)(param_1 + 0x5b0) + 0xb0) = lVar4 - ((lVar4 << 3) >> 3);
  }
  if (2 < (ulong)*(byte *)(param_1 + 0x904)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  iVar2 = *(int *)(param_1 + (ulong)*(byte *)(param_1 + 0x904) * 4 + 0x8f8);
  if (iVar2 == 0) {
    bVar3 = FUN_0126491c(param_1 + 0x628);
  }
  else if (iVar2 == 1) {
    bVar3 = FUN_012626bc(param_1 + 0x718);
  }
  else {
    if (iVar2 != 2) {
      return;
    }
    bVar3 = FUN_01261b04(param_1 + 0x808);
  }
  if (bVar3 != 0) {
    uVar5 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x5b0);
      local_44 = 0;
      uVar1 = *(ulong *)(lVar4 + 0xb0);
      local_48 = uVar5;
      if (uVar1 < *(ulong *)(lVar4 + 0xb8)) {
        FUN_011d216c(lVar4 + 0x88,*(long *)(lVar4 + 0xa8) + uVar1 * 8,&local_48);
        *(long *)(lVar4 + 0xb0) = *(long *)(lVar4 + 0xb0) + 1;
      }
      else {
        local_38 = *(long *)(lVar4 + 0xa8) + uVar1 * 8;
        FUN_011d20a4(auStack_40,lVar4 + 0x88,&local_38,1,&local_48);
      }
      uVar5 = uVar5 + 1;
    } while (bVar3 != uVar5);
  }
  return;
}


