/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029db68c; name: FUN_029db68c
 */


void FUN_029db68c(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  
  bVar2 = *(byte *)(param_2 + 0x7d);
  if (bVar2 < 6) {
    lVar4 = 0;
  }
  else if (bVar2 < 0xc) {
    lVar4 = 2;
  }
  else if (bVar2 < 0x12) {
    lVar4 = 1;
  }
  else if (bVar2 < 0x18) {
    lVar4 = 3;
  }
  else {
    lVar4 = (ulong)(bVar2 < 0x1e) << 2;
  }
  lVar3 = *(long *)(param_1 + 8);
  iVar1 = *(int *)(lVar3 + 0x110);
  if (iVar1 == 2) {
LAB_029db6cc:
    puVar5 = &DAT_03a7ebe0;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) goto LAB_029db714;
      goto LAB_029db6cc;
    }
    puVar5 = &DAT_03a7ebe5;
  }
  if (*(byte *)(lVar3 + 0x130) < 5) {
    if (puVar5[lVar4] == puVar5[*(byte *)(lVar3 + 0x130)]) goto LAB_029db714;
  }
  else if (puVar5[lVar4] == '\x02') {
LAB_029db714:
    FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9e,0x238,0,0xffff0000);
    return;
  }
  if (**(int **)(lVar3 + 0x58) == 0) {
    FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9e,0x23b,0,bVar2,0xffff0000);
    return;
  }
  return;
}


