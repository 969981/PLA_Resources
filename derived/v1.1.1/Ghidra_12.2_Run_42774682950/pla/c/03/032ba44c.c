/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ba44c; name: FUN_032ba44c
 */


undefined8 * FUN_032ba44c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_04348ac0;
  if (*(char *)((long)param_1 + 0x24c) != '\0') {
    nn::os::WaitThread((ThreadType *)(param_1 + 0xf));
    nn::os::DestroyThread((ThreadType *)(param_1 + 0xf));
  }
  lVar2 = param_1[0x47];
  if (lVar2 != 0) {
    lVar1 = tpidr_el0;
    lVar3 = *(long *)(lVar1 + 0x38d490);
    if (lVar3 == 0) {
      lVar3 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar3;
    }
    FUN_032cf810(*(undefined8 *)(*(long *)(lVar3 + 8) + 0x58),lVar2);
  }
  FUN_032c7b9c(param_1 + 0xd);
  FUN_0333ddd4(param_1 + 3);
  return param_1;
}


