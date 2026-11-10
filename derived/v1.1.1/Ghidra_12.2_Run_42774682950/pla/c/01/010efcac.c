/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010efcac; name: FUN_010efcac
 */


undefined4 FUN_010efcac(long param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  
  puVar1 = (undefined1 *)*param_2;
  if (puVar1 == &DAT_cbf29ce484222645) {
    return 0;
  }
  if (*(undefined1 **)(param_1 + 0x68) == puVar1) {
    lVar2 = 0;
  }
  else if (*(undefined1 **)(param_1 + 0x78) == puVar1) {
    lVar2 = 1;
  }
  else if (*(undefined1 **)(param_1 + 0x88) == puVar1) {
    lVar2 = 2;
  }
  else if (*(undefined1 **)(param_1 + 0x98) == puVar1) {
    lVar2 = 3;
  }
  else if (*(undefined1 **)(param_1 + 0xa8) == puVar1) {
    lVar2 = 4;
  }
  else if (*(undefined1 **)(param_1 + 0xb8) == puVar1) {
    lVar2 = 5;
  }
  else if (*(undefined1 **)(param_1 + 200) == puVar1) {
    lVar2 = 6;
  }
  else if (*(undefined1 **)(param_1 + 0xd8) == puVar1) {
    lVar2 = 7;
  }
  else if (*(undefined1 **)(param_1 + 0xe8) == puVar1) {
    lVar2 = 8;
  }
  else if (*(undefined1 **)(param_1 + 0xf8) == puVar1) {
    lVar2 = 9;
  }
  else if (*(undefined1 **)(param_1 + 0x108) == puVar1) {
    lVar2 = 10;
  }
  else if (*(undefined1 **)(param_1 + 0x118) == puVar1) {
    lVar2 = 0xb;
  }
  else if (*(undefined1 **)(param_1 + 0x128) == puVar1) {
    lVar2 = 0xc;
  }
  else if (*(undefined1 **)(param_1 + 0x138) == puVar1) {
    lVar2 = 0xd;
  }
  else if (*(undefined1 **)(param_1 + 0x148) == puVar1) {
    lVar2 = 0xe;
  }
  else if (*(undefined1 **)(param_1 + 0x158) == puVar1) {
    lVar2 = 0xf;
  }
  else {
    if (*(undefined1 **)(param_1 + 0x168) != puVar1) {
      return 0;
    }
    lVar2 = 0x10;
  }
  return *(undefined4 *)(param_1 + lVar2 * 0x10 + 0x70);
}


