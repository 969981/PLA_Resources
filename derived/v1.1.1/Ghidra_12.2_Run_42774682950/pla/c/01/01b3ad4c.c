/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b3ad4c; name: FUN_01b3ad4c
 */


undefined8 FUN_01b3ad4c(long param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_1 + 0x5b8);
  while( true ) {
    if (lVar4 == param_1 + 0x5b0) {
      plVar3 = (long *)(**(code **)(**(long **)(param_1 + 0x5c8) + 0x10))
                                 (*(long **)(param_1 + 0x5c8),0x18,4);
      if (plVar3 == (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x5c8) + 0xb8))();
      }
      *plVar3 = 0;
      uVar5 = *(undefined8 *)(param_1 + 0x5c8);
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (lVar4 == 0) {
        plVar3[2] = CONCAT44(param_3,param_2);
      }
      else {
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar5;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        plVar3[2] = CONCAT44(param_3,param_2);
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      }
      plVar3[1] = param_1 + 0x5b0;
      lVar4 = *(long *)(param_1 + 0x5b0);
      *plVar3 = lVar4;
      *(long **)(lVar4 + 8) = plVar3;
      *(long **)(param_1 + 0x5b0) = plVar3;
      *(long *)(param_1 + 0x5c0) = *(long *)(param_1 + 0x5c0) + 1;
      return 1;
    }
    if (*(int *)(lVar4 + 0x10) == param_2) break;
    lVar4 = *(long *)(lVar4 + 8);
  }
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + param_3;
  return 1;
}


