/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d60a8; name: FUN_029d60a8
 */


void FUN_029d60a8(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = (ulong)*(byte *)((long)param_4 + 0x5a);
  *(undefined1 *)((long)param_4 + 0x5c) = 0;
  if (*(byte *)((long)param_4 + 0x5a) != 0) {
    lVar4 = *param_4;
    *(undefined1 *)((long)param_4 + 0x5c) = 1;
    if (lVar4 != 0) {
LAB_029d60f0:
      uVar3 = FUN_029d61b0(param_1,param_2,lVar4,param_3);
      if ((uVar3 & 1) != 0) {
        FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xa8,
                     *(undefined1 *)(param_2 + 0x7d),*(undefined1 *)(lVar4 + 0x7d));
        uVar5 = (ulong)*(byte *)((long)param_4 + 0x5a);
        if (uVar5 == 0) {
          return;
        }
        uVar3 = 0;
        do {
          if (param_4[uVar3] == lVar4) goto LAB_029d615c;
          uVar3 = uVar3 + 1;
        } while (uVar5 != uVar3);
      }
      goto LAB_029d617c;
    }
  }
  return;
LAB_029d615c:
  for (; (int)uVar3 + 1U < (uint)uVar5; uVar3 = uVar3 + 1) {
    param_4[uVar3] = (param_4 + uVar3)[1];
    uVar5 = (ulong)*(byte *)((long)param_4 + 0x5a);
  }
  uVar2 = (uint)uVar5 - 1;
  uVar5 = (ulong)uVar2;
  *(char *)((long)param_4 + 0x5a) = (char)uVar2;
  *(char *)((long)param_4 + 0x5c) = *(char *)((long)param_4 + 0x5c) + -1;
LAB_029d617c:
  bVar1 = *(byte *)((long)param_4 + 0x5c);
  if (((uint)uVar5 & 0xff) <= (uint)bVar1) {
    return;
  }
  *(byte *)((long)param_4 + 0x5c) = bVar1 + 1;
  lVar4 = param_4[bVar1];
  if (lVar4 == 0) {
    return;
  }
  goto LAB_029d60f0;
}


