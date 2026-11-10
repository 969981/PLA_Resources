/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01128f64; name: FUN_01128f64
 */


undefined1  [16] FUN_01128f64(long param_1,long *param_2)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  pcVar2 = (char *)(param_1 + 0x3268);
  lVar1 = *param_2;
  if ((((((*pcVar2 == '\0') || (*(long *)(param_1 + 0x3270) != lVar1)) &&
        ((pcVar2 = (char *)(param_1 + 0x3280), *pcVar2 == '\0' ||
         (*(long *)(param_1 + 0x3288) != lVar1)))) &&
       ((pcVar2 = (char *)(param_1 + 0x3298), *pcVar2 == '\0' ||
        (*(long *)(param_1 + 0x32a0) != lVar1)))) &&
      ((pcVar2 = (char *)(param_1 + 0x32b0), *pcVar2 == '\0' ||
       (*(long *)(param_1 + 0x32b8) != lVar1)))) &&
     ((((pcVar2 = (char *)(param_1 + 13000), *pcVar2 == '\0' ||
        (*(long *)(param_1 + 0x32d0) != lVar1)) &&
       ((pcVar2 = (char *)(param_1 + 0x32e0), *pcVar2 == '\0' ||
        (*(long *)(param_1 + 0x32e8) != lVar1)))) &&
      ((pcVar2 = (char *)(param_1 + 0x32f8), *pcVar2 == '\0' ||
       (*(long *)(param_1 + 0x3300) != lVar1)))))) {
    pcVar2 = (char *)(param_1 + 0x3310);
    uVar3 = 0xbff0000000000000;
    if ((*pcVar2 == '\0') || (*(long *)(param_1 + 0x3318) != lVar1)) goto LAB_01128fa4;
  }
  uVar3 = *(ulong *)(pcVar2 + 0x10);
LAB_01128fa4:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar3;
  return auVar4;
}


