/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280b510; name: FUN_0280b510
 */


void FUN_0280b510(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  ulong local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  switch((int)param_1[0xa0]) {
  case 1:
    local_80 = 0;
    pcStack_78 = (char *)0x0;
    if ((int)param_1[0xa2] < 1) {
      iVar15 = 0xd2;
      cVar3 = (char)param_1[0xe1];
    }
    else {
      lVar17 = 0;
      iVar15 = 0xd2;
      lVar18 = -0x1c0;
      do {
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0280d520();
        }
        iVar5 = (**(code **)(*(long *)param_1[0x1d] + 0xb8))
                          ((long *)param_1[0x1d],(long)param_1 + lVar18 + 0x2b8,
                           param_1[lVar17 + 0x8e]);
        lVar17 = lVar17 + 1;
        if (iVar15 <= iVar5) {
          iVar15 = iVar5;
        }
        lVar18 = lVar18 + 0x40;
      } while (lVar17 < (int)param_1[0xa2]);
      cVar3 = (char)param_1[0xe1];
    }
    if (cVar3 != '\0') {
      iVar15 = *(int *)((long)param_1 + 0x704);
    }
    plVar10 = param_1 + 0x5b;
    piVar7 = (int *)(**(code **)(*(long *)param_1[0x1d] + 0xc0))
                              ((long *)param_1[0x1d],plVar10,"window_width_offset");
    if (piVar7 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar7;
    }
    local_80 = (ulong)(uint)(float)(iVar5 + iVar15);
    pcStack_78 = (char *)0x0;
    uVar8 = (**(code **)(*(long *)param_1[0x1d] + 0x48))((long *)param_1[0x1d],param_1 + 0x1f);
    piVar7 = (int *)(**(code **)(*(long *)param_1[0x1d] + 0xc0))
                              ((long *)param_1[0x1d],plVar10,"window_height_offset");
    if (piVar7 == (int *)0x0) {
      fVar19 = 0.0;
    }
    else {
      fVar19 = (float)*piVar7;
    }
    fVar19 = fVar19 + (float)(int)param_1[0xa2] * (float)((ulong)uVar8 >> 0x20);
    local_80 = CONCAT44(fVar19,(float)(iVar5 + iVar15));
    pcStack_78 = (char *)0x0;
    (**(code **)(*(long *)param_1[0x1d] + 0x40))
              (fVar19,local_80,uVar8,(long *)param_1[0x1d],plVar10,&local_80);
    (**(code **)(*(long *)param_1[0x1d] + 0x40))((long *)param_1[0x1d],param_1 + 0x5f,&local_80);
    (**(code **)(*(long *)param_1[0x1d] + 0x48))((long *)param_1[0x1d],param_1 + 99);
    local_60 = CONCAT44(extraout_var,(undefined4)local_80);
    uStack_58 = extraout_var_00;
    (**(code **)(*(long *)param_1[0x1d] + 0x40))((long *)param_1[0x1d],param_1 + 99,&local_60);
    iVar15 = (int)param_1[0x1e];
    if (iVar15 == 4) {
      if (*(char *)param_1[0x74] != '\0') {
        uVar8 = (**(code **)(*(long *)param_1[0x1d] + 0x48))((long *)param_1[0x1d],plVar10);
        iVar5 = (int)((float)param_1[0x8c] + (float)uVar8);
        iVar15 = (int)((float)((ulong)param_1[0x8c] >> 0x20) - (float)((ulong)uVar8 >> 0x20));
        if ((iVar5 < 0x3c0) || (-0x21d < iVar15)) {
          iVar16 = 3;
          if (iVar15 < -0x21c) {
            iVar16 = 1;
          }
          iVar15 = 2;
          if (iVar5 < 0x3c0) {
            iVar15 = iVar16;
          }
          goto LAB_0280b7dc;
        }
      }
      iVar15 = 0;
    }
LAB_0280b7dc:
    uVar6 = (**(code **)(*(long *)param_1[0x1d] + 0x48))((long *)param_1[0x1d],plVar10);
    (**(code **)(*(long *)param_1[0x1d] + 0x60))((long *)param_1[0x1d],param_1 + 0x73);
    switch(iVar15) {
    case 0:
      local_80 = CONCAT44((int)(uVar6 >> 0x20),-(float)uVar6);
      pcStack_78 = (char *)0x0;
      (**(code **)(*(long *)param_1[0x1d] + 0x28))((long *)param_1[0x1d],param_1 + 0x57,&local_80);
      plVar10 = (long *)param_1[0x1d];
      uVar8 = 0x40400000;
      break;
    case 1:
      local_80 = uVar6 & 0xffffffff00000000;
      pcStack_78 = (char *)0x0;
      (**(code **)(*(long *)param_1[0x1d] + 0x28))
                (local_80,uVar6,(long *)param_1[0x1d],param_1 + 0x57,&local_80);
      plVar10 = (long *)param_1[0x1d];
      uVar8 = 0x40000000;
      break;
    case 2:
      local_80 = (ulong)(uint)-(float)uVar6;
      pcStack_78 = (char *)0x0;
      (**(code **)(*(long *)param_1[0x1d] + 0x28))((long *)param_1[0x1d],param_1 + 0x57,&local_80);
      plVar10 = (long *)param_1[0x1d];
      uVar8 = 0x3f800000;
      break;
    case 3:
      local_80 = 0;
      pcStack_78 = (char *)0x0;
      (**(code **)(*(long *)param_1[0x1d] + 0x28))((long *)param_1[0x1d],param_1 + 0x57,&local_80);
      plVar10 = (long *)param_1[0x1d];
      uVar8 = 0;
      break;
    default:
      goto switchD_0280b82c_default;
    }
    (**(code **)(*plVar10 + 0x80))(uVar8,plVar10,param_1 + 0x73);
switchD_0280b82c_default:
    plVar10 = param_1 + 0x67;
    uVar4 = *(uint *)(param_1[0x9c] + 8);
    (**(code **)(*(long *)param_1[0x1d] + 0x50))((long *)param_1[0x1d],plVar10,1);
    *(uint *)(param_1[0x9c] + 8) = uVar4;
    local_80 = 0;
    pcStack_78 = (char *)0x0;
    (**(code **)(*(long *)param_1[0x1d] + 0x28))((long *)param_1[0x1d],plVar10,&local_80);
    (**(code **)(*(long *)param_1[0x1d] + 0xd0))
              ((long *)param_1[0x1d],param_1 + (long)(int)uVar4 * 8 + 0x23,plVar10);
    if (0 < (int)param_1[0xa2]) {
      plVar9 = (long *)param_1[0x1d];
      plVar10 = (long *)((long)param_1 + 0x794);
      plVar1 = param_1 + (long)(int)uVar4 * 8 + 0x1f;
      plVar2 = param_1 + 0xf2;
      if (uVar4 == 0) {
        lVar17 = *plVar9;
        plVar11 = plVar1;
        plVar12 = plVar2;
      }
      else {
        lVar17 = *plVar9;
        plVar11 = param_1 + 0x1f;
        plVar12 = plVar10;
      }
      (**(code **)(lVar17 + 200))(plVar9,plVar11,plVar12);
      if (1 < (int)param_1[0xa2]) {
        plVar9 = (long *)param_1[0x1d];
        if (uVar4 == 1) {
          lVar17 = *plVar9;
          plVar11 = plVar1;
          plVar12 = plVar2;
        }
        else {
          lVar17 = *plVar9;
          plVar11 = param_1 + 0x27;
          plVar12 = plVar10;
        }
        (**(code **)(lVar17 + 200))(plVar9,plVar11,plVar12);
        if (2 < (int)param_1[0xa2]) {
          plVar9 = (long *)param_1[0x1d];
          if (uVar4 == 2) {
            lVar17 = *plVar9;
            plVar11 = plVar1;
            plVar12 = plVar2;
          }
          else {
            lVar17 = *plVar9;
            plVar11 = param_1 + 0x2f;
            plVar12 = plVar10;
          }
          (**(code **)(lVar17 + 200))(plVar9,plVar11,plVar12);
          if (3 < (int)param_1[0xa2]) {
            plVar9 = param_1 + 0x37;
            uVar6 = 3;
            do {
              plVar11 = (long *)param_1[0x1d];
              if (uVar4 == uVar6) {
                lVar17 = *plVar11;
                plVar12 = plVar1;
                plVar13 = plVar2;
              }
              else {
                lVar17 = *plVar11;
                plVar12 = plVar9;
                plVar13 = plVar10;
              }
              (**(code **)(lVar17 + 200))(plVar11,plVar12,plVar13);
              uVar6 = uVar6 + 1;
              plVar9 = plVar9 + 8;
            } while ((long)uVar6 < (long)(int)param_1[0xa2]);
          }
        }
      }
    }
    local_80 = 0x18ce7f774c54f7c9;
    pcStack_78 = "PLAY_UI_COMMON_MENU_OPEN";
    local_70 = 0x18;
    local_68 = (long *)0x0;
    FUN_028354b0(&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (*(char *)param_1[0x78] != '\0') {
      (**(code **)(*(long *)param_1[0x1d] + 0x60))((long *)param_1[0x1d],param_1 + 0x77);
    }
    if (*(char *)param_1[0x6c] != '\0') {
      (**(code **)(*(long *)param_1[0x1d] + 0x80))(0,(long *)param_1[0x1d],param_1 + 0x6b);
    }
    uVar14 = 2;
    break;
  case 2:
    if (*(char *)((long)param_1 + 0xa3) != '\x01') {
      *(undefined1 *)((long)param_1 + 0xa3) = 1;
      (**(code **)(*param_1 + 0xa0))(param_1,1);
    }
    if (*(char *)param_1[0x6c] == '\0') goto LAB_0280b5b0;
    (**(code **)(*(long *)param_1[0x1d] + 0x60))((long *)param_1[0x1d],param_1 + 0x6b);
    uVar14 = 3;
    break;
  case 3:
    uVar6 = (**(code **)(*(long *)param_1[0x1d] + 0x70))((long *)param_1[0x1d],param_1 + 0x6b);
    if ((uVar6 & 1) == 0) {
      return;
    }
LAB_0280b5b0:
    uVar14 = 4;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0xa0) = 5;
    if (*(char *)((long)param_1 + 0x6ff) == '\0') goto LAB_0280b57c;
LAB_0280ba68:
    *(undefined1 *)((long)param_1 + 0x6ff) = 0;
    goto LAB_0280b590;
  case 5:
    if (*(char *)((long)param_1 + 0x6ff) != '\0') goto LAB_0280ba68;
LAB_0280b57c:
    iVar15 = *(int *)((long)param_1 + 0x504);
    if (iVar15 == 0) {
      return;
    }
    if (iVar15 != 2) {
      if (iVar15 == 1) {
        lVar17 = param_1[0x9c];
        uVar14 = *(undefined4 *)(lVar17 + 8);
        uVar8 = FUN_0282b6d0(lVar17,param_1 + 0xa1,&local_80);
        plVar10 = param_1 + 0x67;
        iVar5 = (int)((ulong)uVar8 >> 0x20);
        iVar15 = (int)uVar8;
        piVar7 = (int *)(lVar17 + 0xc);
        if (*(int *)(lVar17 + 0x1c) != 0) {
          iVar15 = iVar5;
          iVar5 = (int)uVar8;
          piVar7 = (int *)(lVar17 + 0x10);
        }
        uVar4 = iVar15 + *piVar7 * iVar5;
        (**(code **)(*(long *)param_1[0x1d] + 0x50))((long *)param_1[0x1d],plVar10,1);
        *(uint *)(param_1[0x9c] + 8) = uVar4;
        local_80 = 0;
        pcStack_78 = (char *)0x0;
        (**(code **)(*(long *)param_1[0x1d] + 0x28))((long *)param_1[0x1d],plVar10,&local_80);
        (**(code **)(*(long *)param_1[0x1d] + 0xd0))
                  ((long *)param_1[0x1d],param_1 + (long)(int)uVar4 * 8 + 0x23,plVar10);
        if (0 < (int)param_1[0xa2]) {
          plVar9 = (long *)param_1[0x1d];
          plVar10 = (long *)((long)param_1 + 0x794);
          plVar1 = param_1 + (long)(int)uVar4 * 8 + 0x1f;
          plVar2 = param_1 + 0xf2;
          if (uVar4 == 0) {
            lVar17 = *plVar9;
            plVar11 = plVar1;
            plVar12 = plVar2;
          }
          else {
            lVar17 = *plVar9;
            plVar11 = param_1 + 0x1f;
            plVar12 = plVar10;
          }
          (**(code **)(lVar17 + 200))(plVar9,plVar11,plVar12);
          if (1 < (int)param_1[0xa2]) {
            plVar9 = (long *)param_1[0x1d];
            if (uVar4 == 1) {
              lVar17 = *plVar9;
              plVar11 = plVar1;
              plVar12 = plVar2;
            }
            else {
              lVar17 = *plVar9;
              plVar11 = param_1 + 0x27;
              plVar12 = plVar10;
            }
            (**(code **)(lVar17 + 200))(plVar9,plVar11,plVar12);
            if (2 < (int)param_1[0xa2]) {
              plVar9 = (long *)param_1[0x1d];
              if (uVar4 == 2) {
                lVar17 = *plVar9;
                plVar11 = plVar1;
                plVar12 = plVar2;
              }
              else {
                lVar17 = *plVar9;
                plVar11 = param_1 + 0x2f;
                plVar12 = plVar10;
              }
              (**(code **)(lVar17 + 200))(plVar9,plVar11,plVar12);
              if (3 < (int)param_1[0xa2]) {
                plVar9 = param_1 + 0x37;
                uVar6 = 3;
                do {
                  plVar11 = (long *)param_1[0x1d];
                  if (uVar4 == uVar6) {
                    lVar17 = *plVar11;
                    plVar12 = plVar1;
                    plVar13 = plVar2;
                  }
                  else {
                    lVar17 = *plVar11;
                    plVar12 = plVar9;
                    plVar13 = plVar10;
                  }
                  (**(code **)(lVar17 + 200))(plVar11,plVar12,plVar13);
                  uVar6 = uVar6 + 1;
                  plVar9 = plVar9 + 8;
                } while ((long)uVar6 < (long)(int)param_1[0xa2]);
              }
            }
          }
        }
        if ((code *)param_1[0xe2] != (code *)0x0) {
          local_60 = CONCAT44(local_60._4_4_,uVar14);
          local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(param_1[0x9c] + 8));
          (*(code *)param_1[0xe2])(param_1 + 0xe6,&local_80,&local_60);
        }
        *(undefined4 *)((long)param_1 + 0x504) = 0;
        return;
      }
      if (iVar15 != 3) goto LAB_0280b590;
      *(undefined1 *)((long)param_1 + 0x701) = 1;
    }
    *(undefined4 *)((long)param_1 + 0x504) = 0;
