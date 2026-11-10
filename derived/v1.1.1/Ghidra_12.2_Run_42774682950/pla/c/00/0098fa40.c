/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0098fa40; name: FUN_0098fa40
 */


undefined1 * FUN_0098fa40(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  char cVar1;
  undefined1 *puVar2;
  
  if ((param_1 != param_2) &&
     (cVar1 = FUN_00935008(*(undefined8 *)(*(long *)(param_3 + 0x330) + 0xd0),*param_1),
     cVar1 != '\0')) {
    puVar2 = param_1;
    do {
      if (param_2 + -0x18 == puVar2) {
        return param_2;
      }
      param_1 = puVar2 + 0x18;
      cVar1 = FUN_00935008(*(undefined8 *)(*(long *)(param_3 + 0x330) + 0xd0),puVar2[0x18]);
      puVar2 = param_1;
    } while (cVar1 != '\0');
  }
  return param_1;
}


