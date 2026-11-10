/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009291e8; name: FUN_009291e8
 */


void FUN_009291e8(long param_1,ulong param_2)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_138 [8];
  long alStack_130 [30];
  uint local_40;
  undefined8 local_38;
  
  if (((param_2 & 1) == 0) && (cVar1 = *(char *)(param_1 + 0x71), cVar1 != '\x1f')) {
    local_38 = 0x502000101;
    FUN_009346d8(auStack_138,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0),&local_38);
    if (local_40 != 0) {
      lVar5 = (ulong)local_40 << 3;
      plVar4 = alStack_130;
      do {
        if (*(char *)(*(long *)(*plVar4 + 0x70) + 0x7d) == cVar1) {
          return;
        }
        lVar5 = lVar5 + -8;
        plVar4 = plVar4 + 1;
      } while (lVar5 != 0);
    }
  }
  uVar2 = FUN_009287cc(param_1,1);
  if ((uVar2 & 0xff) != 0x1f) {
    FUN_009289bc(param_1,uVar2);
    return;
  }
  uVar3 = FUN_00928784(param_1);
  if ((uVar3 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x71) = 0x1f;
  }
  return;
}


