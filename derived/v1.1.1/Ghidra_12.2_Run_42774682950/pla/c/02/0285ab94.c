/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0285ab94; name: FUN_0285ab94
 */


void FUN_0285ab94(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  byte bStack_60;
  undefined7 local_5f;
  undefined1 uStack_58;
  undefined7 local_57;
  undefined1 uStack_50;
  undefined4 local_4f;
  undefined4 uStack_4b;
  undefined4 local_47;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_28;
  
  local_38 = *(undefined8 *)(*(long *)PTR_DAT_04379ff8 + 0x68);
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar12 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar12;
  local_3c = 0xffffff0a;
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379690), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  *(undefined8 *)PTR_DAT_043796a0 = *(undefined8 *)PTR_DAT_04379698;
  puVar6 = (undefined8 *)FUN_0286bb0c();
  local_47 = 0;
  local_4f = 0;
  uStack_4b = 0;
  local_57 = 0;
  uStack_50 = 0;
  local_5f = 0;
  uStack_58 = 0;
  *(undefined2 *)((long)puVar6 + 0x14) = 0x1212;
  puVar6[3] = 0x1900000000;
  *(undefined4 *)(puVar6 + 4) = 3;
  *puVar6 = 0;
  *(undefined4 *)(puVar6 + 1) = 0;
  *(undefined4 *)(puVar6 + 2) = 0;
  *(undefined2 *)((long)puVar6 + 0x24) = 0;
  *(undefined1 *)((long)puVar6 + 0x26) = 0;
  puVar6[7] = 0;
  *(undefined4 *)(puVar6 + 8) = 0;
  *(undefined1 *)((long)puVar6 + 0x44) = 0;
  *(undefined1 *)(puVar6 + 0xb) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0xffffffff00000000;
  *(undefined4 *)(puVar6 + 9) = 0xffff;
  *(undefined1 *)((long)puVar6 + 0x4c) = 0x12;
  puVar6[10] = 0x100000001;
  *(undefined8 *)((long)puVar6 + 0x6e) = 0;
  *(undefined8 *)((long)puVar6 + 0x69) = 0;
  *(undefined8 *)((long)puVar6 + 0x61) = 0;
  *(ulong *)((long)puVar6 + 0x59) = (ulong)bStack_60;
  plVar7 = (long *)puVar6[0xf];
  puVar6[0xf] = 0;
  if (plVar7 != (long *)0x0) {
    lVar10 = plVar7[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  puVar6[0xf] = 0;
  plVar7 = *(long **)(lVar12 + 0xc0);
  if (plVar7 != (long *)0x0) {
    lVar12 = plVar7[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0285e0a0(&bStack_60,plVar7,local_38,&local_38,&local_3c,param_1 + 0x30);
  plVar2 = (long *)(param_1 + 8);
  FUN_02860ae4(plVar2,&bStack_60);
  puVar6 = (undefined8 *)CONCAT71(local_5f,bStack_60);
  if (puVar6 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar6 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar6[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_28 = *puVar6;
      FUN_02a44274(lVar12 + 0xd8,&local_28);
    }
  }
  if (plVar7 == (long *)0x0) {
LAB_0285adc0:
    lVar12 = *plVar2;
    puVar6 = (undefined8 *)0x0;
    if (lVar12 == 0) goto LAB_0285ae0c;
  }
  else {
    lVar12 = plVar7[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_0285adc0;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    (**(code **)(*plVar7 + 0x20))(plVar7);
    lVar12 = *plVar2;
    if (lVar12 == 0) {
      puVar6 = (undefined8 *)0x0;
      goto LAB_0285ae0c;
    }
  }
  puVar11 = *(undefined8 **)(lVar12 + 0x18);
  if (puVar11 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)(**(code **)*puVar11)(puVar11);
    if (((*PTR_DAT_0437f800 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437f800), iVar5 != 0)) {
      uVar8 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437f808 = uVar8;
      __cxa_guard_release(PTR_DAT_0437f800);
    }
    if (puVar9 != (undefined8 *)0x0) {
      do {
        if (puVar9 == (undefined8 *)PTR_DAT_0437f808) {
          puVar6 = puVar11 + -10;
          break;
        }
        puVar9 = (undefined8 *)*puVar9;
        puVar6 = (undefined8 *)0x0;
      } while (puVar9 != (undefined8 *)0x0);
      goto LAB_0285ae0c;
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_0285ae0c:
  *(undefined8 **)(param_1 + 0x18) = puVar6;
  return;
}


