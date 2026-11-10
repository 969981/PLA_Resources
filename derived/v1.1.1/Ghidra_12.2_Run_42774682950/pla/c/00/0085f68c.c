/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085f68c; name: FUN_0085f68c
 */


void FUN_0085f68c(long param_1,ushort *param_2)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  float fVar13;
  undefined1 auStack_80 [32];
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar9 = 0;
    do {
      lVar10 = *(long *)(param_1 + 0xb8);
      lVar11 = lVar10 + uVar9 * 0x78;
      plVar12 = (long *)(lVar11 + 0x10);
      if ((*plVar12 != -1) && (*param_2 != 0)) {
        uVar4 = 0;
        piVar1 = (int *)(lVar10 + uVar9 * 0x78 + 0x20);
        plVar3 = (long *)FUN_0085e8d4(param_2,0);
        if (plVar3 != (long *)0x0) goto LAB_0085f768;
        while( true ) {
          do {
            do {
              uVar4 = uVar4 + 1;
              if (*param_2 <= uVar4) goto LAB_0085f700;
              plVar3 = (long *)FUN_0085e8d4(param_2,uVar4);
            } while (plVar3 == (long *)0x0);
LAB_0085f768:
          } while (*plVar3 != *plVar12);
          iVar7 = (int)plVar3[2];
          if (1 < iVar7 - 0xdU) break;
          if ((iVar7 != 0xd) || (*piVar1 != 0xb)) goto LAB_0085f7a0;
        }
        if (*piVar1 == iVar7) goto LAB_0085f700;
        lVar5 = lVar10 + uVar9 * 0x78;
        lVar8 = *plVar12;
        lVar2 = *(long *)(lVar11 + 0x18);
        *(undefined4 *)(plVar3 + 2) = *(undefined4 *)(lVar11 + 0x20);
        *plVar3 = lVar8;
        plVar3[1] = lVar2;
        FUN_007e346c(plVar3 + 3,lVar5 + 0x28);
        FUN_007e346c(plVar3 + 7,lVar5 + 0x48);
        *(undefined2 *)(plVar3 + 0xb) = *(undefined2 *)(lVar5 + 0x68);
        if (1 < *piVar1 - 0xdU) goto LAB_0085f700;
        if (*piVar1 == 0xe) {
          FUN_0085e808(param_2,*plVar12);
        }
LAB_0085f7a0:
        lVar8 = *(long *)(param_1 + 0xb8);
        lVar11 = lVar8 + uVar9 * 0x78;
        FUN_007ecf14(lVar11);
        FUN_007ecf14(lVar11 + 8);
        *(undefined8 *)(lVar11 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(lVar11 + 0x18) = 0;
        *(undefined4 *)(lVar11 + 0x20) = 0;
        FUN_007e4488(lVar11 + 0x28);
        FUN_007e4488(lVar11 + 0x48);
        *(undefined2 *)(lVar11 + 0x68) = 0;
        *(undefined4 *)(lVar11 + 0x74) = 0;
        lVar11 = FUN_0085a3c0();
        fVar13 = 5.0;
        if ((lVar11 != 0) && (fVar13 = (float)*(int *)(lVar11 + 4), *(int *)(lVar11 + 4) < 1)) {
          fVar13 = 5.0;
        }
        lVar10 = lVar10 + uVar9 * 0x78;
        *(float *)(lVar8 + uVar9 * 0x78 + 0x70) = fVar13;
        *plVar12 = -1;
        *(undefined8 *)(lVar10 + 0x18) = 0;
        *piVar1 = 0;
        FUN_007e4488(lVar10 + 0x28);
        FUN_007e4488(lVar10 + 0x48);
        *(undefined2 *)(lVar10 + 0x68) = 0;
      }
LAB_0085f700:
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0xc0));
  }
  uVar6 = *(undefined8 *)PTR_DAT_04377550;
  FUN_0082abd0(uVar6);
  if (*param_2 == 0) {
    return;
  }
  iVar7 = 0;
  plVar12 = (long *)FUN_0085e8d4(param_2,0);
  do {
    if ((((plVar12 == (long *)0x0) || (*plVar12 == -1)) || (*plVar12 == *(long *)(param_1 + 0xa0)))
       || (1 < (int)plVar12[2] - 0xdU)) {
      if ((uint)*param_2 <= iVar7 + 1U) {
        return;
      }
    }
    else {
      FUN_0085c5b0(auStack_80,*(undefined8 *)(param_1 + 0xb0));
      FUN_0082abd8(uVar6,auStack_80,(int)plVar12[2] == 0xd);
      if ((uint)*param_2 <= iVar7 + 1U) {
        return;
      }
    }
    iVar7 = iVar7 + 1;
    plVar12 = (long *)FUN_0085e8d4(param_2,iVar7);
  } while( true );
}


