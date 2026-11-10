/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3af00; name: FUN_02f3af00
 */


float FUN_02f3af00(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ushort *puVar4;
  float *pfVar5;
  float fVar6;
  
  fVar6 = 1.0;
  if (((((char)param_1[1] != '\0') &&
       (uVar1 = (**(code **)(*param_1 + 0x28))(param_1,0xd), (uVar1 & 1) != 0)) &&
      (plVar2 = (long *)(**(code **)(*param_1 + 0x80))(param_1), plVar2 != (long *)0x0)) &&
     (lVar3 = *plVar2, lVar3 != 0)) {
    fVar6 = 1.0;
    do {
      puVar4 = *(ushort **)(lVar3 + 0x20);
      if (puVar4 != (ushort *)0x0) {
        uVar1 = 0;
        pfVar5 = (float *)((long)puVar4 + ((ulong)((uint)*puVar4 * 2 + 5) & 0x3fffc));
        do {
          if (puVar4[uVar1 + 1] == 0xd) {
            fVar6 = *pfVar5 * fVar6;
            lVar3 = *(long *)(lVar3 + 0x10);
            goto joined_r0x02f3afac;
          }
          uVar1 = uVar1 + 1;
          pfVar5 = pfVar5 + 4;
        } while (uVar1 < *puVar4);
      }
      lVar3 = *(long *)(lVar3 + 0x10);
joined_r0x02f3afac:
    } while (lVar3 != 0);
  }
  return fVar6;
}


