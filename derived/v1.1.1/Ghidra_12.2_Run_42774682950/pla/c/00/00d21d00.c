/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d21d00; name: FUN_00d21d00
 */


void FUN_00d21d00(long param_1,int param_2,undefined8 *param_3,undefined8 *param_4,uint param_5,
                 byte param_6)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  long *local_70;
  long local_68;
  char *local_58;
  
  if (param_2 == 1) {
    *(uint *)(param_1 + 0x508) = param_5;
    if (param_5 < 0x10) {
      uVar11 = *(uint *)(param_1 + (long)(int)param_5 * 0xc + 0xe8);
      if (0x20 < uVar11) goto LAB_00d21e7c;
      param_2 = 1;
      uVar3 = param_5;
      uVar8 = param_5;
    }
    else {
      param_5 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x508) = 0xffffffff;
LAB_00d21e7c:
      param_2 = 0;
      uVar11 = 0xffffffff;
      uVar3 = 1;
      uVar8 = param_5;
    }
    param_5 = uVar3;
    if ((uVar8 == 0xf) || (uVar8 == 0xc)) {
      FUN_02c414ec(*(undefined8 *)(param_1 + 0x4f8));
    }
  }
  else {
    uVar11 = 0xffffffff;
  }
  pcVar5 = *(char **)(param_1 + 0x510);
  *(byte *)(param_1 + 0x582) = param_6 & 1;
  *(int *)(param_1 + 0x500) = param_2;
  if (pcVar5 != (char *)0x0) {
    lVar6 = *(long *)(param_1 + 0x4f8);
    lVar9 = *(long *)(lVar6 + 0x88);
    if (*(code **)(lVar6 + 0x560) == (code *)0x0) {
      plVar4 = *(long **)(lVar9 + 0x18);
      lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4,pcVar5,1);
    }
    else {
      local_68 = lVar6;
      local_58 = pcVar5;
      (**(code **)(lVar6 + 0x560))(&local_70,lVar6 + 0x580,&local_58,&local_68);
      plVar4 = *(long **)(lVar9 + 0x18);
      if (local_70 == (long *)0x0) {
        plVar7 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar7 = local_70 + 0xc;
      }
      lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4,*plVar7,1);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
    }
    if (lVar6 != 0) {
      *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
    }
    *(undefined8 *)(param_1 + 0x510) = 0;
  }
  if (*(int *)(param_1 + 0x50c) == -1) {
    pcVar5 = *(char **)(param_1 + 0x530);
  }
  else {
    FUN_00d23ac8(param_1);
    *(undefined4 *)(param_1 + 0x50c) = 0xffffffff;
    pcVar5 = *(char **)(param_1 + 0x530);
  }
  if (pcVar5 != (char *)0x0) {
    lVar6 = *(long *)(param_1 + 0x4f8);
    lVar9 = *(long *)(lVar6 + 0x88);
    if (*(code **)(lVar6 + 0x560) == (code *)0x0) {
      plVar4 = *(long **)(lVar9 + 0x18);
      lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4,pcVar5,1);
    }
    else {
      local_68 = lVar6;
      local_58 = pcVar5;
      (**(code **)(lVar6 + 0x560))(&local_70,lVar6 + 0x580,&local_58,&local_68);
      plVar4 = *(long **)(lVar9 + 0x18);
      if (local_70 == (long *)0x0) {
        plVar7 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar7 = local_70 + 0xc;
      }
      lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4,*plVar7,1);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
    }
    if (lVar6 != 0) {
      *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
    }
    *(undefined8 *)(param_1 + 0x530) = 0;
  }
  if (*(int *)(param_1 + 0x528) == -1) {
    lVar6 = *(long *)(param_1 + 0x4f8);
  }
  else {
    FUN_00d23ac8(param_1);
    *(undefined4 *)(param_1 + 0x528) = 0xffffffff;
    lVar6 = *(long *)(param_1 + 0x4f8);
  }
  if ((lVar6 != 0) && (uVar8 = *(uint *)(lVar6 + 0x278), uVar8 != 0)) {
    lVar9 = 0;
    uVar10 = 0;
    do {
      lVar1 = *(long *)(lVar6 + 600) + lVar9;
      if (*(char *)(lVar1 + 8) != '\0') {
        *(undefined4 *)(lVar1 + 0x38) = 0x3f800000;
        uVar8 = *(uint *)(lVar6 + 0x278);
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x48;
    } while (uVar10 < uVar8);
  }
  *(undefined4 *)(param_1 + 0x504) = 2;
  uVar8 = param_5;
  if (param_5 == 0) {
    uVar8 = 1;
  }
  *(undefined4 *)(param_1 + 0x538) = 0;
  *(uint *)(param_1 + 0x53c) = param_5;
  if ((param_2 == 2) || ((param_6 & 1) != 0)) {
    FUN_02c414ec(*(undefined8 *)(param_1 + 0x4f8));
    lVar6 = *(long *)(param_1 + 0x4f8);
    lVar9 = *(long *)(lVar6 + 0x88);
    if (*(code **)(lVar6 + 0x560) == (code *)0x0) {
      plVar4 = *(long **)(lVar9 + 0x18);
      lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4,*(char **)(param_1 + 0x60),1);
    }
    else {
      local_68 = lVar6;
      local_58 = *(char **)(param_1 + 0x60);
      (**(code **)(lVar6 + 0x560))(&local_70,lVar6 + 0x580,&local_58,&local_68);
      plVar4 = *(long **)(lVar9 + 0x18);
      if (local_70 == (long *)0x0) {
        plVar7 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar7 = local_70 + 0xc;
      }
      lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4,*plVar7,1);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
    }
    if (lVar6 != 0) {
      *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 1;
    }
    lVar6 = *(long *)(param_1 + 0x4f8);
    lVar9 = *(long *)(lVar6 + 0x88);
    if (*(code **)(lVar6 + 0x560) == (code *)0x0) {
      plVar4 = *(long **)(lVar9 + 0x18);
      lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4,"P_fade_cross_texture_00",1);
    }
    else {
      local_58 = "P_fade_cross_texture_00";
      local_68 = lVar6;
      (**(code **)(lVar6 + 0x560))(&local_70,lVar6 + 0x580,&local_58,&local_68);
      plVar4 = *(long **)(lVar9 + 0x18);
      if (local_70 == (long *)0x0) {
        plVar7 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar7 = local_70 + 0xc;
      }
      lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4,*plVar7,1);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
    }
    if (lVar6 != 0) {
      *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 1;
    }
    lVar6 = *(long *)(param_1 + 0x4f8);
    lVar9 = *(long *)(lVar6 + 0x88);
    if (*(code **)(lVar6 + 0x560) == (code *)0x0) {
      plVar4 = *(long **)(lVar9 + 0x18);
      lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4,"P_fade_cross_texture_00",1);
    }
    else {
      local_58 = "P_fade_cross_texture_00";
      local_68 = lVar6;
      (**(code **)(lVar6 + 0x560))(&local_70,lVar6 + 0x580,&local_58,&local_68);
      plVar4 = *(long **)(lVar9 + 0x18);
      if (local_70 == (long *)0x0) {
        plVar7 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar7 = local_70 + 0xc;
      }
      lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4,*plVar7,1);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
    }
    if (lVar6 != 0) {
      *(undefined1 *)(lVar6 + 0x59) = 0xff;
      iVar2 = *(int *)(param_1 + 0x500);
      goto joined_r0x00d22344;
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 0x4f8);
    lVar9 = *(long *)(lVar6 + 0x88);
    if (*(code **)(lVar6 + 0x560) == (code *)0x0) {
      plVar4 = *(long **)(lVar9 + 0x18);
      lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4,*(char **)(param_1 + 0x60),1);
    }
    else {
      local_68 = lVar6;
      local_58 = *(char **)(param_1 + 0x60);
      (**(code **)(lVar6 + 0x560))(&local_70,lVar6 + 0x580,&local_58,&local_68);
      plVar4 = *(long **)(lVar9 + 0x18);
      if (local_70 == (long *)0x0) {
        plVar7 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar7 = local_70 + 0xc;
      }
      lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4,*plVar7,1);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
    }
    if (lVar6 != 0) {
      *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
    }
  }
  iVar2 = *(int *)(param_1 + 0x500);
