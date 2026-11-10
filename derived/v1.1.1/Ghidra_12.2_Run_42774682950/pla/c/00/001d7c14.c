/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d7c14; name: FUN_001d7c14
 */


bool FUN_001d7c14(long param_1,long *param_2,uint param_3)

{
  char cVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  char cVar8;
  
  plVar6 = (long *)(param_1 + 0x50);
  lVar2 = 0;
  if (*param_2 != 0) {
    lVar2 = *param_2 + (long)param_2;
  }
  lVar5 = (long)(int)(*(int *)(param_1 + 0x40 +
                              (ulong)(param_3 >> 8) * 0x60 + *(long *)(param_1 + 0x40) + 0x50) +
                     (param_3 >> 1 & 0x7f)) * 4 + *plVar6;
  cVar3 = *(char *)((long)plVar6 + lVar5 + 2);
  cVar4 = *(char *)((long)plVar6 + lVar5 + 3);
  cVar8 = cVar3;
  if (cVar3 != '\x03') {
    cVar8 = '\0';
  }
  cVar1 = cVar3;
  if (cVar3 != '\x04') {
    cVar1 = cVar8;
  }
  cVar8 = '\x01';
  if (cVar3 != cVar4) {
    cVar8 = '\x02';
  }
  uVar7 = 1 << (ulong)(param_3 & 1);
  if (*(char *)((long)plVar6 + lVar5 + 1) != cVar4) {
    cVar1 = cVar8;
  }
  if (cVar1 != '\x02') {
    uVar7 = 3;
  }
  return (*(uint *)(lVar2 + (ulong)((param_3 >> 8) << 3) * 4 + (ulong)(param_3 >> 5 & 7) * 4) >>
          (ulong)((param_3 >> 1 & 0xf) << 1) & 3 & uVar7) != 0;
}


