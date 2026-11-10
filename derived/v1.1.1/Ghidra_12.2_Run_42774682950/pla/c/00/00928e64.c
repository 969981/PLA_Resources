/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00928e64; name: FUN_00928e64
 */


void FUN_00928e64(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined4 local_18;
  uint uStack_14;
  
  if (*(char *)(param_1 + 0x70) != '\0') {
    uVar5 = FUN_009a8688(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x28));
    if ((*PTR_DAT_043796b8 & 1) == 0) {
      uStack_14 = uVar5;
      iVar6 = __cxa_guard_acquire(PTR_DAT_043796b8);
      uVar5 = uStack_14;
      if (iVar6 != 0) {
        FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043796b8);
        uVar5 = uStack_14;
      }
    }
    lVar8 = *(long *)PTR_DAT_043796c0;
    *(long *)PTR_DAT_043796c8 = lVar8;
    uVar7 = (uint)*(undefined8 *)(lVar8 + 0x110);
    if ((uVar5 & 1) == 0) {
      if ((uVar7 >> 8 & 1) != 0) {
        uVar5 = FUN_009287cc(param_1,1);
        if ((uVar5 & 0xff) != 0x1f) {
          FUN_009289bc(param_1,uVar5);
        }
        FUN_00928fc8(param_1);
        FUN_0092902c();
        return;
      }
    }
    else if ((uVar7 >> 8 & 1) == 0) {
      FUN_009a780c(&local_18,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x28),0);
      plVar4 = (long *)CONCAT44(uStack_14,local_18);
      if (plVar4 != (long *)0x0) {
        lVar8 = plVar4[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*plVar4 + 0x20))();
        }
      }
      return;
    }
  }
  return;
}


