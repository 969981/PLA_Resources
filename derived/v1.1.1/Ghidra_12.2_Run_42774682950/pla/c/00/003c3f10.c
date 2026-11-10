/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c3f10; name: FUN_003c3f10
 */


void FUN_003c3f10(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar2 = PTR_DAT_04373f78;
  puVar1 = (undefined8 *)PTR_DAT_04373f70;
  for (puVar3 = *(undefined8 **)PTR_DAT_04373f78; PTR_DAT_04373f70 = (undefined *)puVar1,
      puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)puVar3[1]) {
    (*(code *)*puVar3)();
    puVar1 = (undefined8 *)PTR_DAT_04373f70;
  }
  *(undefined8 *)puVar2 = 0;
  *puVar1 = 0;
  return;
}


