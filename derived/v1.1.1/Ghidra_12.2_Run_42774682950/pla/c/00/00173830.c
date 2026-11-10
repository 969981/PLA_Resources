/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00173830; name: FUN_00173830
 */


void FUN_00173830(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    uVar1 = FUN_0016d990(param_1,*(undefined8 *)((long)&PTR_s___index_0411add8 + lVar2));
    *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar2 + 0xe0) = uVar1;
    FUN_0015cc30(param_1,*(undefined8 *)(*(long *)(param_1 + 0x18) + lVar2 + 0xe0));
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0xc0);
  return;
}


