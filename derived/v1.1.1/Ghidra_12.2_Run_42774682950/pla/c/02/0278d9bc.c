/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0278d9bc; name: FUN_0278d9bc
 */


void FUN_0278d9bc(undefined1 *param_1,long param_2,undefined4 param_3,char *param_4,long *param_5)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined1 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *local_150;
  long *local_148;
  undefined1 auStack_140 [120];
  char local_c8 [4];
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar8 = FUN_0278ed7c(param_3);
  if ((uVar8 & 1) == 0) {
LAB_0278da1c:
    *param_1 = 0;
    return;
  }
  if (*param_5 == param_5[1]) goto LAB_0278da1c;
  if (*param_4 == '\0') {
    lVar10 = 0;
  }
  else if (param_4[0x7c] == '\0') {
    lVar10 = 1;
  }
  else if (param_4[0xf8] == '\0') {
    lVar10 = 2;
  }
  else {
    if (param_4[0x174] != '\0') goto LAB_0278da1c;
    lVar10 = 3;
  }
  uVar8 = FUN_0278d150((param_5[1] - *param_5 >> 4) + -1);
  if ((ulong)(param_5[1] - *param_5 >> 4) <= uVar8) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  puVar3 = (undefined8 *)(*param_5 + uVar8 * 0x10);
  local_50 = *puVar3;
  uStack_48 = puVar3[1];
  uVar7 = FUN_02786460();
  local_50 = CONCAT71(local_50._1_7_,uVar7);
  local_148 = *(long **)(param_2 + 0x50);
  if (local_148 != (long *)0x0) {
    lVar11 = local_148[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_150 = *(long **)(param_2 + 0x58);
  if (local_150 != (long *)0x0) {
    plVar2 = local_150 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_02795450(auStack_140,&local_148,&local_150,&local_50);
  FUN_0278d4b0(local_c8,param_2,auStack_140,param_5);
  if (local_150 == (long *)0x0) {
LAB_0278db20:
    if (local_148 == (long *)0x0) goto LAB_0278db44;
LAB_0278db28:
    lVar11 = local_148[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 != 0) goto LAB_0278db44;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*local_148 + 0x20))();
    if (local_c8[0] == '\0') {
      uVar7 = 0;
      goto LAB_0278dbe4;
    }
  }
  else {
    plVar2 = local_150 + 10;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 != 0) goto LAB_0278db20;
    (**(code **)(*local_150 + 0x10))();
    if (local_148 != (long *)0x0) goto LAB_0278db28;
LAB_0278db44:
    uVar7 = 0;
    if (local_c8[0] == '\0') goto LAB_0278dbe4;
  }
  *(undefined8 *)(param_1 + 0x1c) = local_b4;
  *(undefined4 *)(param_1 + 8) = (&DAT_03a7e050)[lVar10];
  *(undefined8 *)(param_1 + 0x2c) = local_a4;
  *(undefined8 *)(param_1 + 0x24) = local_ac;
  *(undefined8 *)(param_1 + 0x5c) = local_74;
  *(undefined8 *)(param_1 + 0x54) = local_7c;
  *(undefined8 *)(param_1 + 0x4c) = local_84;
  *(undefined8 *)(param_1 + 0x14) = local_bc;
  *(undefined8 *)(param_1 + 0xc) = local_c4;
  *(undefined8 *)(param_1 + 0x3c) = local_94;
  *(undefined8 *)(param_1 + 0x34) = local_9c;
  *(undefined8 *)(param_1 + 0x44) = local_8c;
  *(undefined4 *)(param_1 + 0x7c) = local_54;
  *(undefined8 *)(param_1 + 0x74) = local_5c;
  *(undefined8 *)(param_1 + 100) = local_6c;
  uVar7 = 1;
  param_1[4] = (char)lVar10;
  *(undefined8 *)(param_1 + 0x6c) = local_64;
LAB_0278dbe4:
  *param_1 = uVar7;
  return;
}


