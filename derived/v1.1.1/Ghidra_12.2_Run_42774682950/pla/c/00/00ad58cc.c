/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ad58cc; name: FUN_00ad58cc
 */


bool FUN_00ad58cc(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  puVar2 = PTR_DAT_0437a6e0;
  puVar1 = PTR_DAT_0437a6d8;
  plVar8 = (long *)*param_2;
  plVar6 = (long *)param_2[1];
  lVar7 = *param_1;
  if (plVar8 != plVar6) {
    do {
      if (*plVar8 != 0) {
        plVar4 = (long *)(*(code *)**(undefined8 **)(*plVar8 + 8))();
        if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
          uVar5 = FUN_00ad3750();
          *(undefined8 *)puVar2 = uVar5;
          __cxa_guard_release(puVar1);
        }
        for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
          if (plVar4 == (long *)puVar2) goto LAB_00ad5930;
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar6);
    plVar8 = plVar6;
  }
LAB_00ad5930:
  plVar6 = (long *)param_2[1];
  if (plVar8 != plVar6) {
    (**(code **)(*(long *)*plVar8 + 0x70))();
    *(undefined1 *)(lVar7 + 0x123) = 1;
  }
  return plVar8 != plVar6;
}


