/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3ccd4; name: FUN_02a3ccd4
 */


undefined8 FUN_02a3ccd4(long param_1,char param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  for (lVar1 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x18) + 8) + 0x88
                                  ) + 0x14c8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x18)) {
    uVar2 = *(uint *)(lVar1 + 0x3c);
    if (((((uVar2 >> 0x1d & 1) != 0) && (*(char *)(lVar1 + 0x30) == '\x02')) &&
        ((uVar2 >> 0x1a & 1) == 0)) && (*(char *)(lVar1 + 0x3a) == param_2)) goto LAB_02a3cd64;
  }
LAB_02a3cd84:
  uVar3 = 0;
LAB_02a3cd88:
  FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),99,param_2);
  return uVar3;
LAB_02a3cd64:
  while (*(ushort *)(lVar1 + 0x38) != param_3) {
    lVar1 = *(long *)(lVar1 + 0x18);
    while( true ) {
      if (lVar1 == 0) goto LAB_02a3cd84;
      if (((*(char *)(lVar1 + 0x30) == '\x02') && (*(char *)(lVar1 + 0x3a) == param_2)) &&
         (uVar2 = *(uint *)(lVar1 + 0x3c), (uVar2 >> 0x1a & 1) == 0)) break;
      lVar1 = *(long *)(lVar1 + 0x18);
    }
  }
  if ((uVar2 >> 0x1b & 1) == 0) {
    uVar3 = 1;
    *(uint *)(lVar1 + 0x3c) = uVar2 | 0x8000000;
    goto LAB_02a3cd88;
  }
  goto LAB_02a3cd84;
}


