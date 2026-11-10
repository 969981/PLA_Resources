/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02792804; name: FUN_02792804
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02792804(long param_1,char *param_2)

{
  int *piVar1;
  char *__src;
  char cVar2;
  bool bVar3;
  size_t __n;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  char *__s1;
  char *pcVar8;
  char local_370 [25];
  char local_357 [25];
  undefined1 local_33e;
  char local_325;
  char local_30c;
  char local_2f3;
  char local_2da;
  char local_2c1;
  char local_2a8;
  char local_28f;
  char local_276;
  char local_25d;
  char local_244;
  char local_22b;
  char local_212;
  char local_1f9;
  char local_1e0;
  char local_1c7;
  char local_1ae;
  char local_195;
  char local_17c;
  char local_163;
  char local_14a;
  char local_131;
  char local_118;
  char local_ff;
  char local_e6;
  char local_cd;
  char local_b4;
  char local_9b;
  char local_82;
  char local_69;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar6 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar6;
  plVar7 = *(long **)(lVar6 + 0x2a8);
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0xb];
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
    __s1 = *(char **)(param_1 + 0x60);
    pcVar8 = *(char **)(param_1 + 0x68);
    if (__s1 != pcVar8) {
      do {
        while( true ) {
          iVar4 = strcmp(__s1,param_2);
          __src = __s1 + 0x18;
          if (iVar4 != 0) break;
          __n = (long)pcVar8 - (long)__src;
          if (__n != 0) {
            memmove(__s1,__src,__n);
          }
          pcVar8 = __s1 + ((long)__n >> 3) * 8;
          *(char **)(param_1 + 0x68) = pcVar8;
          if (__s1 == pcVar8) goto LAB_027928f4;
        }
        __s1 = __src;
      } while (__src != pcVar8);
    }
LAB_027928f4:
    FUN_0110c138(local_370,plVar7);
    lVar6 = 0;
    cVar2 = local_370[0];
    while( true ) {
      if ((cVar2 != '\0') && (iVar4 = strcmp(local_370 + lVar6 + 1,param_2), iVar4 == 0)) {
        local_370[lVar6] = '\0';
      }
      if (lVar6 + 0x19 == 800) break;
      cVar2 = local_357[lVar6];
      lVar6 = lVar6 + 0x19;
    }
    FUN_0110c0c4(plVar7,local_370);
    local_82 = '\0';
    local_69 = '\0';
    local_9b = '\0';
    local_b4 = '\0';
    local_cd = '\0';
    local_e6 = '\0';
    local_ff = '\0';
    local_118 = '\0';
    local_131 = '\0';
    local_14a = '\0';
    local_163 = '\0';
    local_17c = '\0';
    local_195 = '\0';
    local_1ae = '\0';
    local_1c7 = '\0';
    local_1e0 = '\0';
    local_1f9 = '\0';
    local_212 = '\0';
    local_22b = '\0';
    local_244 = '\0';
    local_25d = '\0';
    local_276 = '\0';
    local_28f = '\0';
    local_2a8 = '\0';
    local_2c1 = '\0';
    local_2da = '\0';
    local_2f3 = '\0';
    local_30c = '\0';
    local_325 = '\0';
    local_33e = 0;
    local_357[0] = '\0';
    if (local_370[0] != '\0') {
      local_370[0] = '\0';
    }
    lVar6 = plVar7[0xb];
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
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
  }
  return;
}


