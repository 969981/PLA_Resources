/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8932c; name: FUN_02e8932c
 */


undefined8 FUN_02e8932c(long param_1,long *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong *puVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  
  pbVar8 = (byte *)*param_2;
  bVar2 = *pbVar8;
  *param_2 = (long)(pbVar8 + 1);
  uVar7 = bVar2 & 0x7f;
  if ((char)bVar2 < '\0') {
    pbVar8 = pbVar8 + 2;
    do {
      bVar2 = pbVar8[-1];
      *param_2 = (long)pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar7 = bVar2 & 0x7f | uVar7 << 7;
    } while ((char)bVar2 < '\0');
  }
  if (uVar7 == 0) {
    uVar4 = 1;
  }
  else {
    lVar5 = FUN_02f59e30(0,(ulong)uVar7 << 3);
    *(long *)(param_1 + 0x38) = lVar5;
    if (lVar5 == 0) {
      uVar4 = 2;
    }
    else {
      *(uint *)(param_1 + 0x44) = uVar7;
      do {
        puVar9 = (undefined4 *)*param_2;
        uVar1 = *puVar9;
        *param_2 = (long)(puVar9 + 1);
        cVar3 = *(char *)(puVar9 + 1);
        *param_2 = (long)puVar9 + 5;
        puVar6 = (ulong *)FUN_02e89420((long *)(param_1 + 0x38));
        if (puVar6 != (ulong *)0x0) {
          *puVar6 = (ulong)CONCAT14(cVar3 != '\0',uVar1);
        }
        uVar7 = uVar7 - 1;
        uVar4 = 1;
      } while (uVar7 != 0);
    }
  }
  return uVar4;
}


