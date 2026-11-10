/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01432340; name: FUN_01432340
 */


undefined8 FUN_01432340(long param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379690), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar7 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar7;
  plVar8 = *(long **)(*(long *)(lVar7 + 0x50) + 0x38);
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((*(long *)(param_1 + 0x4c0) == 0x6b8f1aecf51ff115) ||
     (*(long *)(param_1 + 0x4c0) == -0x224018e1d268f681)) {
    if ((char)plVar8[0xd5] == '\0') goto LAB_01432458;
LAB_01432400:
    lVar7 = *(long *)(param_1 + 0x288);
    if (lVar7 != 0) {
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 1;
    }
    if (*(char *)(param_1 + 0x38) == '\0') {
      *(undefined1 *)(param_1 + 0x38) = 1;
    }
    if ((*(long *)(param_1 + 0x4c0) != -0x224018e1d268f681) || ((param_2 & 1) != 0)) {
      if ((param_2 & 1) != 0) {
        if (*(char *)(param_1 + 0x4fb) == '\0') {
          lVar7 = *(long *)(param_1 + 0x10);
          if ((**(char **)(param_1 + 0x150) != '\0') &&
             (lVar6 = *(long *)(lVar7 + 0x148), lVar6 != 0)) {
            FUN_0283b1e8(lVar6,param_1 + 0x148);
          }
          if ((**(char **)(param_1 + 0x170) != '\0') &&
             (lVar7 = *(long *)(lVar7 + 0x148), lVar7 != 0)) {
            FUN_0283b430(lVar7,param_1 + 0x168);
          }
          uVar5 = 1;
          *(undefined1 *)(param_1 + 0x4fb) = 1;
        }
        else {
          uVar5 = 1;
        }
        goto LAB_0143248c;
      }
      FUN_01434518(param_1);
      goto LAB_01432578;
    }
    lVar7 = *(long *)(param_1 + 0x288);
    if (lVar7 != 0) {
LAB_01432460:
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe;
      goto LAB_0143246c;
    }
  }
  else {
    if (*(char *)((long)plVar8 + 0x6a9) != '\0') goto LAB_01432400;
LAB_01432458:
    lVar7 = *(long *)(param_1 + 0x288);
    if (lVar7 != 0) goto LAB_01432460;
LAB_0143246c:
    if (*(char *)(param_1 + 0x38) == '\0') {
LAB_01432578:
      uVar5 = 0;
      goto LAB_0143248c;
    }
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  uVar5 = 0;
  *(byte *)(*(long *)(param_1 + 0x40) + 0x58) = *(byte *)(*(long *)(param_1 + 0x40) + 0x58) & 0xfe;
LAB_0143248c:
  lVar7 = plVar8[0xb];
  piVar1 = (int *)(lVar7 + 0xc);
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
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  return uVar5;
}


