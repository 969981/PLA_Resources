/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c073d4; name: FUN_02c073d4
 */


void FUN_02c073d4(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  uint uVar10;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  long *local_38;
  
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  lVar5 = tpidr_el0;
  lVar8 = *(long *)(lVar5 + 0x38d490);
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar8;
  }
  plVar3 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,8,0);
  lVar8 = *(long *)(lVar5 + 0x38d490);
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar8;
  }
  plVar4 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
  lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,0xc0,0);
  FUN_03309708();
  *plVar3 = lVar5;
  local_48 = 1;
  local_40 = 0;
  uStack_50 = 0;
  *(undefined1 *)(lVar5 + 0x5d) = 0;
  local_70 = DAT_0444ab10;
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar5 + 0x240);
  }
  local_58 = plVar3;
  FUN_0339ee08(&local_38,&local_70,*(undefined8 *)(lVar5 + 0x250),uVar7,0);
  FUN_0339e0a4(&local_70);
  if (local_38 != (long *)0x0) {
    lVar5 = (**(code **)(*local_38 + 0x40))(local_38,&DAT_0436f848);
    if (lVar5 != 0) {
      puVar9 = &DAT_042d1da8;
      while( true ) {
        uVar10 = (uint)*puVar9;
        if ((uVar10 >> 3 & 1) != 0) break;
        if (((*puVar9 & 1) != 0) || (puVar9 = (ulong *)puVar9[1], puVar9 == (ulong *)0x0))
        goto LAB_02c074f8;
      }
      if (puVar9 != (ulong *)0x0) {
        uVar10 = (uVar10 & 7) - (uVar10 >> 1 & 1);
        uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
        uVar6 = puVar9[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
        goto LAB_02c0753c;
      }
LAB_02c074f8:
      uVar6 = 0;
LAB_02c0753c:
      lVar5 = FUN_0339aad4(lVar5,uVar6,0);
      if ((lVar5 != 0) && (*(long *)(lVar5 + 8) != 0)) {
        plVar3 = (long *)(lVar5 + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar3 = (long *)*param_2;
      *param_2 = lVar5;
      if ((plVar3 != (long *)0x0) && (plVar3[1] != 0)) {
        plVar4 = plVar3 + 2;
        do {
          lVar5 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(*plVar3 + 0x18))();
        }
      }
    }
    if ((local_38 != (long *)0x0) && (local_38[1] != 0)) {
      plVar3 = local_38 + 2;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*local_38 + 0x18))();
      }
    }
  }
  return;
}


