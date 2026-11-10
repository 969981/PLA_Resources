/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f1453c; name: FUN_02f1453c
 */


undefined8 FUN_02f1453c(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    iVar3 = FUN_02f2c538(param_1);
    if (iVar3 != 1) goto LAB_02f14740;
  }
  plVar8 = DAT_0440ae30;
  if (DAT_0440ae38 == 0) {
    uVar13 = 0;
  }
  else {
    do {
      lVar14 = *plVar8;
      if ((*(long **)(lVar14 + 0x128) == (long *)0x0) ||
         (iVar3 = (**(code **)(**(long **)(lVar14 + 0x128) + 0xf8))(), iVar3 < 0)) {
        iVar3 = 0;
        plVar6 = *(long **)(lVar14 + 0x130);
      }
      else {
        iVar3 = (**(code **)(**(long **)(lVar14 + 0x128) + 0xf8))();
        plVar6 = *(long **)(lVar14 + 0x130);
      }
      if ((plVar6 != (long *)0x0) && (iVar4 = (**(code **)(*plVar6 + 0xf8))(), iVar3 <= iVar4)) {
        iVar3 = (**(code **)(**(long **)(lVar14 + 0x130) + 0xf8))();
      }
      if (((long *)param_1[0x25] == (long *)0x0) ||
         (iVar4 = (**(code **)(*(long *)param_1[0x25] + 0xf8))(), iVar4 < 0)) {
        iVar4 = 0;
        plVar6 = (long *)param_1[0x26];
      }
      else {
        iVar4 = (**(code **)(*(long *)param_1[0x25] + 0xf8))();
        plVar6 = (long *)param_1[0x26];
      }
      if ((plVar6 != (long *)0x0) && (iVar5 = (**(code **)(*plVar6 + 0xf8))(), iVar4 <= iVar5)) {
        iVar4 = (**(code **)(*(long *)param_1[0x26] + 0xf8))();
      }
    } while ((iVar3 < iVar4) && (plVar8 = plVar8 + 1, plVar8 != DAT_0440ae30 + DAT_0440ae38));
    uVar13 = DAT_0440ae38;
  }
  plVar6 = DAT_0440ae30;
  uVar1 = DAT_0440ae3c;
  plVar7 = DAT_0440ae30;
  uVar2 = DAT_0440ae38;
  if (DAT_0440ae3c <= uVar13) {
    iVar3 = DAT_0440ae3c + (DAT_0440ae3c >> 1);
    if (DAT_0440ae3c == 0) {
      iVar3 = 1;
    }
    uVar1 = iVar3 + DAT_0440ae3c;
    plVar7 = (long *)(*DAT_0442d148)(5,DAT_0440ae30,(ulong)uVar1 << 3);
    uVar2 = DAT_0440ae38;
    if (plVar7 == (long *)0x0) goto LAB_02f14740;
  }
  DAT_0440ae30 = plVar7;
  DAT_0440ae3c = uVar1;
  DAT_0440ae38 = uVar2;
  if (uVar13 < DAT_0440ae3c) {
    uVar9 = (ulong)((long)plVar8 - (long)plVar6) >> 3;
    DAT_0440ae38 = uVar2 + 1;
    if ((uint)uVar9 < uVar2) {
      plVar11 = DAT_0440ae30 + uVar2;
      do {
        plVar10 = plVar11 + -1;
        *plVar11 = *plVar10;
        plVar7 = DAT_0440ae30 + ((ulong)((long)plVar8 - (long)plVar6) >> 3 & 0xffffffff);
        plVar11 = plVar10;
      } while (plVar7 < plVar10);
    }
    else {
      plVar7 = DAT_0440ae30 + (uVar9 & 0xffffffff);
    }
    if (plVar7 != (long *)0x0) {
      *plVar7 = (long)param_1;
      FUN_02f147fc(param_1);
      return 1;
    }
  }
LAB_02f14740:
  FUN_02f2b7ac(param_1,0);
  plVar8 = (long *)param_1[0x26];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x68))(plVar8,0);
    puVar12 = (undefined8 *)param_1[0x26];
    if (puVar12 != (undefined8 *)0x0) {
      (**(code **)*puVar12)(puVar12);
      (*DAT_0442d150)(5,puVar12);
    }
    param_1[0x26] = 0;
  }
  (**(code **)*param_1)(param_1);
  (*DAT_0442d150)(5,param_1);
  return 2;
}


