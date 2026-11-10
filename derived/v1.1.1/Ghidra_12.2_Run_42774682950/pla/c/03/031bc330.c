/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bc330; name: FUN_031bc330
 */


bool FUN_031bc330(long param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  undefined8 uVar12;
  float fVar14;
  undefined8 uVar15;
  
  if ((*(char *)(param_2 + 7) == '\0') && (*(char *)(param_2 + 4) != -1)) {
    bVar2 = *(char *)(param_2 + 6) == '\0';
    cVar1 = *(char *)(param_3 + 7);
  }
  else {
    bVar2 = true;
    cVar1 = *(char *)(param_3 + 7);
  }
  if ((cVar1 == '\0') && (*(char *)(param_3 + 4) != -1)) {
    if ((bool)(bVar2 ^ *(char *)(param_3 + 6) == '\0')) {
LAB_031bc394:
      fVar3 = (float)*(undefined8 *)(param_3 + 0x20) - (float)*(undefined8 *)(param_2 + 0x20);
      fVar5 = (float)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20) -
              (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
      fVar6 = (float)*(undefined8 *)(param_3 + 0x28) - (float)*(undefined8 *)(param_2 + 0x28);
      fVar4 = (float)*(undefined8 *)(param_1 + 0x90);
      fVar10 = fVar3 * fVar4;
      fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
      fVar13 = fVar5 * fVar8;
      fVar9 = (float)*(undefined8 *)(param_1 + 0x98);
      fVar14 = fVar6 * fVar9;
      fVar11 = -(fVar10 + fVar13 + fVar14);
      fVar3 = fVar3 + fVar4 * fVar11;
      fVar5 = fVar5 + fVar8 * -(fVar10 + fVar13 + fVar14);
      fVar6 = fVar6 + fVar9 * fVar11;
      fVar3 = fVar3 * fVar3;
      fVar5 = fVar5 * fVar5;
      fVar6 = fVar6 * fVar6;
      fVar4 = fVar3 + fVar5 + fVar6;
      uVar15 = CONCAT44(fVar3 + fVar5 + fVar6,fVar4);
      uVar12 = NEON_frsqrte(uVar15,4);
      fVar3 = (float)uVar12;
      fVar5 = (float)((ulong)uVar12 >> 0x20);
      uVar12 = NEON_frsqrts(uVar15,CONCAT44(fVar5 * fVar5,fVar3 * fVar3),4);
      fVar3 = fVar3 * (float)uVar12;
      fVar5 = fVar5 * (float)((ulong)uVar12 >> 0x20);
      uVar15 = NEON_frsqrts(uVar15,CONCAT44(fVar5 * fVar5,fVar3 * fVar3),4);
      iVar7 = -(uint)(fVar4 <= 0.0);
      fVar4 = (float)uVar15 * fVar3 * fVar4;
      return (float)CONCAT13((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                             CONCAT12((byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10),
                                      CONCAT11((byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar7 >> 8),
                                               SUB41(fVar4,0) & ~(byte)iVar7))) <
             *(float *)(param_1 + 0x18);
    }
  }
  else if (!bVar2) goto LAB_031bc394;
  return false;
}


