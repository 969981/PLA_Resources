/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02964224; name: FUN_02964224
 */


bool FUN_02964224(undefined8 *param_1,char param_2,uint param_3)

{
  long lVar1;
  
  FUN_0295e190(param_1[1],*param_1);
  for (lVar1 = *(long *)(*(long *)(*(long *)(*(long *)(param_1[5] + 0xb0) + 8) + 0x88) + 0x14c8);
      lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x18)) {
    if (((((*(uint *)(lVar1 + 0x3c) >> 0x1d & 1) != 0) && (*(char *)(lVar1 + 0x30) == '\x01')) &&
        ((*(uint *)(lVar1 + 0x3c) >> 0x1a & 1) == 0)) && (*(char *)(lVar1 + 0x3a) == param_2))
    goto LAB_029642bc;
  }
LAB_029642c8:
  return lVar1 != 0;
LAB_029642bc:
  while (*(ushort *)(lVar1 + 0x38) != param_3) {
    do {
      lVar1 = *(long *)(lVar1 + 0x18);
      if (lVar1 == 0) goto LAB_029642c8;
    } while (((*(char *)(lVar1 + 0x30) != '\x01') || (*(char *)(lVar1 + 0x3a) != param_2)) ||
            ((*(byte *)(lVar1 + 0x3f) >> 2 & 1) != 0));
  }
  goto LAB_029642c8;
}


