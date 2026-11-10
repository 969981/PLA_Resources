/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fcaf4; name: FUN_007fcaf4
 */


void FUN_007fcaf4(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [64];
  
  do {
    uVar2 = (**(code **)(*param_1 + 0x330))(param_1);
  } while ((uint)DAT_043a3f84 == (uVar2 & 0xffff));
  DAT_043a3f84 = (ushort)uVar2;
  uVar3 = FUN_008473a0(param_1);
  if ((uVar3 & 0xffff) != (uVar2 & 0xffff)) {
    FUN_008473bc(param_1,uVar2);
    puVar1 = PTR_DAT_043773c0;
    lVar4 = FUN_008551bc(*(undefined8 *)PTR_DAT_043773c0);
    if (*(long *)(lVar4 + 8) != 0) {
      FUN_007ff6a8(*(long *)(lVar4 + 8),uVar2);
    }
    lVar4 = FUN_00855004(*(undefined8 *)puVar1);
    lVar4 = *(long *)(lVar4 + 0x98);
    if (lVar4 != 0) {
      FUN_0083fbc0(auStack_60);
      FUN_00825dcc(auStack_70,lVar4,auStack_60);
      FUN_0083fdb8(auStack_60,uVar2);
      FUN_00825d4c(lVar4,auStack_60);
      FUN_0083fc40(auStack_60);
    }
  }
  return;
}


