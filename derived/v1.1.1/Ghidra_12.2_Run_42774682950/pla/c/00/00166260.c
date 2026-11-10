/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00166260; name: FUN_00166260
 */


void FUN_00166260(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  plVar6 = *(long **)(param_1 + 0x30);
  plVar8 = *(long **)(param_1 + 0x58);
  lVar7 = *plVar6;
  iVar5 = *(int *)(lVar7 + 0x24);
  lVar9 = (long)iVar5;
  if ((short)plVar6[7] < iVar5) {
    lVar2 = *(long *)(lVar7 + 0x50);
  }
  else {
    lVar2 = FUN_00161400(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(lVar7 + 0x50),
                         (int *)(lVar7 + 0x24),0x10,0x7fff,"local variables");
    *(long *)(lVar7 + 0x50) = lVar2;
    if (iVar5 < *(int *)(lVar7 + 0x24)) {
      lVar4 = lVar9 << 4;
      do {
        *(undefined8 *)(lVar2 + lVar4) = 0;
        lVar2 = *(long *)(lVar7 + 0x50);
        lVar9 = lVar9 + 1;
        lVar4 = lVar4 + 0x10;
      } while (lVar9 < *(int *)(lVar7 + 0x24));
    }
  }
  *(long *)(lVar2 + (long)(short)plVar6[7] * 0x10) = param_2;
  if (((*(byte *)(lVar7 + 9) >> 2 & 1) != 0) && ((*(byte *)(param_2 + 9) & 3) != 0)) {
    FUN_0015ca90(*(undefined8 *)(param_1 + 0x38),lVar7,param_2);
  }
  lVar9 = plVar6[7];
  *(short *)(plVar6 + 7) = (short)lVar9 + 1;
  iVar3 = (int)plVar8[1];
  iVar5 = iVar3 + 1;
  if (200 < iVar5 - *(int *)((long)plVar6 + 0x34)) {
    FUN_00163bb0(plVar6,200,"local variables");
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x1663b8);
    (*pcVar1)();
  }
  if (*(int *)((long)plVar8 + 0xc) < iVar3 + 2) {
    lVar7 = FUN_00161400(*(undefined8 *)(param_1 + 0x38),*plVar8,(int *)((long)plVar8 + 0xc),2,
                         0x7fffffff,"local variables");
    iVar3 = (int)plVar8[1];
    iVar5 = iVar3 + 1;
    *plVar8 = lVar7;
  }
  else {
    lVar7 = *plVar8;
  }
  *(int *)(plVar8 + 1) = iVar5;
  *(short *)(lVar7 + (long)iVar3 * 2) = (short)lVar9;
  return;
}


