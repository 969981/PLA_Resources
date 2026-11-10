/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dafc80; name: FUN_00dafc80
 */


undefined8 FUN_00dafc80(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *local_18;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar5 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar5;
  if ((lVar5 == 0) || (FUN_0114907c(&local_18), local_18 == (long *)0x0)) {
    return 0xffffffffffffffff;
  }
  FUN_0111b7c0(local_18,0);
  uVar6 = FUN_00dafd64();
  if (local_18 == (long *)0x0) {
    return uVar6;
  }
  lVar5 = local_18[0xb];
  piVar1 = (int *)(lVar5 + 0xc);
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
    *(undefined8 *)(lVar5 + 0x18) = 0;
    (**(code **)(*local_18 + 0x20))();
    return uVar6;
  }
  return uVar6;
}


