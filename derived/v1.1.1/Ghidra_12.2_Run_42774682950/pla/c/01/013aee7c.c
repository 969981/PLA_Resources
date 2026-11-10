/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013aee7c; name: FUN_013aee7c
 */


ulong FUN_013aee7c(long param_1)

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
  undefined8 local_2f8 [2];
  undefined1 auStack_2e8 [712];
  
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0x30:
    uVar5 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),0xc);
    if ((uVar5 & 1) != 0) {
      uVar10 = 0x31;
LAB_013aef7c:
      uVar9 = 0;
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0xac) = uVar10;
      goto LAB_013aefc0;
    }
    break;
  case 0x31:
    uVar5 = FUN_013c6200(*(undefined8 *)(param_1 + 0xc0),0xc);
    if ((uVar5 & 1) != 0) {
      uVar10 = 0x32;
      goto LAB_013aef7c;
    }
    break;
  case 0x32:
    if (*(char *)(param_1 + 0x168) != '\0') {
      FUN_01395584(auStack_2e8,param_1 + 0x170);
      iVar4 = FUN_01397880(*(undefined8 *)(param_1 + 0xa0),auStack_2e8);
      *(int *)(param_1 + 0x488) = iVar4;
      if (iVar4 != 3) {
        if (*(long *)(param_1 + 0x4b8) != 0) goto switchD_013aeeb4_default;
        FUN_013aff48(local_2f8,*(undefined8 *)(param_1 + 0xa0));
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
        *(undefined8 *)(param_1 + 0x4b8) = local_2f8[0];
        FUN_0275d420(local_2f8[0],*(undefined8 *)(param_1 + 0xa0),3);
        nn::os::GetSystemTick();
        uVar7 = nn::os::ConvertToTimeSpan();
        *(undefined8 *)(param_1 + 0x4a8) = uVar7;
        uVar10 = 0x33;
        goto LAB_013aef7c;
      }
    }
    uVar5 = 0xe00000000;
    uVar9 = 1;
    goto LAB_013aefc0;
  case 0x33:
    if (*(long *)(param_1 + 0x4b8) == 0) {
      FUN_0120bd20(param_1 + 0x4a8);
      if (3000.0 <= (double)*(long *)(param_1 + 0x4b0) / 1000000.0) {
        if (*(char *)(param_1 + 0x168) != '\0') {
          FUN_00dacbac(local_2f8,*(undefined8 *)(param_1 + 0xa0));
          FUN_01395584(auStack_2e8,param_1 + 0x170);
          plVar6 = (long *)FUN_00dacd30(local_2f8,auStack_2e8);
          (**(code **)(*plVar6 + 0x10))();
          thunk_FUN_00daf734(local_2f8);
        }
        uVar5 = 0xb00000000;
        uVar9 = 1;
        goto LAB_013aefc0;
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
    break;
  default:
switchD_013aeeb4_default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar9 = 0;
  uVar5 = 0;
LAB_013aefc0:
  return uVar5 | uVar9;
}


