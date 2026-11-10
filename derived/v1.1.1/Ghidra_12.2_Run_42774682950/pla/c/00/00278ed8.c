/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00278ed8; name: FUN_00278ed8
 */


void FUN_00278ed8(long param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_48;
  
  if ((param_2 != (code *)0x0) && (0 < *(int *)(param_1 + 0xa0))) {
    lVar1 = 0;
    do {
      lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x28) + lVar1 * 8);
      local_48 = *(undefined8 *)(lVar2 + 0x90);
      (*param_2)(&local_48,*(undefined8 *)(lVar2 + 0x88),param_3);
      *(undefined8 *)(lVar2 + 0x90) = 0xffffffffffffffff;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0xa0));
  }
  return;
}


