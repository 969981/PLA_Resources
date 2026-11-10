/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d5cc4; name: FUN_029d5cc4
 */


void FUN_029d5cc4(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*(char *)(param_3[3] + 0x5a) != '\0') {
    *(undefined1 *)(param_3[3] + 0x5c) = 0;
LAB_029d5cec:
    while( true ) {
      lVar4 = param_3[3];
      bVar2 = *(byte *)(lVar4 + 0x5c);
      if (*(byte *)(lVar4 + 0x5a) <= bVar2) break;
      *(byte *)(lVar4 + 0x5c) = bVar2 + 1;
      lVar4 = *(long *)(lVar4 + (ulong)bVar2 * 8);
      if (lVar4 == 0) break;
      if (((ulong)*(byte *)(lVar4 + 0x7d) < 0x1e) &&
         (*(int *)(param_3[2] + (ulong)*(byte *)(lVar4 + 0x7d) * 8) == 0)) {
        lVar5 = param_3[3];
        bVar2 = *(byte *)(lVar5 + 0x5a);
        uVar6 = (ulong)bVar2;
        bVar3 = *(byte *)(param_3[1] + 0x24);
        if (bVar2 != 0) {
          uVar7 = 0;
          do {
            if (*(long *)(lVar5 + uVar7 * 8) == lVar4) goto LAB_029d5db8;
            uVar7 = uVar7 + 1;
          } while (uVar6 != uVar7);
        }
        goto joined_r0x029d5dd8;
      }
    }
    if ((param_3[4] != 0) &&
       (((lVar4 = param_3[3], *(char *)(lVar4 + 0x5b) != '\0' || (*(char *)(lVar4 + 0x5d) != '\0'))
        && (*(char *)(lVar4 + 0x5a) == '\0')))) {
      uVar6 = (ulong)*(byte *)(*param_3 + 0x7d);
      lVar4 = *(long *)(param_1 + 0x20);
      if (uVar6 < 0x1e) {
        lVar5 = *(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0x10) + 0x128) + uVar6 * 4;
        *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | 8;
      }
      FUN_02a3e6b8(*(undefined8 *)(lVar4 + 0x18),0x4f,uVar6,3);
      return;
    }
  }
  return;
LAB_029d5db8:
  for (; (int)uVar7 + 1U < (uint)uVar6; uVar7 = uVar7 + 1) {
    puVar1 = (undefined8 *)(lVar5 + uVar7 * 8);
    *puVar1 = puVar1[1];
    uVar6 = (ulong)*(byte *)(lVar5 + 0x5a);
  }
  *(char *)(lVar5 + 0x5a) = (char)uVar6 + -1;
  *(char *)(lVar5 + 0x5c) = *(char *)(lVar5 + 0x5c) + -1;
joined_r0x029d5dd8:
  if (bVar2 < 2 || (bVar3 & 8) == 0) {
    FUN_029d5e60(param_1,*param_3,lVar4,param_3[2]);
  }
  FUN_029633d8(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x108),*(undefined8 *)(param_1 + 8),
               *param_3,lVar4,0);
  goto LAB_029d5cec;
}


