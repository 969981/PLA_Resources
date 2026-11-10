/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0167bad8; name: FUN_0167bad8
 */


void FUN_0167bad8(long *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar8 = *param_2;
  *param_1 = lVar8;
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_0167be60;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar8 = param_2[1];
  param_1[1] = lVar8;
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_0167be60:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_0095e070(param_1 + 2,param_2 + 2);
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  if (*(char *)((long)param_2 + 0x24) != '\0') {
    *(undefined1 *)((long)param_1 + 0x25) = *(undefined1 *)((long)param_2 + 0x25);
    *(undefined1 *)((long)param_1 + 0x24) = 1;
  }
  *(undefined1 *)(param_1 + 6) = 0;
  if ((char)param_2[6] != '\0') {
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    plVar7 = (long *)param_2[0xc];
    param_1[0xc] = (long)plVar7;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))();
    }
    lVar8 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    lVar10 = param_2[0xe];
    *(int *)(param_1 + 0x10) = (int)lVar8;
    param_1[0xe] = lVar10;
    lVar8 = param_2[0x11];
    param_1[0x11] = lVar8;
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar8 = param_2[0x12];
    *(int *)(param_1 + 0x13) = (int)param_2[0x13];
    param_1[0x12] = lVar8;
    lVar8 = param_2[0x14];
    param_1[0x14] = lVar8;
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar8 = param_2[0x15];
    *(int *)(param_1 + 0x16) = (int)param_2[0x16];
    param_1[0x15] = lVar8;
    lVar8 = param_2[0x17];
    param_1[0x17] = lVar8;
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar8 = param_2[0x18];
    *(int *)(param_1 + 0x19) = (int)param_2[0x19];
    param_1[0x18] = lVar8;
    lVar8 = param_2[0x1b];
    lVar10 = param_2[0x1c];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x1b] = lVar8;
    *(char *)(param_1 + 0x1c) = (char)lVar10;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  *(undefined1 *)(param_1 + 0x1e) = 0;
  if ((char)param_2[0x1e] != '\0') {
    param_1[0x20] = param_2[0x20];
    param_1[0x21] = param_2[0x21];
    param_1[0x22] = param_2[0x22];
    plVar7 = (long *)param_2[0x23];
    param_1[0x23] = (long)plVar7;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))();
    }
    lVar10 = param_2[0x29];
    lVar8 = param_2[0x2a];
    param_1[0x27] = param_2[0x27];
    param_1[0x29] = lVar10;
    param_1[0x25] = param_2[0x25];
    lVar10 = param_2[0x24];
    param_1[0x26] = param_2[0x26];
    param_1[0x24] = lVar10;
    lVar10 = param_2[0x28];
    *(int *)(param_1 + 0x2a) = (int)lVar8;
    *(undefined1 *)(param_1 + 0x1e) = 1;
    param_1[0x28] = lVar10;
  }
  param_1[0x2c] = param_2[0x2c];
  *(undefined1 *)(param_1 + 0x2d) = 0;
  if ((char)param_2[0x2d] != '\0') {
    lVar8 = param_2[0x31];
    lVar2 = param_2[0x32];
    lVar10 = param_2[0x33];
    lVar3 = param_2[0x34];
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x33] = lVar10;
    param_1[0x34] = lVar3;
    param_1[0x31] = lVar8;
    param_1[0x32] = lVar2;
    lVar8 = param_2[0x2f] - param_2[0x2e];
    if (lVar8 != 0) {
      uVar9 = param_1[0x32];
      if (0x7ffffffffffffffe < uVar9) {
        uVar9 = 0x7fffffffffffffff;
      }
      if (uVar9 < (ulong)(lVar8 >> 2)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      plVar7 = param_1 + 0x31;
      lVar10 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,lVar8,4);
      if (lVar10 == 0) {
        (**(code **)(*(long *)*plVar7 + 0xb8))();
      }
      param_1[0x2e] = lVar10;
      param_1[0x2f] = lVar10;
      param_1[0x30] = lVar10 + (lVar8 >> 2) * 4;
      lVar2 = param_2[0x2f];
      for (lVar8 = param_2[0x2e]; lVar8 != lVar2; lVar8 = lVar8 + 4) {
        FUN_00957978(plVar7,lVar10,lVar8);
        lVar10 = param_1[0x2f] + 4;
        param_1[0x2f] = lVar10;
      }
    }
    *(undefined1 *)(param_1 + 0x2d) = 1;
  }
  lVar8 = param_2[0x35];
  *(int *)(param_1 + 0x36) = (int)param_2[0x36];
  param_1[0x35] = lVar8;
  return;
}


