/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020bc68; name: FUN_0020bc68
 */


undefined8 FUN_0020bc68(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x150);
  cVar1 = *(char *)(lVar4 + 0xc);
  if (cVar1 == '\0') {
    if (*(char *)(lVar4 + 0x71) == '\0') {
      *(undefined1 *)(lVar4 + 0x72) = 0;
      lVar4 = FUN_00205cf4(param_1,*(undefined4 *)(lVar4 + 8));
      iVar2 = FUN_0020bd28(param_1,lVar4);
      if (iVar2 == 0) {
        *(undefined8 *)(param_1 + 0x150) = 0;
      }
      else if ((lVar4 != 0) && (uVar3 = FUN_002119e8(lVar4), (int)uVar3 < -900)) {
        return uVar3;
      }
    }
  }
  else if ((cVar1 == '\x05' || cVar1 == '\x01') &&
          (iVar2 = FUN_0020c708(param_1 + 0x158), iVar2 != 0)) {
    *(undefined8 *)(param_1 + 0x160) = **(undefined8 **)(param_1 + 0x160);
    return 0;
  }
  FUN_00206380((undefined8 *)(param_1 + 0x150),param_1 + 0x890);
  return 0;
}


