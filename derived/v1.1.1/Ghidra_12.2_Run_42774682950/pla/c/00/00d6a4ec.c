/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d6a4ec; name: FUN_00d6a4ec
 */


void FUN_00d6a4ec(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  lVar2 = *(long *)(param_1 + 0x2c8);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 500) == '\0')) {
    lVar3 = *(long *)(lVar2 + 0xf8);
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar2 + 0xf0);
      *(undefined1 *)(*(long *)(lVar4 + 0x20) + 0x550) = 1;
      if (lVar3 != 1) {
        lVar3 = lVar3 * 0x28 + -0x28;
        plVar5 = (long *)(lVar4 + 0x48);
        do {
          lVar3 = lVar3 + -0x28;
          *(undefined1 *)(*plVar5 + 0x550) = 1;
          plVar5 = plVar5 + 5;
        } while (lVar3 != 0);
      }
    }
    *(undefined1 *)(lVar2 + 500) = 1;
    if ((*PTR_DAT_0437b228 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_0437b228);
      if (iVar1 != 0) {
        FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437b228);
      }
    }
    lVar2 = *(long *)PTR_DAT_0437b230;
    *(long *)PTR_DAT_0437b238 = lVar2;
    *(undefined1 *)(lVar2 + 0x3f9) = 1;
    lVar2 = *(long *)(param_1 + 0x2c8);
  }
  local_30 = 0x994cd76cf26dfc40;
  pcStack_28 = "anime_wake";
  local_20 = 10;
  uStack_18 = 0;
  if (lVar2 != 0) {
    FUN_0283b1e8(lVar2,&local_30);
  }
  return;
}


