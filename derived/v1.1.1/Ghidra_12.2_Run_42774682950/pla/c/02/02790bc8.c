/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02790bc8; name: FUN_02790bc8
 */


undefined8 FUN_02790bc8(undefined8 param_1,char *param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  char *__s1;
  uint uVar10;
  ulong uVar11;
  undefined8 local_1700 [14];
  undefined4 local_1690 [697];
  undefined1 auStack_bac [4];
  uint local_ba8 [4];
  char acStack_b98 [116];
  char acStack_b24 [116];
  char acStack_ab0 [116];
  char acStack_a3c [116];
  char acStack_9c8 [116];
  char acStack_954 [116];
  char acStack_8e0 [116];
  char acStack_86c [116];
  char acStack_7f8 [116];
  char acStack_784 [116];
  char acStack_710 [116];
  char acStack_69c [116];
  char acStack_628 [116];
  char acStack_5b4 [116];
  char acStack_540 [116];
  char acStack_4cc [116];
  char acStack_458 [116];
  char acStack_3e4 [116];
  char acStack_370 [116];
  char acStack_2fc [116];
  char acStack_288 [116];
  char acStack_214 [116];
  char acStack_1a0 [116];
  char acStack_12c [116];
  char acStack_b8 [104];
  
  puVar9 = local_1700;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar7 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar7;
  plVar8 = *(long **)(lVar7 + 0x2a8);
  if (plVar8 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    lVar7 = plVar8[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_0110c0ac(local_ba8,plVar8);
    iVar5 = strcmp(acStack_b98,param_2);
    if ((((((((iVar5 == 0) || (iVar5 = strcmp(acStack_b24,param_2), iVar5 == 0)) ||
            (iVar5 = strcmp(acStack_ab0,param_2), iVar5 == 0)) ||
           (((iVar5 = strcmp(acStack_a3c,param_2), iVar5 == 0 ||
             (iVar5 = strcmp(acStack_9c8,param_2), iVar5 == 0)) ||
            ((iVar5 = strcmp(acStack_954,param_2), iVar5 == 0 ||
             ((iVar5 = strcmp(acStack_8e0,param_2), iVar5 == 0 ||
              (iVar5 = strcmp(acStack_86c,param_2), iVar5 == 0)))))))) ||
          (iVar5 = strcmp(acStack_7f8,param_2), iVar5 == 0)) ||
         (((((iVar5 = strcmp(acStack_784,param_2), iVar5 == 0 ||
             (iVar5 = strcmp(acStack_710,param_2), iVar5 == 0)) ||
            (iVar5 = strcmp(acStack_69c,param_2), iVar5 == 0)) ||
           ((iVar5 = strcmp(acStack_628,param_2), iVar5 == 0 ||
            (iVar5 = strcmp(acStack_5b4,param_2), iVar5 == 0)))) ||
          ((iVar5 = strcmp(acStack_540,param_2), iVar5 == 0 ||
           ((iVar5 = strcmp(acStack_4cc,param_2), iVar5 == 0 ||
            (iVar5 = strcmp(acStack_458,param_2), iVar5 == 0)))))))) ||
        ((iVar5 = strcmp(acStack_3e4,param_2), iVar5 == 0 ||
         (((iVar5 = strcmp(acStack_370,param_2), iVar5 == 0 ||
           (iVar5 = strcmp(acStack_2fc,param_2), iVar5 == 0)) ||
          (iVar5 = strcmp(acStack_288,param_2), iVar5 == 0)))))) ||
       (((iVar5 = strcmp(acStack_214,param_2), iVar5 == 0 ||
         (iVar5 = strcmp(acStack_1a0,param_2), iVar5 == 0)) ||
        ((iVar5 = strcmp(acStack_12c,param_2), iVar5 == 0 ||
         (iVar5 = strcmp(acStack_b8,param_2), iVar5 == 0)))))) {
      memset(local_1700,0,0xb54);
      do {
        *(undefined1 *)puVar9 = 0;
        *(undefined8 *)((long)puVar9 + 4) = 0;
        *(undefined2 *)((long)puVar9 + 0x3c) = 0x100;
        *(undefined2 *)((long)puVar9 + 0x6e) = 0;
        *(undefined4 *)((long)puVar9 + 0x70) = 0;
        *(undefined8 *)((long)puVar9 + 0x40) = 0;
        *(undefined8 *)((long)puVar9 + 0x48) = 0;
        *(undefined8 *)((long)puVar9 + 0x4e) = 0;
        puVar9 = (undefined8 *)((long)puVar9 + 0x74);
      } while (puVar9 != (undefined8 *)auStack_bac);
      uVar11 = (ulong)local_ba8[0];
      if (local_ba8[0] == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        __s1 = acStack_b98;
        do {
          iVar5 = strcmp(__s1,param_2);
          if (iVar5 != 0) {
            lVar7 = (long)(int)uVar10;
            lVar2 = lVar7 * 0x74;
            uVar10 = uVar10 + 1;
            uVar6 = *(undefined8 *)(__s1 + -4);
            *(undefined8 *)((long)local_1700 + lVar2) = *(undefined8 *)(__s1 + -0xc);
            *(undefined8 *)((long)local_1700 + lVar2 + 8) = uVar6;
            uVar6 = *(undefined8 *)(__s1 + 0x1c);
            *(undefined8 *)((long)local_1700 + lVar2 + 0x20) = *(undefined8 *)(__s1 + 0x14);
            *(undefined8 *)((long)local_1700 + lVar2 + 0x28) = uVar6;
            uVar6 = *(undefined8 *)(__s1 + 0xc);
            *(undefined8 *)((long)local_1700 + lVar2 + 0x10) = *(undefined8 *)(__s1 + 4);
            *(undefined8 *)((long)local_1700 + lVar2 + 0x18) = uVar6;
            uVar6 = *(undefined8 *)(__s1 + 0x3c);
            *(undefined8 *)((long)local_1700 + lVar2 + 0x40) = *(undefined8 *)(__s1 + 0x34);
            *(undefined8 *)((long)local_1700 + lVar2 + 0x48) = uVar6;
            uVar6 = *(undefined8 *)(__s1 + 0x2c);
            *(undefined8 *)((long)local_1700 + lVar2 + 0x30) = *(undefined8 *)(__s1 + 0x24);
            *(undefined8 *)((long)local_1700 + lVar2 + 0x38) = uVar6;
            local_1690[lVar7 * 0x1d] = *(undefined4 *)(__s1 + 100);
            uVar6 = *(undefined8 *)(__s1 + 0x5c);
            *(undefined8 *)((long)local_1700 + lVar2 + 0x60) = *(undefined8 *)(__s1 + 0x54);
            *(undefined8 *)((long)local_1700 + lVar2 + 0x68) = uVar6;
            uVar6 = *(undefined8 *)(__s1 + 0x4c);
            *(undefined8 *)((long)local_1700 + lVar2 + 0x50) = *(undefined8 *)(__s1 + 0x44);
            *(undefined8 *)((long)local_1700 + lVar2 + 0x58) = uVar6;
          }
          uVar11 = uVar11 - 1;
          __s1 = __s1 + 0x74;
        } while (uVar11 != 0);
      }
      memcpy((void *)((ulong)local_ba8 | 4),local_1700,0xb54);
      local_ba8[0] = uVar10;
      FUN_0110c098(plVar8,local_ba8);
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    lVar7 = plVar8[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  return uVar6;
}


