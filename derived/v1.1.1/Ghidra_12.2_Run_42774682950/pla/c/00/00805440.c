/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00805440; name: FUN_00805440
 */


undefined8 FUN_00805440(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  plVar3 = *(long **)(*(long *)(param_1 + 0xf0) + 0x120);
  uVar1 = *(ushort *)(*(long *)(param_1 + 0xf0) + 0x114e);
  FUN_007f0ce0(auStack_50);
  (**(code **)(*plVar3 + 0x58))(plVar3,auStack_50);
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
    do {
      FUN_007f0ce0(auStack_70);
      uVar2 = (**(code **)(*plVar3 + 0x48))(plVar3,uVar4,auStack_70);
      if ((((uVar2 & 1) != 0) && (uVar2 = FUN_007f0ee4(auStack_70), (uVar2 & 1) != 0)) &&
         (uVar2 = FUN_007f0f48(auStack_70,auStack_50), (uVar2 & 1) == 0)) {
        (**(code **)(*plVar3 + 0x78))(plVar3,auStack_70);
        uVar5 = 1;
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffff) <= (uint)uVar1 && (uint)uVar1 != (uVar4 & 0xffff));
  }
  return uVar5;
}


