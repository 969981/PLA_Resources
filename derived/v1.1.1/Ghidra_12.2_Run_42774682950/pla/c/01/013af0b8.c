/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013af0b8; name: FUN_013af0b8
 */


ulong FUN_013af0b8(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined1 auStack_2f8 [712];
  undefined4 local_30;
  int iStack_2c;
  char local_28;
  undefined1 auStack_24 [4];
  
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0x34:
    uVar5 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),0xc);
    if ((uVar5 & 1) == 0) goto LAB_013af288;
    uVar10 = 0x35;
    goto LAB_013af1f0;
  case 0x35:
    uVar5 = FUN_013c6200(*(undefined8 *)(param_1 + 0xc0),0xc);
    if ((uVar5 & 1) == 0) goto LAB_013af288;
    uVar10 = 0x36;
    goto LAB_013af1f0;
  case 0x36:
    if (*(long *)(param_1 + 0xd8) == 0) goto switchD_013af0f0_default;
    uVar5 = FUN_027a6e60();
    if ((uVar5 & 1) == 0) {
      uVar5 = 0;
      uVar9 = 1;
      goto LAB_013af290;
    }
    uVar10 = 0x37;
LAB_013af1f0:
    uVar9 = 0;
    uVar5 = 0;
    *(undefined4 *)(param_1 + 0xac) = uVar10;
    goto LAB_013af290;
  case 0x37:
    uVar5 = FUN_027a6988(*(undefined8 *)(param_1 + 0xd8));
    if ((uVar5 & 1) == 0) goto LAB_013af288;
    FUN_027a6c74(&local_30,*(undefined8 *)(param_1 + 0xd8));
    if ((char)local_30 == '\0') goto LAB_013af140;
    if (999 < iStack_2c) {
      if (iStack_2c == 1000) {
        FUN_02784b40(auStack_2f8);
      }
      else if (iStack_2c == 2000) {
        FUN_02784bc0(auStack_2f8);
      }
      else {
        if (iStack_2c != 5000) goto switchD_013af1b8_caseD_1;
        if (local_28 == '\0') goto LAB_013af140;
        FUN_02727b8c(auStack_2f8,auStack_24);
      }
      goto LAB_013af44c;
    }
    break;
  case 0x38:
    if (*(char *)(param_1 + 0x168) != '\0') {
      FUN_01395584(auStack_2f8,param_1 + 0x170);
      iVar4 = FUN_01397880(*(undefined8 *)(param_1 + 0xa0),auStack_2f8);
      *(int *)(param_1 + 0x488) = iVar4;
      if (iVar4 != 3) {
        if (*(long *)(param_1 + 0x4b8) != 0) goto switchD_013af0f0_default;
        FUN_013aff48(&local_30,*(undefined8 *)(param_1 + 0xa0));
        plVar6 = *(long **)(param_1 + 0x4b8);
        *(undefined8 *)(param_1 + 0x4b8) = 0;
        if (plVar6 != (long *)0x0) {
          lVar8 = plVar6[0xb];
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar4 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar4 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))();
          }
        }
        *(ulong *)(param_1 + 0x4b8) = CONCAT44(iStack_2c,local_30);
        FUN_0275d420(CONCAT44(iStack_2c,local_30),*(undefined8 *)(param_1 + 0xa0),3);
        nn::os::GetSystemTick();
        uVar7 = nn::os::ConvertToTimeSpan();
        *(undefined8 *)(param_1 + 0x4a8) = uVar7;
        uVar10 = 0x39;
        goto LAB_013af1f0;
      }
    }
    goto LAB_013af140;
  case 0x39:
    if (*(long *)(param_1 + 0x4b8) == 0) {
      FUN_0120bd20(param_1 + 0x4a8);
      if (3000.0 <= (double)*(long *)(param_1 + 0x4b0) / 1000000.0) {
        if (*(char *)(param_1 + 0x168) != '\0') {
          FUN_00dadabc(&local_30,*(undefined8 *)(param_1 + 0xa0));
          FUN_01395584(auStack_2f8,param_1 + 0x170);
          plVar6 = (long *)FUN_00dadc40(&local_30,auStack_2f8);
          (**(code **)(*plVar6 + 0x10))();
          thunk_FUN_00daf734(&local_30);
        }
        uVar5 = 0xb00000000;
        uVar9 = 1;
        goto LAB_013af290;
      }
    }
    else {
      uVar5 = FUN_0275d460();
      if ((uVar5 & 1) != 0) {
        plVar6 = *(long **)(param_1 + 0x4b8);
        *(undefined8 *)(param_1 + 0x4b8) = 0;
        if (plVar6 != (long *)0x0) {
          lVar8 = plVar6[0xb];
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar4 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar4 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 1) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))();
          }
        }
      }
    }
    goto LAB_013af288;
  default:
switchD_013af0f0_default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  switch(iStack_2c) {
  case 0:
    *(undefined4 *)(param_1 + 0xac) = 0x38;
  default:
switchD_013af1b8_caseD_1:
LAB_013af288:
    uVar9 = 0;
    uVar5 = 0;
    goto LAB_013af290;
  case 0xb:
    *(undefined4 *)(param_1 + 0xbc) = 0;
    goto LAB_013af3f0;
  case 0xc:
    uVar10 = 1;
    break;
  case 0xd:
    uVar10 = 2;
    break;
  case 0xe:
    uVar10 = 3;
    break;
  case 0xf:
    uVar10 = 4;
    break;
  case 0x10:
    uVar10 = 5;
    break;
  case 0x11:
    uVar10 = 6;
    break;
  case 0x12:
    uVar10 = 7;
    break;
  case 0x16:
    uVar10 = 8;
    break;
  case 0x1f:
    FUN_02784a00(auStack_2f8);
    goto LAB_013af44c;
  case 0x5b:
    FUN_02784a40(auStack_2f8);
    goto LAB_013af44c;
  case 0x5c:
    FUN_02784a80(auStack_2f8);
    goto LAB_013af44c;
  case 0x62:
    FUN_02784ac0(auStack_2f8);
    goto LAB_013af44c;
  case 99:
    FUN_02784b00(auStack_2f8);
LAB_013af44c:
    FUN_013b1998(param_1 + 0x4c0,auStack_2f8);
    FUN_02727c1c(auStack_2f8);
LAB_013af140:
    uVar5 = 0xe00000000;
    uVar9 = 1;
    goto LAB_013af290;
  }
  *(undefined4 *)(param_1 + 0xbc) = uVar10;
LAB_013af3f0:
  uVar5 = 0x100000000;
  uVar9 = 1;
LAB_013af290:
  return uVar5 | uVar9;
}


