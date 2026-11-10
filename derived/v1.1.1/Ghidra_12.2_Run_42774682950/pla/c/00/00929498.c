/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00929498; name: FUN_00929498
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00929498(undefined8 param_1,int param_2,short param_3,uint param_4,int param_5)

{
  int *piVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_120;
  char *local_118;
  undefined8 local_110;
  long *local_108;
  undefined8 local_100;
  char *pcStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  char *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  char *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char *local_68;
  undefined8 uStack_60;
  long *local_58;
  char *local_50;
  undefined8 uStack_48;
  
  if (((DAT_043a8690 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043a8690), iVar7 != 0)) {
    DAT_043a84e0 = 0x1e3;
    DAT_043a84e4 = 1;
    _DAT_043a84e8 = 0x1cb;
    local_120 = 0x38b66d2539e9c6b0;
    local_118 = "tokiNoHoukou_ActPoint_Self";
    local_110 = 0x1a;
    FUN_02a4754c(0x43a84f0,&local_120);
    DAT_043a8510 = 0x1e3;
    DAT_043a8514 = 1;
    DAT_043a8518 = 0x1000001cb;
    local_58 = (long *)0x8b761aadf20a9a91;
    local_50 = "tokiNoHoukou_ActPoint_Self_Powerful";
    uStack_48 = 0x23;
    FUN_02a4754c(0x43a8520,&local_58);
    DAT_043a8540 = 0x1e3;
    DAT_043a8544 = 1;
    DAT_043a8548 = 0x2000001cb;
    local_70 = 0xc65adc440077f310;
    local_68 = "tokiNoHoukou_ActPoint_Self_Technical";
    uStack_60 = 0x24;
    FUN_02a4754c(0x43a8550,&local_70);
    DAT_043a8574 = 1;
    DAT_043a8570 = 0x1e4;
    DAT_043a8578 = 0x1cc;
    local_88 = 0x6ffd057af33625bd;
    local_80 = "akuuSetudan_ActPoint_Self";
    uStack_78 = 0x19;
    FUN_02a4754c(0x43a8580,&local_88);
    DAT_043a85a0 = 0x1e4;
    DAT_043a85a4 = 1;
    DAT_043a85a8 = 0x1000001cc;
    local_a0 = 0x5aab83b85d7d7bea;
    local_98 = "akuuSetudan_ActPoint_Self_Powerful";
    uStack_90 = 0x22;
    FUN_02a4754c(0x43a85b0,&local_a0);
    DAT_043a85d0 = 0x1e4;
    DAT_043a85d4 = 1;
    local_a8 = 0x23;
    DAT_043a85d8 = 0x2000001cc;
    local_b8 = 0xc3356cc533ed1171;
    pcStack_b0 = "akuuSetudan_ActPoint_Self_Technical";
    FUN_02a4754c(0x43a85e0,&local_b8);
    DAT_043a8604 = 1;
    DAT_043a8600 = 0x1e7;
    DAT_043a8608 = 0x1d3;
    local_d0 = 0x18c7a21f031d722d;
    local_c8 = "shadowDive_ActPoint_Self";
    uStack_c0 = 0x18;
    FUN_02a4754c(0x43a8610,&local_d0);
    DAT_043a8630 = 0x1e7;
    DAT_043a8634 = 1;
    DAT_043a8638 = 0x1000001d3;
    local_e8 = 0x1e2a497e656ec61a;
    local_e0 = "shadowDive_ActPoint_Self_Powerful";
    uStack_d8 = 0x21;
    FUN_02a4754c(0x43a8640,&local_e8);
    DAT_043a8660 = 0x1e7;
    DAT_043a8664 = 1;
    local_f0 = 0x22;
    DAT_043a8668 = 0x2000001d3;
    local_100 = 0x80e42917ab725321;
    pcStack_f8 = "shadowDive_ActPoint_Self_Technical";
    FUN_02a4754c(&DAT_043a8670,&local_100);
    FUN_00100250(&LAB_00929d30,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043a8690);
  }
  if ((((DAT_043a84e0 == param_2) && (DAT_043a84e4 == param_3)) && (DAT_043a84e8 == param_4)) &&
     (DAT_043a84ec == param_5)) {
    lVar10 = 0;
  }
  else if (((DAT_043a8510 == param_2) && (DAT_043a8514 == param_3)) &&
          (((uint)DAT_043a8518 == param_4 && (DAT_043a8518._4_4_ == param_5)))) {
    lVar10 = 1;
  }
  else if (((DAT_043a8540 == param_2) && (DAT_043a8544 == param_3)) &&
          (((uint)DAT_043a8548 == param_4 && (DAT_043a8548._4_4_ == param_5)))) {
    lVar10 = 2;
  }
  else if ((((DAT_043a8570 == param_2) && (DAT_043a8574 == param_3)) &&
           ((uint)DAT_043a8578 == param_4)) && (DAT_043a8578._4_4_ == param_5)) {
    lVar10 = 3;
  }
  else if (((DAT_043a85a0 == param_2) && (DAT_043a85a4 == param_3)) &&
          (((uint)DAT_043a85a8 == param_4 && (DAT_043a85a8._4_4_ == param_5)))) {
    lVar10 = 4;
  }
  else if (((DAT_043a85d0 == param_2) && (DAT_043a85d4 == param_3)) &&
          (((uint)DAT_043a85d8 == param_4 && (DAT_043a85d8._4_4_ == param_5)))) {
    lVar10 = 5;
  }
  else if ((((DAT_043a8600 == param_2) && (DAT_043a8604 == param_3)) &&
           ((uint)DAT_043a8608 == param_4)) && (DAT_043a8608._4_4_ == param_5)) {
    lVar10 = 6;
  }
  else if (((DAT_043a8630 == param_2) && (DAT_043a8634 == param_3)) &&
          (((uint)DAT_043a8638 == param_4 && (DAT_043a8638._4_4_ == param_5)))) {
    lVar10 = 7;
  }
  else {
    if (((DAT_043a8660 != param_2) || (DAT_043a8664 != param_3)) ||
       (((uint)DAT_043a8668 != param_4 || (DAT_043a8668._4_4_ != param_5)))) {
      uVar5 = (ulong)param_4;
      if (param_5 == 1) {
        lVar10 = (&DAT_0428af30)[uVar5 * 6];
        if (lVar10 == 0) {
          plVar9 = &DAT_0428af30;
        }
        else {
          plVar9 = &DAT_0428af30;
          if (*(char *)(lVar10 + 0x1e1) != '\0') {
            plVar9 = &DAT_0428af30 + uVar5 * 6;
          }
        }
        piVar1 = (int *)((long)*(uint **)(*plVar9 + 0x250) + (ulong)**(uint **)(*plVar9 + 0x250));
        if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x93) {
          return 0;
        }
        uVar2 = ((ushort *)((long)piVar1 - (long)*piVar1))[0x49];
      }
      else if (param_5 == 2) {
        lVar10 = (&DAT_0428af30)[uVar5 * 6];
        if (lVar10 == 0) {
          plVar9 = &DAT_0428af30;
        }
        else {
          plVar9 = &DAT_0428af30;
          if (*(char *)(lVar10 + 0x1e1) != '\0') {
            plVar9 = &DAT_0428af30 + uVar5 * 6;
          }
        }
        piVar1 = (int *)((long)*(uint **)(*plVar9 + 0x250) + (ulong)**(uint **)(*plVar9 + 0x250));
        if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x91) {
          return 0;
        }
        uVar2 = ((ushort *)((long)piVar1 - (long)*piVar1))[0x48];
      }
      else {
        lVar10 = (&DAT_0428af30)[uVar5 * 6];
        if (lVar10 == 0) {
          plVar9 = &DAT_0428af30;
        }
        else {
          plVar9 = &DAT_0428af30;
          if (*(char *)(lVar10 + 0x1e1) != '\0') {
            plVar9 = &DAT_0428af30 + uVar5 * 6;
          }
        }
        piVar1 = (int *)((long)*(uint **)(*plVar9 + 0x250) + (ulong)**(uint **)(*plVar9 + 0x250));
        if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x8f) {
          return 0;
        }
        uVar2 = ((ushort *)((long)piVar1 - (long)*piVar1))[0x47];
      }
      if ((ulong)uVar2 == 0) {
        return 0;
      }
      return *(undefined4 *)((long)piVar1 + (ulong)uVar2);
    }
    lVar10 = 8;
  }
  local_120 = 0x63e2672f9e43a54e;
  local_118 = "battle_logic";
  local_110 = 0xc;
  local_108 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar8 = *(undefined8 *)PTR_DAT_04379668;
  *(undefined8 *)PTR_DAT_04379670 = uVar8;
  FUN_00d7d9e4(&local_58,uVar8,&local_120);
  if (local_58 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_00d78f50(local_58,lVar10 * 0x30 + 0x43a84f0);
    if (local_58 != (long *)0x0) {
      plVar9 = local_58 + 10;
      do {
        iVar7 = (int)*plVar9 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
  }
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x20))();
  }
  return uVar6;
}


