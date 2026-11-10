/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007827e4; name: FUN_007827e4
 */


void FUN_007827e4(undefined8 *param_1,int param_2,ushort param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    *param_1 = 0x200;
    param_1[1] = 0;
    uVar1 = nn::socket::InetHtons(param_3);
    *(undefined2 *)((long)param_1 + 2) = uVar1;
    uVar2 = nn::socket::InetHtonl(0);
    *(undefined4 *)((long)param_1 + 4) = uVar2;
    return;
  }
  *(undefined1 *)((long)param_1 + 1) = 0x1c;
  uVar1 = nn::socket::InetHtons(param_3);
  *(undefined2 *)((long)param_1 + 2) = uVar1;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 4) = 0;
  return;
}


