/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0144db10; name: FUN_0144db10
 */


void FUN_0144db10(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *local_a8;
  long local_a0;
  long alStack_98 [15];
  
  local_a0 = -0x256a02cb505d5fae;
  alStack_98[0] = 0;
  alStack_98[1] = -0x256a03cb505d6161;
  alStack_98[2] = 0x100000000;
  alStack_98[3] = -0x256a04cb505d6314;
  alStack_98[4] = 0x100000001;
  alStack_98[5] = -0x256a05cb505d64c7;
  alStack_98[6] = 1;
  alStack_98[7] = -0x2659abf429d37283;
  alStack_98[8] = 2;
  alStack_98[9] = -0x2659aef429d3779c;
  alStack_98[10] = 0x100000002;
  alStack_98[0xb] = -0x2659adf429d375e9;
  alStack_98[0xc] = 0x100000003;
  alStack_98[0xd] = -0x2659b0f429d37b02;
  alStack_98[0xe] = 3;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_0114907c(&local_a8);
  lVar5 = FUN_0111b7c0(local_a8,0xb);
  if (local_a8 != (long *)0x0) {
    lVar6 = local_a8[0xb];
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
      (**(code **)(*local_a8 + 0x20))();
    }
  }
  if (local_a0 == lVar5) {
    lVar5 = 0;
  }
  else if (alStack_98[1] == lVar5) {
    lVar5 = 1;
  }
  else if (alStack_98[3] == lVar5) {
    lVar5 = 2;
  }
  else if (alStack_98[5] == lVar5) {
    lVar5 = 3;
  }
  else if (alStack_98[7] == lVar5) {
    lVar5 = 4;
  }
  else if (alStack_98[9] == lVar5) {
    lVar5 = 5;
  }
  else if (alStack_98[0xb] == lVar5) {
    lVar5 = 6;
  }
  else {
    if (alStack_98[0xd] != lVar5) {
      return;
    }
    lVar5 = 7;
  }
  *(long *)(param_1 + 0x98) = alStack_98[lVar5 * 2];
  return;
}


