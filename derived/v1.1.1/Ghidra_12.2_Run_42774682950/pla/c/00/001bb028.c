/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001bb028; name: FUN_001bb028
 */


void FUN_001bb028(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  float *pfVar6;
  long *plVar7;
  uint *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar11 = *(long *)(param_1 + 0x18);
  uVar9 = *(undefined8 *)PTR_PTR_04372408;
  puVar8 = (uint *)((long)param_3 + 0xc);
  uVar4 = *puVar8;
  iVar3 = (int)param_3[1];
  uVar1 = iVar3 + *(int *)(lVar11 + 0x60);
  if ((int)param_2 == 0) {
    if ((int)(uVar4 & 0x3fffffff) < (int)uVar1) {
      lVar10 = *param_3;
      if (0x3fffffff < (int)uVar1) {
        FUN_032bd0a8(uVar1,param_2,param_3,lVar10);
        uVar4 = *puVar8;
      }
      uVar4 = (uVar4 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar4) {
        uVar4 = 0x3fffffff;
      }
      uVar2 = uVar1;
      if ((int)uVar1 <= (int)uVar4) {
        uVar2 = uVar4;
      }
      lVar10 = FUN_032bd1d4(uVar9,uVar2,0x10,lVar10,iVar3,puVar8);
      *param_3 = lVar10;
      *(uint *)(param_3 + 1) = uVar1;
      plVar5 = *(long **)(lVar11 + 0x58);
    }
    else {
      lVar10 = *param_3;
      *(uint *)(param_3 + 1) = uVar1;
      plVar5 = *(long **)(lVar11 + 0x58);
    }
    if (plVar5 != (long *)0x0) {
      plVar7 = (long *)(lVar10 + (long)iVar3 * 0x10);
      do {
        lVar11 = plVar5[2];
        plVar7[1] = plVar5[3];
        *plVar7 = lVar11;
        plVar5 = (long *)*plVar5;
        plVar7 = plVar7 + 2;
      } while (plVar5 != (long *)0x0);
    }
  }
  else {
    if ((int)(uVar4 & 0x3fffffff) < (int)uVar1) {
      lVar10 = *param_3;
      if (0x3fffffff < (int)uVar1) {
        FUN_032bd0a8(uVar1);
        uVar4 = *puVar8;
      }
      uVar4 = (uVar4 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar4) {
        uVar4 = 0x3fffffff;
      }
      uVar2 = uVar1;
      if ((int)uVar1 <= (int)uVar4) {
        uVar2 = uVar4;
      }
      lVar10 = FUN_032bd1d4(uVar9,uVar2,0x10,lVar10,iVar3,puVar8);
      *param_3 = lVar10;
      *(uint *)(param_3 + 1) = uVar1;
      plVar5 = *(long **)(lVar11 + 0x58);
    }
    else {
      lVar10 = *param_3;
      *(uint *)(param_3 + 1) = uVar1;
      plVar5 = *(long **)(lVar11 + 0x58);
    }
    if (plVar5 != (long *)0x0) {
      pfVar6 = (float *)(lVar10 + (long)iVar3 * 0x10);
      do {
        auVar12 = NEON_scvtf(*(undefined1 (*) [16])(plVar5 + 4),4);
        uVar14 = *(undefined8 *)(lVar11 + 0x158);
        uVar9 = *(undefined8 *)(lVar11 + 0x150);
        uVar15 = *(undefined8 *)(lVar11 + 0x138);
        uVar13 = *(undefined8 *)(lVar11 + 0x130);
        pfVar6[2] = (float)uVar15 + (float)uVar14 * auVar12._8_4_;
        pfVar6[3] = (float)((ulong)uVar15 >> 0x20) + (float)((ulong)uVar14 >> 0x20) * 0.0;
        *pfVar6 = (float)uVar13 + (float)uVar9 * auVar12._0_4_;
        pfVar6[1] = (float)((ulong)uVar13 >> 0x20) + (float)((ulong)uVar9 >> 0x20) * auVar12._4_4_;
        plVar5 = (long *)*plVar5;
        pfVar6 = pfVar6 + 4;
      } while (plVar5 != (long *)0x0);
    }
  }
  return;
}


