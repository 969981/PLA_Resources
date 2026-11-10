/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00838fa0; name: FUN_00838fa0
 */


void FUN_00838fa0(long param_1,long param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = FUN_008473ec();
  if (lVar2 != 0) {
    lVar2 = FUN_008473ec(param_1);
    lVar3 = FUN_00847388(param_1);
    if (((0xc < param_3) && (lVar2 == lVar3)) &&
       (uVar1 = (*(uint *)(param_2 + 9) & 0xff00ff00) >> 8 |
                (*(uint *)(param_2 + 9) & 0xff00ff) << 8,
       (uVar1 >> 0x10 | uVar1 << 0x10) == (uint)*(ushort *)(param_1 + 0xdc))) {
      plVar4 = (long *)FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
      lVar2 = (**(code **)(*plVar4 + 0x50))(plVar4,param_4);
      if (lVar2 != 0) {
        FUN_00840680(param_1 + 0x180,*(undefined1 *)(lVar2 + 0x28),param_4);
        return;
      }
    }
  }
  return;
}


