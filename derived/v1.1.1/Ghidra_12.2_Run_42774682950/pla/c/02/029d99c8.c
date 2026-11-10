/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d99c8; name: FUN_029d99c8
 */


void FUN_029d99c8(long param_1)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  
  lVar3 = *(long *)(param_1 + 0x10);
  pcVar5 = *(char **)(lVar3 + 200);
  if (pcVar5[0x14e] != '\0') {
    uVar4 = *(undefined8 *)(lVar3 + 0xa8);
    uVar6 = 0;
    do {
      bVar1 = pcVar5[uVar6 + 0x130];
      if (bVar1 < 6) {
        lVar3 = 0;
      }
      else if (bVar1 < 0xc) {
        lVar3 = 2;
      }
      else if (bVar1 < 0x12) {
        lVar3 = 1;
      }
      else if (bVar1 < 0x18) {
        lVar3 = 3;
      }
      else {
        lVar3 = (ulong)(bVar1 < 0x1e) << 2;
      }
      cVar2 = FUN_02954554(uVar4,lVar3);
      if (cVar2 != '\0') {
        lVar3 = *(long *)(param_1 + 0x10);
        goto LAB_029d9a88;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (byte)pcVar5[0x14e]);
    lVar3 = *(long *)(param_1 + 0x10);
    pcVar5 = *(char **)(lVar3 + 200);
  }
  if (*pcVar5 != '\0') {
LAB_029d9a88:
    if (*(int *)(*(long *)(lVar3 + 0x28) + 0x1cc) == 0) {
      FUN_02a3c458(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      FUN_02a3c5d0();
    }
    FUN_0299dd64(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xa8));
    **(undefined1 **)(*(long *)(param_1 + 0x40) + 0x28) = 2;
  }
  return;
}


