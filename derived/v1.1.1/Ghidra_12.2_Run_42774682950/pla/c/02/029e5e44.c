/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e5e44; name: FUN_029e5e44
 */


void FUN_029e5e44(long param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  
  *param_2 = 0;
  uVar2 = FUN_029cddec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if ((uVar2 & 1) == 0) {
    if ((ulong)*param_3 == 0x1f) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)*param_3 * 8 + 0x120);
    }
    uVar2 = FUN_029e5f30(param_1,param_3);
    if ((uVar2 & 1) == 0) {
      bVar1 = FUN_029e6010(param_1,param_3);
      *param_2 = bVar1 & 1;
    }
    else {
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x7d) != '\x1f')) {
        FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x99,*(char *)(lVar3 + 0x7d),
                     *(undefined4 *)(param_3 + 0x20));
      }
      bVar1 = FUN_029e6010(param_1,param_3);
      *param_2 = bVar1 & 1;
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x7d) != '\x1f')) {
        FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9a);
        return;
      }
    }
  }
  return;
}


