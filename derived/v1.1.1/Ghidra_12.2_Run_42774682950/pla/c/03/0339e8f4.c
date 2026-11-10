/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339e8f4; name: FUN_0339e8f4
 */


void FUN_0339e8f4(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_2b8 [16];
  ulong local_2a8;
  long local_168;
  undefined8 uStack_160;
  ulong local_158;
  undefined1 auStack_150 [168];
  long local_a8;
  int local_a0;
  long local_98;
  int local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  if (*(long *)(lVar3 + 0x38d490) == 0) {
    lVar12 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar12;
    lVar12 = *(long *)(lVar12 + 0x10);
  }
  else {
    lVar12 = *(long *)(*(long *)(lVar3 + 0x38d490) + 0x10);
  }
  if (lVar12 != 0) {
    puVar6 = *(undefined8 **)(lVar12 + 8);
    uVar8 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar8 <= *(ulong *)(lVar12 + 0x10)) &&
       (*(ulong *)(lVar12 + 8) = uVar8, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = "TtClone to native (hkObjectResource)";
      uVar11 = nn::os::GetSystemTick();
      puVar6[1] = uVar11;
    }
  }
  FUN_03306f24(param_2[3]);
  lVar9 = *(long *)(lVar3 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar9;
  }
  plVar5 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
  lVar9 = (**(code **)(*plVar5 + 0x10))(plVar5,0xc0,0);
  FUN_03309708();
  local_68 = &DAT_03aad864;
  local_60 = 0;
  local_78 = 0;
  uStack_70 = 0x8000000000000000;
  local_58 = lVar9;
  iVar4 = FUN_0339ef90(param_3,&local_58,&local_78);
  if (iVar4 < 0) {
    *param_1 = 0;
    goto LAB_0339eacc;
  }
  FUN_0339f578(auStack_150,param_3,param_2[4],*param_2,&local_58,&local_78,param_2[6],
               *(undefined1 *)(param_2 + 5));
  uVar11 = param_2[3];
  (**(code **)(*param_3 + 0x10))(auStack_2b8,param_3);
  FUN_03307230(&local_168,uVar11,auStack_2b8,auStack_150);
  if ((local_2a8 & 1) == 0) {
LAB_0339ea24:
    if (local_168 == 0) goto LAB_0339ecec;
LAB_0339ea2c:
    lVar9 = *(long *)(lVar3 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar3 + 0x38d490) = lVar9;
    }
    plVar5 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x50,0);
    *puVar6 = &PTR_LAB_0436fb90;
    puVar6[1] = 0xffffffff;
    puVar6[2] = 1;
    puVar6[3] = local_168;
    puVar6[4] = uStack_160;
    puVar6[5] = local_158;
    if ((local_158 & 1) != 0) {
      FUN_032e0c28(local_158 & 0xfffffffffffffffe);
    }
    *puVar6 = &PTR_LAB_04370640;
    puVar6[6] = 0;
    puVar6[7] = 0x8000000000000000;
    puVar6[8] = 0;
    puVar6[9] = 0x8000000000000000;
    if (local_90 != 0) {
      lVar10 = (long)local_90 * 0x28;
      lVar9 = local_98;
      do {
        FUN_0339f6e8(puVar6,lVar9,*(ulong *)(lVar9 + 0x18) & 0xfffffffffffffffe);
        lVar9 = lVar9 + 0x28;
        lVar10 = lVar10 + -0x28;
      } while (lVar10 != 0);
    }
    if (local_a0 != 0) {
      lVar9 = local_a8;
      do {
        FUN_032dd9e8(auStack_2b8,lVar9 + 0x20);
        FUN_0339f770(puVar6,lVar9,auStack_2b8);
        if ((local_2a8 & 1) != 0) {
          plVar7 = (long *)(local_2a8 & 0xfffffffffffffffe);
          plVar5 = plVar7 + 1;
          do {
            lVar10 = *plVar5;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *(int *)plVar5 = (int)lVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if ((plVar7 != (long *)0x0) && ((int)lVar10 == 1)) {
            (**(code **)(*plVar7 + 8))();
          }
        }
        lVar9 = lVar9 + 0x40;
      } while (lVar9 != local_a8 + (long)local_a0 * 0x40);
    }
    *param_1 = puVar6;
  }
  else {
    plVar7 = (long *)(local_2a8 & 0xfffffffffffffffe);
    plVar5 = plVar7 + 1;
    do {
      lVar9 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *(int *)plVar5 = (int)lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((plVar7 == (long *)0x0) || ((int)lVar9 != 1)) goto LAB_0339ea24;
    (**(code **)(*plVar7 + 8))();
    if (local_168 != 0) goto LAB_0339ea2c;
LAB_0339ecec:
    if ((1 < DAT_04450e08) || (uVar8 = FUN_03327170(), (uVar8 & 1) != 0)) {
      uVar8 = FUN_03327170();
      if ((uVar8 & 1) == 0) {
        FUN_03326994(auStack_2b8,&DAT_04450db8,2);
        lVar9 = FUN_03326338(auStack_2b8,"Unable to create native objects",PTR_DAT_04372528);
        *(char **)(lVar9 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/hkSerialize.cpp";
        *(undefined8 *)(lVar9 + 0x40) = 0x2b7;
        FUN_033269dc(auStack_2b8);
      }
      else {
        FUN_03326a7c(auStack_2b8,&DAT_04450db8,2);
        lVar9 = FUN_03326338(auStack_2b8,"Unable to create native objects",PTR_DAT_04372528);
        *(char **)(lVar9 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/hkSerialize.cpp";
        *(undefined8 *)(lVar9 + 0x40) = 0x2b7;
        FUN_03326adc(auStack_2b8);
      }
    }
    *param_1 = 0;
  }
  if ((local_158 & 1) != 0) {
    plVar7 = (long *)(local_158 & 0xfffffffffffffffe);
    plVar5 = plVar7 + 1;
    do {
      lVar9 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *(int *)plVar5 = (int)lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar9 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  FUN_0339f7f0(auStack_150);
LAB_0339eacc:
  FUN_0339fa0c(&local_78);
  lVar9 = local_58;
  if (local_58 != 0) {
    FUN_03309b44(local_58);
    lVar10 = *(long *)(lVar3 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar3 + 0x38d490) = lVar10;
    }
    plVar5 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,0xc0);
  }
  if (lVar12 != 0) {
    puVar6 = *(undefined8 **)(lVar12 + 8);
    uVar8 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar8 <= *(ulong *)(lVar12 + 0x10)) &&
       (*(ulong *)(lVar12 + 8) = uVar8, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = &DAT_0390f40e;
      uVar11 = nn::os::GetSystemTick();
      puVar6[1] = uVar11;
    }
  }
  return;
}


