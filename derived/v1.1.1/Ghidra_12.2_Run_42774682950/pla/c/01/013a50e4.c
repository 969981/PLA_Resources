/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a50e4; name: FUN_013a50e4
 */


undefined8 FUN_013a50e4(long param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  cVar1 = *(char *)(param_1 + 0xb1);
  if (cVar1 == '\x02') {
    uVar5 = 1;
    *(undefined1 *)(param_1 + 0xb0) = 2;
  }
  else {
    if (cVar1 == '\x01') {
      FUN_013c8038(*(undefined8 *)(param_1 + 0x90));
      uVar6 = 2;
    }
    else {
      if (cVar1 != '\0') {
        return 0;
      }
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
      plVar3 = (long *)(**(code **)*puVar7)(puVar7);
      if (((*PTR_DAT_04379ca8 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar2 != 0)) {
        uVar5 = FUN_009311a8();
        *(undefined8 *)PTR_DAT_04379c98 = uVar5;
        __cxa_guard_release(PTR_DAT_04379ca8);
      }
      if (plVar3 != (long *)PTR_DAT_04379c98) {
        for (plVar3 = (long *)*plVar3; plVar3 != (long *)PTR_DAT_04379c98; plVar3 = (long *)*plVar3)
        {
        }
      }
      local_40 = 0x13788b0d6e1080d2;
      pcStack_38 = "ViewAdvsp";
      local_30 = 9;
      uStack_28 = 0;
      lVar4 = FUN_013a99d0(puVar7[0x8f],&local_40);
      *(long *)(param_1 + 0x90) = lVar4;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      uVar6 = 1;
    }
    uVar5 = 0;
    *(undefined1 *)(param_1 + 0xb1) = uVar6;
  }
  return uVar5;
}


