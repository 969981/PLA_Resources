/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02da8f58; name: FUN_02da8f58
 */


void FUN_02da8f58(long param_1)

{
  void *pvVar1;
  ulong uVar2;
  char cVar3;
  size_t sVar4;
  void *pvVar5;
  void *pvVar6;
  
  uVar2 = *(ulong *)(param_1 + 0x98) & 3;
  if ((uVar2 == 0) && (*(long *)(param_1 + 0xd8) != *(long *)(param_1 + 0xe0))) {
    *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xd8);
  }
  pvVar6 = *(void **)(param_1 + 0xa0);
  pvVar5 = *(void **)(param_1 + 0xa8);
  if (pvVar6 != pvVar5) {
    if (uVar2 == 0) {
      do {
        pvVar1 = (void *)((long)pvVar6 + 0x18);
        cVar3 = *(char *)((long)pvVar6 + 0x10);
        while (cVar3 == '\0') {
          sVar4 = (long)pvVar5 - (long)pvVar1;
          if (sVar4 == 0) goto LAB_02da905c;
          memmove(pvVar6,pvVar1,sVar4);
          pvVar5 = (void *)((long)pvVar6 + ((long)sVar4 >> 3) * 8);
          *(void **)(param_1 + 0xa8) = pvVar5;
          cVar3 = *(char *)((long)pvVar6 + 0x10);
        }
        pvVar6 = pvVar1;
      } while (pvVar1 != pvVar5);
    }
    else {
      do {
        pvVar1 = (void *)((long)pvVar6 + 0x18);
        cVar3 = *(char *)((long)pvVar6 + 0x10);
        while ((cVar3 == '\0' && ((*(byte *)((long)pvVar6 + 8) & 3) == 0))) {
          sVar4 = (long)pvVar5 - (long)pvVar1;
          if (sVar4 == 0) goto LAB_02da905c;
          memmove(pvVar6,pvVar1,sVar4);
          pvVar5 = (void *)((long)pvVar6 + ((long)sVar4 >> 3) * 8);
          *(void **)(param_1 + 0xa8) = pvVar5;
          cVar3 = *(char *)((long)pvVar6 + 0x10);
        }
        pvVar6 = pvVar1;
      } while (pvVar1 != pvVar5);
    }
  }
LAB_02da9060:
  pvVar6 = *(void **)(param_1 + 0xd8);
  pvVar5 = *(void **)(param_1 + 0xe0);
  if (pvVar6 != pvVar5) {
    do {
      pvVar1 = (void *)((long)pvVar6 + 0x18);
      while ((*(byte *)((long)pvVar6 + 8) & 3) == 0) {
        sVar4 = (long)pvVar5 - (long)pvVar1;
        if (sVar4 == 0) {
          *(void **)(param_1 + 0xe0) = pvVar6;
          return;
        }
        memmove(pvVar6,pvVar1,sVar4);
        pvVar5 = (void *)((long)pvVar6 + ((long)sVar4 >> 3) * 8);
        *(void **)(param_1 + 0xe0) = pvVar5;
      }
      pvVar6 = pvVar1;
    } while (pvVar1 != pvVar5);
  }
  return;
LAB_02da905c:
  *(void **)(param_1 + 0xa8) = pvVar6;
  goto LAB_02da9060;
}


