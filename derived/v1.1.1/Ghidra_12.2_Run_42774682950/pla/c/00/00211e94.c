/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00211e94; name: FUN_00211e94
 */


void FUN_00211e94(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0xe6) != '\0') {
    while (lVar2 = *(long *)(param_1 + 0x70), lVar2 != 0) {
      FUN_0021165c(lVar2 + 0x18,param_1 + 0x10);
      *(undefined1 *)(param_1 + 0xe6) = 0;
      *(undefined4 *)(param_1 + 0xd4) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      if ((*(long *)(lVar2 + 0xa8) != 0) && ((*(byte *)(lVar2 + 0xe4) & 0xc) == 0)) {
        return;
      }
      iVar1 = FUN_00211710(lVar2 + 0x18);
      param_1 = lVar2;
      if (iVar1 == 0) {
        return;
      }
    }
  }
  return;
}


