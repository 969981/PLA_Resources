/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe1e70; name: FUN_02fe1e70
 */


/* WARNING: Removing unreachable block (ram,0x02fe1ea4) */

undefined8 FUN_02fe1e70(long param_1,float *param_2)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  byte *pbVar5;
  float fVar6;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 == 0) {
    return 0x80040200;
  }
  if ((int)uVar2 < 1) {
    fVar6 = 3.1415927;
    goto LAB_02fe1f38;
  }
  piVar1 = (int *)(param_1 + 0x10);
  if (uVar2 == 1) {
    lVar3 = 0;
    uVar4 = 0xffff;
LAB_02fe1f08:
    uVar2 = (uint)*(byte *)((long)piVar1 + lVar3 * 4 + (long)*piVar1 + 3) * 0x100;
    if (uVar2 <= uVar4) {
      uVar4 = uVar2;
    }
  }
  else {
    lVar3 = 0;
    uVar4 = 0xffff;
    pbVar5 = (byte *)((long)piVar1 + (long)*piVar1 + 7);
    do {
      if ((uint)pbVar5[-4] * 0x100 <= uVar4) {
        uVar4 = (uint)pbVar5[-4] * 0x100;
      }
      lVar3 = lVar3 + 2;
      if ((uint)*pbVar5 * 0x100 <= uVar4) {
        uVar4 = (uint)*pbVar5 * 0x100;
      }
      pbVar5 = pbVar5 + 8;
    } while ((ulong)uVar2 - ((ulong)uVar2 & 1) != lVar3);
    if ((uVar2 & 1) != 0) goto LAB_02fe1f08;
  }
  fVar6 = (float)uVar4 * 2.3968816e-05 + (float)uVar4 * 2.3968816e-05;
LAB_02fe1f38:
  *param_2 = fVar6;
  return 0;
}


