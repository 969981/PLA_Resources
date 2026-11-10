/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e0e5c; name: FUN_002e0e5c
 */


void FUN_002e0e5c(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *local_80;
  long lStack_78;
  long *local_60;
  long lStack_58;
  long local_40;
  undefined8 uStack_38;
  
  lStack_58 = *(long *)(param_2 + 0x10);
  FUN_00634138(&local_60,*(undefined8 *)(lStack_58 + 0x18));
  lStack_78 = lStack_58;
  local_80 = local_60;
  while (local_80 != (long *)0x0) {
    lVar3 = local_80[1];
    uStack_38 = 0;
    local_40 = lVar3;
    FUN_00634d1c(&local_60,*(undefined8 *)(param_1 + 0x10),&local_40);
    plVar1 = local_60;
    lVar4 = local_60[1];
    if (lVar4 == 0) {
      lVar4 = FUN_00634be0(param_1,lVar3);
      *plVar1 = lVar4;
      plVar1[1] = lVar4;
    }
    if (lVar3 != lVar4) {
      FUN_002de8d8(lVar4 + 0x18);
      if ((*(ulong *)(lVar4 + 0x20) & 1) != 0) {
        uVar2 = *(ulong *)(lVar4 + 0x20) & 0xfffffffffffffffe;
        if ((*(byte *)(uVar2 + 8) & 1) == 0) {
          *(undefined2 *)(uVar2 + 8) = 0;
        }
        else {
          **(undefined1 **)(uVar2 + 0x18) = 0;
          *(undefined8 *)(uVar2 + 0x10) = 0;
        }
      }
      FUN_002dffdc(lVar4 + 0x18,lVar3 + 0x18);
    }
    FUN_00635b48(&local_80);
  }
  return;
}


