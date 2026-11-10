/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053fc50; name: FUN_0053fc50
 */


undefined8 FUN_0053fc50(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    uVar2 = param_1[1];
    uVar1 = 0;
    if (*(byte *)(lVar3 + 0x10) != 0) {
      uVar1 = (long)(1 << (ulong)(*(byte *)(lVar3 + 0x10) & 0x1f));
    }
    if ((uVar2 < uVar1) && (*(long *)(*(long *)(lVar3 + 0x18) + uVar2 * 0x18) != 0)) {
      return *(undefined8 *)(*(long *)(lVar3 + 0x18) + uVar2 * 0x18 + 8);
    }
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("!upb_strtable_done(i)","external/upb/upb/table.c",0x185,"upb_strtable_iter_value");
}


