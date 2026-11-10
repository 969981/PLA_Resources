/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339fc5c; name: FUN_0339fc5c
 */


void FUN_0339fc5c(long *param_1,undefined8 *param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_2e0;
  undefined1 auStack_2d8 [336];
  undefined8 local_188;
  long local_180;
  long local_178;
  undefined8 local_170;
  ulong local_168;
  undefined1 auStack_160 [8];
  long *local_158;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined4 local_70;
  long local_68;
  long local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = param_4;
  if (*(long *)(lVar4 + 0x38d490) == 0) {
    lVar12 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar12;
    lVar12 = *(long *)(lVar12 + 0x10);
  }
  else {
    lVar12 = *(long *)(*(long *)(lVar4 + 0x38d490) + 0x10);
  }
  if (lVar12 != 0) {
    puVar1 = *(undefined8 **)(lVar12 + 8);
    uVar9 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= *(ulong *)(lVar12 + 0x10)) &&
       (*(ulong *)(lVar12 + 8) = uVar9, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtClone to native (hkReflect::Var)";
      uVar7 = nn::os::GetSystemTick();
      puVar1[1] = uVar7;
    }
  }
  local_60 = lVar12;
  FUN_03306f24(param_2[3]);
  lVar10 = *(long *)(lVar4 + 0x38d490);
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar10;
  }
  plVar6 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
  lVar10 = (**(code **)(*plVar6 + 0x10))(plVar6,0xc0,0);
  FUN_03309708();
  local_78 = &DAT_03aad864;
  local_70 = 0;
  local_88 = 0;
  uStack_80 = 0x8000000000000000;
  local_68 = lVar10;
  iVar5 = FUN_0339ef90(param_3,&local_68,&local_88);
  if (iVar5 < 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    goto LAB_0339fe44;
  }
  FUN_0339f578(auStack_160,param_3,param_2[4],*param_2,&local_68,&local_88,param_2[6],
               *(undefined1 *)(param_2 + 5));
  (**(code **)(*param_3 + 0x10))(&local_178,param_3);
  if (param_4 == 0) {
LAB_0339fda0:
    if (local_178 == 0) goto LAB_0339fe2c;
    if (*(long *)(lVar4 + 0x38d490) == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar10;
      lVar10 = *(long *)(lVar10 + 0x10);
    }
    else {
      lVar10 = *(long *)(*(long *)(lVar4 + 0x38d490) + 0x10);
    }
    if (lVar10 != 0) {
      puVar1 = *(undefined8 **)(lVar10 + 8);
      uVar9 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= *(ulong *)(lVar10 + 0x10)) &&
         (*(ulong *)(lVar10 + 8) = uVar9, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = "TtClone";
        uVar7 = nn::os::GetSystemTick();
        puVar1[1] = uVar7;
      }
    }
    local_180 = lVar10;
    FUN_03307230(param_1,param_2[3],&local_178,auStack_160);
    if (*param_1 == 0) {
      if ((DAT_04450e08 < 2) && (uVar9 = FUN_03327170(), (uVar9 & 1) == 0)) {
        uVar9 = param_1[2];
      }
      else {
        uVar9 = FUN_03327170();
        if ((uVar9 & 1) == 0) {
          FUN_03326994(auStack_2d8,&DAT_04450db8,2);
          lVar11 = FUN_03326338(auStack_2d8,"Unable to clone contents",PTR_DAT_04372528);
          *(char **)(lVar11 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/hkSerialize.cpp";
          *(undefined8 *)(lVar11 + 0x40) = 0x361;
          FUN_033269dc(auStack_2d8);
          uVar9 = param_1[2];
        }
        else {
          FUN_03326a7c(auStack_2d8,&DAT_04450db8,2);
          lVar11 = FUN_03326338(auStack_2d8,"Unable to clone contents",PTR_DAT_04372528);
          *(char **)(lVar11 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/hkSerialize.cpp";
          *(undefined8 *)(lVar11 + 0x40) = 0x361;
          FUN_03326adc(auStack_2d8);
          uVar9 = param_1[2];
        }
      }
      if ((uVar9 & 1) != 0) {
        plVar8 = (long *)(uVar9 & 0xfffffffffffffffe);
        plVar6 = plVar8 + 1;
        do {
          lVar11 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *(int *)plVar6 = (int)lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        bVar3 = true;
        if ((plVar8 == (long *)0x0) || ((int)lVar11 != 1)) goto LAB_0339fe10;
        (**(code **)(*plVar8 + 8))();
      }
      bVar3 = true;
      if (lVar10 != 0) goto LAB_0339fe14;
LAB_0339fe28:
      if (bVar3) goto LAB_0339fe2c;
    }
    else {
      (**(code **)(*param_3 + 0x28))(param_3);
      bVar3 = false;
LAB_0339fe10:
      if (lVar10 == 0) goto LAB_0339fe28;
LAB_0339fe14:
      puVar1 = *(undefined8 **)(lVar10 + 8);
      uVar9 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((*(ulong *)(lVar10 + 0x10) < uVar9) ||
         (*(ulong *)(lVar10 + 8) = uVar9, puVar1 == (undefined8 *)0x0)) goto LAB_0339fe28;
      *puVar1 = &DAT_0390f40e;
      uVar7 = nn::os::GetSystemTick();
      puVar1[1] = uVar7;
      if (bVar3) goto LAB_0339fe2c;
    }
  }
  else {
    local_180 = (**(code **)(*local_158 + 0x28))(local_158,local_170);
    if (local_180 == 0) {
      if ((1 < DAT_04450e08) || (uVar9 = FUN_03327170(), (uVar9 & 1) != 0)) {
        uVar9 = FUN_03327170();
        if ((uVar9 & 1) == 0) {
          FUN_03326994(auStack_2d8,&DAT_04450db8,2);
          local_188 = local_170;
          lVar10 = FUN_03326338(auStack_2d8,
                                "Loaded type mismatch, loaded type {} does not correspond to any native type and cannot be compared to requested type {}"
                                ,&DAT_043706d0,&local_188,&local_58);
          uVar7 = 0x351;
          goto LAB_033a0010;
        }
        FUN_03326a7c(auStack_2d8,&DAT_04450db8,2);
        local_2e0 = local_170;
        lVar10 = FUN_03326338(auStack_2d8,
                              "Loaded type mismatch, loaded type {} does not correspond to any native type and cannot be compared to requested type {}"
                              ,&DAT_043706d0,&local_2e0,&local_58);
        uVar7 = 0x351;
LAB_033a01c0:
        *(char **)(lVar10 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/hkSerialize.cpp";
        *(undefined8 *)(lVar10 + 0x40) = uVar7;
        FUN_03326adc(auStack_2d8);
      }
    }
    else {
      uVar9 = FUN_032e225c(local_180,param_4);
      if ((uVar9 & 1) != 0) goto LAB_0339fda0;
      if ((1 < DAT_04450e08) || (uVar9 = FUN_03327170(), (uVar9 & 1) != 0)) {
        uVar9 = FUN_03327170();
        if ((uVar9 & 1) != 0) {
          FUN_03326a7c(auStack_2d8,&DAT_04450db8,2);
          lVar10 = FUN_03326338(auStack_2d8,
                                "Loaded type mismatch, requested type {} from a stream containing {}"
                                ,&DAT_043706d0,&local_58,&local_180);
          uVar7 = 0x353;
          goto LAB_033a01c0;
        }
        FUN_03326994(auStack_2d8,&DAT_04450db8,2);
        lVar10 = FUN_03326338(auStack_2d8,
                              "Loaded type mismatch, requested type {} from a stream containing {}",
                              &DAT_043706d0,&local_58,&local_180);
        uVar7 = 0x353;
LAB_033a0010:
        *(char **)(lVar10 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/hkSerialize.cpp";
        *(undefined8 *)(lVar10 + 0x40) = uVar7;
        FUN_033269dc(auStack_2d8);
      }
    }
LAB_0339fe2c:
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  if ((local_168 & 1) != 0) {
    plVar8 = (long *)(local_168 & 0xfffffffffffffffe);
    plVar6 = plVar8 + 1;
    do {
      lVar10 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar10 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  FUN_0339f7f0(auStack_160);
LAB_0339fe44:
  FUN_0339fa0c(&local_88);
  lVar10 = local_68;
  if (local_68 != 0) {
    FUN_03309b44(local_68);
    lVar11 = *(long *)(lVar4 + 0x38d490);
    if (lVar11 == 0) {
      lVar11 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar11;
    }
    plVar6 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar10,0xc0);
  }
  if (lVar12 != 0) {
    puVar1 = *(undefined8 **)(lVar12 + 8);
    uVar9 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= *(ulong *)(lVar12 + 0x10)) &&
       (*(ulong *)(lVar12 + 8) = uVar9, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_0390f40e;
      uVar7 = nn::os::GetSystemTick();
      puVar1[1] = uVar7;
    }
  }
  return;
}


