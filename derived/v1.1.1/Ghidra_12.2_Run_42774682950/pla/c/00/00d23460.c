/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d23460; name: FUN_00d23460
 */


void FUN_00d23460(long param_1,undefined4 param_2)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  char *pcVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  long *local_40;
  long local_38;
  char *local_28;
  
  if (*(long *)(param_1 + 0x530) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x500) = param_2;
  pcVar4 = *(char **)(param_1 + 0x510);
  if (pcVar4 != (char *)0x0) {
    lVar6 = *(long *)(param_1 + 0x4f8);
    lVar8 = *(long *)(lVar6 + 0x88);
    if (*(code **)(lVar6 + 0x560) == (code *)0x0) {
      plVar3 = *(long **)(lVar8 + 0x18);
      lVar6 = (**(code **)(*plVar3 + 0x78))(plVar3,pcVar4,1);
    }
    else {
      local_38 = lVar6;
      local_28 = pcVar4;
      (**(code **)(lVar6 + 0x560))(&local_40,lVar6 + 0x580,&local_28,&local_38);
      plVar3 = *(long **)(lVar8 + 0x18);
      if (local_40 == (long *)0x0) {
        plVar7 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar7 = local_40 + 0xc;
      }
      lVar6 = (**(code **)(*plVar3 + 0x78))(plVar3,*plVar7,1);
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x20))();
      }
    }
    if (lVar6 != 0) {
      *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
    }
    *(undefined8 *)(param_1 + 0x510) = 0;
  }
  if (*(int *)(param_1 + 0x50c) == -1) {
    iVar5 = *(int *)(param_1 + 0x500);
  }
  else {
    FUN_00d23ac8(param_1);
    *(undefined4 *)(param_1 + 0x50c) = 0xffffffff;
    iVar5 = *(int *)(param_1 + 0x500);
  }
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x528) = 0xffffffff;
    pcVar4 = *(char **)(param_1 + 0x68);
    *(char **)(param_1 + 0x530) = pcVar4;
    local_48 = (undefined1)(int)(float)*(undefined8 *)(param_1 + 0x540);
    local_47 = (undefined1)(int)(float)((ulong)*(undefined8 *)(param_1 + 0x540) >> 0x20);
    local_46 = (undefined1)(int)(float)*(undefined8 *)(param_1 + 0x548);
    local_45 = (undefined1)(int)(float)((ulong)*(undefined8 *)(param_1 + 0x548) >> 0x20);
    lVar6 = *(long *)(param_1 + 0x4f8);
    lVar8 = *(long *)(lVar6 + 0x88);
    if (*(code **)(lVar6 + 0x560) == (code *)0x0) {
      plVar3 = *(long **)(lVar8 + 0x18);
      plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,pcVar4,1);
    }
    else {
      local_38 = lVar6;
      local_28 = pcVar4;
      (**(code **)(lVar6 + 0x560))(&local_40,lVar6 + 0x580,&local_28,&local_38);
      plVar3 = *(long **)(lVar8 + 0x18);
      if (local_40 == (long *)0x0) {
        plVar7 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar7 = local_40 + 0xc;
      }
      plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,*plVar7,1);
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x20))();
      }
    }
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0,&local_48);
      (**(code **)(*plVar3 + 0x28))(plVar3,1,&local_48);
      (**(code **)(*plVar3 + 0x28))(plVar3,2,&local_48);
      (**(code **)(*plVar3 + 0x28))(plVar3,3,&local_48);
    }
    lVar6 = *(long *)(param_1 + 0x4f8);
    lVar8 = *(long *)(lVar6 + 0x88);
    if (*(code **)(lVar6 + 0x560) == (code *)0x0) {
      plVar3 = *(long **)(lVar8 + 0x18);
      lVar6 = (**(code **)(*plVar3 + 0x78))(plVar3,*(char **)(param_1 + 0x530),1);
    }
    else {
      local_38 = lVar6;
      local_28 = *(char **)(param_1 + 0x530);
      (**(code **)(lVar6 + 0x560))(&local_40,lVar6 + 0x580,&local_28,&local_38);
      plVar3 = *(long **)(lVar8 + 0x18);
      if (local_40 == (long *)0x0) {
        plVar7 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar7 = local_40 + 0xc;
      }
      lVar6 = (**(code **)(*plVar3 + 0x78))(plVar3,*plVar7,1);
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x20))();
      }
    }
    goto joined_r0x00d23a18;
  }
  if (iVar5 == 2) {
    *(undefined4 *)(param_1 + 0x528) = 0xffffffff;
    lVar6 = *(long *)(param_1 + 0x4f8);
    *(char **)(param_1 + 0x530) = "P_fade_cross_texture_00";
    lVar8 = *(long *)(lVar6 + 0x88);
    if (*(code **)(lVar6 + 0x560) == (code *)0x0) {
      plVar3 = *(long **)(lVar8 + 0x18);
      lVar6 = (**(code **)(*plVar3 + 0x78))(plVar3,"P_fade_cross_texture_00",1);
    }
    else {
      local_28 = "P_fade_cross_texture_00";
      local_38 = lVar6;
      (**(code **)(lVar6 + 0x560))(&local_40,lVar6 + 0x580,&local_28,&local_38);
      plVar3 = *(long **)(lVar8 + 0x18);
      if (local_40 == (long *)0x0) {
        plVar7 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar7 = local_40 + 0xc;
      }
      lVar6 = (**(code **)(*plVar3 + 0x78))(plVar3,*plVar7,1);
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x20))();
      }
    }
    if (lVar6 != 0) {
      *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 1;
    }
    lVar6 = *(long *)(param_1 + 0x4f8);
    uVar9 = *(undefined8 *)(param_1 + 0x568);
    lVar8 = *(long *)(lVar6 + 0x88);
    if (*(code **)(lVar6 + 0x560) == (code *)0x0) {
      plVar3 = *(long **)(lVar8 + 0x18);
      lVar6 = (**(code **)(*plVar3 + 0x78))(plVar3,*(char **)(param_1 + 0x530),1);
    }
    else {
      local_38 = lVar6;
      local_28 = *(char **)(param_1 + 0x530);
      (**(code **)(lVar6 + 0x560))(&local_40,lVar6 + 0x580,&local_28,&local_38);
      plVar3 = *(long **)(lVar8 + 0x18);
      if (local_40 == (long *)0x0) {
        plVar7 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar7 = local_40 + 0xc;
      }
      lVar6 = (**(code **)(*plVar3 + 0x78))(plVar3,*plVar7,1);
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x20))();
      }
    }
    if (lVar6 == 0) {
      return;
    }
    *(char *)(lVar6 + 0x59) = (char)(int)(float)((ulong)uVar9 >> 0x20);
    return;
  }
  if (iVar5 != 1) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x508);
  if (uVar1 < 0x10) {
    iVar5 = *(int *)(param_1 + (long)(int)uVar1 * 0xc + 0xec);
    *(int *)(param_1 + 0x528) = iVar5;
    if (iVar5 == -1) {
      iVar5 = *(int *)(param_1 + (long)(int)uVar1 * 0xc + 0xe8);
      goto LAB_00d23878;
    }
    bVar2 = true;
  }
  else {
    iVar5 = -1;
    *(undefined4 *)(param_1 + 0x528) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x508) = 0xffffffff;
