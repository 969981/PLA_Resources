/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014822e0; name: FUN_014822e0
 */


void FUN_014822e0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x5b8) != 0) {
    uVar2 = *(ulong *)(param_1 + 0x5b0);
    if ((uVar2 & 0xf) == 0) {
      lVar1 = *(long *)(param_1 + 0x2c8);
    }
    else {
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283d294();
        uVar2 = *(ulong *)(param_1 + 0x5b0);
      }
      *(ulong *)(param_1 + 0x5b0) = uVar2 & 0xfffffffffffffff0;
      FUN_00d42690(param_1,0,1);
      lVar1 = *(long *)(param_1 + 0x2c8);
    }
    if (((lVar1 != 0) && (uVar2 = FUN_0283b5c4(lVar1,&DAT_043acdd8), (uVar2 & 1) == 0)) &&
       (*(long *)(param_1 + 0x2c8) != 0)) {
      FUN_0283d294();
    }
    FUN_00d42690(param_1,1,1);
    *(ulong *)(param_1 + 0x5b0) = *(ulong *)(param_1 + 0x5b0) | 3;
    local_40 = 0x994cd76cf26dfc40;
    pcStack_38 = "anime_wake";
    local_30 = 10;
    uStack_28 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_40);
    }
  }
  return;
}


