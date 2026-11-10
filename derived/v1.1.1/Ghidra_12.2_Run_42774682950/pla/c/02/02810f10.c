/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02810f10; name: FUN_02810f10
 */


undefined8 FUN_02810f10(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  
  if (param_2 == 1) {
    lVar14 = *(long *)(param_1 + 0x468);
    lVar1 = param_1 + 0x410;
    iVar2 = *(int *)(lVar14 + 8);
    uVar10 = FUN_0282b6d0(lVar14,lVar1,&local_60);
    iVar9 = (int)((ulong)uVar10 >> 0x20);
    iVar8 = (int)uVar10;
    piVar5 = (int *)(lVar14 + 0xc);
    if (*(int *)(lVar14 + 0x1c) != 0) {
      iVar8 = iVar9;
      iVar9 = (int)uVar10;
      piVar5 = (int *)(lVar14 + 0x10);
    }
    iVar3 = *piVar5;
    FUN_0282b6d0(*(undefined8 *)(param_1 + 0x468),lVar1,&local_60);
    if (((int)local_60 == 1) && (*(code **)(param_1 + 0x380) != (code *)0x0)) {
      lVar14 = *(long *)(param_1 + 0x468);
      if (*(int *)(lVar14 + 0x1c) == 0) {
        iVar13 = *(int *)(lVar14 + 0xc);
        iVar4 = 0;
        if (iVar13 != 0) {
          iVar4 = iVar2 / iVar13;
        }
        iVar13 = iVar2 - iVar4 * iVar13;
      }
      else {
        iVar4 = *(int *)(lVar14 + 0x10);
        iVar13 = 0;
        if (iVar4 != 0) {
          iVar13 = iVar2 / iVar4;
        }
        iVar4 = iVar2 - iVar13 * iVar4;
      }
      local_60 = CONCAT44(iVar4,iVar13);
      uVar12 = (**(code **)(param_1 + 0x380))(param_1 + 0x3a0,&local_60,lVar1);
      if ((uVar12 & 1) == 0) {
        return 1;
      }
    }
    puVar7 = PTR_DAT_0437f848;
    puVar6 = PTR_DAT_0437f840;
    lVar14 = *(long *)(param_1 + 0x468);
    iVar8 = iVar8 + iVar3 * iVar9;
    if (iVar8 == *(int *)(lVar14 + 8)) {
      if (*(code **)(param_1 + 0x300) != (code *)0x0) {
        if (*(int *)(lVar14 + 0x1c) == 0) {
          iVar9 = *(int *)(lVar14 + 0xc);
          iVar8 = 0;
          if (iVar9 != 0) {
            iVar8 = iVar2 / iVar9;
          }
          iVar9 = iVar2 - iVar8 * iVar9;
        }
        else {
          iVar8 = *(int *)(lVar14 + 0x10);
          iVar9 = 0;
          if (iVar8 != 0) {
            iVar9 = iVar2 / iVar8;
          }
          iVar8 = iVar2 - iVar9 * iVar8;
        }
        local_60 = CONCAT44(iVar8,iVar9);
        (**(code **)(param_1 + 0x300))(param_1 + 800,&local_60,lVar1);
      }
    }
    else {
      *(int *)(lVar14 + 8) = iVar8;
      if (**(long **)(param_1 + 0x488) != 0) {
        plVar11 = (long *)(*(code *)**(undefined8 **)(**(long **)(param_1 + 0x488) + 0x50))();
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437f840), iVar9 != 0)) {
          uVar10 = FUN_0281249c();
          *(undefined8 *)puVar7 = uVar10;
          __cxa_guard_release(PTR_DAT_0437f840);
        }
        for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
          if (plVar11 == (long *)puVar7) {
            uVar10 = 1;
            goto LAB_02810ff4;
          }
        }
      }
      uVar10 = 0;
LAB_02810ff4:
      FUN_0280e96c(param_1,iVar8,iVar2,uVar10);
      local_60 = *(undefined8 *)(param_1 + 0x4c8);
      uStack_58 = *(undefined8 *)(param_1 + 0x4d0);
      local_50 = *(undefined8 *)(param_1 + 0x4d8);
      local_48 = (long *)0x0;
      FUN_028354b0(&local_60);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
    }
    if (**(long **)(param_1 + 0x488) != 0) {
      plVar11 = (long *)(*(code *)**(undefined8 **)(**(long **)(param_1 + 0x488) + 0x50))();
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437f840), iVar8 != 0)) {
        uVar10 = FUN_0281249c();
        *(undefined8 *)puVar7 = uVar10;
        __cxa_guard_release(PTR_DAT_0437f840);
      }
      for (; (plVar11 != (long *)0x0 && (plVar11 != (long *)puVar7)); plVar11 = (long *)*plVar11) {
      }
    }
  }
  return 1;
}