LAB_00d23878:
    bVar2 = false;
    *(int *)(param_1 + 0x528) = iVar5;
  }
  if (-1 < iVar5) {
    pcVar4 = *(char **)(param_1 + (long)*(int *)(param_1 + (long)iVar5 * 0x10 + 0x1b0) * 8 + 0x60);
    lVar6 = *(long *)(param_1 + 0x4f8);
    *(char **)(param_1 + 0x530) = pcVar4;
    lVar8 = *(long *)(lVar6 + 0x88);
    if (*(code **)(lVar6 + 0x560) == (code *)0x0) {
      plVar3 = *(long **)(lVar8 + 0x18);
      lVar6 = (**(code **)(*plVar3 + 0x78))(plVar3,pcVar4,1);
    }
    else {
      local_38 = lVar6;
      local_28 = pcVar4;
      (**(code **)(lVar6 + 0x560))(&local_40,lVar6 + 0x580,&local_28,&local_38);
      plVar3 = *(long **)(lVar8 + 0x18);
      if (local_40 == (long *)0x0) {
        plVar7 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar7 = local_40 + 0xc;
      }
      lVar6 = (**(code **)(*plVar3 + 0x78))(plVar3,*plVar7,1);
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x20))();
      }
    }
    if (lVar6 != 0) {
      *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 1;
    }
    if (bVar2) {
      FUN_00d23070(0,param_1,*(undefined4 *)(param_1 + 0x528));
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x528) = 0;
  pcVar4 = *(char **)(param_1 + (long)*(int *)(param_1 + 0x1b0) * 8 + 0x60);
  lVar6 = *(long *)(param_1 + 0x4f8);
  *(char **)(param_1 + 0x530) = pcVar4;
  lVar8 = *(long *)(lVar6 + 0x88);
  if (*(code **)(lVar6 + 0x560) == (code *)0x0) {
    plVar3 = *(long **)(lVar8 + 0x18);
    lVar6 = (**(code **)(*plVar3 + 0x78))(plVar3,pcVar4,1);
  }
  else {
    local_38 = lVar6;
    local_28 = pcVar4;
    (**(code **)(lVar6 + 0x560))(&local_40,lVar6 + 0x580,&local_28,&local_38);
    plVar3 = *(long **)(lVar8 + 0x18);
    if (local_40 == (long *)0x0) {
      plVar7 = (long *)PTR_PTR_04379d00;
    }
    else {
      plVar7 = local_40 + 0xc;
    }
    lVar6 = (**(code **)(*plVar3 + 0x78))(plVar3,*plVar7,1);
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))();
    }
  }
joined_r0x00d23a18:
  if (lVar6 != 0) {
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 1;
  }
  return;
}


