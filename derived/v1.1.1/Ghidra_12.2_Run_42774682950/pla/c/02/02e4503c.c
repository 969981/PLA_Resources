/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4503c; name: FUN_02e4503c
 */


int FUN_02e4503c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  
  uVar2 = *(uint *)(param_1 + 0x38);
  plVar1 = (long *)(param_1 + 0x30);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = (uint)param_2 / uVar2;
    }
    for (plVar9 = *(long **)(*plVar1 + (ulong)((uint)param_2 - uVar3 * uVar2) * 8);
        plVar9 != (long *)0x0; plVar9 = (long *)plVar9[8]) {
      if (*plVar9 == param_2) {
        lVar6 = plVar9[7];
        FUN_02e48b54(plVar9,param_1 + 0x60);
        FUN_02e481dc(plVar9);
        if (*(int *)(lVar6 + 0x48) == 0) {
          FUN_02e45218(param_1,lVar6);
        }
        goto LAB_02e450d8;
      }
    }
  }
  plVar9 = (long *)FUN_02e46a18(param_1 + 0x58);
  if (plVar9 == (long *)0x0) {
    iVar4 = 2;
    goto LAB_02e451f0;
  }
  plVar9[8] = 0;
  *plVar9 = param_2;
  plVar9[1] = 0;
  *(undefined1 *)(plVar9 + 0xc) = 0;
  *(undefined2 *)((long)plVar9 + 0x61) = 1;
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  uVar5 = FUN_02e45250(plVar1,plVar9);
  if ((uVar5 & 1) == 0) {
    FUN_02e481dc(plVar9);
    FUN_02e46eb0(param_1 + 0x58,plVar9);
    iVar4 = 2;
    goto LAB_02e451f0;
  }
LAB_02e450d8:
  iVar4 = FUN_02e4811c(plVar9,param_3);
  if (iVar4 == 1) {
    if (*(long *)(param_3 + 0x30) == -1) {
      lVar6 = *(long *)(param_1 + 0x68);
joined_r0x02e451b8:
      if (lVar6 != 0) {
        iVar4 = FUN_02e482b0(plVar9,lVar6,param_1 + 0x60);
        if (iVar4 == 1) goto LAB_02e451f0;
        goto LAB_02e451c0;
      }
    }
    else {
      lVar6 = FUN_02e452b8(param_1);
      if (lVar6 != 0) {
        lVar8 = *(long *)(lVar6 + 0x78);
        if ((lVar8 == 0) || (lVar8 == *(long *)(param_1 + 0x68))) {
          uVar7 = FUN_02e453e4(param_1);
          FUN_02e50438(lVar6,uVar7);
        }
        lVar6 = *(long *)(lVar6 + 0x78);
        goto joined_r0x02e451b8;
      }
    }
    iVar4 = 0x34;
  }
LAB_02e451c0:
  FUN_02e48b54(plVar9,param_1 + 0x60);
  FUN_02e45484(plVar1,plVar9);
  FUN_02e481dc(plVar9);
  FUN_02e46eb0(param_1 + 0x58,plVar9);
LAB_02e451f0:
  *(undefined1 *)(param_1 + 0x7c) = 1;
  FUN_02e438c0(param_3);
  return iVar4;
}


