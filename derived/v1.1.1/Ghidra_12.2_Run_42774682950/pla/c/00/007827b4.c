/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007827b4; name: FUN_007827b4
 */


void FUN_007827b4(undefined8 *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  *param_1 = 0x200;
  param_1[1] = 0;
  uVar1 = nn::socket::InetHtons(0);
  *(undefined2 *)((long)param_1 + 2) = uVar1;
  uVar2 = nn::socket::InetHtonl(0);
  *(undefined4 *)((long)param_1 + 4) = uVar2;
  return;
}


