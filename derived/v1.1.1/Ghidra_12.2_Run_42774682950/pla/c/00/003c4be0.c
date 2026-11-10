/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c4be0; name: FUN_003c4be0
 */


void FUN_003c4be0(undefined8 *param_1,long *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  undefined *puVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  long *plVar12;
  
  puVar4 = PTR_LAB_04373088;
  pbVar1 = (byte *)param_2[1];
  lVar10 = (long)pbVar1 - *param_2 >> 3;
  uVar7 = param_1[2];
  bVar5 = uVar7 < (ulong)(lVar10 * -0x5555555555555555);
  lVar10 = uVar7 + lVar10 * 0x5555555555555555;
  if (bVar5 || lVar10 == 0) {
    if (bVar5) {
      pbVar11 = (byte *)(*param_2 + uVar7 * 0x18);
      if (pbVar11 != pbVar1) {
        bVar2 = pbVar1[-0x18];
        pbVar3 = pbVar1 + -0x18;
        while( true ) {
          if ((bVar2 & 1) != 0) {
            FUN_002e2ea0(puVar4,*(undefined8 *)(pbVar1 + -8));
          }
          if (pbVar11 == pbVar3) break;
          bVar2 = pbVar3[-0x18];
          pbVar1 = pbVar3;
          pbVar3 = pbVar3 + -0x18;
        }
      }
      param_2[1] = (long)pbVar11;
    }
    plVar12 = (long *)*param_1;
    if (plVar12 == param_1 + 1) {
      return;
    }
  }
  else {
    FUN_003c4fb4(param_2,lVar10);
    plVar12 = (long *)*param_1;
    if (plVar12 == param_1 + 1) {
      return;
    }
  }
  lVar10 = 0;
  do {
    plVar6 = (long *)(*param_2 + lVar10 * 0x18);
    if (plVar6 != plVar12 + 4) {
      uVar7 = plVar12[5];
      lVar9 = plVar12[6];
      if ((*(byte *)(plVar12 + 4) & 1) == 0) {
        lVar9 = (long)plVar12 + 0x21;
        uVar7 = (ulong)(*(byte *)(plVar12 + 4) >> 1);
      }
      FUN_00291910(plVar6,lVar9,uVar7);
    }
    lVar10 = lVar10 + 1;
    plVar6 = (long *)plVar12[1];
    if ((long *)plVar12[1] == (long *)0x0) {
      plVar6 = plVar12 + 2;
      plVar8 = (long *)*plVar6;
      if ((long *)*plVar8 != plVar12) {
        do {
          lVar9 = *plVar6;
          plVar6 = (long *)(lVar9 + 0x10);
          plVar8 = (long *)*plVar6;
        } while (*plVar8 != lVar9);
      }
    }
    else {
      do {
        plVar8 = plVar6;
        plVar6 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
    plVar12 = plVar8;
  } while (plVar8 != param_1 + 1);
  return;
}


