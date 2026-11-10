/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00782850; name: FUN_00782850
 */


void FUN_00782850(undefined4 *param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_2 + 1) == '\x1c') {
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    uVar3 = *(undefined8 *)(param_2 + 8);
    param_1[6] = *(undefined4 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 4) = uVar4;
    *(undefined8 *)(param_1 + 2) = uVar3;
    *param_1 = 1;
    param_1[1] = 0;
    return;
  }
  uVar1 = nn::socket::InetNtohl(*(uint *)(param_2 + 4));
  uVar2 = nn::socket::InetHtonl(uVar1);
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = uVar2;
  return;
}


