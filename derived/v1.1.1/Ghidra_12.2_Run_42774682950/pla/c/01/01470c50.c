/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01470c50; name: FUN_01470c50
 */


long FUN_01470c50(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long *local_48;
  
  local_60 = *param_2;
  uVar9 = *(undefined8 *)(param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  local_58 = param_2[1];
  local_50 = param_2[2];
  plVar2 = (long *)param_2[3];
  local_48 = plVar2;
  if (plVar2 == (long *)0x0) {
    plVar7 = (long *)FUN_0146fdb0(uVar9,uVar1,&local_60);
  }
  else {
    (**(code **)(*plVar2 + 0x18))(plVar2);
    plVar7 = (long *)FUN_0146fdb0(uVar9,uVar1,&local_60);
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  if ((*(long **)(param_1 + 0x78) != plVar7) && (lVar10 = *plVar7, lVar10 != 0)) {
    puVar8 = (undefined8 *)
             (*(code *)**(undefined8 **)(lVar10 + 0x50))((undefined8 *)(lVar10 + 0x50));
    puVar5 = PTR_DAT_0437f628;
    if (((*PTR_DAT_0437f620 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_0437f620), puVar4 = PTR_DAT_0437b330, iVar6 != 0)) {
      if (((*PTR_DAT_0437b328 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_0437b328), puVar3 = PTR_DAT_043794d8, iVar6 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
          uVar9 = FUN_0087f8f0();
          *(undefined8 *)puVar3 = uVar9;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar4 = puVar3;
        __cxa_guard_release(PTR_DAT_0437b328);
      }
      *(undefined **)puVar5 = puVar4;
      __cxa_guard_release(PTR_DAT_0437f620);
    }
    if (puVar8 != (undefined8 *)0x0) {
      do {
        if (puVar8 == (undefined8 *)puVar5) {
          return lVar10;
        }
        puVar8 = (undefined8 *)*puVar8;
      } while (puVar8 != (undefined8 *)0x0);
      return 0;
    }
  }
  return 0;
}