joined_r0x00d22344:
  if (iVar2 == 0) {
    pcVar5 = *(char **)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x50c) = 0xffffffff;
    *(char **)(param_1 + 0x510) = pcVar5;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)(param_1 + 0x540);
    }
    uVar14 = param_3[1];
    uVar12 = *param_3;
    fVar17 = 1.0 / (float)uVar8;
    *(undefined8 *)(param_1 + 0x548) = uVar14;
    *(undefined8 *)(param_1 + 0x540) = uVar12;
    *(undefined8 *)(param_1 + 0x568) = param_4[1];
    *(undefined8 *)(param_1 + 0x560) = *param_4;
    uVar16 = *param_4;
    fVar13 = (float)((ulong)uVar12 >> 0x20);
    fVar15 = (float)((ulong)uVar14 >> 0x20);
    *(ulong *)(param_1 + 0x558) =
         CONCAT44(((float)((ulong)param_4[1] >> 0x20) - fVar15) * fVar17,
                  ((float)param_4[1] - (float)uVar14) * fVar17);
    *(ulong *)(param_1 + 0x550) =
         CONCAT44(((float)((ulong)uVar16 >> 0x20) - fVar13) * fVar17,
                  ((float)uVar16 - (float)uVar12) * fVar17);
    local_78 = (undefined1)(int)(float)uVar12;
    local_77 = (undefined1)(int)fVar13;
    local_76 = (undefined1)(int)(float)uVar14;
    local_75 = (undefined1)(int)fVar15;
    lVar6 = *(long *)(param_1 + 0x4f8);
    lVar9 = *(long *)(lVar6 + 0x88);
    if (*(code **)(lVar6 + 0x560) == (code *)0x0) {
      plVar4 = *(long **)(lVar9 + 0x18);
      plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,pcVar5,1);
    }
    else {
      local_68 = lVar6;
      local_58 = pcVar5;
      (**(code **)(lVar6 + 0x560))(&local_70,lVar6 + 0x580,&local_58,&local_68);
      plVar4 = *(long **)(lVar9 + 0x18);
      if (local_70 == (long *)0x0) {
        plVar7 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar7 = local_70 + 0xc;
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,*plVar7,1);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
    }
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0,&local_78);
      (**(code **)(*plVar4 + 0x28))(plVar4,1,&local_78);
      (**(code **)(*plVar4 + 0x28))(plVar4,2,&local_78);
      (**(code **)(*plVar4 + 0x28))(plVar4,3,&local_78);
    }
    lVar6 = *(long *)(param_1 + 0x4f8);
    lVar9 = *(long *)(lVar6 + 0x88);
    if (*(code **)(lVar6 + 0x560) == (code *)0x0) {
      plVar4 = *(long **)(lVar9 + 0x18);
      lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4,*(char **)(param_1 + 0x510),1);
    }
    else {
      local_68 = lVar6;
      local_58 = *(char **)(param_1 + 0x510);
      (**(code **)(lVar6 + 0x560))(&local_70,lVar6 + 0x580,&local_58,&local_68);
      plVar4 = *(long **)(lVar9 + 0x18);
      if (local_70 == (long *)0x0) {
        plVar7 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar7 = local_70 + 0xc;
      }
      lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4,*plVar7,1);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
    }
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 != 1) {
        return;
      }
      *(uint *)(param_1 + 0x50c) = uVar11;
      pcVar5 = *(char **)(param_1 + (long)*(int *)(param_1 + (long)(int)uVar11 * 0x10 + 0x1b0) * 8 +
                         0x60);
      lVar6 = *(long *)(param_1 + 0x4f8);
      *(char **)(param_1 + 0x510) = pcVar5;
      lVar9 = *(long *)(lVar6 + 0x88);
      if (*(code **)(lVar6 + 0x560) == (code *)0x0) {
        plVar4 = *(long **)(lVar9 + 0x18);
        lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4,pcVar5,1);
      }
      else {
        local_68 = lVar6;
        local_58 = pcVar5;
        (**(code **)(lVar6 + 0x560))(&local_70,lVar6 + 0x580,&local_58,&local_68);
        plVar4 = *(long **)(lVar9 + 0x18);
        if (local_70 == (long *)0x0) {
          plVar7 = (long *)PTR_PTR_04379d00;
        }
        else {
          plVar7 = local_70 + 0xc;
        }
        lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4,*plVar7,1);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
      }
      if (lVar6 != 0) {
        *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 1;
      }
      FUN_00d23070(0,param_1,*(undefined4 *)(param_1 + 0x50c));
      return;
    }
    lVar6 = *(long *)(param_1 + 0x4f8);
    *(undefined8 *)(param_1 + 0x548) = 0;
    *(undefined8 *)(param_1 + 0x540) = 0;
    uVar12 = DAT_0388a290;
    *(undefined8 *)(param_1 + 0x568) = DAT_0388a298;
    *(undefined8 *)(param_1 + 0x560) = uVar12;
    *(undefined4 *)(param_1 + 0x50c) = 0xffffffff;
    *(char **)(param_1 + 0x510) = "P_fade_cross_texture_00";
    *(ulong *)(param_1 + 0x558) =
         CONCAT44(255.0 / (float)uVar8,(int)*(undefined8 *)(param_1 + 0x558));
    *(undefined8 *)(param_1 + 0x550) = *(undefined8 *)(param_1 + 0x550);
    lVar9 = *(long *)(lVar6 + 0x88);
    if (*(code **)(lVar6 + 0x560) == (code *)0x0) {
      plVar4 = *(long **)(lVar9 + 0x18);
      lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4,"P_fade_cross_texture_00",1);
    }
    else {
      local_58 = "P_fade_cross_texture_00";
      local_68 = lVar6;
      (**(code **)(lVar6 + 0x560))(&local_70,lVar6 + 0x580,&local_58,&local_68);
      plVar4 = *(long **)(lVar9 + 0x18);
      if (local_70 == (long *)0x0) {
        plVar7 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar7 = local_70 + 0xc;
      }
      lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4,*plVar7,1);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
    }
    if (lVar6 != 0) {
      *(undefined1 *)(lVar6 + 0x59) = 0;
    }
    lVar6 = *(long *)(param_1 + 0x4f8);
    lVar9 = *(long *)(lVar6 + 0x88);
    if (*(code **)(lVar6 + 0x560) == (code *)0x0) {
      plVar4 = *(long **)(lVar9 + 0x18);
      lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4,*(char **)(param_1 + 0x510),1);
    }
    else {
      local_68 = lVar6;
      local_58 = *(char **)(param_1 + 0x510);
      (**(code **)(lVar6 + 0x560))(&local_70,lVar6 + 0x580,&local_58,&local_68);
      plVar4 = *(long **)(lVar9 + 0x18);
      if (local_70 == (long *)0x0) {
        plVar7 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar7 = local_70 + 0xc;
      }
      lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4,*plVar7,1);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
    }
  }
  if (lVar6 != 0) {
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 1;
  }
  return;
}


