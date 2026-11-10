/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030cefc; name: FUN_0030cefc
 */


void FUN_0030cefc(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  void *pvVar4;
  size_t sVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  void *__dest;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  
  lVar12 = *param_2;
  lVar11 = param_2[1];
  iVar6 = (int)((ulong)(lVar11 - lVar12) >> 4);
  if (iVar6 < 1) {
    return;
  }
  lVar10 = param_1[1] - *param_1 >> 4;
  uVar13 = lVar10 + iVar6;
  if ((ulong)(param_1[2] - *param_1 >> 4) < uVar13) {
    lVar9 = uVar13 * 0x10;
    lVar3 = FUN_002e2e80(PTR_FUN_04373078,lVar9);
    pvVar4 = (void *)*param_1;
    lVar10 = lVar3 + lVar10 * 0x10;
    sVar5 = param_1[1] - (long)pvVar4;
    __dest = (void *)(lVar10 - sVar5);
    if (0 < (long)sVar5) {
      memcpy(__dest,pvVar4,sVar5);
      pvVar4 = (void *)*param_1;
    }
    *param_1 = (long)__dest;
    param_1[1] = lVar10;
    param_1[2] = lVar3 + lVar9;
    if (pvVar4 != (void *)0x0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
  }
  puVar2 = PTR_LAB_04373088;
  puVar1 = PTR_FUN_04373078;
  uVar13 = (ulong)(lVar11 - lVar12) >> 4 & 0xffffffff;
  lVar12 = 0;
  puVar14 = (undefined8 *)param_1[1];
  puVar7 = (undefined8 *)param_1[2];
  lVar11 = *param_2;
  if (puVar14 == puVar7) goto LAB_0030d008;
  do {
    uVar16 = *(undefined8 *)(lVar11 + lVar12);
    puVar14[1] = ((undefined8 *)(lVar11 + lVar12))[1];
    *puVar14 = uVar16;
    puVar14 = (undefined8 *)(param_1[1] + 0x10);
    param_1[1] = (long)puVar14;
    while( true ) {
      FUN_0030cddc(puVar14 + -2);
      lVar12 = lVar12 + 0x10;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) {
        return;
      }
      puVar14 = (undefined8 *)param_1[1];
      puVar7 = (undefined8 *)param_1[2];
      lVar11 = *param_2;
      if (puVar14 != puVar7) break;
LAB_0030d008:
      lVar10 = (long)puVar14 - *param_1 >> 4;
      uVar15 = lVar10 + 1;
      if (uVar15 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar3 = (long)puVar7 - *param_1;
      if ((ulong)(lVar3 >> 4) < 0x7ffffffffffffff) {
        uVar8 = lVar3 >> 3;
        if (uVar15 <= uVar8) {
          uVar15 = uVar8;
        }
        if (uVar15 != 0) goto LAB_0030d048;
        lVar3 = 0;
      }
      else {
        uVar15 = 0xfffffffffffffff;
LAB_0030d048:
        lVar3 = FUN_002e2e80(puVar1,uVar15 << 4);
      }
      uVar16 = *(undefined8 *)(lVar11 + lVar12);
      puVar7 = (undefined8 *)(lVar3 + lVar10 * 0x10);
      puVar14 = puVar7 + 2;
      puVar7[1] = ((undefined8 *)(lVar11 + lVar12))[1];
      *puVar7 = uVar16;
      pvVar4 = (void *)*param_1;
      sVar5 = param_1[1] - (long)pvVar4;
      if (0 < (long)sVar5) {
        memcpy((void *)((long)puVar7 - sVar5),pvVar4,sVar5);
        pvVar4 = (void *)*param_1;
      }
      *param_1 = (long)((long)puVar7 - sVar5);
      param_1[1] = (long)puVar14;
      param_1[2] = lVar3 + uVar15 * 0x10;
      if (pvVar4 != (void *)0x0) {
        FUN_002e2ea0(puVar2);
        puVar14 = (undefined8 *)param_1[1];
      }
    }
  } while( true );
}


