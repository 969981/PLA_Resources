/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fdfc0c; name: FUN_02fdfc0c
 */


undefined1  [16] FUN_02fdfc0c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  lVar1 = 0;
  if ((*(byte *)(param_2 + 0x1a) & 1) != 0) {
    lVar1 = param_2;
  }
  if ((param_1 == 0) || ((*(ushort *)(param_1 + 0x1a) & 1) == 0)) {
    if (*(char *)(param_1 + 0x18) != '\x11') {
      lVar3 = 0x7f7fffee7f7fffee;
      goto joined_r0x02fdfccc;
    }
    lVar2 = *(long *)(param_1 + 0x40);
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = lVar2 + param_1 + 0x40;
    }
    param_1 = 0;
    if ((*(byte *)(lVar3 + 0x1a) & 1) != 0) {
      param_1 = lVar3;
    }
  }
  lVar3 = (ulong)CONCAT42((uint)*(ushort *)(param_1 + 0x70) << 0x10,*(ushort *)(param_1 + 0x70)) <<
          0x10;
joined_r0x02fdfccc:
  if (lVar1 == 0) {
    if (*(char *)(param_2 + 0x18) != '\x11') {
      auVar5._0_8_ = NEON_fmin(lVar3,0x7f7fffee7f7fffee,4);
      auVar5._8_8_ = 0;
      return auVar5;
    }
    lVar1 = *(long *)(param_2 + 0x40);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = lVar1 + param_2 + 0x40;
    }
    lVar1 = 0;
    if ((*(byte *)(lVar2 + 0x1a) & 1) != 0) {
      lVar1 = lVar2;
    }
  }
  auVar4._0_8_ = NEON_fmin(lVar3,(ulong)CONCAT42((uint)*(ushort *)(lVar1 + 0x70) << 0x10,
                                                 *(ushort *)(lVar1 + 0x70)) << 0x10,4);
  auVar4._8_8_ = 0;
  return auVar4;
}


