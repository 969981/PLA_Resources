/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083ed5c; name: FUN_0083ed5c
 */


undefined8 FUN_0083ed5c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x68);
  if (lVar6 != param_1 + 0x60) {
    uVar4 = *(undefined8 *)PTR_DAT_04377ce8;
    do {
      uVar1 = FUN_007f0f48(lVar6 + 0x10,param_2);
      if ((uVar1 & 1) != 0) {
        lVar2 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
        uVar5 = *(undefined8 *)(lVar2 + 0x98);
        uVar3 = FUN_0082deb0(lVar6 + 0x10);
        FUN_00830f1c(uVar4,uVar5,uVar3,*(undefined1 *)(lVar6 + 0x30));
        return 1;
      }
      lVar6 = *(long *)(lVar6 + 8);
    } while (lVar6 != param_1 + 0x60);
  }
  return 0;
}


