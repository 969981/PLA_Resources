/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ecf10; name: FUN_028ecf10
 */


void FUN_028ecf10(undefined8 *param_1,long param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  char cVar8;
  bool bVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  
  *param_1 = &PTR_LAB_04274770;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  uVar11 = *(undefined8 *)(param_2 + 0x28);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = uVar3;
  param_1[8] = uVar5;
  param_1[5] = uVar11;
  param_1[6] = uVar4;
  lVar13 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
  if (lVar13 != 0) {
    uVar12 = param_1[6];
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < (ulong)(lVar13 >> 3)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar14 = param_1 + 5;
    lVar10 = (**(code **)(*(long *)*puVar14 + 0x10))((long *)*puVar14,lVar13,8);
    if (lVar10 == 0) {
      (**(code **)(*(long *)*puVar14 + 0xb8))();
    }
    param_1[2] = lVar10;
    param_1[3] = lVar10;
    param_1[4] = lVar10 + (lVar13 >> 3) * 8;
    lVar6 = *(long *)(param_2 + 0x18);
    for (lVar13 = *(long *)(param_2 + 0x10); lVar13 != lVar6; lVar13 = lVar13 + 8) {
      FUN_028eccd4(puVar14,lVar10,lVar13);
      lVar10 = param_1[3] + 8;
      param_1[3] = lVar10;
    }
  }
  puVar2 = PTR_DAT_0437ace8;
  uVar7 = *(undefined4 *)(param_2 + 0x48);
  *param_1 = &PTR_LAB_042748d8;
  *(undefined4 *)(param_1 + 9) = uVar7;
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = puVar2 + 0x10;
  FUN_00937ea0(param_1 + 0xc,param_2 + 0x60);
  lVar13 = *(long *)(param_2 + 0x70);
  param_1[0xe] = lVar13;
  if (lVar13 != 0) {
    piVar1 = (int *)(lVar13 + 0x50);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = *piVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  lVar13 = *(long *)(param_2 + 0x78);
  param_1[0xf] = lVar13;
  if (lVar13 != 0) {
    piVar1 = (int *)(lVar13 + 0x50);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = *piVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  lVar13 = *(long *)(param_2 + 0x80);
  param_1[0x10] = lVar13;
  if (lVar13 != 0) {
    lVar13 = *(long *)(lVar13 + 0x58);
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_028ed1c0;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = *piVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  puVar2 = PTR_DAT_04387fb0 + 0x10;
  param_1[0xb] = PTR_DAT_04388018 + 0x10;
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  param_1[0x12] = puVar2;
  FUN_028bf730(param_1 + 0x13,param_2 + 0x98);
  lVar13 = *(long *)(param_2 + 0xa8);
  param_1[0x15] = lVar13;
  if (lVar13 != 0) {
    piVar1 = (int *)(lVar13 + 0x50);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = *piVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  lVar13 = *(long *)(param_2 + 0xb0);
  param_1[0x16] = lVar13;
  if (lVar13 != 0) {
    piVar1 = (int *)(lVar13 + 0x50);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = *piVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  lVar13 = *(long *)(param_2 + 0xb8);
  param_1[0x17] = lVar13;
  if (lVar13 != 0) {
    lVar13 = *(long *)(lVar13 + 0x58);
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_028ed1c0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = *piVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  param_1[0x12] = PTR_DAT_04388020 + 0x10;
  uVar11 = *(undefined8 *)(param_2 + 0xc0);
  uVar3 = *(undefined8 *)(param_2 + 200);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0xd0);
  param_1[0x18] = uVar11;
  param_1[0x19] = uVar3;
  return;
}


