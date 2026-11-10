/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b754c; name: FUN_031b754c
 */


void FUN_031b754c(long *param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *param_1 = param_2;
  *(uint *)(param_1 + 1) = param_3;
  lVar2 = *(long *)(param_2 + 0x10);
  uVar7 = *(undefined8 *)(lVar2 + 0x40);
  uVar8 = *(undefined8 *)(lVar2 + 0x50);
  uVar9 = *(undefined8 *)(lVar2 + 0x60);
  uVar10 = *(undefined8 *)(lVar2 + 0x70);
  puVar1 = (undefined8 *)
           (*(long *)(*(long *)(lVar2 + 0x20) + 0x38) + ((ulong)param_3 & 0x3fffff) * 0x10);
  uVar4 = *puVar1;
  fVar3 = (float)uVar4;
  fVar5 = (float)((ulong)uVar4 >> 0x20);
  fVar6 = (float)puVar1[1];
  param_1[3] = CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x78) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar2 + 0x68) >> 0x20) * fVar6 +
                        (float)((ulong)*(undefined8 *)(lVar2 + 0x48) >> 0x20) * fVar3 +
                        (float)((ulong)*(undefined8 *)(lVar2 + 0x58) >> 0x20) * fVar5,
                        (float)*(undefined8 *)(lVar2 + 0x78) +
                        (float)*(undefined8 *)(lVar2 + 0x68) * fVar6 +
                        (float)*(undefined8 *)(lVar2 + 0x48) * fVar3 +
                        (float)*(undefined8 *)(lVar2 + 0x58) * fVar5);
  param_1[2] = CONCAT44((float)((ulong)uVar10 >> 0x20) +
                        (float)((ulong)uVar9 >> 0x20) * fVar6 +
                        (float)((ulong)uVar7 >> 0x20) * fVar3 +
                        (float)((ulong)uVar8 >> 0x20) * fVar5,
                        (float)uVar10 +
                        (float)uVar9 * fVar6 + (float)uVar7 * fVar3 + (float)uVar8 * fVar5);
  return;
}


