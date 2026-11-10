/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a7edec; name: FUN_02a7edec
 */


byte * FUN_02a7edec(locale *param_1,byte *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined **ppuVar13;
  byte *pbVar14;
  locale alStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  
  plVar1 = DAT_043f1798;
  if (param_2 == (byte *)0x38d87af) {
    return (byte *)0x38d87af;
  }
  bVar4 = *param_2;
  if (0x5b < bVar4) {
    if (bVar4 == 0x5c) {
      if (param_2 + 1 == (byte *)0x38d87af) {
        return param_2;
      }
      bVar4 = param_2[1];
      if (bVar4 == 0x42) {
        lVar12 = tpidr_el0;
        plVar10 = *(long **)(lVar12 + 0x20);
        if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
          *(long **)(lVar12 + 0x20) = DAT_043f1798;
          plVar10 = plVar1;
        }
        puVar9 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x30,8);
        uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
        *puVar9 = &PTR_LAB_0427f298;
        puVar9[1] = uVar11;
        std::locale::locale((locale *)(puVar9 + 2),param_1);
        uVar11 = *(undefined8 *)(param_1 + 0x10);
        puVar9[3] = *(undefined8 *)(param_1 + 8);
        puVar9[4] = uVar11;
        *(undefined1 *)(puVar9 + 5) = 1;
      }
      else {
        if (bVar4 != 0x62) {
          return param_2;
        }
        lVar12 = tpidr_el0;
        plVar10 = *(long **)(lVar12 + 0x20);
        if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
          *(long **)(lVar12 + 0x20) = DAT_043f1798;
          plVar10 = plVar1;
        }
        puVar9 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x30,8);
        uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
        *puVar9 = &PTR_LAB_0427f298;
        puVar9[1] = uVar11;
        std::locale::locale((locale *)(puVar9 + 2),param_1);
        uVar11 = *(undefined8 *)(param_1 + 8);
        uVar2 = *(undefined8 *)(param_1 + 0x10);
        *(undefined1 *)(puVar9 + 5) = 0;
        puVar9[3] = uVar11;
        puVar9[4] = uVar2;
      }
      *(undefined8 **)(*(long *)(param_1 + 0x38) + 8) = puVar9;
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      return param_2 + 2;
    }
    if (bVar4 != 0x5e) {
      return param_2;
    }
    lVar12 = tpidr_el0;
    plVar10 = *(long **)(lVar12 + 0x20);
    if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
      *(long **)(lVar12 + 0x20) = DAT_043f1798;
      plVar10 = plVar1;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,8);
    lVar12 = *(long *)(param_1 + 0x38);
    ppuVar13 = &PTR_LAB_0427f238;
