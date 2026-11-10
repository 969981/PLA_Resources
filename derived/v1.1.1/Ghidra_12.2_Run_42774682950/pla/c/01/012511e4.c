/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012511e4; name: FUN_012511e4
 */


void FUN_012511e4(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int local_48;
  undefined1 local_44;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x5b0) + 0xb0);
  if (lVar3 != 0 && (int)lVar3 != 0) {
    *(long *)(*(long *)(param_1 + 0x5b0) + 0xb0) = lVar3 - ((lVar3 << 3) >> 3);
  }
  iVar2 = FUN_01236ca4(param_1 + 0x5c0,
                       *(undefined4 *)
                        (*(long *)(param_1 + 0x1270) + (ulong)*(byte *)(param_1 + 0x12a8) * 4));
  if (iVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x5b0);
    local_48 = 0;
    local_44 = 0;
    uVar1 = *(ulong *)(lVar3 + 0xb0);
    if (uVar1 < *(ulong *)(lVar3 + 0xb8)) {
      FUN_011d216c(lVar3 + 0x88,*(long *)(lVar3 + 0xa8) + uVar1 * 8,&local_48);
      *(long *)(lVar3 + 0xb0) = *(long *)(lVar3 + 0xb0) + 1;
    }
    else {
      local_38 = *(long *)(lVar3 + 0xa8) + uVar1 * 8;
      FUN_011d20a4(auStack_40,lVar3 + 0x88,&local_38,1,&local_48);
    }
    if (iVar2 != 1) {
      lVar3 = *(long *)(param_1 + 0x5b0);
      local_48 = 1;
      local_44 = 0;
      uVar1 = *(ulong *)(lVar3 + 0xb0);
      if (uVar1 < *(ulong *)(lVar3 + 0xb8)) {
        FUN_011d216c(lVar3 + 0x88,*(long *)(lVar3 + 0xa8) + uVar1 * 8,&local_48);
        *(long *)(lVar3 + 0xb0) = *(long *)(lVar3 + 0xb0) + 1;
      }
      else {
        local_38 = *(long *)(lVar3 + 0xa8) + uVar1 * 8;
        FUN_011d20a4(auStack_40,lVar3 + 0x88,&local_38,1,&local_48);
      }
      if (iVar2 != 2) {
        iVar4 = 2;
        do {
          lVar3 = *(long *)(param_1 + 0x5b0);
          local_44 = 0;
          uVar1 = *(ulong *)(lVar3 + 0xb0);
          local_48 = iVar4;
          if (uVar1 < *(ulong *)(lVar3 + 0xb8)) {
            FUN_011d216c(lVar3 + 0x88,*(long *)(lVar3 + 0xa8) + uVar1 * 8,&local_48);
            *(long *)(lVar3 + 0xb0) = *(long *)(lVar3 + 0xb0) + 1;
          }
          else {
            local_38 = *(long *)(lVar3 + 0xa8) + uVar1 * 8;
            FUN_011d20a4(auStack_40,lVar3 + 0x88,&local_38,1,&local_48);
          }
          iVar4 = iVar4 + 1;
        } while (iVar2 != iVar4);
      }
    }
  }
  return;
}


