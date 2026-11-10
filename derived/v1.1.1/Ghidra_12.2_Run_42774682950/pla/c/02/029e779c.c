/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e779c; name: FUN_029e779c
 */


void FUN_029e779c(long param_1,undefined1 *param_2,byte *param_3)

{
  byte bVar1;
  char *pcVar2;
  long lVar3;
  
  *param_2 = 0;
  pcVar2 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  bVar1 = *param_3;
  if ((((*pcVar2 != '\0') && (pcVar2[2] == bVar1)) || ((pcVar2[3] != '\0' && (pcVar2[5] == bVar1))))
     || ((((pcVar2[6] != '\0' && (pcVar2[8] == bVar1)) ||
          ((pcVar2[9] != '\0' && (pcVar2[0xb] == bVar1)))) ||
         (((pcVar2[0xc] != '\0' && (pcVar2[0xe] == bVar1)) ||
          ((pcVar2[0xf] != '\0' && (pcVar2[0x11] == bVar1)))))))) {
    if (param_3[0xc] != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      *(undefined2 *)
       (*(long *)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0x10) + 8) + (ulong)bVar1 * 8 +
                 0x120) + 0x2d2) = *(undefined2 *)(param_3 + 2);
      FUN_02a3e6b8(*(undefined8 *)(lVar3 + 0x18),0x17,(ulong)bVar1,8);
    }
    if (param_3[0xd] != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      bVar1 = *param_3;
      *(undefined2 *)
       (*(long *)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0x10) + 8) + (ulong)bVar1 * 8 +
                 0x120) + 0x2d4) = *(undefined2 *)(param_3 + 4);
      FUN_02a3e6b8(*(undefined8 *)(lVar3 + 0x18),0x17,(ulong)bVar1,9);
    }
    if (param_3[0xe] != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      bVar1 = *param_3;
      *(undefined2 *)
       (*(long *)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0x10) + 8) + (ulong)bVar1 * 8 +
                 0x120) + 0x2d2) = *(undefined2 *)(param_3 + 6);
      FUN_02a3e6b8(*(undefined8 *)(lVar3 + 0x18),0x17,(ulong)bVar1,10);
    }
    if (param_3[0xf] != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      bVar1 = *param_3;
      *(undefined2 *)
       (*(long *)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0x10) + 8) + (ulong)bVar1 * 8 +
                 0x120) + 0x2d4) = *(undefined2 *)(param_3 + 8);
      FUN_02a3e6b8(*(undefined8 *)(lVar3 + 0x18),0x17,(ulong)bVar1,0xb);
    }
    if (param_3[0x10] != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      bVar1 = *param_3;
      *(undefined2 *)
       (*(long *)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0x10) + 8) + (ulong)bVar1 * 8 +
                 0x120) + 0x2da) = *(undefined2 *)(param_3 + 10);
      FUN_02a3e6b8(*(undefined8 *)(lVar3 + 0x18),0x17,(ulong)bVar1,0xc);
    }
    FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),param_3 + 0x14);
    *param_2 = 1;
  }
  return;
}


