/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00839bf8; name: FUN_00839bf8
 */


void FUN_00839bf8(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong *puVar6;
  uint uVar7;
  undefined1 auStack_40 [16];
  
  lVar3 = FUN_008473ec();
  if (lVar3 != 0) {
    lVar3 = FUN_008473ec(param_1);
    lVar4 = FUN_00847388(param_1);
    if ((10 < param_3) && (lVar3 == lVar4)) {
      uVar2 = (*(ulong *)(param_2 + 1) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_2 + 1) & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      bVar1 = *(byte *)(param_2 + 9);
      uVar7 = (uint)bVar1;
      plVar5 = (long *)FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
      lVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,uVar2 >> 0x20 | uVar2 << 0x20);
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0x3c) == 2 && bVar1 < 2)) {
        if (bVar1 != 0) {
          puVar6 = (ulong *)(param_2 + 10);
          do {
            uVar2 = (*puVar6 & 0xff00ff00ff00ff00) >> 8 | (*puVar6 & 0xff00ff00ff00ff) << 8;
            uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
            FUN_0083cad4(auStack_40,*(undefined8 *)(param_1 + 200),uVar2 >> 0x20 | uVar2 << 0x20,1);
            uVar7 = uVar7 - 1;
            puVar6 = puVar6 + 1;
          } while (uVar7 != 0);
        }
        FUN_00835048(param_1);
      }
    }
  }
  return;
}


