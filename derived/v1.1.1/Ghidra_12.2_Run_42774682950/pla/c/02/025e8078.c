/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025e8078; name: FUN_025e8078
 */


void FUN_025e8078(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  
  FUN_025e7f84();
  FUN_025e80d8(param_1);
  lVar1 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
  FUN_025e8240((float)((double)*(long *)(lVar1 + 8) / 1000000000.0),param_1);
  return;
}


