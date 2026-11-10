/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e1bd48; name: FUN_00e1bd48
 */


void FUN_00e1bd48(ulong *param_1,undefined1 *param_2,undefined1 *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  plVar2 = DAT_043f1798;
  uVar6 = (long)param_3 - (long)param_2;
  if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar6 < 0x17) {
    puVar4 = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uVar6 << 1);
  }
  else {
    uVar5 = uVar6 + 0x10 & 0xfffffffffffffff0;
    lVar1 = tpidr_el0;
    plVar3 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar3 = plVar2;
    }
    puVar4 = (undefined1 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5,8);
    param_1[1] = uVar6;
    param_1[2] = (ulong)puVar4;
    *param_1 = uVar5 | 1;
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar4 = *param_2;
    puVar4 = puVar4 + 1;
  }
  *puVar4 = 0;
  return;
}


