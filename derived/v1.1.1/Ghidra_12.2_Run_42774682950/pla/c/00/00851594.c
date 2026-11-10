/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00851594; name: FUN_00851594
 */


void FUN_00851594(void *param_1,long param_2,ulong param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  memset(param_1,0,4);
  lVar4 = *(long *)(param_2 + 0x20);
  lVar1 = param_2 + 0x18;
  if (lVar4 != lVar1) {
    lVar5 = *(long *)(lVar4 + 0x10);
    bVar2 = *(byte *)(lVar5 + 0x28);
    if (bVar2 < 0x18) goto LAB_008515f8;
LAB_008515dc:
    lVar4 = *(long *)(lVar4 + 8);
    if (lVar4 != lVar1) {
      while( true ) {
        lVar5 = *(long *)(lVar4 + 0x10);
        bVar2 = *(byte *)(lVar5 + 0x28);
        if (0x17 < bVar2) break;
LAB_008515f8:
        if (*(int *)(lVar5 + 0x3c) != 2) break;
        lVar5 = (ulong)(bVar2 >> 5) * 4;
        *(uint *)((long)param_1 + lVar5) =
             *(uint *)((long)param_1 + lVar5) | 1 << (ulong)(bVar2 & 0x1f);
        lVar4 = *(long *)(lVar4 + 8);
        if (lVar4 == lVar1) goto LAB_00851628;
      }
      goto LAB_008515dc;
    }
  }
LAB_00851628:
  if ((((param_3 & 1) == 0) && (*(long *)(param_2 + 0x98) != 0)) &&
     (bVar2 = *(byte *)(*(long *)(param_2 + 0x98) + 0x28), bVar2 < 0x18)) {
    uVar3 = (ulong)(bVar2 >> 3) & 0x1c;
    *(uint *)((long)param_1 + uVar3) =
         *(uint *)((long)param_1 + uVar3) & (1 << (ulong)(bVar2 & 0x1f) ^ 0xffffffffU);
  }
  return;
}


