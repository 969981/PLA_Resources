/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0130648c; name: FUN_0130648c
 */


void FUN_0130648c(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    lVar1 = param_1 + lVar4;
    lVar2 = *(long *)(lVar1 + 0x20);
    *(undefined1 *)(lVar1 + 0xb0) = 0;
    *(undefined8 *)(lVar1 + 0xd8) = 0;
    *(undefined8 *)(lVar1 + 0xe0) = 0;
    *(undefined8 *)(lVar1 + 200) = 0;
    *(undefined8 *)(lVar1 + 0xd0) = 0;
    *(undefined8 *)(lVar1 + 0xb8) = 0;
    *(undefined8 *)(lVar1 + 0xc0) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(undefined4 *)(lVar2 + 0x38) = 0;
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 0x10;
    lVar2 = *(long *)(lVar1 + 0x20);
    *(undefined8 *)(lVar2 + 0x3c) = 0;
    *(undefined4 *)(lVar2 + 0x44) = 0;
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 0x10;
    *(byte *)(*(long *)(lVar1 + 0x20) + 0x58) = *(byte *)(*(long *)(lVar1 + 0x20) + 0x58) & 0xfe;
    lVar2 = *(long *)(lVar1 + 0x28);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x30) = 0;
      *(undefined4 *)(lVar2 + 0x38) = 0;
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 0x10;
      lVar2 = *(long *)(lVar1 + 0x28);
      *(undefined4 *)(lVar2 + 0x44) = 0;
      *(undefined8 *)(lVar2 + 0x3c) = 0;
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 0x10;
      *(byte *)(*(long *)(lVar1 + 0x28) + 0x58) = *(byte *)(*(long *)(lVar1 + 0x28) + 0x58) & 0xfe;
      pcVar3 = *(code **)(lVar1 + 0x38);
      *(undefined8 *)(lVar1 + 0x28) = 0;
      if (pcVar3 != (code *)0x0) {
        *(undefined8 *)(lVar1 + 0x40) = 0;
        *(undefined8 *)(lVar1 + 0x48) = 0;
        *(undefined8 *)(lVar1 + 0x30) = 0;
        *(undefined8 *)(lVar1 + 0x38) = 0;
        (*pcVar3)(lVar1 + 0x50);
      }
    }
    lVar4 = lVar4 + 0xd0;
  } while (lVar4 != 0x5140);
  *(byte *)(*(long *)(param_1 + 0x5160) + 0x58) =
       *(byte *)(*(long *)(param_1 + 0x5160) + 0x58) & 0xfe;
  *(byte *)(*(long *)(param_1 + 0x5168) + 0x58) =
       *(byte *)(*(long *)(param_1 + 0x5168) + 0x58) & 0xfe;
  *(byte *)(*(long *)(param_1 + 0x5170) + 0x58) =
       *(byte *)(*(long *)(param_1 + 0x5170) + 0x58) & 0xfe;
  *(undefined4 *)(param_1 + 0x5300) = 0;
  lVar4 = *(long *)(param_1 + 0x5308);
  if (lVar4 != 0) {
    *(undefined1 *)(param_1 + 0x5390) = 0;
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
  }
  return;
}


