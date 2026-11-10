/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339823c; name: FUN_0339823c
 */


void FUN_0339823c(long param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  long *plVar12;
  uint uVar13;
  ulong uVar14;
  int *piVar15;
  long local_58;
  
  local_58 = 0;
  (**(code **)(*(long *)(param_3[2] & 0xfffffffffffffffe) + 0x38))
            ((long *)(param_3[2] & 0xfffffffffffffffe),*param_3,param_3[1],&local_58);
  lVar8 = local_58;
  uVar4 = FUN_032e35d8(param_2[1]);
  if (((*(char *)(param_1 + 0x2a8) == '\0') || ((uVar4 >> 5 & 1) == 0)) ||
     (uVar11 = uVar4 >> 0x10, uVar11 == 0)) {
    iVar5 = 0;
    if (lVar8 == 0) goto LAB_03398390;
  }
  else {
    if (lVar8 == 0) {
      uVar13 = 1;
      *(undefined1 *)*param_2 = 0;
LAB_03398420:
      uVar13 = uVar11 - uVar13;
      if (uVar13 < 0xff) {
        *(char *)(*param_2 + (ulong)(uVar11 - 1)) = (char)uVar13;
        return;
      }
      if (uVar13 < 0xffff) {
        *(char *)(*param_2 + (ulong)(uVar11 - 3)) = (char)uVar13;
        *(char *)(*param_2 + (ulong)(uVar11 - 2)) = (char)(uVar13 >> 8);
        *(undefined1 *)(*param_2 + (ulong)(uVar11 - 1)) = 0xff;
        return;
      }
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar5 = FUN_032c4900(lVar8);
    uVar13 = iVar5 + 1;
    if (uVar13 <= uVar11) {
      FUN_032c4a00(*param_2,lVar8,uVar13);
      goto LAB_03398420;
    }
  }
  if ((uVar4 >> 7 & 1) == 0) {
    iVar5 = (**(code **)(**(long **)(param_1 + 0x288) + 0x30))();
    uVar6 = *param_3;
    uVar7 = param_3[1];
    uVar14 = param_3[2];
    if ((uVar14 & 1) != 0) {
      FUN_032e0c28(uVar14 & 0xfffffffffffffffe);
    }
    iVar10 = *(int *)(param_1 + 0x298);
    iVar1 = iVar10 + 1;
    lVar8 = *(long *)(param_1 + 0x290);
    if ((int)(*(uint *)(param_1 + 0x29c) & 0x3fffffff) <= iVar10) {
      lVar8 = FUN_03398570(PTR_PTR_0434a080,iVar1);
      iVar10 = *(int *)(param_1 + 0x298);
      *(long *)(param_1 + 0x290) = lVar8;
    }
    puVar2 = (undefined8 *)(lVar8 + (long)iVar10 * 0x20);
    puVar2[2] = uVar14;
    *puVar2 = uVar6;
    puVar2[1] = uVar7;
    *(int *)(puVar2 + 3) = iVar5;
    *(int *)(param_1 + 0x298) = iVar1;
LAB_03398354:
    cVar3 = *(char *)(param_1 + 0x2a8);
  }
  else {
    plVar12 = *(long **)(param_1 + 0x2b0);
    uVar4 = FUN_033988b4(plVar12,&local_58);
    if (*(uint *)(plVar12 + 1) == uVar4) {
      lVar9 = *plVar12;
      if ((int)uVar4 < (int)(*(uint *)((long)plVar12 + 0xc) & 0x3fffffff)) {
        uVar11 = uVar4;
      }
      else {
        lVar9 = FUN_033989d8(PTR_PTR_0434a080,uVar4 + 1,lVar9,uVar4);
        uVar11 = *(uint *)(plVar12 + 1);
        *plVar12 = lVar9;
      }
      lVar9 = lVar9 + (long)(int)uVar11 * 0x10;
      FUN_032c7a54(lVar9,lVar8,0xffffffff);
      *(undefined4 *)(lVar9 + 8) = 0;
      *(uint *)(plVar12 + 1) = uVar4 + 1;
    }
    piVar15 = (int *)(*plVar12 + ((long)((ulong)uVar4 << 0x20) >> 0x1c) + 8);
    iVar5 = *piVar15;
    if (iVar5 != 0) goto LAB_03398354;
    iVar5 = (**(code **)(**(long **)(param_1 + 0x288) + 0x30))();
    *piVar15 = iVar5;
    uVar6 = *param_3;
    uVar7 = param_3[1];
    uVar14 = param_3[2];
    if ((uVar14 & 1) != 0) {
      FUN_032e0c28(uVar14 & 0xfffffffffffffffe);
      iVar5 = *piVar15;
    }
    iVar10 = *(int *)(param_1 + 0x298);
    iVar1 = iVar10 + 1;
    lVar8 = *(long *)(param_1 + 0x290);
    if ((int)(*(uint *)(param_1 + 0x29c) & 0x3fffffff) <= iVar10) {
      lVar8 = FUN_03398570(PTR_PTR_0434a080,iVar1);
      iVar10 = *(int *)(param_1 + 0x298);
      *(long *)(param_1 + 0x290) = lVar8;
    }
    puVar2 = (undefined8 *)(lVar8 + (long)iVar10 * 0x20);
    puVar2[2] = uVar14;
    *puVar2 = uVar6;
    puVar2[1] = uVar7;
    *(int *)(puVar2 + 3) = iVar5;
    *(int *)(param_1 + 0x298) = iVar1;
    iVar5 = *piVar15;
    cVar3 = *(char *)(param_1 + 0x2a8);
  }
  if (cVar3 != '\0') {
    lVar8 = *param_2;
    plVar12 = *(long **)(param_1 + 0x2a0);
    uVar6 = FUN_03398860(param_2[1]);
    uVar7 = FUN_03398860(param_3[1]);
    (**(code **)(*plVar12 + 0x10))(plVar12,lVar8,uVar6,uVar7);
  }
LAB_03398390:
  *(int *)*param_2 = iVar5;
  (**(code **)(**(long **)(param_1 + 0x2a0) + 0x18))
            (*(long **)(param_1 + 0x2a0),*param_2,iVar5,param_3[1]);
  return;
}


