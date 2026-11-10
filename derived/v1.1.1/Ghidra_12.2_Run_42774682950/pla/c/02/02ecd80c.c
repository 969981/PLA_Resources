/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecd80c; name: FUN_02ecd80c
 */


undefined4 FUN_02ecd80c(float param_1,long *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  long *plVar5;
  float *pfVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  
  lVar2 = *param_3;
  lVar8 = param_3[1];
  plVar3 = (long *)param_2[0x3b];
  uVar11 = *(uint *)(param_2 + 0x3c);
  uVar12 = (ulong)uVar11;
  plVar5 = plVar3 + uVar12 * 3;
  uVar10 = (uint)lVar8;
  if (param_1 == 1.0) {
    if (uVar11 == 0) {
LAB_02ecd8e8:
      if (plVar5 != plVar3) {
        if (plVar3 < plVar5 + -3) {
          do {
            plVar7 = plVar3 + 3;
            plVar3[2] = plVar3[5];
            *plVar3 = *plVar7;
            plVar3[1] = plVar3[4];
            plVar3 = plVar7;
          } while (plVar7 < plVar5 + -3);
          uVar11 = *(uint *)(param_2 + 0x3c);
        }
        *(uint *)(param_2 + 0x3c) = uVar11 - 1;
      }
    }
    else {
      lVar8 = uVar12 * 0x18;
      do {
        if ((*plVar3 == lVar2) && (((*(byte *)(plVar3 + 1) ^ uVar10) & 1) == 0)) goto LAB_02ecd8e8;
        lVar8 = lVar8 + -0x18;
        plVar3 = plVar3 + 3;
      } while (lVar8 != 0);
    }
    uVar4 = 1;
    goto LAB_02ecd894;
  }
  plVar7 = plVar3;
  if (uVar11 == 0) {
    if (plVar3 == plVar5) goto LAB_02ecd918;
LAB_02ecd880:
    pfVar6 = (float *)(plVar7 + 2);
    *pfVar6 = param_1;
  }
  else {
    lVar9 = uVar12 * 0x18;
    do {
      if ((*plVar7 == lVar2) && (((*(byte *)(plVar7 + 1) ^ uVar10) & 1) == 0)) {
        if (plVar7 != plVar5) goto LAB_02ecd880;
        break;
      }
      lVar9 = lVar9 + -0x18;
      plVar7 = plVar7 + 3;
    } while (lVar9 != 0);
LAB_02ecd918:
    uVar10 = *(uint *)((long)param_2 + 0x1e4);
    if (uVar11 < uVar10) {
LAB_02ecd95c:
      if (uVar11 < uVar10) {
        uVar12 = (ulong)*(uint *)(param_2 + 0x3c);
        *(uint *)(param_2 + 0x3c) = *(uint *)(param_2 + 0x3c) + 1;
        if (plVar3 + uVar12 * 3 != (long *)0x0) {
          plVar3[uVar12 * 3] = lVar2;
          pfVar6 = (float *)(plVar3 + uVar12 * 3 + 2);
          *pfVar6 = param_1;
          plVar3[uVar12 * 3 + 1] = lVar8;
          goto LAB_02ecd888;
        }
      }
    }
    else {
      iVar1 = uVar10 + (uVar10 >> 1);
      if (uVar10 == 0) {
        iVar1 = 1;
      }
      uVar10 = iVar1 + uVar10;
      plVar3 = (long *)(*DAT_0442d148)(0,plVar3,(ulong)uVar10 * 0x18);
      if (plVar3 != (long *)0x0) {
        param_2[0x3b] = (long)plVar3;
        *(uint *)((long)param_2 + 0x1e4) = uVar10;
        goto LAB_02ecd95c;
      }
    }
    pfVar6 = (float *)0x0;
  }
LAB_02ecd888:
  uVar4 = 1;
  if (pfVar6 == (float *)0x0) {
    uVar4 = 2;
  }
LAB_02ecd894:
  (**(code **)(*param_2 + 0x68))(param_2);
  return uVar4;
}


