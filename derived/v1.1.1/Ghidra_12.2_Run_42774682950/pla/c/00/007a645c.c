/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a645c; name: FUN_007a645c
 */


void FUN_007a645c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *local_70;
  long lStack_68;
  long *local_50;
  long lStack_48;
  long local_30;
  undefined8 uStack_28;
  
  lStack_48 = *(long *)(param_2 + 0x10);
  FUN_007b17a0(&local_50,*(undefined8 *)(lStack_48 + 0x18));
  lStack_68 = lStack_48;
  local_70 = local_50;
  while (local_70 != (long *)0x0) {
    lVar5 = local_70[1];
    uStack_28 = 0;
    local_30 = lVar5;
    FUN_0079410c(&local_50,*(undefined8 *)(param_1 + 0x10),&local_30);
    plVar3 = local_50;
    lVar4 = local_50[1];
    if (lVar4 == 0) {
      lVar4 = FUN_00793f40(param_1,lVar5);
      *plVar3 = lVar4;
      plVar3[1] = lVar4;
    }
    if (lVar4 != lVar5) {
      uVar1 = *(ulong *)(lVar5 + 0x20);
      lVar2 = *(long *)(lVar5 + 0x28);
      if ((*(byte *)(lVar5 + 0x18) & 1) == 0) {
        lVar2 = lVar5 + 0x19;
        uVar1 = (ulong)(*(byte *)(lVar5 + 0x18) >> 1);
      }
      FUN_00291910(lVar4 + 0x18,lVar2,uVar1);
    }
    FUN_007b34d8(&local_70);
  }
  return;
}


