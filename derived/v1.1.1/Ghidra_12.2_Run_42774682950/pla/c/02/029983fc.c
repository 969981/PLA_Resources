/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029983fc; name: FUN_029983fc
 */


void FUN_029983fc(long param_1,char *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  
  bVar3 = *(byte *)(param_1 + 0x5a);
  *(undefined1 *)(param_1 + 0x5c) = 0;
  if (bVar3 == 0) {
    return;
  }
  bVar4 = 0;
  bVar5 = bVar3;
  while( true ) {
    uVar6 = (ulong)bVar4;
    bVar4 = bVar4 + 1;
    *(byte *)(param_1 + 0x5c) = bVar4;
    lVar7 = *(long *)(param_1 + uVar6 * 8);
    if (lVar7 == 0) {
      return;
    }
    if (*(short *)(lVar7 + 0x74) == 0) break;
    cVar2 = *(char *)(lVar7 + 0x7d);
    if ((((*param_2 == '\0') || (param_2[2] != cVar2)) &&
        ((param_2[3] == '\0' || (param_2[5] != cVar2)))) &&
       ((((param_2[6] == '\0' || (param_2[8] != cVar2)) &&
         ((param_2[9] == '\0' || (param_2[0xb] != cVar2)))) &&
        (((param_2[0xc] == '\0' || (param_2[0xe] != cVar2)) &&
         ((param_2[0xf] == '\0' || (param_2[0x11] != cVar2)))))))) {
      if (bVar5 == 0) {
        return;
      }
      uVar6 = 0;
      do {
        if (*(long *)(param_1 + uVar6 * 8) == lVar7) {
          if ((int)uVar6 + 1U < (uint)bVar5) {
            do {
              puVar1 = (undefined8 *)(param_1 + uVar6 * 8);
              uVar6 = uVar6 + 1;
              *puVar1 = puVar1[1];
              bVar5 = *(byte *)(param_1 + 0x5a);
            } while ((int)uVar6 + 1U < (uint)bVar5);
            bVar4 = *(byte *)(param_1 + 0x5c);
          }
          goto LAB_02998554;
        }
        uVar6 = uVar6 + 1;
      } while (bVar5 != uVar6);
    }
    else {
      bVar5 = bVar3;
    }
LAB_02998418:
    if (bVar5 <= bVar4) {
      return;
    }
  }
  if (bVar3 == 0) {
    return;
  }
  uVar6 = 0;
LAB_02998504:
  if (*(long *)(param_1 + uVar6 * 8) != lVar7) goto code_r0x02998510;
  bVar5 = bVar3;
  if ((int)uVar6 + 1U < (uint)bVar3) {
    do {
      puVar1 = (undefined8 *)(param_1 + uVar6 * 8);
      uVar6 = uVar6 + 1;
      *puVar1 = puVar1[1];
      bVar5 = *(byte *)(param_1 + 0x5a);
    } while ((int)uVar6 + 1U < (uint)bVar5);
    bVar4 = *(byte *)(param_1 + 0x5c);
  }
LAB_02998554:
  bVar3 = bVar5 - 1;
  bVar4 = bVar4 - 1;
  *(byte *)(param_1 + 0x5a) = bVar3;
  *(byte *)(param_1 + 0x5c) = bVar4;
  bVar5 = bVar3;
  goto LAB_02998418;
code_r0x02998510:
  uVar6 = uVar6 + 1;
  bVar5 = bVar3;
  if (bVar3 == uVar6) goto LAB_02998418;
  goto LAB_02998504;
}


