/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f5d794; name: FUN_02f5d794
 */


void FUN_02f5d794(long param_1,long param_2)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  int *piVar12;
  int *local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  local_50 = (int *)0x0;
  local_48 = -0x8000000000000000;
  FUN_02f5ce7c(param_1,0xff,&local_50);
  lVar8 = *(long *)(param_1 + 8);
  if ((int)local_48 != 0) {
    piVar2 = local_50 + (long)(int)local_48 * 2;
    piVar12 = local_50;
    do {
      plVar5 = (long *)(*(long *)(*(long *)(lVar8 + 0x10) + (long)piVar12[1] * 8) + 8);
      plVar10 = (long *)(*(long *)(*(long *)(lVar8 + 0x10) + (long)*piVar12 * 8) + 8);
      if (*(char *)(param_2 + 8) == '\0') {
        FUN_0335a780(plVar10,plVar5,param_2,1,1,&local_40);
      }
      else {
        local_40 = 0;
        if (*plVar10 != 0) {
          local_40 = *plVar10 + (long)plVar10;
        }
        local_38 = 0;
        if (*plVar5 != 0) {
          local_38 = *plVar5 + (long)plVar5;
        }
        FUN_03359650(plVar10,plVar5,param_2,1,1,&local_40);
      }
      lVar8 = *(long *)(param_1 + 8);
      piVar12 = piVar12 + 2;
    } while (piVar12 != piVar2);
  }
  iVar4 = *(int *)(lVar8 + 0x18);
  if (iVar4 != 0) {
    plVar10 = *(long **)(lVar8 + 0x10);
    uVar11 = (long)iVar4 * 8 - 8;
    uVar1 = ((uint)(uVar11 >> 3) & 0x1fffffff) + 1;
    plVar5 = plVar10;
    if ((uVar1 & 3) != 0) {
      lVar8 = -((ulong)uVar1 & 3);
      plVar9 = plVar10;
      do {
        plVar5 = plVar9 + 1;
        bVar3 = lVar8 != -1;
        lVar8 = lVar8 + 1;
        *(undefined1 *)(*plVar9 + 0x1aec) = 0;
        plVar9 = plVar5;
      } while (bVar3);
    }
    if (0x17 < uVar11) {
      do {
        *(undefined1 *)(*plVar5 + 0x1aec) = 0;
        *(undefined1 *)(plVar5[1] + 0x1aec) = 0;
        *(undefined1 *)(plVar5[2] + 0x1aec) = 0;
        plVar9 = plVar5 + 3;
        plVar5 = plVar5 + 4;
        *(undefined1 *)(*plVar9 + 0x1aec) = 0;
      } while (plVar5 != plVar10 + iVar4);
    }
  }
  iVar4 = *(int *)(param_2 + 0xf10);
  if (iVar4 == 0) goto LAB_02f5d950;
  lVar8 = *(long *)(*(long *)(param_2 + 0x28) + 8);
  plVar5 = *(long **)(lVar8 + 0x4b8);
  if (plVar5 == (long *)0x0) {
LAB_02f5d8f4:
    if (0 < iVar4) {
      lVar8 = 0;
      do {
        iVar4 = *(int *)(*(long *)(param_2 + 0x20) + 0x18);
        if (iVar4 < 0xed9) {
          puVar6 = (undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0x10) + (long)iVar4 + 0x20);
        }
        else {
          puVar6 = (undefined8 *)FUN_032bf82c();
        }
        *puVar6 = *(undefined8 *)(param_2 + 0x30 + lVar8 * 8);
        lVar7 = *(long *)(param_2 + 0x20);
        *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 8;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(param_2 + 0xf10));
    }
  }
  else {
    iVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,lVar8,param_2 + 0x30);
    *(int *)(param_2 + 0xf10) = iVar4;
    if (iVar4 != 0) goto LAB_02f5d8f4;
  }
  *(undefined4 *)(param_2 + 0xf10) = 0;
LAB_02f5d950:
  lVar8 = local_48;
  uVar11 = (ulong)local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_50 != (int *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))
              (PTR_PTR_0434a090,local_50,(uVar11 & 0x3fffffff) << 3);
  }
  return;
}


