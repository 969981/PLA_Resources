/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009a34a8; name: FUN_009a34a8
 */


void FUN_009a34a8(long *param_1,long param_2,undefined2 param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  long *local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  undefined4 local_74;
  long *local_70;
  undefined1 local_64 [4];
  undefined1 local_58 [4];
  undefined2 local_54 [2];
  
  local_64[0] = 0x1f;
  local_98 = *(long **)(param_2 + 8);
  local_74 = 0;
  local_58[0] = param_4;
  local_54[0] = param_3;
  FUN_009a3430(&local_70,local_98,&local_98,local_58,local_64,&local_74,local_54);
  plVar8 = local_70;
  local_98 = (long *)0x51960f1575f468b;
  pcStack_90 = "bin/effect/battle/sequence/cmn_item_use_other.wbin";
  local_88 = 0x32;
  local_80 = (long *)0x0;
  FUN_00adc9e8(local_70,&local_98,*(undefined8 *)(param_2 + 8));
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = plVar8;
  lVar10 = plVar8[0xb];
  if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_009a374c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar10 + 0x10) == 0) {
    uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
    *(undefined8 *)(lVar10 + 0x10) = uVar9;
  }
  plVar8 = local_98;
  piVar1 = (int *)(lVar10 + 0xc);
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = *piVar1 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *(undefined4 *)(local_98 + 0xd) = 1;
  FUN_0099ae98(param_2 + 0x4a0,&local_98);
  if (((((*(byte *)(param_2 + 0x770) & 0x1f) != 0) || ((*(byte *)(param_2 + 0x768) & 0x1f) != 0)) &&
      (*(int *)(param_2 + 0x7b8) == 1)) && (lVar10 = FUN_0099d310(plVar8 + 10), lVar10 != 0)) {
    uVar13 = *(undefined4 *)(param_2 + 0x7c0);
    *(undefined4 *)(lVar10 + 0xf0) = uVar13;
    plVar4 = *(long **)(lVar10 + 0x80);
    for (plVar3 = *(long **)(lVar10 + 0x78); plVar3 != plVar4; plVar3 = plVar3 + 1) {
      puVar12 = *(undefined8 **)(*plVar3 + 0xe0);
      puVar5 = *(undefined8 **)(*plVar3 + 0xe8);
      if ((puVar12 != puVar5) &&
         ((**(code **)(*(long *)*puVar12 + 0x90))(uVar13), puVar12 + 1 != puVar5)) {
        (**(code **)(*(long *)puVar12[1] + 0x90))(uVar13);
        for (puVar12 = puVar12 + 2; puVar12 != puVar5; puVar12 = puVar12 + 1) {
          (**(code **)(*(long *)*puVar12 + 0x90))(uVar13);
        }
      }
    }
  }
  if (plVar8 != (long *)0x0) {
    lVar10 = plVar8[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  lVar10 = FUN_009bb6f0(*(undefined8 *)(param_2 + 8),&local_70);
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_009a374c;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  *param_1 = lVar10;
  if (local_70 != (long *)0x0) {
    lVar10 = local_70[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  return;
}


