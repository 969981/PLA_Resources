/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010b471c; name: FUN_010b471c
 */


void FUN_010b471c(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *local_78 [4];
  long *local_58;
  undefined8 local_48;
  char *local_40;
  undefined8 uStack_38;
  
  *param_1 = param_2;
  switch(param_2) {
  case 0:
    *(undefined1 *)(param_1 + 0xe) = 1;
    local_48 = 0xdea6fda2c6554525;
    local_40 = "bin/font/FOT-RodinNTLGPro-DB.BFOTF";
    uStack_38 = 0x22;
    FUN_00da1888(local_78,&local_48);
    uVar5 = FUN_00938764(param_1 + 2,1,local_78,0,param_3,param_4);
    if (((uVar5 & 1) != 0) && (plVar7 = *(long **)(param_1 + 0xc), plVar7 != (long *)0x0)) {
      lVar8 = plVar7[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_010b4a38:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar8 = plVar7[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        bVar4 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_010b4a14:
      if (bVar4) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))(plVar7);
      }
    }
    goto joined_r0x010b4984;
  case 1:
    *(undefined1 *)(param_1 + 0xe) = 1;
    local_48 = 0xdb7d3a42d6f4a20;
    local_40 = "bin/font/FOT-UDKakugoC80Pro-DB.BFOTF";
    uStack_38 = 0x24;
    FUN_00da1888(local_78,&local_48);
    uVar5 = FUN_00938764(param_1 + 2,1,local_78,0,param_3,param_4);
    if (((uVar5 & 1) != 0) && (plVar7 = *(long **)(param_1 + 0xc), plVar7 != (long *)0x0)) {
      lVar8 = plVar7[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_010b4a38;
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar8 = plVar7[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        bVar4 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_010b4a14;
    }
    goto joined_r0x010b4984;
  case 2:
    uVar6 = 4;
    param_1[0xf] = 4;
    break;
  case 3:
    param_1[0xf] = 2;
    uVar6 = 2;
    break;
  case 4:
    param_1[0xf] = 1;
    uVar6 = 1;
    break;
  case 5:
    param_1[0xf] = 3;
    uVar6 = 3;
    break;
  case 6:
    *(undefined1 *)(param_1 + 0xe) = 1;
    local_48 = 0xac4c7934a33a32f3;
    local_40 = "bin/font/or_font.BFOTF";
    uStack_38 = 0x16;
    FUN_00da1888(local_78,&local_48);
    uVar5 = FUN_00938764(param_1 + 2,1,local_78,0,param_3,param_4);
    if (((uVar5 & 1) != 0) && (plVar7 = *(long **)(param_1 + 0xc), plVar7 != (long *)0x0)) {
      lVar8 = plVar7[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_010b4a38;
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar8 = plVar7[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        bVar4 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_010b4a14;
    }
joined_r0x010b4984:
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (local_78[0] != (long *)0x0) {
      (**(code **)(*local_78[0] + 0x20))();
    }
switchD_010b4760_default:
    return;
  default:
    goto switchD_010b4760_default;
  }
  nn::pl::RequestSharedFontLoad(uVar6);
  return;
}


