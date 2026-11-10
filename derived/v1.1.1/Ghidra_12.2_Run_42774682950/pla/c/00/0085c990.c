/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085c990; name: FUN_0085c990
 */


void FUN_0085c990(long param_1)

{
  bool bVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  undefined8 local_40;
  undefined4 local_38;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1378));
  if (*(char *)(*(long *)(param_1 + 0x1308) + 0x10) != '\0') {
    *(undefined1 *)(*(long *)(param_1 + 0x1308) + 0x10) = 0;
    FUN_0085f5a8(*(undefined8 *)(param_1 + 0x1300));
  }
  lVar4 = *(long *)(param_1 + 0x1300);
  bVar1 = *(char *)(lVar4 + 0xa8) == '\0';
  if (bVar1) {
    cVar2 = *(char *)(param_1 + 0x1370);
  }
  else {
    *(undefined1 *)(lVar4 + 0xa8) = 0;
    FUN_0085f68c(lVar4,*(undefined8 *)(param_1 + 0x1308));
    cVar2 = *(char *)(param_1 + 0x1370);
  }
  if (cVar2 == '\0') {
    if (*(short *)(param_1 + 0x114e) == 0) {
LAB_0085cadc:
      *(undefined1 *)(param_1 + 0x1370) = 1;
    }
    else {
      uVar6 = 0;
      plVar5 = (long *)FUN_0085e8d4(*(undefined8 *)(param_1 + 0x1308),0);
      if (plVar5 != (long *)0x0) goto LAB_0085ca34;
      do {
        do {
          uVar6 = uVar6 + 1;
          if (*(ushort *)(param_1 + 0x114e) <= uVar6) goto LAB_0085cadc;
          plVar5 = (long *)FUN_0085e8d4(*(undefined8 *)(param_1 + 0x1308),uVar6);
        } while (plVar5 == (long *)0x0);
LAB_0085ca34:
      } while (((*plVar5 == *(long *)(*(long *)(param_1 + 0x1308) + 0x18)) ||
               (*(char *)((long)plVar5 + 0x59) == '\0')) || ((int)plVar5[2] - 0xdU < 2));
    }
  }
  if (!bVar1) {
    local_38 = 0;
    local_40 = 0x1000000;
    FUN_0085eaac(*(undefined8 *)(param_1 + 0x1308),&local_40);
    puVar3 = PTR_DAT_043773c0;
    lVar4 = FUN_008551bc(*(undefined8 *)PTR_DAT_043773c0);
    *(undefined1 *)(*(long *)(lVar4 + 0x10) + 0xa8) = 1;
    lVar4 = FUN_008551bc(*(undefined8 *)puVar3);
    *(undefined1 *)(*(long *)(lVar4 + 8) + 0x82) = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1378));
  return;
}


