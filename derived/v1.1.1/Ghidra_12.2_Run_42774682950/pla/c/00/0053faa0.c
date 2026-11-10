/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053faa0; name: FUN_0053faa0
 */


undefined1  [16] FUN_0053faa0(long *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    uVar1 = 0;
    if (*(byte *)(lVar3 + 0x10) != 0) {
      uVar1 = (long)(1 << (ulong)(*(byte *)(lVar3 + 0x10) & 0x1f));
    }
    if (((ulong)param_1[1] < uVar1) &&
       (puVar2 = *(undefined4 **)(*(long *)(lVar3 + 0x18) + param_1[1] * 0x18),
       puVar2 != (undefined4 *)0x0)) {
      auVar4._0_8_ = puVar2 + 1;
      auVar4._8_4_ = *puVar2;
      auVar4._12_4_ = 0;
      return auVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("!upb_strtable_done(i)","external/upb/upb/table.c",0x17e,"upb_strtable_iter_key");
}


