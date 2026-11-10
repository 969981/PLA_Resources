/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00941690; name: FUN_00941690
 */


void FUN_00941690(long param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_160 [8];
  long local_158 [30];
  uint local_68;
  
  FUN_00934650(auStack_160,*(undefined8 *)(*(long *)(param_1 + 8) + 0xd0));
  if (local_68 != 0) {
    plVar7 = local_158;
    lVar8 = (ulong)local_68 << 3;
    do {
      lVar6 = *plVar7;
      uVar5 = FUN_02c6d8ec(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x70) + 0x60) + 0x98));
      if ((uVar5 & 1) == 0) {
        bVar3 = *(byte *)(*(long *)(lVar6 + 0x70) + 0x7d);
        lVar1 = 3;
        if (0x17 < bVar3) {
          lVar1 = (ulong)(bVar3 < 0x1e) << 2;
        }
        uVar4 = *(uint *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0xd0) + 0x68) +
                                   0x98) + 0x110);
        lVar2 = 1;
        if (0x11 < bVar3) {
          lVar2 = lVar1;
        }
        lVar1 = 2;
        if (0xb < bVar3) {
          lVar1 = lVar2;
        }
        lVar2 = 0;
        if (5 < bVar3) {
          lVar2 = lVar1;
        }
        if (((2 < uVar4) || ((&PTR_DAT_041c2858)[(int)uVar4][lVar2] != '\0')) &&
           (*(short *)(*(long *)(lVar6 + 0x70) + 0x74) != 0)) goto LAB_00941778;
      }
      else {
LAB_00941778:
        FUN_00941bb4(param_1,lVar6);
      }
      plVar7 = plVar7 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  return;
}


