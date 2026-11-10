/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dab83c; name: FUN_02dab83c
 */


void FUN_02dab83c(float param_1,long param_2)

{
  float *pfVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  float *pfVar7;
  int *piVar8;
  ushort *puVar9;
  uint uVar10;
  float local_28;
  float local_24;
  float local_18;
  undefined4 uStack_14;
  
  local_24 = param_1;
  piVar8 = *(int **)(param_2 + 0x220);
  if (piVar8 == (int *)0x0) {
    return;
  }
  puVar9 = (ushort *)((long)piVar8 - (long)*piVar8);
  if (*puVar9 < 7) {
    local_18 = 0.9;
    pfVar7 = &local_18;
    if (0.9 <= param_1) {
      pfVar7 = &local_24;
    }
  }
  else {
    if ((ulong)puVar9[3] == 0) {
      local_18 = 0.9;
    }
    else {
      local_18 = *(float *)((long)piVar8 + (ulong)puVar9[3]);
    }
    pfVar7 = &local_18;
    if (local_18 <= param_1) {
      pfVar7 = &local_24;
    }
    if ((8 < *puVar9) && ((ulong)puVar9[4] != 0)) {
      local_28 = *(float *)((long)piVar8 + (ulong)puVar9[4]);
      goto LAB_02dab8a4;
    }
  }
  local_28 = 1.1;
LAB_02dab8a4:
  pfVar1 = &local_28;
  if (*pfVar7 <= local_28) {
    pfVar1 = pfVar7;
  }
  *(float *)(param_2 + 0x270) = *pfVar1;
  FUN_009c69bc(&local_18,param_2);
  uVar10 = *(uint *)(param_2 + 0x270);
  plVar5 = (long *)CONCAT44(uStack_14,local_18);
  *(undefined1 *)(plVar5 + 0x1c) = 1;
  plVar5[0x17] = (ulong)uVar10;
  plVar5[0x16] = CONCAT44(uVar10,uVar10);
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar8 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar4) {
        *piVar8 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  return;
}


