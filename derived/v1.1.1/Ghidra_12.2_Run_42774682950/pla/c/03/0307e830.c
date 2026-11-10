/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0307e830; name: FUN_0307e830
 */


void FUN_0307e830(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  
  uVar7 = param_2 & 0xffffffff;
LAB_0307e860:
  lVar1 = param_1 + ((long)((ulong)((int)uVar7 + param_3) << 0x20) >> 0x21) * 0x80;
  fVar12 = *(float *)(lVar1 + 0x48);
  uVar2 = *(uint *)(lVar1 + 0x4c);
  uVar10 = (ulong)param_3;
  uVar8 = uVar7;
LAB_0307e890:
  uVar5 = -(uVar8 >> 0x1f) & 0xffffff8000000000 | uVar8 << 7;
  while( true ) {
    uVar3 = *(uint *)(param_1 + uVar5 + 0x4c);
    iVar6 = (int)uVar8;
    if ((uVar2 <= uVar3) && ((uVar3 != uVar2 || (fVar12 <= *(float *)(param_1 + uVar5 + 0x48)))))
    break;
    uVar5 = uVar5 + 0x80;
    uVar8 = (ulong)(iVar6 + 1);
  }
  uVar5 = -(uVar10 >> 0x1f) & 0xffffff8000000000 | uVar10 << 7;
  do {
    uVar3 = *(uint *)(param_1 + uVar5 + 0x4c);
    iVar9 = (int)uVar10;
    if (uVar3 <= uVar2) {
      fVar11 = *(float *)(param_1 + uVar5 + 0x48);
      bVar4 = false;
      if ((uVar2 == uVar3) && (bVar4 = false, !NAN(fVar12) && !NAN(fVar11))) {
        bVar4 = fVar12 < fVar11;
      }
      if (!bVar4) break;
    }
    uVar5 = uVar5 - 0x80;
    uVar10 = (ulong)(iVar9 - 1);
  } while( true );
  if (iVar6 <= iVar9) {
    if (iVar6 != iVar9) {
      FUN_0307e940();
    }
    uVar10 = (ulong)(iVar9 - 1);
    uVar8 = (ulong)(iVar6 + 1);
  }
  if ((int)uVar10 < (int)uVar8) goto LAB_0307e904;
  goto LAB_0307e890;
LAB_0307e904:
  if ((int)uVar7 < (int)uVar10) {
    FUN_0307e830(param_1,uVar7,uVar10);
  }
  uVar7 = uVar8;
  if ((int)param_3 <= (int)uVar8) {
    return;
  }
  goto LAB_0307e860;
}


