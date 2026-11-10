/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcf994; name: FUN_02bcf994
 */


undefined8 FUN_02bcf994(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (DAT_04286908 != 1) {
    if (DAT_043f1790 == (undefined **)0x0) {
      DAT_043f1790 = &PTR_PTR_042868c8;
      lVar3 = *(long *)(param_1 + 0x80);
    }
    else {
      lVar3 = *(long *)(param_1 + 0x80);
    }
    if (lVar3 != 0) {
      lVar4 = param_1 + 0x80;
      do {
        lVar1 = 0x10;
        if (param_2 <= *(ulong *)(lVar3 + 0x20)) {
          lVar1 = 8;
          lVar4 = lVar3;
        }
        lVar3 = *(long *)(lVar3 + lVar1);
      } while (lVar3 != 0);
      if (lVar4 != param_1 + 0x80) {
        uVar2 = (**(code **)(*DAT_043f1790 + 0x10))(DAT_043f1790,*(undefined4 *)(lVar4 + 0x30));
        return uVar2;
      }
    }
  }
  return 0;
}


