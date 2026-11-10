/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0279130c; name: FUN_0279130c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0279130c(undefined8 param_1,char *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  long *plVar9;
  char local_388 [776];
  char local_80 [32];
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar6 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar6;
  plVar9 = *(long **)(lVar6 + 0x2a8);
  if (plVar9 == (long *)0x0) {
    return;
  }
  lVar6 = plVar9[0xb];
  if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar6 + 0x10) == 0) {
    uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
    *(undefined8 *)(lVar6 + 0x10) = uVar5;
  }
  piVar1 = (int *)(lVar6 + 0xc);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_0110c138(local_388,plVar9);
  cVar2 = local_388[0];
  if (((((((((local_388[0] == '\0') ||
            (iVar4 = strcmp((char *)((ulong)local_388 | 1),param_2), iVar4 != 0)) &&
           ((local_388[0x19] == '\0' || (iVar4 = strcmp(local_388 + 0x1a,param_2), iVar4 != 0)))) &&
          ((local_388[0x32] == '\0' || (iVar4 = strcmp(local_388 + 0x33,param_2), iVar4 != 0)))) &&
         ((local_388[0x4b] == '\0' || (iVar4 = strcmp(local_388 + 0x4c,param_2), iVar4 != 0)))) &&
        (((((local_388[100] == '\0' || (iVar4 = strcmp(local_388 + 0x65,param_2), iVar4 != 0)) &&
           ((local_388[0x7d] == '\0' || (iVar4 = strcmp(local_388 + 0x7e,param_2), iVar4 != 0)))) &&
          ((local_388[0x96] == '\0' || (iVar4 = strcmp(local_388 + 0x97,param_2), iVar4 != 0)))) &&
         ((local_388[0xaf] == '\0' || (iVar4 = strcmp(local_388 + 0xb0,param_2), iVar4 != 0)))))) &&
       ((((local_388[200] == '\0' || (iVar4 = strcmp(local_388 + 0xc9,param_2), iVar4 != 0)) &&
         ((local_388[0xe1] == '\0' || (iVar4 = strcmp(local_388 + 0xe2,param_2), iVar4 != 0)))) &&
        (((local_388[0xfa] == '\0' || (iVar4 = strcmp(local_388 + 0xfb,param_2), iVar4 != 0)) &&
         ((local_388[0x113] == '\0' || (iVar4 = strcmp(local_388 + 0x114,param_2), iVar4 != 0)))))))
       ) && (((((local_388[300] == '\0' || (iVar4 = strcmp(local_388 + 0x12d,param_2), iVar4 != 0))
               && ((local_388[0x145] == '\0' ||
                   (iVar4 = strcmp(local_388 + 0x146,param_2), iVar4 != 0)))) &&
              ((local_388[0x15e] == '\0' || (iVar4 = strcmp(local_388 + 0x15f,param_2), iVar4 != 0))
              )) && ((local_388[0x177] == '\0' ||
                     (iVar4 = strcmp(local_388 + 0x178,param_2), iVar4 != 0)))))) &&
     ((((((local_388[400] == '\0' || (iVar4 = strcmp(local_388 + 0x191,param_2), iVar4 != 0)) &&
         ((local_388[0x1a9] == '\0' || (iVar4 = strcmp(local_388 + 0x1aa,param_2), iVar4 != 0)))) &&
        (((local_388[0x1c2] == '\0' || (iVar4 = strcmp(local_388 + 0x1c3,param_2), iVar4 != 0)) &&
         (((local_388[0x1db] == '\0' || (iVar4 = strcmp(local_388 + 0x1dc,param_2), iVar4 != 0)) &&
          ((((local_388[500] == '\0' || (iVar4 = strcmp(local_388 + 0x1f5,param_2), iVar4 != 0)) &&
            ((local_388[0x20d] == '\0' || (iVar4 = strcmp(local_388 + 0x20e,param_2), iVar4 != 0))))
           && ((local_388[0x226] == '\0' || (iVar4 = strcmp(local_388 + 0x227,param_2), iVar4 != 0))
              )))))))) &&
       ((((local_388[0x23f] == '\0' || (iVar4 = strcmp(local_388 + 0x240,param_2), iVar4 != 0)) &&
         ((((((local_388[600] == '\0' || (iVar4 = strcmp(local_388 + 0x259,param_2), iVar4 != 0)) &&
             ((local_388[0x271] == '\0' || (iVar4 = strcmp(local_388 + 0x272,param_2), iVar4 != 0)))
             ) && ((local_388[0x28a] == '\0' ||
                   (iVar4 = strcmp(local_388 + 0x28b,param_2), iVar4 != 0)))) &&
           ((local_388[0x2a3] == '\0' || (iVar4 = strcmp(local_388 + 0x2a4,param_2), iVar4 != 0))))
          && (((local_388[700] == '\0' || (iVar4 = strcmp(local_388 + 0x2bd,param_2), iVar4 != 0))
              && ((local_388[0x2d5] == '\0' ||
                  (iVar4 = strcmp(local_388 + 0x2d6,param_2), iVar4 != 0)))))))) &&
        ((local_388[0x2ee] == '\0' || (iVar4 = strcmp(local_388 + 0x2ef,param_2), iVar4 != 0))))))
      && ((local_388[0x307] == '\0' || (iVar4 = strcmp(local_388 + 0x308,param_2), iVar4 != 0))))))
  {
    pcVar7 = local_388;
    if (cVar2 != '\0') {
      if (local_388[0x19] == '\0') {
        pcVar7 = local_388 + 0x19;
      }
      else if (local_388[0x32] == '\0') {
        pcVar7 = local_388 + 0x32;
      }
      else if (local_388[0x4b] == '\0') {
        pcVar7 = local_388 + 0x4b;
      }
      else if (local_388[100] == '\0') {
        pcVar7 = local_388 + 100;
      }
      else if (local_388[0x7d] == '\0') {
        pcVar7 = local_388 + 0x7d;
      }
      else if (local_388[0x96] == '\0') {
        pcVar7 = local_388 + 0x96;
      }
      else if (local_388[0xaf] == '\0') {
        pcVar7 = local_388 + 0xaf;
      }
      else if (local_388[200] == '\0') {
        pcVar7 = local_388 + 200;
      }
      else if (local_388[0xe1] == '\0') {
        pcVar7 = local_388 + 0xe1;
      }
      else if (local_388[0xfa] == '\0') {
        pcVar7 = local_388 + 0xfa;
      }
      else if (local_388[0x113] == '\0') {
        pcVar7 = local_388 + 0x113;
      }
      else if (local_388[300] == '\0') {
        pcVar7 = local_388 + 300;
      }
      else if (local_388[0x145] == '\0') {
        pcVar7 = local_388 + 0x145;
      }
      else if (local_388[0x15e] == '\0') {
        pcVar7 = local_388 + 0x15e;
      }
      else if (local_388[0x177] == '\0') {
        pcVar7 = local_388 + 0x177;
      }
      else if (local_388[400] == '\0') {
        pcVar7 = local_388 + 400;
      }
      else if (local_388[0x1a9] == '\0') {
        pcVar7 = local_388 + 0x1a9;
      }
      else if (local_388[0x1c2] == '\0') {
        pcVar7 = local_388 + 0x1c2;
      }
      else if (local_388[0x1db] == '\0') {
        pcVar7 = local_388 + 0x1db;
      }
      else if (local_388[500] == '\0') {
        pcVar7 = local_388 + 500;
      }
      else if (local_388[0x20d] == '\0') {
        pcVar7 = local_388 + 0x20d;
      }
      else if (local_388[0x226] == '\0') {
        pcVar7 = local_388 + 0x226;
      }
      else if (local_388[0x23f] == '\0') {
        pcVar7 = local_388 + 0x23f;
      }
      else if (local_388[600] == '\0') {
        pcVar7 = local_388 + 600;
      }
      else if (local_388[0x271] == '\0') {
        pcVar7 = local_388 + 0x271;
      }
      else if (local_388[0x28a] == '\0') {
        pcVar7 = local_388 + 0x28a;
      }
      else if (local_388[0x2a3] == '\0') {
        pcVar7 = local_388 + 0x2a3;
      }
      else if (local_388[700] == '\0') {
        pcVar7 = local_388 + 700;
      }
      else if (local_388[0x2d5] == '\0') {
        pcVar7 = local_388 + 0x2d5;
      }
      else if (local_388[0x2ee] == '\0') {
        pcVar7 = local_388 + 0x2ee;
      }
      else {
        if (local_388[0x307] != '\0') goto LAB_027918d8;
        pcVar7 = local_388 + 0x307;
      }
    }
    uVar5 = *(undefined8 *)(param_2 + 8);
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(pcVar7 + 1) = *(undefined8 *)param_2;
    *(undefined8 *)(pcVar7 + 0x11) = uVar8;
    *(undefined8 *)(pcVar7 + 9) = uVar5;
    *pcVar7 = '\x01';
    FUN_0110c0c4(plVar9,local_388);
  }
