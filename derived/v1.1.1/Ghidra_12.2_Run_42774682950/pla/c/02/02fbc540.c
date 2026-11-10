/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fbc540; name: FUN_02fbc540
 */


void FUN_02fbc540(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  char cVar6;
  
  *(undefined8 *)(param_1 + 0x50) = param_2;
  FUN_032d645c(param_2);
  lVar1 = 0;
  if (param_3 != 0) {
    lVar1 = param_3 - (param_1 + 0x58);
  }
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = lVar1 + param_1 + 0x58;
  }
  *(long *)(param_1 + 0x58) = lVar1;
  FUN_032d645c(lVar2);
  *(undefined1 *)(param_1 + 0x1c) = 0;
  iVar3 = (**(code **)(**(long **)(param_1 + 0x50) + 0x60))();
  if (0 < iVar3) {
    cVar6 = *(char *)(param_1 + 0x1c);
    uVar5 = iVar3 << 1;
    do {
      cVar6 = cVar6 + '\x01';
      uVar5 = uVar5 >> 1;
    } while (uVar5 != 0);
    *(char *)(param_1 + 0x1c) = cVar6;
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x50) + 0x80))();
  if ((uVar4 & 1) != 0) {
    *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) | 0x8000;
  }
  return;
}


