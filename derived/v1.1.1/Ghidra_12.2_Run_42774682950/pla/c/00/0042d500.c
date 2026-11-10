/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042d500; name: FUN_0042d500
 */


ulong FUN_0042d500(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  if ((*(code **)(*param_1 + 0x28) == (code *)0x0) ||
     (uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2), (int)uVar1 != 0)) {
    FUN_0042dac0(param_1[3]);
    lVar2 = FUN_0042e120(param_2);
    param_1[3] = lVar2;
    uVar1 = (ulong)(lVar2 != 0);
  }
  return uVar1;
}


