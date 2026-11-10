/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027ea54; name: FUN_0027ea54
 */


void FUN_0027ea54(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04372f80;
  (**(code **)**(undefined8 **)PTR_DAT_04372f80)();
  (**(code **)(*param_1 + 0x18))(param_1,*(undefined8 *)puVar1);
  *(undefined8 *)puVar1 = 0;
  return;
}


