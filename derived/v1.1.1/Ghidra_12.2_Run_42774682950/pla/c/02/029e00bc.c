/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e00bc; name: FUN_029e00bc
 */


void FUN_029e00bc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  *(undefined1 *)(param_3[2] + 0x5c) = 0;
  lVar4 = param_3[2];
  bVar2 = *(byte *)(lVar4 + 0x5c);
  if (bVar2 < *(byte *)(lVar4 + 0x5a)) {
    *(byte *)(lVar4 + 0x5c) = bVar2 + 1;
    lVar4 = *(long *)(lVar4 + (ulong)bVar2 * 8);
    if (lVar4 != 0) {
LAB_029e0104:
      uVar3 = FUN_0299087c(*(undefined8 *)(param_1 + 0x38),*param_3,lVar4,param_3[1]);
      if ((uVar3 & 1) != 0) {
        lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
        *(undefined1 *)(lVar5 + (ulong)*(byte *)(lVar5 + 0x1c8) * 0x40 + 0x21) = 1;
        FUN_02990cc4(*(undefined8 *)(param_1 + 0x38),*param_3,lVar4);
        lVar5 = param_3[2];
        uVar3 = (ulong)*(byte *)(lVar5 + 0x5a);
        if (uVar3 != 0) {
          uVar6 = 0;
          do {
            if (*(long *)(lVar5 + uVar6 * 8) == lVar4) goto LAB_029e017c;
            uVar6 = uVar6 + 1;
          } while (uVar3 != uVar6);
        }
      }
      goto LAB_029e019c;
    }
  }
  return;
LAB_029e017c:
  for (; (int)uVar6 + 1U < (uint)uVar3; uVar6 = uVar6 + 1) {
    puVar1 = (undefined8 *)(lVar5 + uVar6 * 8);
    *puVar1 = puVar1[1];
    uVar3 = (ulong)*(byte *)(lVar5 + 0x5a);
  }
  *(char *)(lVar5 + 0x5a) = (char)uVar3 + -1;
  *(char *)(lVar5 + 0x5c) = *(char *)(lVar5 + 0x5c) + -1;
LAB_029e019c:
  lVar4 = param_3[2];
  bVar2 = *(byte *)(lVar4 + 0x5c);
  if (*(byte *)(lVar4 + 0x5a) <= bVar2) {
    return;
  }
  *(byte *)(lVar4 + 0x5c) = bVar2 + 1;
  lVar4 = *(long *)(lVar4 + (ulong)bVar2 * 8);
  if (lVar4 == 0) {
    return;
  }
  goto LAB_029e0104;
}


