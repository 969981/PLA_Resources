/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02949ad8; name: FUN_02949ad8
 */


void FUN_02949ad8(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  if (iVar1 < 0x306) {
    if (iVar1 != 0x2cc) {
      if (iVar1 == 0x2ce) {
        uVar2 = FUN_02c6f924(*(undefined8 *)(param_2 + 0x98));
        goto LAB_02949b98;
      }
      if (iVar1 != 0x2ea) {
        return;
      }
    }
  }
  else {
    if (iVar1 == 0x306) {
      uVar2 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
      if ((6 < (uVar2 - 7 & 0xffff)) && ((uVar2 & 0xffff) < 7)) {
        uVar2 = (uint)*(ushort *)(&DAT_03a84c12 + (ulong)(ushort)uVar2 * 4);
      }
      goto LAB_02949b98;
    }
    if (iVar1 != 0x378) {
      if (iVar1 != 0x379) {
        return;
      }
      uVar2 = 1;
      goto LAB_02949b98;
    }
  }
  uVar2 = 0;
LAB_02949b98:
  FUN_02c62fcc(param_1,uVar2,0);
  return;
}


