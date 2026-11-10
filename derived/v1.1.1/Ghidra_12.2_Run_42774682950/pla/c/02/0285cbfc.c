/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0285cbfc; name: FUN_0285cbfc
 */


void FUN_0285cbfc(long param_1)

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
  code *pcVar11;
  undefined8 *puVar12;
  long lVar13;
  byte bStack_68;
  undefined7 local_67;
  undefined1 uStack_60;
  undefined7 local_5f;
  undefined1 uStack_58;
  undefined4 local_57;
  undefined4 uStack_53;
  undefined4 local_4f;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = *(undefined8 *)(*(long *)PTR_DAT_04379ff8 + 0x68);
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar13 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar13;
  local_44 = 0xffff1519;
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379690), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  *(undefined8 *)PTR_DAT_043796a0 = *(undefined8 *)PTR_DAT_04379698;
  puVar6 = (undefined8 *)FUN_0286bb0c();
  local_4f = 0;
  local_57 = 0;
  uStack_53 = 0;
  local_5f = 0;
  uStack_58 = 0;
  local_67 = 0;
  uStack_60 = 0;
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
  puVar6[10] = 0x100000001;
  *(undefined1 *)(puVar6 + 0xb) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0xffffffff00000000;
  *(undefined4 *)(puVar6 + 9) = 0xffff;
  *(undefined1 *)((long)puVar6 + 0x4c) = 0x12;
  *(undefined8 *)((long)puVar6 + 0x6e) = 0;
  *(undefined8 *)((long)puVar6 + 0x69) = 0;
  *(undefined8 *)((long)puVar6 + 0x61) = 0;
  *(ulong *)((long)puVar6 + 0x59) = (ulong)bStack_68;
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
  *puVar6 = 0x100000001;
  *(undefined4 *)(puVar6 + 10) = 2;
  *(undefined4 *)(puVar6 + 1) = 0;
  pcVar11 = *(code **)(param_1 + 0x98);
  *(undefined1 *)(param_1 + 400) = 1;
  if (pcVar11 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    (*pcVar11)(param_1 + 0xb0);
  }
  *(code **)(param_1 + 0x90) = FUN_02860de4;
  *(undefined1 **)(param_1 + 0x98) = &LAB_02860ffc;
  pcVar11 = *(code **)(param_1 + 0x118);
  *(undefined1 **)(param_1 + 0xa0) = &LAB_02861000;
  *(undefined1 **)(param_1 + 0xa8) = &LAB_0286100c;
  *(long *)(param_1 + 0xb0) = param_1;
  if (pcVar11 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    (*pcVar11)(param_1 + 0x130);
  }
  *(undefined1 **)(param_1 + 0x110) = &LAB_02861018;
  *(undefined1 **)(param_1 + 0x118) = &LAB_02861038;
  *(undefined1 **)(param_1 + 0x120) = &LAB_0286103c;
  *(undefined1 **)(param_1 + 0x128) = &LAB_02861048;
  *(long *)(param_1 + 0x130) = param_1;
  plVar7 = *(long **)(lVar13 + 0xc0);
  if (plVar7 != (long *)0x0) {
    lVar13 = plVar7[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0285e0a0(&bStack_68,plVar7,local_40,&local_40,&local_44,param_1 + 0x30);
  plVar2 = (long *)(param_1 + 8);
  FUN_02860ae4(plVar2,&bStack_68);
  puVar6 = (undefined8 *)CONCAT71(local_67,bStack_68);
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
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_38 = *puVar6;
      FUN_02a44274(lVar13 + 0xd8,&local_38);
    }
  }
  if (plVar7 == (long *)0x0) {
LAB_0285ced0:
    lVar13 = *plVar2;
    puVar6 = (undefined8 *)0x0;
    if (lVar13 == 0) goto LAB_0285cf1c;
  }
  else {
    lVar13 = plVar7[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_0285ced0;
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar7 + 0x20))(plVar7);
    lVar13 = *plVar2;
    if (lVar13 == 0) {
      puVar6 = (undefined8 *)0x0;
      goto LAB_0285cf1c;
    }
  }
  puVar12 = *(undefined8 **)(lVar13 + 0x18);
  if (puVar12 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)(**(code **)*puVar12)(puVar12);
    if (((*PTR_DAT_0437f800 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437f800), iVar5 != 0)) {
      uVar8 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437f808 = uVar8;
      __cxa_guard_release(PTR_DAT_0437f800);
    }
    if (puVar9 != (undefined8 *)0x0) {
      do {
        if (puVar9 == (undefined8 *)PTR_DAT_0437f808) {
          puVar6 = puVar12 + -10;
          break;
        }
        puVar9 = (undefined8 *)*puVar9;
        puVar6 = (undefined8 *)0x0;
      } while (puVar9 != (undefined8 *)0x0);
      goto LAB_0285cf1c;
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_0285cf1c:
  *(undefined8 **)(param_1 + 0x18) = puVar6;
  return;
}


