/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d59d0; name: FUN_029d59d0
 */


void FUN_029d59d0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  char local_60 [8];
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  undefined2 local_38;
  byte local_36;
  
  *(undefined1 *)(param_3[2] + 0x5c) = 0;
  lVar3 = param_3[2];
  bVar2 = *(byte *)(lVar3 + 0x5c);
  if (bVar2 < *(byte *)(lVar3 + 0x5a)) {
    *(byte *)(lVar3 + 0x5c) = bVar2 + 1;
    lVar3 = *(long *)(lVar3 + (ulong)bVar2 * 8);
    if (lVar3 != 0) {
LAB_029d5a1c:
      if (*(char *)((long)param_3 + 0x22) == '\0') {
        lStack_50 = param_3[1];
LAB_029d5a68:
        local_58 = *param_3;
        lStack_40 = param_3[3];
        local_38 = (undefined2)param_3[4];
        local_36 = (*(byte *)(local_58 + 0x24) >> 3 ^ 0xff) & 1 | *(byte *)(param_3[2] + 0x5a) < 2;
        local_48 = lVar3;
        FUN_029d5038(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x340),local_60,&local_58);
        if (local_60[0] != '\0') {
          lVar4 = param_3[2];
          uVar7 = (ulong)*(byte *)(lVar4 + 0x5a);
          if (uVar7 != 0) {
            uVar8 = 0;
            do {
              if (*(long *)(lVar4 + uVar8 * 8) == lVar3) goto LAB_029d5af8;
              uVar8 = uVar8 + 1;
            } while (uVar7 != uVar8);
          }
        }
      }
      else {
        lStack_50 = param_3[1];
        if ((*(byte *)(lStack_50 + 0x188) & 7) == 0) {
          uVar7 = *(ulong *)(lStack_50 + 400);
          if ((uVar7 & 7) != 0) {
            uVar5 = (uint)uVar7;
            uVar6 = uVar5 & 7;
            if (uVar6 == 4) {
              uVar6 = uVar5 >> 0xe & 0x3f;
            }
            else if (uVar6 == 3) {
              uVar6 = uVar5 >> 8 & 0x3f;
            }
            else if (uVar6 == 2) {
              uVar6 = (uint)(uVar7 >> 0xe);
            }
            else {
              uVar6 = 0;
            }
            if ((uint)*(byte *)(lVar3 + 0x7d) == (uVar6 & 0xff)) goto LAB_029d5b3c;
          }
          goto LAB_029d5a68;
        }
      }
      goto LAB_029d5b3c;
    }
  }
  return;
LAB_029d5af8:
  for (; (int)uVar8 + 1U < (uint)uVar7; uVar8 = uVar8 + 1) {
    puVar1 = (undefined8 *)(lVar4 + uVar8 * 8);
    *puVar1 = puVar1[1];
    uVar7 = (ulong)*(byte *)(lVar4 + 0x5a);
  }
  *(char *)(lVar4 + 0x5a) = (char)uVar7 + -1;
  *(char *)(lVar4 + 0x5c) = *(char *)(lVar4 + 0x5c) + -1;
LAB_029d5b3c:
  lVar3 = param_3[2];
  bVar2 = *(byte *)(lVar3 + 0x5c);
  if (*(byte *)(lVar3 + 0x5a) <= bVar2) {
    return;
  }
  *(byte *)(lVar3 + 0x5c) = bVar2 + 1;
  lVar3 = *(long *)(lVar3 + (ulong)bVar2 * 8);
  if (lVar3 == 0) {
    return;
  }
  goto LAB_029d5a1c;
}


