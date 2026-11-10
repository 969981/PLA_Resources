/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092f2e4; name: FUN_0092f2e4
 */


void FUN_0092f2e4(long param_1,undefined1 param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *local_28;
  
  if ((param_3 & 0xff) != 5) {
    uVar5 = FUN_02948a7c(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x98),param_3);
    if ((uVar5 & 1) != 0) {
      if ((uint)*(byte *)(*(long *)(*(long *)(param_1 + 0x68) + 0x98) + 0x130) != (param_3 & 0xff))
      {
        lVar6 = FUN_00923bb4();
        FUN_010c70c8(*(undefined8 *)(param_1 + 0x78),param_2,lVar6 + 0x418);
        return;
      }
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
      FUN_01148cdc(&local_28);
      FUN_010c6160(*(undefined8 *)(param_1 + 0x78),param_2,local_28);
      if (local_28 != (long *)0x0) {
        lVar6 = local_28[0xb];
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
          (**(code **)(*local_28 + 0x20))();
        }
      }
    }
  }
  return;
}


