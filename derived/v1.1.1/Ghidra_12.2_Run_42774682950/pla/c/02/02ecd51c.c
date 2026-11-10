/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecd51c; name: FUN_02ecd51c
 */


/* WARNING: Removing unreachable block (ram,0x02ecd7b8) */
/* WARNING: Removing unreachable block (ram,0x02ecd798) */

undefined8 FUN_02ecd51c(float param_1,ulong *param_2,long *param_3,ulong param_4)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  
  if ((param_4 & 1) != 0) {
    plVar5 = (long *)*param_2;
    uVar6 = (uint)param_2[1];
    bVar2 = *(byte *)(param_3 + 1) & 1 ^ 1;
    plVar4 = plVar5;
    if (uVar6 == 0) {
LAB_02ecd588:
      plVar9 = plVar5 + (ulong)uVar6 * 3;
      if (plVar4 != plVar9) {
        if ((*(byte *)(param_3 + 1) & 1) != 0) {
          return 0;
        }
        if (uVar6 == 0) {
LAB_02ecd754:
          if (plVar9 != plVar5) {
            if (plVar5 < plVar9 + -3) {
              do {
                plVar4 = plVar5 + 3;
                plVar5[2] = plVar5[5];
                *plVar5 = *plVar4;
                plVar5[1] = plVar5[4];
                plVar5 = plVar4;
              } while (plVar4 < plVar9 + -3);
              uVar6 = (uint)param_2[1];
            }
            *(uint *)(param_2 + 1) = uVar6 - 1;
          }
        }
        else {
          lVar8 = (ulong)uVar6 * 0x18;
          do {
            if ((*plVar5 == *param_3) && ((*(byte *)(plVar5 + 1) & 1) == bVar2)) goto LAB_02ecd754;
            lVar8 = lVar8 + -0x18;
            plVar5 = plVar5 + 3;
          } while (lVar8 != 0);
        }
      }
    }
    else {
      lVar8 = (ulong)uVar6 * 0x18;
      do {
        if ((*plVar4 == *param_3) && ((*(byte *)(plVar4 + 1) & 1) == bVar2)) goto LAB_02ecd588;
        lVar8 = lVar8 + -0x18;
        plVar4 = plVar4 + 3;
      } while (lVar8 != 0);
    }
  }
  if ((param_1 == 1.0) && (((param_4 & 1) == 0 || ((*(byte *)(param_3 + 1) & 1) != 0)))) {
    plVar5 = (long *)*param_2;
    uVar6 = (uint)param_2[1];
    plVar4 = plVar5 + (ulong)uVar6 * 3;
    if (uVar6 != 0) {
      lVar8 = (ulong)uVar6 * 0x18;
      while ((*plVar5 != *param_3 || (((*(byte *)(plVar5 + 1) ^ *(byte *)(param_3 + 1)) & 1) != 0)))
      {
        lVar8 = lVar8 + -0x18;
        plVar5 = plVar5 + 3;
        if (lVar8 == 0) {
          return 1;
        }
      }
    }
    if (plVar4 == plVar5) {
      return 1;
    }
    if (plVar5 < plVar4 + -3) {
      do {
        plVar9 = plVar5 + 3;
        plVar5[2] = plVar5[5];
        *plVar5 = *plVar9;
        plVar5[1] = plVar5[4];
        plVar5 = plVar9;
      } while (plVar9 < plVar4 + -3);
      uVar6 = (uint)param_2[1];
    }
    *(uint *)(param_2 + 1) = uVar6 - 1;
    return 1;
  }
  lVar8 = *param_3;
  lVar3 = param_3[1];
  plVar4 = (long *)*param_2;
  uVar6 = (uint)param_2[1];
  plVar5 = plVar4;
  if (uVar6 == 0) {
LAB_02ecd5e8:
    if (plVar5 != plVar4 + (ulong)uVar6 * 3) goto LAB_02ecd5f8;
  }
  else {
    lVar7 = (ulong)uVar6 * 0x18;
    do {
      if ((*plVar5 == lVar8) && ((((uint)*(byte *)(plVar5 + 1) ^ (uint)lVar3) & 1) == 0))
      goto LAB_02ecd5e8;
      lVar7 = lVar7 + -0x18;
      plVar5 = plVar5 + 3;
    } while (lVar7 != 0);
  }
  uVar10 = *(uint *)((long)param_2 + 0xc);
  if (uVar10 <= uVar6) {
    iVar1 = uVar10 + (uVar10 >> 1);
    if (uVar10 == 0) {
      iVar1 = 1;
    }
    uVar10 = iVar1 + uVar10;
    plVar4 = (long *)(*DAT_0442d148)(0,plVar4,(ulong)uVar10 * 0x18);
    if (plVar4 == (long *)0x0) {
      return 1;
    }
    *param_2 = (ulong)plVar4;
    *(uint *)((long)param_2 + 0xc) = uVar10;
  }
  if (uVar10 <= uVar6) {
    return 1;
  }
  uVar6 = (uint)param_2[1];
  *(uint *)(param_2 + 1) = uVar6 + 1;
  if (plVar4 + (ulong)uVar6 * 3 == (long *)0x0) {
    return 1;
  }
  plVar4[(ulong)uVar6 * 3] = lVar8;
  plVar5 = plVar4 + (ulong)uVar6 * 3;
  plVar5[1] = lVar3;
LAB_02ecd5f8:
  *(float *)(plVar5 + 2) = param_1;
  return 1;
}