LAB_027918d8:
  local_388[0x2ee] = '\0';
  local_388[0x307] = '\0';
  local_388[0x2d5] = '\0';
  local_388[700] = '\0';
  local_388[0x2a3] = '\0';
  local_388[0x28a] = '\0';
  local_388[0x271] = '\0';
  local_388[600] = '\0';
  local_388[0x23f] = '\0';
  local_388[0x226] = '\0';
  local_388[0x20d] = '\0';
  local_388[500] = '\0';
  local_388[0x1db] = '\0';
  local_388[0x1c2] = '\0';
  local_388[0x1a9] = '\0';
  local_388[400] = '\0';
  local_388[0x177] = '\0';
  local_388[0x15e] = '\0';
  local_388[0x145] = '\0';
  local_388[300] = '\0';
  local_388[0x113] = '\0';
  local_388[0xfa] = '\0';
  local_388[0xe1] = '\0';
  local_388[200] = '\0';
  local_388[0xaf] = '\0';
  local_388[0x96] = '\0';
  local_388[0x7d] = '\0';
  local_388[100] = '\0';
  local_388[0x4b] = '\0';
  local_388[0x32] = 0;
  local_388[0x19] = 0;
  if (local_388[0] != '\0') {
    local_388[0] = '\0';
  }
  lVar6 = plVar9[0xb];
  piVar1 = (int *)(lVar6 + 0xc);
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
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  return;
}


