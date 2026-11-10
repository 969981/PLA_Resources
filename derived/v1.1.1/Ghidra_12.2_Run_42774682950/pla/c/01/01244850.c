/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01244850; name: FUN_01244850
 */


void FUN_01244850(long param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x70);
  if (lVar7 != 0) {
    if (*(long **)(lVar7 + 0x78) != (long *)0x0) {
      (**(code **)(**(long **)(lVar7 + 0x78) + 0x40))();
    }
    FUN_0134fb40(lVar7);
  }
  lVar7 = *(long *)(param_1 + 0x78);
  if (lVar7 != 0) {
    if (*(long **)(lVar7 + 0x78) != (long *)0x0) {
      (**(code **)(**(long **)(lVar7 + 0x78) + 0x40))();
    }
    FUN_0134fb40(lVar7);
  }
  if (*(char *)(param_1 + 0x1b1) != '\0') {
    plVar6 = (long *)(param_1 + (ulong)*(byte *)(param_1 + 0x1b0) * 8 + 0x70);
    lVar7 = *plVar6;
    bVar4 = *(byte *)(lVar7 + 0x188);
    if ((((2 < bVar4) && (lVar7 = *(long *)(lVar7 + 0x90), lVar7 != 0)) &&
        (*(int *)(lVar7 + 0x27b8) == 1)) &&
       (((bVar4 & 0xfe) != 4 && (*(long *)(lVar7 + 0x27c8) == *(long *)(lVar7 + 0x27c0))))) {
      *(bool *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) == 0;
      lVar7 = *(long *)(*plVar6 + 0x80);
      if (lVar7 != 0) {
        uVar2 = *(uint *)(lVar7 + 0x214);
        uVar1 = uVar2 & 0xffffffef;
        bVar5 = (uVar2 != 0) != ((uVar2 & 0xffffffef) != 0);
        if (((uVar1 == uVar2 || uVar1 != 0) || (*(int *)(lVar7 + 0x21c) == 0)) ||
           (*(int *)(lVar7 + 0x224) == 0)) {
          if (bVar5) goto LAB_01244a00;
        }
        else if (bVar5 || *(int *)(lVar7 + 0x21c) == 1) {
LAB_01244a00:
          FUN_01bdbf3c(lVar7,uVar1);
          *(uint *)(lVar7 + 0x214) = uVar1;
          goto LAB_0124496c;
        }
        *(uint *)(lVar7 + 0x214) = uVar1;
        if ((*(uint *)(lVar7 + 0x210) != uVar1) && (*(int *)(lVar7 + 0x21c) == 0)) {
          *(uint *)(lVar7 + 0x210) = uVar1;
        }
      }
LAB_0124496c:
      lVar7 = *(long *)(*(long *)(param_1 + (ulong)*(byte *)(param_1 + 0x1b0) * 8 + 0x70) + 0x80);
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar7 + 0x214);
        uVar2 = uVar1 | 0x10;
        if (((uVar2 == uVar1) || (*(int *)(lVar7 + 0x21c) == 0)) || (*(int *)(lVar7 + 0x224) == 0))
        {
          if (uVar1 == 0) goto LAB_01244a30;
        }
        else if ((uVar1 == 0) || (*(int *)(lVar7 + 0x21c) == 2)) {
LAB_01244a30:
          FUN_01bdbf3c(lVar7,uVar2);
          *(uint *)(lVar7 + 0x214) = uVar2;
          goto LAB_012449a4;
        }
        *(uint *)(lVar7 + 0x214) = uVar2;
        if ((*(uint *)(lVar7 + 0x210) != uVar2) && (*(int *)(lVar7 + 0x21c) == 0)) {
          *(uint *)(lVar7 + 0x210) = uVar2;
        }
      }
LAB_012449a4:
      *(undefined1 *)(param_1 + 0x1b1) = 0;
      cVar3 = *(char *)(param_1 + 0x1a9);
      goto joined_r0x012449ac;
    }
  }
  cVar3 = *(char *)(param_1 + 0x1a9);
joined_r0x012449ac:
  if (cVar3 == '\0') {
    return;
  }
  FUN_01244b24(param_1);
  return;
}


