/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f27424; name: FUN_02f27424
 */


void FUN_02f27424(long param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined4 local_60;
  int iStack_5c;
  ushort local_58;
  undefined1 local_56;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  long *local_40 [2];
  
  plVar4 = *(long **)(param_1 + 800);
  if (plVar4 != (long *)0x0) {
    plVar6 = (long *)plVar4[0xc];
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,&PTR_PTR_042a9250);
      *(undefined8 *)(*(long *)(param_1 + 800) + 0x60) = 0;
      plVar4 = *(long **)(param_1 + 800);
    }
    (**(code **)(*plVar4 + 0x28))();
    *(undefined4 *)(*(long *)(param_1 + 800) + 0x68) = 0xffffffff;
  }
  local_40[0] = (long *)0x0;
  FUN_02f18770(param_1 + 0x68,local_40);
  if (local_40[0] == (long *)0x0) {
    return;
  }
  *(int *)(*(long *)(param_1 + 800) + 0x68) = (int)local_40[0][6];
  if (local_40[0][7] == 0) goto LAB_02f276d4;
  local_50 = 0;
  local_48 = 1;
  local_46 = 0;
  lVar5 = FUN_02eaeebc(*(undefined8 *)(param_1 + 800),local_40[0],0,*(long *)(param_1 + 8) + 0x10,
                       *(long *)(param_1 + 8) + 0x50,1);
  if (lVar5 == 0) {
LAB_02f275cc:
    plVar4 = *(long **)(param_1 + 800);
joined_r0x02f27684:
    if (plVar4 != (long *)0x0) {
      plVar6 = (long *)plVar4[0xc];
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,&PTR_PTR_042a9250);
        *(undefined8 *)(*(long *)(param_1 + 800) + 0x60) = 0;
        plVar4 = *(long **)(param_1 + 800);
      }
      (**(code **)(*plVar4 + 0x28))();
      *(undefined4 *)(*(long *)(param_1 + 800) + 0x68) = 0xffffffff;
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 800);
    *(undefined8 *)(lVar5 + 0x60) = 0;
    if ((DAT_0440a430 == 0) || (*DAT_0440a428 == *(int *)(lVar5 + 0x68))) {
      piVar8 = DAT_0440a428;
    }
    else {
      lVar7 = (ulong)DAT_0440a430 * 0x20;
      piVar2 = DAT_0440a428;
      do {
        lVar7 = lVar7 + -0x20;
        if (lVar7 == 0) goto LAB_02f275cc;
        piVar1 = piVar2 + 8;
        piVar8 = piVar2 + 8;
        piVar2 = piVar2 + 8;
      } while (*piVar1 != *(int *)(lVar5 + 0x68));
    }
    if (piVar8 == DAT_0440a428 + (ulong)DAT_0440a430 * 8) goto LAB_02f275cc;
    plVar4 = (long *)(**(code **)(piVar8 + 2))(&PTR_PTR_042a9250);
    *(long **)(lVar5 + 0x60) = plVar4;
    if (plVar4 == (long *)0x0) goto LAB_02f275cc;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_50);
    lVar5 = *(long *)(param_1 + 800);
    if (0x101 < local_50._4_4_ - 0x7e201U) {
      if (((*(uint *)(lVar5 + 0x68) & 0xfff0) == 0x10a0) &&
         (puVar9 = *(undefined8 **)(lVar5 + 0x60), puVar9 != (undefined8 *)0x0)) {
        (**(code **)*puVar9)(puVar9);
        (**(code **)(PTR_PTR_042a9250 + 0x18))(&PTR_PTR_042a9250,puVar9);
        lVar5 = *(long *)(param_1 + 800);
      }
      *(undefined8 *)(lVar5 + 0x60) = 0;
      plVar4 = *(long **)(param_1 + 800);
      goto joined_r0x02f27684;
    }
    if ((int)local_50 != 6) goto LAB_02f275cc;
    iStack_5c = *(int *)(param_1 + 0x80);
    local_60 = DAT_042ab258;
    local_58 = (ushort)(iStack_5c << 8) | 0x20;
    local_56 = 5;
    iVar3 = (**(code **)(**(long **)(lVar5 + 0x60) + 0x38))
                      (*(long **)(lVar5 + 0x60),&PTR_PTR_042a9250,param_1 + 0xa8,
                       *(undefined8 *)(lVar5 + 8),&local_60);
    if ((iVar3 != 1) ||
       (iVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 800) + 0x60) + 0x18))(), iVar3 != 1))
    goto LAB_02f275cc;
  }
  if (local_40[0] == (long *)0x0) {
    return;
  }
LAB_02f276d4:
  (**(code **)(*local_40[0] + 0x18))(local_40[0]);
  return;
}


