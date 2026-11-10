/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001679a0; name: FUN_001679a0
 */


void FUN_001679a0(long *param_1,int *param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  
  if (*param_2 == 0xe) {
    lVar5 = (long)param_2[2] * 4;
    lVar4 = *(long *)(*param_1 + 0x38);
    uVar1 = (*(uint *)(lVar4 + lVar5) & 0x7fffff | param_3 << 0x17) + 0x800000;
    *(uint *)(lVar4 + lVar5) = uVar1;
    *(uint *)(lVar4 + lVar5) =
         uVar1 & 0xffffc000 | uVar1 & 0x3f | (uint)*(byte *)((long)param_1 + 0x3c) << 6;
    bVar2 = *(byte *)((long)param_1 + 0x3c);
    cVar3 = bVar2 + 1;
    if (*(byte *)(*param_1 + 0xc) <= bVar2) {
      if (0xfd < bVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0016a180(param_1[2],"function or expression needs too many registers");
      }
      *(char *)(*param_1 + 0xc) = cVar3;
      cVar3 = *(char *)((long)param_1 + 0x3c) + '\x01';
    }
    *(char *)((long)param_1 + 0x3c) = cVar3;
  }
  else if (*param_2 == 0xd) {
    uVar1 = *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[2] * 4);
    *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[2] * 4) =
         uVar1 & 0xff800000 | uVar1 & 0x3fff | (param_3 * 0x4000 + 0x4000U >> 0xe & 0x1ff) << 0xe;
    return;
  }
  return;
}


