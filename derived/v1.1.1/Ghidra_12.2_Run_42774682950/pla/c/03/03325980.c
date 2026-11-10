/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03325980; name: FUN_03325980
 */


void FUN_03325980(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  *param_1 = &PTR_LAB_04350570;
  FUN_03325a30();
  if (param_1[3] != 0) {
    FUN_032d647c();
  }
  if (*(char *)(param_1 + 6) != '\0') {
    uVar2 = param_1[4];
    lVar1 = tpidr_el0;
    lVar3 = *(long *)(lVar1 + 0x38d490);
    if (lVar3 == 0) {
      lVar3 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar3;
    }
    FUN_032cf810(*(undefined8 *)(*(long *)(lVar3 + 8) + 0x58),uVar2);
  }
  FUN_03325dd8(param_1);
  return;
}


