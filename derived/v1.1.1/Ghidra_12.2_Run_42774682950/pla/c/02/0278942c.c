/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0278942c; name: FUN_0278942c
 */


undefined8 FUN_0278942c(undefined8 param_1,int param_2,undefined8 *param_3)

{
  int *piVar1;
  short *__src;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  short *psVar10;
  long *plVar11;
  undefined1 *puVar12;
  short sStack_1c448;
  short asStack_1c446 [28243];
  undefined1 auStack_e7a0 [2704];
  undefined1 auStack_dd10 [8];
  undefined1 auStack_dd08 [12];
  int local_dcfc;
  undefined1 auStack_d200 [12];
  int local_d1f4;
  undefined1 auStack_c6f8 [12];
  int local_c6ec;
  undefined1 auStack_bbf0 [12];
  int local_bbe4;
  undefined1 auStack_b0e8 [12];
  int local_b0dc;
  undefined1 auStack_a5e0 [12];
  int local_a5d4;
  undefined1 auStack_9ad8 [12];
  int local_9acc;
  undefined1 auStack_8fd0 [12];
  int local_8fc4;
  undefined1 auStack_84c8 [12];
  int local_84bc;
  undefined1 auStack_79c0 [12];
  int local_79b4;
  undefined1 auStack_6eb8 [12];
  int local_6eac;
  undefined1 auStack_63b0 [12];
  int local_63a4;
  undefined1 auStack_58a8 [12];
  int local_589c;
  undefined1 auStack_4da0 [12];
  int local_4d94;
  undefined1 auStack_4298 [12];
  int local_428c;
  undefined1 auStack_3790 [12];
  int local_3784;
  undefined1 auStack_2c88 [12];
  int local_2c7c;
  undefined1 auStack_2180 [12];
  int local_2174;
  undefined1 auStack_1678 [12];
  int local_166c;
  undefined1 auStack_b70 [12];
  int local_b64;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar9 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar9;
  plVar11 = *(long **)(lVar9 + 0x2a8);
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  lVar9 = plVar11[0xb];
  if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar9 + 0x10) == 0) {
    uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
    *(undefined8 *)(lVar9 + 0x10) = uVar8;
  }
  piVar1 = (int *)(lVar9 + 0xc);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  memcpy(auStack_dd10,plVar11 + 0xe,0xdca8);
  if (local_dcfc == param_2) {
    puVar12 = auStack_dd08;
  }
  else if (local_d1f4 == param_2) {
    puVar12 = auStack_d200;
  }
  else if (local_c6ec == param_2) {
    puVar12 = auStack_c6f8;
  }
  else if (local_bbe4 == param_2) {
    puVar12 = auStack_bbf0;
  }
  else if (local_b0dc == param_2) {
    puVar12 = auStack_b0e8;
  }
  else if (local_a5d4 == param_2) {
    puVar12 = auStack_a5e0;
  }
  else if (local_9acc == param_2) {
    puVar12 = auStack_9ad8;
  }
  else if (local_8fc4 == param_2) {
    puVar12 = auStack_8fd0;
  }
  else if (local_84bc == param_2) {
    puVar12 = auStack_84c8;
  }
  else if (local_79b4 == param_2) {
    puVar12 = auStack_79c0;
  }
  else if (local_6eac == param_2) {
    puVar12 = auStack_6eb8;
  }
  else if (local_63a4 == param_2) {
    puVar12 = auStack_63b0;
  }
  else if (local_589c == param_2) {
    puVar12 = auStack_58a8;
  }
  else if (local_4d94 == param_2) {
    puVar12 = auStack_4da0;
  }
  else if (local_428c == param_2) {
    puVar12 = auStack_4298;
  }
  else if (local_3784 == param_2) {
    puVar12 = auStack_3790;
  }
  else if (local_2c7c == param_2) {
    puVar12 = auStack_2c88;
  }
  else if (local_2174 == param_2) {
    puVar12 = auStack_2180;
  }
  else if (local_166c == param_2) {
    puVar12 = auStack_1678;
  }
  else {
    if (local_b64 != param_2) {
      uVar8 = 0;
      goto LAB_0278972c;
    }
    puVar12 = auStack_b70;
  }
  *(undefined4 *)(puVar12 + 8) = 2;
  uVar8 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[3];
  __src = (short *)(puVar12 + 0x78);
  *(undefined8 *)(puVar12 + 0x68) = param_3[2];
  *(undefined8 *)(puVar12 + 0x70) = uVar3;
  *(undefined8 *)(puVar12 + 0x58) = uVar8;
  *(undefined8 *)(puVar12 + 0x60) = uVar2;
  sVar6 = FUN_02786d20(2);
  psVar10 = __src;
  do {
    if (*psVar10 == 0x6ae) {
joined_r0x02789590:
      if (psVar10 != (short *)(puVar12 + 0xb04)) {
        psVar10 = __src;
        goto LAB_027896dc;
      }
      break;
    }
    if (psVar10[2] == 0x6ae) {
      psVar10 = psVar10 + 2;
      goto joined_r0x02789590;
    }
    if (psVar10[4] == 0x6ae) {
      psVar10 = psVar10 + 4;
      goto joined_r0x02789590;
    }
    psVar10 = psVar10 + 6;
  } while (psVar10 != (short *)(puVar12 + 0xb04));
  memcpy(&sStack_1c448,__src,0xa8c);
  if (sStack_1c448 == 0) {
    lVar9 = 0;
    psVar10 = &sStack_1c448;
LAB_027896bc:
    *psVar10 = 0x6ae;
    asStack_1c446[lVar9 * 2] = sVar6 + 1;
  }
  else {
    if (asStack_1c446[1] == 0) {
      psVar10 = (short *)((ulong)&sStack_1c448 | 4);
      lVar9 = 1;
      goto LAB_027896bc;
    }
    if (asStack_1c446[3] == 0) {
      psVar10 = asStack_1c446 + 3;
      lVar9 = 2;
      goto LAB_027896bc;
    }
    if (asStack_1c446[5] == 0) {
      psVar10 = asStack_1c446 + 5;
      lVar9 = 3;
      goto LAB_027896bc;
    }
    if (asStack_1c446[7] == 0) {
      psVar10 = asStack_1c446 + 7;
      lVar9 = 4;
      goto LAB_027896bc;
    }
    if (asStack_1c446[9] == 0) {
      psVar10 = asStack_1c446 + 9;
      lVar9 = 5;
      goto LAB_027896bc;
    }
    if (asStack_1c446[0xb] == 0) {
      psVar10 = asStack_1c446 + 0xb;
      lVar9 = 6;
      goto LAB_027896bc;
    }
    if (asStack_1c446[0xd] == 0) {
      psVar10 = asStack_1c446 + 0xd;
      lVar9 = 7;
      goto LAB_027896bc;
    }
    if (asStack_1c446[0xf] == 0) {
      psVar10 = asStack_1c446 + 0xf;
      lVar9 = 8;
      goto LAB_027896bc;
    }
    if (asStack_1c446[0x11] == 0) {
      psVar10 = asStack_1c446 + 0x11;
      lVar9 = 9;
      goto LAB_027896bc;
    }
    if (asStack_1c446[0x13] == 0) {
      psVar10 = asStack_1c446 + 0x13;
      lVar9 = 10;
      goto LAB_027896bc;
    }
    if (asStack_1c446[0x15] == 0) {
      psVar10 = asStack_1c446 + 0x15;
      lVar9 = 0xb;
      goto LAB_027896bc;
    }
    if (asStack_1c446[0x17] == 0) {
      psVar10 = asStack_1c446 + 0x17;
      lVar9 = 0xc;
      goto LAB_027896bc;
    }
    if (asStack_1c446[0x19] == 0) {
      psVar10 = asStack_1c446 + 0x19;
      lVar9 = 0xd;
      goto LAB_027896bc;
    }
    if (asStack_1c446[0x1b] == 0) {
      psVar10 = asStack_1c446 + 0x1b;
      lVar9 = 0xe;
      goto LAB_027896bc;
    }
    if (asStack_1c446[0x1d] == 0) {
      psVar10 = asStack_1c446 + 0x1d;
      lVar9 = 0xf;
      goto LAB_027896bc;
    }
    if (asStack_1c446[0x1f] == 0) {
      psVar10 = asStack_1c446 + 0x1f;
      lVar9 = 0x10;
      goto LAB_027896bc;
    }
    if (asStack_1c446[0x21] == 0) {
      psVar10 = asStack_1c446 + 0x21;
      lVar9 = 0x11;
      goto LAB_027896bc;
    }
    if (asStack_1c446[0x23] == 0) {
      psVar10 = asStack_1c446 + 0x23;
      lVar9 = 0x12;
      goto LAB_027896bc;
    }
    if (asStack_1c446[0x25] == 0) {
      psVar10 = asStack_1c446 + 0x25;
      lVar9 = 0x13;
      goto LAB_027896bc;
    }
  }
  psVar10 = &sStack_1c448;
LAB_027896dc:
  memcpy(auStack_e7a0,psVar10,0xa8c);
  FUN_02786e50(&sStack_1c448,auStack_e7a0);
  memcpy(__src,&sStack_1c448,0xa8c);
  FUN_02785610(&sStack_1c448,auStack_dd10);
  FUN_0110b874(plVar11,&sStack_1c448);
  FUN_02787bdc(param_1);
  uVar8 = 1;
LAB_0278972c:
  lVar9 = plVar11[0xb];
  piVar1 = (int *)(lVar9 + 0xc);
  do {
    iVar7 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar7 + -1 == 0) {
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  return uVar8;
}


