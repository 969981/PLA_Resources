/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00941614; name: FUN_00941614
 */


void FUN_00941614(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_120 [8];
  long alStack_118 [30];
  uint local_28;
  
  FUN_00934650(auStack_120,*(undefined8 *)(*(long *)(param_1 + 8) + 0xd0));
  if (local_28 != 0) {
    lVar2 = (ulong)local_28 << 3;
    plVar1 = alStack_118;
    do {
      lVar2 = lVar2 + -8;
      lVar3 = *(long *)(*plVar1 + 0x70);
      *(undefined1 *)(lVar3 + 0x239) = 0;
      *(undefined2 *)(lVar3 + 0x23a) = 0;
      *(undefined8 *)(lVar3 + 0x98) = 0xf8;
      *(undefined8 *)(lVar3 + 0xa0) = 0xf8;
      *(undefined8 *)(lVar3 + 0xe8) = 0xf8;
      *(undefined1 *)(lVar3 + 0x243) = 0;
      *(undefined4 *)(lVar3 + 0x23c) = 0;
      *(undefined8 *)(lVar3 + 200) = 0xf8;
      *(undefined8 *)(lVar3 + 0xa8) = 0xf8;
      *(undefined8 *)(lVar3 + 0xb0) = 0xf8;
      *(undefined8 *)(lVar3 + 0xb8) = 0xf8;
      *(undefined8 *)(lVar3 + 0xc0) = 0xf8;
      plVar1 = plVar1 + 1;
    } while (lVar2 != 0);
  }
  return;
}