LAB_02a7f0bc:
    uVar11 = *(undefined8 *)(lVar12 + 8);
    *puVar9 = ppuVar13;
    puVar9[1] = uVar11;
    *(undefined8 **)(lVar12 + 8) = puVar9;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    return param_2 + 1;
  }
  if (bVar4 == 0x24) {
    lVar12 = tpidr_el0;
    plVar10 = *(long **)(lVar12 + 0x20);
    if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
      *(long **)(lVar12 + 0x20) = DAT_043f1798;
      plVar10 = plVar1;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,8);
    lVar12 = *(long *)(param_1 + 0x38);
    ppuVar13 = &PTR_LAB_0427f268;
    goto LAB_02a7f0bc;
  }
  if (bVar4 != 0x28) {
    return param_2;
  }
  if (param_2 + 1 == (byte *)0x38d87af) {
    return param_2;
  }
  if (param_2[1] != 0x3f) {
    return param_2;
  }
  if (param_2 + 2 == (byte *)0x38d87af) {
    return param_2;
  }
  bVar4 = param_2[2];
  if (bVar4 == 0x21) {
    std::locale::locale(alStack_90);
    local_88 = std::locale::use_facet((id *)alStack_90);
    local_80 = std::locale::use_facet((id *)alStack_90);
    local_70 = 0;
    local_68 = 0;
    local_60 = (long *)0x0;
    local_58 = 0;
    local_78 = (ulong)*(uint *)(param_1 + 0x18);
    pcVar8 = (char *)FUN_02a7d7b0(alStack_90,param_2 + 3);
    plVar1 = DAT_043f1798;
    iVar7 = local_78._4_4_;
    uVar3 = *(undefined4 *)(param_1 + 0x1c);
    lVar12 = tpidr_el0;
    plVar10 = *(long **)(lVar12 + 0x20);
    if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
      *(long **)(lVar12 + 0x20) = DAT_043f1798;
      plVar10 = plVar1;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x58,8);
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    *puVar9 = &PTR_LAB_0427f2c8;
    puVar9[1] = uVar11;
    std::locale::locale((locale *)(puVar9 + 2),alStack_90);
    puVar9[3] = local_88;
    puVar9[4] = local_80;
    puVar9[5] = local_78;
    puVar9[6] = local_70;
    puVar9[7] = local_68;
    puVar9[8] = local_60;
    if (local_60 != (long *)0x0) {
      plVar1 = local_60 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    *(undefined4 *)(puVar9 + 10) = uVar3;
    *(undefined1 *)((long)puVar9 + 0x54) = 1;
    puVar9[9] = local_58;
    *(undefined8 **)(*(long *)(param_1 + 0x38) + 8) = puVar9;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar7;
    if ((pcVar8 == "") || (*pcVar8 != ')')) goto LAB_02a7f3d0;
    pbVar14 = (byte *)(pcVar8 + 1);
    if (local_60 == (long *)0x0) goto LAB_02a7f3c4;
    plVar1 = local_60 + 1;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  else {
    if (bVar4 != 0x3d) {
      return param_2;
    }
    std::locale::locale(alStack_90);
    local_88 = std::locale::use_facet((id *)alStack_90);
    local_80 = std::locale::use_facet((id *)alStack_90);
    local_70 = 0;
    local_68 = 0;
    local_60 = (long *)0x0;
    local_58 = 0;
    local_78 = (ulong)*(uint *)(param_1 + 0x18);
    pcVar8 = (char *)FUN_02a7d7b0(alStack_90,param_2 + 3);
    plVar1 = DAT_043f1798;
    iVar7 = local_78._4_4_;
    uVar3 = *(undefined4 *)(param_1 + 0x1c);
    lVar12 = tpidr_el0;
    plVar10 = *(long **)(lVar12 + 0x20);
    if (*(long **)(lVar12 + 0x20) == (long *)0x0) {
      *(long **)(lVar12 + 0x20) = DAT_043f1798;
      plVar10 = plVar1;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x58,8);
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    *puVar9 = &PTR_LAB_0427f2c8;
    puVar9[1] = uVar11;
    std::locale::locale((locale *)(puVar9 + 2),alStack_90);
    puVar9[3] = local_88;
    puVar9[4] = local_80;
    puVar9[5] = local_78;
    puVar9[6] = local_70;
    puVar9[7] = local_68;
    puVar9[8] = local_60;
    if (local_60 != (long *)0x0) {
      plVar1 = local_60 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    *(undefined4 *)(puVar9 + 10) = uVar3;
    *(undefined1 *)((long)puVar9 + 0x54) = 0;
    puVar9[9] = local_58;
    *(undefined8 **)(*(long *)(param_1 + 0x38) + 8) = puVar9;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar7;
    if ((pcVar8 == "") || (*pcVar8 != ')')) {
LAB_02a7f3d0:
                    /* WARNING: Subroutine does not return */
      FUN_02a80af0();
    }
    pbVar14 = (byte *)(pcVar8 + 1);
    if (local_60 == (long *)0x0) goto LAB_02a7f3c4;
    plVar1 = local_60 + 1;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (lVar12 == 0) {
    (**(code **)(*local_60 + 0x10))(local_60);
    std::__shared_weak_count::__release_weak();
  }
LAB_02a7f3c4:
  std::locale::~locale(alStack_90);
  return pbVar14;
}


