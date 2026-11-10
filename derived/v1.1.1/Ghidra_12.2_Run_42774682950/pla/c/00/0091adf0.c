/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091adf0; name: FUN_0091adf0
 */


void FUN_0091adf0(undefined8 param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  long lVar8;
  uint *puVar9;
  int iVar10;
  double dVar11;
  
  if (0 < (int)param_2[0x18]) {
    cVar3 = *(char *)((long)param_2 + 0xc4);
    iVar10 = (int)param_2[0x19];
    iVar1 = *(int *)((long)param_2 + 0xc);
    dVar11 = (double)NEON_ucvtf((ulong)*(uint *)(param_2 + 3));
    dVar11 = pow(dVar11,0.4000000059604645);
    iVar4 = (int)(16.0 - dVar11);
    if (*(char *)(*(long *)(*param_2 + 0x70) + 0x7d) == cVar3) {
      *(int *)(param_2 + 1) = iVar4;
      iVar10 = iVar4;
    }
    else {
      if (iVar10 < 1) {
        iVar10 = 0;
      }
      iVar10 = (iVar4 - (iVar10 + iVar1)) + (int)param_2[1];
      *(int *)(param_2 + 1) = iVar10;
    }
    lVar8 = param_2[2];
    *(int *)((long)param_2 + 0xc) = iVar4;
    *(undefined4 *)(param_2 + 2) = 0;
    *(int *)(param_2 + 1) = (int)lVar8 + iVar10;
    iVar10 = (int)param_2[0x18];
    if (1 < iVar10) {
      cVar3 = *(char *)((long)param_2 + 0xc4);
      dVar11 = (double)NEON_ucvtf((ulong)*(uint *)(param_2 + 7));
      iVar10 = (int)param_2[0x19];
      iVar1 = *(int *)((long)param_2 + 0x2c);
      dVar11 = pow(dVar11,0.4000000059604645);
      iVar4 = (int)(16.0 - dVar11);
      if (*(char *)(*(long *)(param_2[4] + 0x70) + 0x7d) == cVar3) {
        *(int *)(param_2 + 5) = iVar4;
        iVar10 = iVar4;
      }
      else {
        if (iVar10 < 1) {
          iVar10 = 0;
        }
        iVar10 = (iVar4 - (iVar10 + iVar1)) + (int)param_2[5];
        *(int *)(param_2 + 5) = iVar10;
      }
      lVar8 = param_2[6];
      *(int *)((long)param_2 + 0x2c) = iVar4;
      *(undefined4 *)(param_2 + 6) = 0;
      *(int *)(param_2 + 5) = (int)lVar8 + iVar10;
      iVar10 = (int)param_2[0x18];
      if (2 < iVar10) {
        puVar9 = (uint *)(param_2 + 0xb);
        lVar8 = 2;
        do {
          dVar11 = (double)NEON_ucvtf((ulong)*puVar9);
          cVar3 = *(char *)((long)param_2 + 0xc4);
          iVar10 = (int)param_2[0x19];
          uVar6 = puVar9[-3];
          dVar11 = pow(dVar11,0.4000000059604645);
          uVar5 = (uint)(16.0 - dVar11);
          if (*(char *)(*(long *)(*(long *)(puVar9 + -6) + 0x70) + 0x7d) == cVar3) {
            puVar9[-4] = uVar5;
            uVar6 = uVar5;
          }
          else {
            if (iVar10 < 1) {
              iVar10 = 0;
            }
            uVar6 = (uVar5 - (iVar10 + uVar6)) + puVar9[-4];
            puVar9[-4] = uVar6;
          }
          uVar2 = puVar9[-2];
          puVar9[-3] = uVar5;
          puVar9[-2] = 0;
          puVar9[-4] = uVar2 + uVar6;
          iVar10 = (int)param_2[0x18];
          lVar8 = lVar8 + 1;
          puVar9 = puVar9 + 8;
        } while (lVar8 < iVar10);
      }
    }
    if ((0 < iVar10) && (cVar3 = *(char *)((long)param_2 + 0xc4), cVar3 != '\x1f')) {
      if (*(char *)(*(long *)(*param_2 + 0x70) + 0x7d) == cVar3) {
        *(undefined1 *)((long)param_2 + 0x14) = 0;
      }
      if (1 < iVar10) {
        if (*(char *)(*(long *)(param_2[4] + 0x70) + 0x7d) == cVar3) {
          *(undefined1 *)((long)param_2 + 0x34) = 0;
        }
        if (2 < iVar10) {
          puVar7 = (undefined1 *)((long)param_2 + 0x54);
          lVar8 = 2;
          do {
            if (*(char *)(*(long *)(*(long *)(puVar7 + -0x14) + 0x70) + 0x7d) == cVar3) {
              *puVar7 = 0;
            }
            lVar8 = lVar8 + 1;
            puVar7 = puVar7 + 0x20;
          } while (lVar8 < iVar10);
        }
      }
    }
  }
  return;
}


