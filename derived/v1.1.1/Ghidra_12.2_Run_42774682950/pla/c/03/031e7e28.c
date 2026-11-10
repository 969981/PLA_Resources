/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e7e28; name: FUN_031e7e28
 */


void FUN_031e7e28(long param_1,void *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  memcpy((void *)(param_1 + 200),param_2,0x80);
  if (0 < *(int *)(param_1 + 0xa8)) {
    lVar3 = 0;
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0xa0) + lVar4;
      lVar4 = lVar4 + 0x60;
      uVar7 = *(undefined8 *)(lVar1 + 0x18);
      uVar6 = *(undefined8 *)(lVar1 + 0x10);
      uVar9 = *(undefined8 *)(lVar1 + 0x28);
      uVar8 = *(undefined8 *)(lVar1 + 0x20);
      fVar10 = (float)*(undefined8 *)(lVar1 + 0x40);
      fVar11 = (float)((ulong)*(undefined8 *)(lVar1 + 0x40) >> 0x20);
      fVar12 = (float)*(undefined8 *)(lVar1 + 0x48);
      fVar13 = (float)((ulong)*(undefined8 *)(lVar1 + 0x48) >> 0x20);
      lVar2 = *(long *)(param_1 + 0x20) + lVar3;
      *(undefined1 *)(lVar2 + 0x40) = 1;
      lVar5 = lVar5 + 1;
      *(ulong *)(lVar2 + 0x28) =
           CONCAT44((float)((ulong)uVar7 >> 0x20) + fVar13,(float)uVar7 + fVar12);
      *(ulong *)(lVar2 + 0x20) =
           CONCAT44((float)((ulong)uVar6 >> 0x20) + fVar11,(float)uVar6 + fVar10);
      *(ulong *)(lVar2 + 0x38) =
           CONCAT44((float)((ulong)uVar9 >> 0x20) + fVar13,(float)uVar9 + fVar12);
      *(ulong *)(lVar2 + 0x30) =
           CONCAT44((float)((ulong)uVar8 >> 0x20) + fVar11,(float)uVar8 + fVar10);
      *(undefined1 *)(lVar1 + 0x52) = 1;
      lVar3 = lVar3 + 0x50;
    } while (lVar5 < *(int *)(param_1 + 0xa8));
  }
  *(undefined1 *)(param_1 + 0xc4) = 1;
  return;
}