LAB_0280b590:
    uVar14 = 6;
    break;
  case 6:
    if (*(char *)param_1[0x70] != '\0') {
      (**(code **)(*(long *)param_1[0x1d] + 0x60))((long *)param_1[0x1d],param_1 + 0x6f);
      uVar14 = 7;
      break;
    }
    goto LAB_0280b5d0;
  case 7:
    uVar6 = (**(code **)(*(long *)param_1[0x1d] + 0x70))((long *)param_1[0x1d],param_1 + 0x6f);
    if ((uVar6 & 1) == 0) {
      return;
    }
LAB_0280b5d0:
    uVar14 = 8;
    break;
  case 8:
    *(undefined1 *)((long)param_1 + 0xa1) = 0;
    if ((code *)param_1[0x7c] != (code *)0x0) {
      *(undefined1 *)((long)param_1 + 0xa5) = 1;
      if (*(char *)((long)param_1 + 0x701) == '\0') {
        uVar14 = *(undefined4 *)(param_1[0x9c] + 8);
      }
      else {
        uVar14 = 0xffffffff;
      }
      local_80 = CONCAT44(local_80._4_4_,uVar14);
      (*(code *)param_1[0x7c])(param_1 + 0x80,&local_80);
    }
    if (*(char *)((long)param_1 + 0xa3) != '\0') {
      *(undefined1 *)((long)param_1 + 0xa3) = 0;
      (**(code **)(*param_1 + 0xa0))(param_1,0);
    }
    if ((char)param_1[0xe1] != '\0') {
      *(undefined1 *)(param_1 + 0xe1) = 0;
      plVar10 = param_1 + 0xf4;
      if (*(char *)param_1[0x20] != '\0') {
        (**(code **)(*(long *)param_1[0x1d] + 0x40))((long *)param_1[0x1d],param_1 + 0x1f,plVar10);
      }
      if (*(char *)param_1[0x28] != '\0') {
        (**(code **)(*(long *)param_1[0x1d] + 0x40))((long *)param_1[0x1d],param_1 + 0x27,plVar10);
      }
      if (*(char *)param_1[0x30] != '\0') {
        (**(code **)(*(long *)param_1[0x1d] + 0x40))((long *)param_1[0x1d],param_1 + 0x2f,plVar10);
      }
      if (*(char *)param_1[0x38] != '\0') {
        (**(code **)(*(long *)param_1[0x1d] + 0x40))((long *)param_1[0x1d],param_1 + 0x37,plVar10);
      }
      if (*(char *)param_1[0x40] != '\0') {
        (**(code **)(*(long *)param_1[0x1d] + 0x40))((long *)param_1[0x1d],param_1 + 0x3f,plVar10);
      }
      if (*(char *)param_1[0x48] != '\0') {
        (**(code **)(*(long *)param_1[0x1d] + 0x40))((long *)param_1[0x1d],param_1 + 0x47,plVar10);
      }
      if (*(char *)param_1[0x50] != '\0') {
        (**(code **)(*(long *)param_1[0x1d] + 0x40))((long *)param_1[0x1d],param_1 + 0x4f,plVar10);
      }
    }
    *(undefined4 *)(param_1 + 0xa0) = 0;
  default:
    goto switchD_0280b570_default;
  }
  *(undefined4 *)(param_1 + 0xa0) = uVar14;
switchD_0280b570_default:
  return;
}


