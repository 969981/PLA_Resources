/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02941608; name: FUN_02941608
 */


undefined8 FUN_02941608(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  char cVar8;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x18c);
  if (*(uint *)(param_1 + 0x18c) != 0) {
    bVar1 = *(byte *)(param_4 + 0x7d);
    lVar5 = (ulong)(5 < bVar1) << 1;
    if (0xb < bVar1) {
      lVar5 = 1;
    }
    uVar3 = *(uint *)(param_2 + 0x110);
    lVar6 = (ulong)(bVar1 < 0x1e) << 2;
    if (bVar1 < 0x18) {
      lVar6 = 3;
    }
    if (0x11 < bVar1) {
      lVar5 = lVar6;
    }
    pbVar7 = (byte *)(param_1 + 0xd8);
    do {
      bVar2 = *pbVar7;
      if ((bVar1 == 0x1f) || (bVar2 == 0x1f)) {
LAB_029416e8:
        lVar6 = *(long *)(param_3 + (ulong)bVar2 * 8 + 0x120);
        if ((((*(int *)(lVar6 + 0x300) == param_5) || (*(int *)(lVar6 + 0x31c) == param_5)) ||
            (*(int *)(lVar6 + 0x338) == param_5)) || (*(int *)(lVar6 + 0x354) == param_5)) {
          return 1;
        }
      }
      else if (uVar3 < 3) {
        cVar8 = (&PTR_DAT_04276660)[(int)uVar3][lVar5];
        if (5 < bVar2) goto LAB_029416c8;
LAB_0294169c:
        lVar6 = 0;
joined_r0x02941754:
        if (2 < uVar3) goto LAB_029416dc;
LAB_029416a8:
        if (cVar8 != (&PTR_DAT_04276648)[(int)uVar3][lVar6]) goto LAB_029416e8;
      }
      else {
        cVar8 = '\x02';
        if (bVar2 < 6) goto LAB_0294169c;
LAB_029416c8:
        if (bVar2 < 0xc) {
          lVar6 = 2;
          goto joined_r0x02941754;
        }
        if (bVar2 < 0x12) {
          lVar6 = 1;
          goto joined_r0x02941754;
        }
        if (bVar2 < 0x18) {
          lVar6 = 3;
          goto joined_r0x02941754;
        }
        lVar6 = (ulong)(bVar2 < 0x1e) << 2;
        if (uVar3 < 3) goto LAB_029416a8;
LAB_029416dc:
        if (cVar8 != '\x02') goto LAB_029416e8;
      }
      uVar4 = uVar4 - 1;
      pbVar7 = pbVar7 + 4;
    } while (uVar4 != 0);
  }
  return 0;
}


