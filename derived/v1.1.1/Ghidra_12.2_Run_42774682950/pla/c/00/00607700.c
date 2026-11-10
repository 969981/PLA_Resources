/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00607700; name: FUN_00607700
 */


undefined8 FUN_00607700(int param_1,char *param_2,void *param_3)

{
  undefined8 uVar1;
  
  if (param_1 == 2) {
    uVar1 = nn::socket::InetPton(2,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}


