/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030ff698; name: FUN_030ff698
 */


void FUN_030ff698(long param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  
  fVar6 = *(float *)(param_1 + 0x40);
  if (0 < param_3) {
    lVar3 = (long)param_2;
    lVar5 = (lVar3 + (long)param_2 * 2) * 2;
    lVar4 = lVar3;
    do {
      lVar4 = lVar4 + 1;
      puVar1 = (undefined4 *)(*(long *)(param_1 + 0x20) + lVar5);
      lVar5 = lVar5 + 6;
      *puVar1 = 0;
      *(char *)((long)puVar1 + 5) = (fVar6 == 0.0) << 2;
    } while (lVar4 < param_3 + param_2);
    lVar4 = lVar3 << 4;
    do {
      lVar3 = lVar3 + 1;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar4);
      lVar4 = lVar4 + 0x10;
      *(undefined8 *)((long)puVar2 + 5) = 0;
      *puVar2 = 0;
    } while (lVar3 < param_3 + param_2);
  }
  return;
}


